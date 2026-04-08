// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREFDISYNCTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREFDISYNCTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListRefDISyncTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRefDISyncTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRefDISyncTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRefDISyncTasksResponseBody() = default ;
    ListRefDISyncTasksResponseBody(const ListRefDISyncTasksResponseBody &) = default ;
    ListRefDISyncTasksResponseBody(ListRefDISyncTasksResponseBody &&) = default ;
    ListRefDISyncTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRefDISyncTasksResponseBody() = default ;
    ListRefDISyncTasksResponseBody& operator=(const ListRefDISyncTasksResponseBody &) = default ;
    ListRefDISyncTasksResponseBody& operator=(ListRefDISyncTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DISyncTasks, DISyncTasks_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DISyncTasks, DISyncTasks_);
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
      class DISyncTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DISyncTasks& obj) { 
          DARABONBA_PTR_TO_JSON(DiDestinationDatasource, diDestinationDatasource_);
          DARABONBA_PTR_TO_JSON(DiSourceDatasource, diSourceDatasource_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, DISyncTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(DiDestinationDatasource, diDestinationDatasource_);
          DARABONBA_PTR_FROM_JSON(DiSourceDatasource, diSourceDatasource_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        };
        DISyncTasks() = default ;
        DISyncTasks(const DISyncTasks &) = default ;
        DISyncTasks(DISyncTasks &&) = default ;
        DISyncTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DISyncTasks() = default ;
        DISyncTasks& operator=(const DISyncTasks &) = default ;
        DISyncTasks& operator=(DISyncTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diDestinationDatasource_ == nullptr
        && this->diSourceDatasource_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->taskType_ == nullptr; };
        // diDestinationDatasource Field Functions 
        bool hasDiDestinationDatasource() const { return this->diDestinationDatasource_ != nullptr;};
        void deleteDiDestinationDatasource() { this->diDestinationDatasource_ = nullptr;};
        inline string getDiDestinationDatasource() const { DARABONBA_PTR_GET_DEFAULT(diDestinationDatasource_, "") };
        inline DISyncTasks& setDiDestinationDatasource(string diDestinationDatasource) { DARABONBA_PTR_SET_VALUE(diDestinationDatasource_, diDestinationDatasource) };


        // diSourceDatasource Field Functions 
        bool hasDiSourceDatasource() const { return this->diSourceDatasource_ != nullptr;};
        void deleteDiSourceDatasource() { this->diSourceDatasource_ = nullptr;};
        inline string getDiSourceDatasource() const { DARABONBA_PTR_GET_DEFAULT(diSourceDatasource_, "") };
        inline DISyncTasks& setDiSourceDatasource(string diSourceDatasource) { DARABONBA_PTR_SET_VALUE(diSourceDatasource_, diSourceDatasource) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline DISyncTasks& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline DISyncTasks& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline DISyncTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // The destination of the synchronization task. If the synchronization task has multiple destinations, the return value is a JSON array, such as \\\\"odps_writer\\\\", \\\\"mysql\\\\". If the RefType parameter is set to to, the synchronization tasks that use the specified data source as the destination are returned. In this case, the value of this parameter indicates the specified data source.
        shared_ptr<string> diDestinationDatasource_ {};
        // The source of the synchronization task. If the synchronization task has multiple sources, the return value is a JSON array, such as \\\\"odps_writer\\\\", \\\\"mysql\\\\". If the RefType parameter is set to from, the synchronization tasks that use the specified data source as the source are returned. In this case, the value of this parameter indicates the specified data source.
        shared_ptr<string> diSourceDatasource_ {};
        // The ID of the synchronization task.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the synchronization task.
        shared_ptr<string> nodeName_ {};
        // The type of the synchronization task. Valid values:
        // 
        // *   DI_OFFLINE: batch synchronization task
        // *   DI_REALTIME: real-time synchronization task
        shared_ptr<string> taskType_ {};
      };

      virtual bool empty() const override { return this->DISyncTasks_ == nullptr; };
      // DISyncTasks Field Functions 
      bool hasDISyncTasks() const { return this->DISyncTasks_ != nullptr;};
      void deleteDISyncTasks() { this->DISyncTasks_ = nullptr;};
      inline const vector<Data::DISyncTasks> & getDISyncTasks() const { DARABONBA_PTR_GET_CONST(DISyncTasks_, vector<Data::DISyncTasks>) };
      inline vector<Data::DISyncTasks> getDISyncTasks() { DARABONBA_PTR_GET(DISyncTasks_, vector<Data::DISyncTasks>) };
      inline Data& setDISyncTasks(const vector<Data::DISyncTasks> & dISyncTasks) { DARABONBA_PTR_SET_VALUE(DISyncTasks_, dISyncTasks) };
      inline Data& setDISyncTasks(vector<Data::DISyncTasks> && dISyncTasks) { DARABONBA_PTR_SET_RVALUE(DISyncTasks_, dISyncTasks) };


    protected:
      // The details of the synchronization tasks. In most cases, a data source is used by multiple synchronization tasks. Therefore, the value of this parameter is an array. The following parameters are the elements in the array. The sample values of these parameters show the details of a synchronization task.
      shared_ptr<vector<Data::DISyncTasks>> DISyncTasks_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRefDISyncTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRefDISyncTasksResponseBody::Data) };
    inline ListRefDISyncTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRefDISyncTasksResponseBody::Data) };
    inline ListRefDISyncTasksResponseBody& setData(const ListRefDISyncTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRefDISyncTasksResponseBody& setData(ListRefDISyncTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRefDISyncTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRefDISyncTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned result.
    shared_ptr<ListRefDISyncTasksResponseBody::Data> data_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
