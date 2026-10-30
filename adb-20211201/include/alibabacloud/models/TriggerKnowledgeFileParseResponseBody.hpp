// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERKNOWLEDGEFILEPARSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERKNOWLEDGEFILEPARSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class TriggerKnowledgeFileParseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerKnowledgeFileParseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerKnowledgeFileParseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TriggerKnowledgeFileParseResponseBody() = default ;
    TriggerKnowledgeFileParseResponseBody(const TriggerKnowledgeFileParseResponseBody &) = default ;
    TriggerKnowledgeFileParseResponseBody(TriggerKnowledgeFileParseResponseBody &&) = default ;
    TriggerKnowledgeFileParseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerKnowledgeFileParseResponseBody() = default ;
    TriggerKnowledgeFileParseResponseBody& operator=(const TriggerKnowledgeFileParseResponseBody &) = default ;
    TriggerKnowledgeFileParseResponseBody& operator=(TriggerKnowledgeFileParseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PreviousStatus, previousStatus_);
        DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PreviousStatus, previousStatus_);
        DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
        && this->message_ == nullptr && this->previousStatus_ == nullptr && this->processStatus_ == nullptr && this->success_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // previousStatus Field Functions 
      bool hasPreviousStatus() const { return this->previousStatus_ != nullptr;};
      void deletePreviousStatus() { this->previousStatus_ = nullptr;};
      inline string getPreviousStatus() const { DARABONBA_PTR_GET_DEFAULT(previousStatus_, "") };
      inline Data& setPreviousStatus(string previousStatus) { DARABONBA_PTR_SET_VALUE(previousStatus_, previousStatus) };


      // processStatus Field Functions 
      bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
      void deleteProcessStatus() { this->processStatus_ = nullptr;};
      inline string getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
      inline Data& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The ID of the file submitted for reparsing, which is a decimal string. This parameter is returned only when the request is successful.
      shared_ptr<string> fileId_ {};
      // The description of the operation result. If the operation fails, this parameter indicates the cause or the security error code.
      shared_ptr<string> message_ {};
      // The status before submission. Valid values: PENDING, COMPLETED, FAILED, SKIPPED, and DUPLICATED. This parameter is returned only when the request is successful.
      shared_ptr<string> previousStatus_ {};
      // The status after submission. The value is fixed to PENDING. This parameter is returned only when the request is successful.
      shared_ptr<string> processStatus_ {};
      // Indicates whether the operation is successful. If the operation fails, the Data parameter contains only the Success and Message parameters.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TriggerKnowledgeFileParseResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TriggerKnowledgeFileParseResponseBody::Data) };
    inline TriggerKnowledgeFileParseResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TriggerKnowledgeFileParseResponseBody::Data) };
    inline TriggerKnowledgeFileParseResponseBody& setData(const TriggerKnowledgeFileParseResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TriggerKnowledgeFileParseResponseBody& setData(TriggerKnowledgeFileParseResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TriggerKnowledgeFileParseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<TriggerKnowledgeFileParseResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
