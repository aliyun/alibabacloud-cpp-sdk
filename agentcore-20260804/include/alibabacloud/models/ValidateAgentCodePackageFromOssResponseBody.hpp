// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEAGENTCODEPACKAGEFROMOSSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEAGENTCODEPACKAGEFROMOSSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ValidateAgentCodePackageFromOssResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateAgentCodePackageFromOssResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateAgentCodePackageFromOssResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ValidateAgentCodePackageFromOssResponseBody() = default ;
    ValidateAgentCodePackageFromOssResponseBody(const ValidateAgentCodePackageFromOssResponseBody &) = default ;
    ValidateAgentCodePackageFromOssResponseBody(ValidateAgentCodePackageFromOssResponseBody &&) = default ;
    ValidateAgentCodePackageFromOssResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateAgentCodePackageFromOssResponseBody() = default ;
    ValidateAgentCodePackageFromOssResponseBody& operator=(const ValidateAgentCodePackageFromOssResponseBody &) = default ;
    ValidateAgentCodePackageFromOssResponseBody& operator=(ValidateAgentCodePackageFromOssResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(format, format_);
        DARABONBA_PTR_TO_JSON(sourceUri, sourceUri_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(format, format_);
        DARABONBA_PTR_FROM_JSON(sourceUri, sourceUri_);
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
      virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileSize_ == nullptr && this->format_ == nullptr && this->sourceUri_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Data& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Data& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // sourceUri Field Functions 
      bool hasSourceUri() const { return this->sourceUri_ != nullptr;};
      void deleteSourceUri() { this->sourceUri_ = nullptr;};
      inline string getSourceUri() const { DARABONBA_PTR_GET_DEFAULT(sourceUri_, "") };
      inline Data& setSourceUri(string sourceUri) { DARABONBA_PTR_SET_VALUE(sourceUri_, sourceUri) };


    protected:
      // The original file name of the code package.
      shared_ptr<string> fileName_ {};
      // The compressed size of the code package.
      shared_ptr<int64_t> fileSize_ {};
      // The format of the code package.
      shared_ptr<string> format_ {};
      // The OSS URI of the customer source code package.
      shared_ptr<string> sourceUri_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ValidateAgentCodePackageFromOssResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ValidateAgentCodePackageFromOssResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ValidateAgentCodePackageFromOssResponseBody::Data) };
    inline ValidateAgentCodePackageFromOssResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ValidateAgentCodePackageFromOssResponseBody::Data) };
    inline ValidateAgentCodePackageFromOssResponseBody& setData(const ValidateAgentCodePackageFromOssResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ValidateAgentCodePackageFromOssResponseBody& setData(ValidateAgentCodePackageFromOssResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ValidateAgentCodePackageFromOssResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ValidateAgentCodePackageFromOssResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateAgentCodePackageFromOssResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ValidateAgentCodePackageFromOssResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<ValidateAgentCodePackageFromOssResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
