// Assignment 1: Grid Block Generation

// Let's generate a 10x10 grid of Unity Cubes with unique scripts for each tile.
public class TileScript : MonoBehaviour {
    public int row;
    public int column;
}

// Now, let's cast rays from the mouse and display the unit's position on a UI element.
public class MouseRaycaster : MonoBehaviour {
    public Text positionText;

    void Update() {
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        
        if (Physics.Raycast(ray, out hit)) {
            TileScript tile = hit.collider.GetComponent<TileScript>();
            if (tile != null) {
                positionText.text = "Unit's Position: (" + tile.row + ", " + tile.column + ")";
            }
        }
    }
}
