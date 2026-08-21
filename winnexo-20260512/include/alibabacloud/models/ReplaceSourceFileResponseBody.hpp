// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESOURCEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPLACESOURCEFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ReplaceSourceFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceSourceFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_TO_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceSourceFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_FROM_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ReplaceSourceFileResponseBody() = default ;
    ReplaceSourceFileResponseBody(const ReplaceSourceFileResponseBody &) = default ;
    ReplaceSourceFileResponseBody(ReplaceSourceFileResponseBody &&) = default ;
    ReplaceSourceFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceSourceFileResponseBody() = default ;
    ReplaceSourceFileResponseBody& operator=(const ReplaceSourceFileResponseBody &) = default ;
    ReplaceSourceFileResponseBody& operator=(ReplaceSourceFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->filePath_ == nullptr && this->filePublicUrl_ == nullptr && this->fileRecordId_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->requestId_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReplaceSourceFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ReplaceSourceFileResponseBody& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // filePublicUrl Field Functions 
    bool hasFilePublicUrl() const { return this->filePublicUrl_ != nullptr;};
    void deleteFilePublicUrl() { this->filePublicUrl_ = nullptr;};
    inline string getFilePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(filePublicUrl_, "") };
    inline ReplaceSourceFileResponseBody& setFilePublicUrl(string filePublicUrl) { DARABONBA_PTR_SET_VALUE(filePublicUrl_, filePublicUrl) };


    // fileRecordId Field Functions 
    bool hasFileRecordId() const { return this->fileRecordId_ != nullptr;};
    void deleteFileRecordId() { this->fileRecordId_ = nullptr;};
    inline string getFileRecordId() const { DARABONBA_PTR_GET_DEFAULT(fileRecordId_, "") };
    inline ReplaceSourceFileResponseBody& setFileRecordId(string fileRecordId) { DARABONBA_PTR_SET_VALUE(fileRecordId_, fileRecordId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReplaceSourceFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ReplaceSourceFileResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReplaceSourceFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ReplaceSourceFileResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ReplaceSourceFileResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ReplaceSourceFileResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The OSS persistent address of the file after replacement.
    shared_ptr<string> filePath_ {};
    // The OSS persistent address of the file after replacement.
    shared_ptr<string> filePublicUrl_ {};
    // The file record ID after replacement.
    shared_ptr<string> fileRecordId_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The file name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The data source ID.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The data source type. The value is fixed to FILE.
    shared_ptr<string> sourceType_ {};
    // The data source status after re-parsing.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
