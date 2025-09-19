// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEDETECTUPLOADURLRESPONSEBODYUPLOADURLLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEDETECTUPLOADURLRESPONSEBODYUPLOADURLLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFileDetectUploadUrlResponseBodyUploadUrlListContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateFileDetectUploadUrlResponseBodyUploadUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileDetectUploadUrlResponseBodyUploadUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(FileExist, fileExist_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(InternalUrl, internalUrl_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileDetectUploadUrlResponseBodyUploadUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(FileExist, fileExist_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(InternalUrl, internalUrl_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
    };
    CreateFileDetectUploadUrlResponseBodyUploadUrlList() = default ;
    CreateFileDetectUploadUrlResponseBodyUploadUrlList(const CreateFileDetectUploadUrlResponseBodyUploadUrlList &) = default ;
    CreateFileDetectUploadUrlResponseBodyUploadUrlList(CreateFileDetectUploadUrlResponseBodyUploadUrlList &&) = default ;
    CreateFileDetectUploadUrlResponseBodyUploadUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileDetectUploadUrlResponseBodyUploadUrlList() = default ;
    CreateFileDetectUploadUrlResponseBodyUploadUrlList& operator=(const CreateFileDetectUploadUrlResponseBodyUploadUrlList &) = default ;
    CreateFileDetectUploadUrlResponseBodyUploadUrlList& operator=(CreateFileDetectUploadUrlResponseBodyUploadUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->context_ != nullptr && this->expire_ != nullptr && this->fileExist_ != nullptr && this->hashKey_ != nullptr && this->internalUrl_ != nullptr
        && this->message_ != nullptr && this->publicUrl_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Models::CreateFileDetectUploadUrlResponseBodyUploadUrlListContext & context() const { DARABONBA_PTR_GET_CONST(context_, Models::CreateFileDetectUploadUrlResponseBodyUploadUrlListContext) };
    inline Models::CreateFileDetectUploadUrlResponseBodyUploadUrlListContext context() { DARABONBA_PTR_GET(context_, Models::CreateFileDetectUploadUrlResponseBodyUploadUrlListContext) };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setContext(const Models::CreateFileDetectUploadUrlResponseBodyUploadUrlListContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setContext(Models::CreateFileDetectUploadUrlResponseBodyUploadUrlListContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline string expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // fileExist Field Functions 
    bool hasFileExist() const { return this->fileExist_ != nullptr;};
    void deleteFileExist() { this->fileExist_ = nullptr;};
    inline bool fileExist() const { DARABONBA_PTR_GET_DEFAULT(fileExist_, false) };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setFileExist(bool fileExist) { DARABONBA_PTR_SET_VALUE(fileExist_, fileExist) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string hashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // internalUrl Field Functions 
    bool hasInternalUrl() const { return this->internalUrl_ != nullptr;};
    void deleteInternalUrl() { this->internalUrl_ = nullptr;};
    inline string internalUrl() const { DARABONBA_PTR_GET_DEFAULT(internalUrl_, "") };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setInternalUrl(string internalUrl) { DARABONBA_PTR_SET_VALUE(internalUrl_, internalUrl) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // publicUrl Field Functions 
    bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
    void deletePublicUrl() { this->publicUrl_ = nullptr;};
    inline string publicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
    inline CreateFileDetectUploadUrlResponseBodyUploadUrlList& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // The signature information.
    std::shared_ptr<Models::CreateFileDetectUploadUrlResponseBodyUploadUrlListContext> context_ = nullptr;
    // The timestamp when the values of the parameters expire. Unit: milliseconds.
    std::shared_ptr<string> expire_ = nullptr;
    // Indicates whether the file exists in the cloud. Valid values:
    // 
    // *   **true**: The file exists in the cloud. You do not need to upload the file.
    // *   **false**: The file does not exist in the cloud. You must upload the file.
    std::shared_ptr<bool> fileExist_ = nullptr;
    // The identifier of the file.
    std::shared_ptr<string> hashKey_ = nullptr;
    // The internal endpoint of the URL to which the file is uploaded.
    std::shared_ptr<string> internalUrl_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The public endpoint of the URL to which the file is uploaded.
    std::shared_ptr<string> publicUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
