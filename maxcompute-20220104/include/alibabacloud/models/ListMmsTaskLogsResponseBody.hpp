// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTASKLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTASKLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTaskLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTaskLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTaskLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMmsTaskLogsResponseBody() = default ;
    ListMmsTaskLogsResponseBody(const ListMmsTaskLogsResponseBody &) = default ;
    ListMmsTaskLogsResponseBody(ListMmsTaskLogsResponseBody &&) = default ;
    ListMmsTaskLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTaskLogsResponseBody() = default ;
    ListMmsTaskLogsResponseBody& operator=(const ListMmsTaskLogsResponseBody &) = default ;
    ListMmsTaskLogsResponseBody& operator=(ListMmsTaskLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(action, action_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(msg, msg_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(action, action_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(msg, msg_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      virtual bool empty() const override { return this->action_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->msg_ == nullptr && this->sourceId_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Data& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Data& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
      inline Data& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The operation performed by the migration task.
      shared_ptr<string> action_ {};
      // The time when the log was created.
      shared_ptr<string> createTime_ {};
      // The log ID.
      shared_ptr<int64_t> id_ {};
      // The result of the migration task operation.
      shared_ptr<string> msg_ {};
      // The data source ID.
      shared_ptr<int64_t> sourceId_ {};
      // The migration task status.
      shared_ptr<string> status_ {};
      // The migration task ID.
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMmsTaskLogsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMmsTaskLogsResponseBody::Data>) };
    inline vector<ListMmsTaskLogsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMmsTaskLogsResponseBody::Data>) };
    inline ListMmsTaskLogsResponseBody& setData(const vector<ListMmsTaskLogsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMmsTaskLogsResponseBody& setData(vector<ListMmsTaskLogsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmsTaskLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of logs.
    shared_ptr<vector<ListMmsTaskLogsResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
