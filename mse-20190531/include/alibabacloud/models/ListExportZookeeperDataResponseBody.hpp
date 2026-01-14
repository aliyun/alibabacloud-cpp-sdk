// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPORTZOOKEEPERDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPORTZOOKEEPERDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListExportZookeeperDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExportZookeeperDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListExportZookeeperDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListExportZookeeperDataResponseBody() = default ;
    ListExportZookeeperDataResponseBody(const ListExportZookeeperDataResponseBody &) = default ;
    ListExportZookeeperDataResponseBody(ListExportZookeeperDataResponseBody &&) = default ;
    ListExportZookeeperDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExportZookeeperDataResponseBody() = default ;
    ListExportZookeeperDataResponseBody& operator=(const ListExportZookeeperDataResponseBody &) = default ;
    ListExportZookeeperDataResponseBody& operator=(ListExportZookeeperDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContentMap, contentMap_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExportType, exportType_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(KubeoneTaskIds, kubeoneTaskIds_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentMap, contentMap_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(KubeoneTaskIds, kubeoneTaskIds_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      virtual bool empty() const override { return this->contentMap_ == nullptr
        && this->createTime_ == nullptr && this->exportType_ == nullptr && this->extend_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->kubeoneTaskIds_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // contentMap Field Functions 
      bool hasContentMap() const { return this->contentMap_ != nullptr;};
      void deleteContentMap() { this->contentMap_ = nullptr;};
      inline string getContentMap() const { DARABONBA_PTR_GET_DEFAULT(contentMap_, "") };
      inline Data& setContentMap(string contentMap) { DARABONBA_PTR_SET_VALUE(contentMap_, contentMap) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // exportType Field Functions 
      bool hasExportType() const { return this->exportType_ != nullptr;};
      void deleteExportType() { this->exportType_ = nullptr;};
      inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
      inline Data& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline Data& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Data& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // kubeoneTaskIds Field Functions 
      bool hasKubeoneTaskIds() const { return this->kubeoneTaskIds_ != nullptr;};
      void deleteKubeoneTaskIds() { this->kubeoneTaskIds_ = nullptr;};
      inline string getKubeoneTaskIds() const { DARABONBA_PTR_GET_DEFAULT(kubeoneTaskIds_, "") };
      inline Data& setKubeoneTaskIds(string kubeoneTaskIds) { DARABONBA_PTR_SET_VALUE(kubeoneTaskIds_, kubeoneTaskIds) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The details of the task.
      shared_ptr<string> contentMap_ {};
      // The time when the task was created.
      shared_ptr<int64_t> createTime_ {};
      // The type of the object that is exported. Valid values:
      // 
      // *   transactionLog: transaction logs
      // *   snapshot: snapshots
      shared_ptr<string> exportType_ {};
      // The extension information that is in the JSON format. The extension information facilitates addition of parameters.
      shared_ptr<string> extend_ {};
      // The ID of the task.
      shared_ptr<int32_t> id_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The ID of the associated task at the underlying layer. This parameter is used only to troubleshoot failures.
      shared_ptr<string> kubeoneTaskIds_ {};
      // The status of the task. Valid values:
      // 
      // *   CREATE: The task is being created.
      // *   RUNNING: The task is being executed.
      // *   FINISH: The task is completed.
      // *   FAILED: The task failed.
      // *   EXPIRE: The task has expired.
      shared_ptr<string> status_ {};
      // The time when the task was updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListExportZookeeperDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListExportZookeeperDataResponseBody::Data>) };
    inline vector<ListExportZookeeperDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListExportZookeeperDataResponseBody::Data>) };
    inline ListExportZookeeperDataResponseBody& setData(const vector<ListExportZookeeperDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListExportZookeeperDataResponseBody& setData(vector<ListExportZookeeperDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListExportZookeeperDataResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListExportZookeeperDataResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListExportZookeeperDataResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListExportZookeeperDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExportZookeeperDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListExportZookeeperDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<vector<ListExportZookeeperDataResponseBody::Data>> data_ {};
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // > If the return value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the return value of the **DynamicMessage** parameter is **DtsJobId**, the specified **DtsJobId** parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
