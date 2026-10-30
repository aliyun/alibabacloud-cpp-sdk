// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORKKNOWLEDGEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FORKKNOWLEDGEFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ForkKnowledgeFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForkKnowledgeFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ForkKnowledgeFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ForkKnowledgeFileResponseBody() = default ;
    ForkKnowledgeFileResponseBody(const ForkKnowledgeFileResponseBody &) = default ;
    ForkKnowledgeFileResponseBody(ForkKnowledgeFileResponseBody &&) = default ;
    ForkKnowledgeFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForkKnowledgeFileResponseBody() = default ;
    ForkKnowledgeFileResponseBody& operator=(const ForkKnowledgeFileResponseBody &) = default ;
    ForkKnowledgeFileResponseBody& operator=(ForkKnowledgeFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(OwnerFileId, ownerFileId_);
        DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
        DARABONBA_PTR_TO_JSON(SourceFileId, sourceFileId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(OwnerFileId, ownerFileId_);
        DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
        DARABONBA_PTR_FROM_JSON(SourceFileId, sourceFileId_);
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
        && this->fileLocation_ == nullptr && this->message_ == nullptr && this->ownerFileId_ == nullptr && this->processStatus_ == nullptr && this->sourceFileId_ == nullptr
        && this->success_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileLocation Field Functions 
      bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
      void deleteFileLocation() { this->fileLocation_ = nullptr;};
      inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
      inline Data& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // ownerFileId Field Functions 
      bool hasOwnerFileId() const { return this->ownerFileId_ != nullptr;};
      void deleteOwnerFileId() { this->ownerFileId_ = nullptr;};
      inline string getOwnerFileId() const { DARABONBA_PTR_GET_DEFAULT(ownerFileId_, "") };
      inline Data& setOwnerFileId(string ownerFileId) { DARABONBA_PTR_SET_VALUE(ownerFileId_, ownerFileId) };


      // processStatus Field Functions 
      bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
      void deleteProcessStatus() { this->processStatus_ = nullptr;};
      inline string getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
      inline Data& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


      // sourceFileId Field Functions 
      bool hasSourceFileId() const { return this->sourceFileId_ != nullptr;};
      void deleteSourceFileId() { this->sourceFileId_ = nullptr;};
      inline string getSourceFileId() const { DARABONBA_PTR_GET_DEFAULT(sourceFileId_, "") };
      inline Data& setSourceFileId(string sourceFileId) { DARABONBA_PTR_SET_VALUE(sourceFileId_, sourceFileId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The ID of the newly created reference record, represented as a decimal string. Use this ID for subsequent management of the record. This parameter is returned only when the operation is successful.
      shared_ptr<string> fileId_ {};
      // The address of the new reference record, in the format of fork://<source file ID>/<new file ID>. This parameter is returned only when the operation is successful.
      shared_ptr<string> fileLocation_ {};
      // The description of the operation result. If the business operation fails, this parameter indicates the cause or the security error code.
      shared_ptr<string> message_ {};
      // The ID of the content host file, represented as a decimal string. Currently, this value is the same as the source file ID. This parameter is returned only when the operation is successful.
      shared_ptr<string> ownerFileId_ {};
      // The status of the new reference record. The value is fixed to DUPLICATED. This parameter is returned only when the operation is successful.
      shared_ptr<string> processStatus_ {};
      // The ID of the source file, represented as a decimal string. This parameter is returned only when the operation is successful.
      shared_ptr<string> sourceFileId_ {};
      // Indicates whether the business operation is successful. If the operation fails, the Data parameter contains only Success and Message.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ForkKnowledgeFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ForkKnowledgeFileResponseBody::Data) };
    inline ForkKnowledgeFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ForkKnowledgeFileResponseBody::Data) };
    inline ForkKnowledgeFileResponseBody& setData(const ForkKnowledgeFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ForkKnowledgeFileResponseBody& setData(ForkKnowledgeFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ForkKnowledgeFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ForkKnowledgeFileResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
