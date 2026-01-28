// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDAGPREVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDAGPREVIEWRESPONSEBODY_HPP_
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
  class GetWorkflowDAGPreviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowDAGPreviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowDAGPreviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWorkflowDAGPreviewResponseBody() = default ;
    GetWorkflowDAGPreviewResponseBody(const GetWorkflowDAGPreviewResponseBody &) = default ;
    GetWorkflowDAGPreviewResponseBody(GetWorkflowDAGPreviewResponseBody &&) = default ;
    GetWorkflowDAGPreviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowDAGPreviewResponseBody() = default ;
    GetWorkflowDAGPreviewResponseBody& operator=(const GetWorkflowDAGPreviewResponseBody &) = default ;
    GetWorkflowDAGPreviewResponseBody& operator=(GetWorkflowDAGPreviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Edges, edges_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Edges, edges_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Coordinate, coordinate_);
          DARABONBA_PTR_TO_JSON(DependentStrategy, dependentStrategy_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JobType, jobType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Coordinate, coordinate_);
          DARABONBA_PTR_FROM_JSON(DependentStrategy, dependentStrategy_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JobType, jobType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->coordinate_ == nullptr && this->dependentStrategy_ == nullptr && this->id_ == nullptr && this->jobType_ == nullptr && this->name_ == nullptr
        && this->status_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Nodes& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // coordinate Field Functions 
        bool hasCoordinate() const { return this->coordinate_ != nullptr;};
        void deleteCoordinate() { this->coordinate_ = nullptr;};
        inline const Nodes::Coordinate & getCoordinate() const { DARABONBA_PTR_GET_CONST(coordinate_, Nodes::Coordinate) };
        inline Nodes::Coordinate getCoordinate() { DARABONBA_PTR_GET(coordinate_, Nodes::Coordinate) };
        inline Nodes& setCoordinate(const Nodes::Coordinate & coordinate) { DARABONBA_PTR_SET_VALUE(coordinate_, coordinate) };
        inline Nodes& setCoordinate(Nodes::Coordinate && coordinate) { DARABONBA_PTR_SET_RVALUE(coordinate_, coordinate) };


        // dependentStrategy Field Functions 
        bool hasDependentStrategy() const { return this->dependentStrategy_ != nullptr;};
        void deleteDependentStrategy() { this->dependentStrategy_ = nullptr;};
        inline int32_t getDependentStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependentStrategy_, 0) };
        inline Nodes& setDependentStrategy(int32_t dependentStrategy) { DARABONBA_PTR_SET_VALUE(dependentStrategy_, dependentStrategy) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Nodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline Nodes& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Nodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Nodes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<Nodes::Coordinate> coordinate_ {};
        shared_ptr<int32_t> dependentStrategy_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> jobType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> status_ {};
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
      inline const vector<Data::Edges> & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Data::Edges>) };
      inline vector<Data::Edges> getEdges() { DARABONBA_PTR_GET(edges_, vector<Data::Edges>) };
      inline Data& setEdges(const vector<Data::Edges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
      inline Data& setEdges(vector<Data::Edges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      shared_ptr<vector<Data::Edges>> edges_ {};
      shared_ptr<vector<Data::Nodes>> nodes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetWorkflowDAGPreviewResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkflowDAGPreviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkflowDAGPreviewResponseBody::Data) };
    inline GetWorkflowDAGPreviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkflowDAGPreviewResponseBody::Data) };
    inline GetWorkflowDAGPreviewResponseBody& setData(const GetWorkflowDAGPreviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkflowDAGPreviewResponseBody& setData(GetWorkflowDAGPreviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkflowDAGPreviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowDAGPreviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkflowDAGPreviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetWorkflowDAGPreviewResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
