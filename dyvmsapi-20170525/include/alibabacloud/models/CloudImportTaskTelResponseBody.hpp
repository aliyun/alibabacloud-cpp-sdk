// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDIMPORTTASKTELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDIMPORTTASKTELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudImportTaskTelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudImportTaskTelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudImportTaskTelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudImportTaskTelResponseBody() = default ;
    CloudImportTaskTelResponseBody(const CloudImportTaskTelResponseBody &) = default ;
    CloudImportTaskTelResponseBody(CloudImportTaskTelResponseBody &&) = default ;
    CloudImportTaskTelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudImportTaskTelResponseBody() = default ;
    CloudImportTaskTelResponseBody& operator=(const CloudImportTaskTelResponseBody &) = default ;
    CloudImportTaskTelResponseBody& operator=(CloudImportTaskTelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(ImportTotal, importTotal_);
        DARABONBA_PTR_TO_JSON(InvalidTotal, invalidTotal_);
        DARABONBA_PTR_TO_JSON(SuccessTotal, successTotal_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(ImportTotal, importTotal_);
        DARABONBA_PTR_FROM_JSON(InvalidTotal, invalidTotal_);
        DARABONBA_PTR_FROM_JSON(SuccessTotal, successTotal_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->importTotal_ == nullptr && this->invalidTotal_ == nullptr && this->successTotal_ == nullptr && this->taskId_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // importTotal Field Functions 
      bool hasImportTotal() const { return this->importTotal_ != nullptr;};
      void deleteImportTotal() { this->importTotal_ = nullptr;};
      inline string getImportTotal() const { DARABONBA_PTR_GET_DEFAULT(importTotal_, "") };
      inline Data& setImportTotal(string importTotal) { DARABONBA_PTR_SET_VALUE(importTotal_, importTotal) };


      // invalidTotal Field Functions 
      bool hasInvalidTotal() const { return this->invalidTotal_ != nullptr;};
      void deleteInvalidTotal() { this->invalidTotal_ = nullptr;};
      inline string getInvalidTotal() const { DARABONBA_PTR_GET_DEFAULT(invalidTotal_, "") };
      inline Data& setInvalidTotal(string invalidTotal) { DARABONBA_PTR_SET_VALUE(invalidTotal_, invalidTotal) };


      // successTotal Field Functions 
      bool hasSuccessTotal() const { return this->successTotal_ != nullptr;};
      void deleteSuccessTotal() { this->successTotal_ = nullptr;};
      inline string getSuccessTotal() const { DARABONBA_PTR_GET_DEFAULT(successTotal_, "") };
      inline Data& setSuccessTotal(string successTotal) { DARABONBA_PTR_SET_VALUE(successTotal_, successTotal) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // 批次Id
      shared_ptr<string> fileId_ {};
      // 请求号码总数
      shared_ptr<string> importTotal_ {};
      // 非法号码数
      shared_ptr<string> invalidTotal_ {};
      // 成功导入号码数
      shared_ptr<string> successTotal_ {};
      // 任务Id
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudImportTaskTelResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudImportTaskTelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudImportTaskTelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudImportTaskTelResponseBody::Data) };
    inline CloudImportTaskTelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudImportTaskTelResponseBody::Data) };
    inline CloudImportTaskTelResponseBody& setData(const CloudImportTaskTelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudImportTaskTelResponseBody& setData(CloudImportTaskTelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudImportTaskTelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudImportTaskTelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudImportTaskTelResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
