// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateWorkflowDAGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowDAGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Dag, dag_);
      DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowDAGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Dag, dag_);
      DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    UpdateWorkflowDAGRequest() = default ;
    UpdateWorkflowDAGRequest(const UpdateWorkflowDAGRequest &) = default ;
    UpdateWorkflowDAGRequest(UpdateWorkflowDAGRequest &&) = default ;
    UpdateWorkflowDAGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowDAGRequest() = default ;
    UpdateWorkflowDAGRequest& operator=(const UpdateWorkflowDAGRequest &) = default ;
    UpdateWorkflowDAGRequest& operator=(UpdateWorkflowDAGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Dag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dag& obj) { 
        DARABONBA_PTR_TO_JSON(Edges, edges_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, Dag& obj) { 
        DARABONBA_PTR_FROM_JSON(Edges, edges_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      };
      Dag() = default ;
      Dag(const Dag &) = default ;
      Dag(Dag &&) = default ;
      Dag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dag() = default ;
      Dag& operator=(const Dag &) = default ;
      Dag& operator=(Dag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Coordinate, coordinate_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Coordinate, coordinate_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Coordinate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Coordinate& obj) { 
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(Width, width_);
            DARABONBA_PTR_TO_JSON(X, x_);
            DARABONBA_PTR_TO_JSON(Y, y_);
          };
          friend void from_json(const Darabonba::Json& j, Coordinate& obj) { 
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
            DARABONBA_PTR_FROM_JSON(X, x_);
            DARABONBA_PTR_FROM_JSON(Y, y_);
          };
          Coordinate() = default ;
          Coordinate(const Coordinate &) = default ;
          Coordinate(Coordinate &&) = default ;
          Coordinate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Coordinate() = default ;
          Coordinate& operator=(const Coordinate &) = default ;
          Coordinate& operator=(Coordinate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->height_ == nullptr
        && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
          inline Coordinate& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
          inline Coordinate& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          // x Field Functions 
          bool hasX() const { return this->x_ != nullptr;};
          void deleteX() { this->x_ = nullptr;};
          inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
          inline Coordinate& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


          // y Field Functions 
          bool hasY() const { return this->y_ != nullptr;};
          void deleteY() { this->y_ = nullptr;};
          inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
          inline Coordinate& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        protected:
          shared_ptr<float> height_ {};
          shared_ptr<float> width_ {};
          shared_ptr<float> x_ {};
          shared_ptr<float> y_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->coordinate_ == nullptr && this->id_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Nodes& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // coordinate Field Functions 
        bool hasCoordinate() const { return this->coordinate_ != nullptr;};
        void deleteCoordinate() { this->coordinate_ = nullptr;};
        inline const Nodes::Coordinate & getCoordinate() const { DARABONBA_PTR_GET_CONST(coordinate_, Nodes::Coordinate) };
        inline Nodes::Coordinate getCoordinate() { DARABONBA_PTR_GET(coordinate_, Nodes::Coordinate) };
        inline Nodes& setCoordinate(const Nodes::Coordinate & coordinate) { DARABONBA_PTR_SET_VALUE(coordinate_, coordinate) };
        inline Nodes& setCoordinate(Nodes::Coordinate && coordinate) { DARABONBA_PTR_SET_RVALUE(coordinate_, coordinate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Nodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<Nodes::Coordinate> coordinate_ {};
        shared_ptr<int64_t> id_ {};
      };

      class Edges : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Edges& obj) { 
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Target, target_);
        };
        friend void from_json(const Darabonba::Json& j, Edges& obj) { 
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
        };
        Edges() = default ;
        Edges(const Edges &) = default ;
        Edges(Edges &&) = default ;
        Edges(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Edges() = default ;
        Edges& operator=(const Edges &) = default ;
        Edges& operator=(Edges &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->source_ == nullptr
        && this->target_ == nullptr; };
        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline int64_t getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, 0L) };
        inline Edges& setSource(int64_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline int64_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
        inline Edges& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      protected:
        shared_ptr<int64_t> source_ {};
        shared_ptr<int64_t> target_ {};
      };

      virtual bool empty() const override { return this->edges_ == nullptr
        && this->nodes_ == nullptr; };
      // edges Field Functions 
      bool hasEdges() const { return this->edges_ != nullptr;};
      void deleteEdges() { this->edges_ = nullptr;};
      inline const vector<Dag::Edges> & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Dag::Edges>) };
      inline vector<Dag::Edges> getEdges() { DARABONBA_PTR_GET(edges_, vector<Dag::Edges>) };
      inline Dag& setEdges(const vector<Dag::Edges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
      inline Dag& setEdges(vector<Dag::Edges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Dag::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Dag::Nodes>) };
      inline vector<Dag::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Dag::Nodes>) };
      inline Dag& setNodes(const vector<Dag::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Dag& setNodes(vector<Dag::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      shared_ptr<vector<Dag::Edges>> edges_ {};
      shared_ptr<vector<Dag::Nodes>> nodes_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->dag_ == nullptr && this->dagVersion_ == nullptr && this->workflowId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateWorkflowDAGRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateWorkflowDAGRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dag Field Functions 
    bool hasDag() const { return this->dag_ != nullptr;};
    void deleteDag() { this->dag_ = nullptr;};
    inline const UpdateWorkflowDAGRequest::Dag & getDag() const { DARABONBA_PTR_GET_CONST(dag_, UpdateWorkflowDAGRequest::Dag) };
    inline UpdateWorkflowDAGRequest::Dag getDag() { DARABONBA_PTR_GET(dag_, UpdateWorkflowDAGRequest::Dag) };
    inline UpdateWorkflowDAGRequest& setDag(const UpdateWorkflowDAGRequest::Dag & dag) { DARABONBA_PTR_SET_VALUE(dag_, dag) };
    inline UpdateWorkflowDAGRequest& setDag(UpdateWorkflowDAGRequest::Dag && dag) { DARABONBA_PTR_SET_RVALUE(dag_, dag) };


    // dagVersion Field Functions 
    bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
    void deleteDagVersion() { this->dagVersion_ = nullptr;};
    inline string getDagVersion() const { DARABONBA_PTR_GET_DEFAULT(dagVersion_, "") };
    inline UpdateWorkflowDAGRequest& setDagVersion(string dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline UpdateWorkflowDAGRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<UpdateWorkflowDAGRequest::Dag> dag_ {};
    shared_ptr<string> dagVersion_ {};
    // This parameter is required.
    shared_ptr<int64_t> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
