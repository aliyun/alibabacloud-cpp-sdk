// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEDETECTUPLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEDETECTUPLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateFileDetectUploadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileDetectUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadUrlList, uploadUrlList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileDetectUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadUrlList, uploadUrlList_);
    };
    CreateFileDetectUploadUrlResponseBody() = default ;
    CreateFileDetectUploadUrlResponseBody(const CreateFileDetectUploadUrlResponseBody &) = default ;
    CreateFileDetectUploadUrlResponseBody(CreateFileDetectUploadUrlResponseBody &&) = default ;
    CreateFileDetectUploadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileDetectUploadUrlResponseBody() = default ;
    CreateFileDetectUploadUrlResponseBody& operator=(const CreateFileDetectUploadUrlResponseBody &) = default ;
    CreateFileDetectUploadUrlResponseBody& operator=(CreateFileDetectUploadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadUrlList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadUrlList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Context, context_);
        DARABONBA_PTR_TO_JSON(Expire, expire_);
        DARABONBA_PTR_TO_JSON(FileExist, fileExist_);
        DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
        DARABONBA_PTR_TO_JSON(InternalUrl, internalUrl_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
      };
      friend void from_json(const Darabonba::Json& j, UploadUrlList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Context, context_);
        DARABONBA_PTR_FROM_JSON(Expire, expire_);
        DARABONBA_PTR_FROM_JSON(FileExist, fileExist_);
        DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
        DARABONBA_PTR_FROM_JSON(InternalUrl, internalUrl_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
      };
      UploadUrlList() = default ;
      UploadUrlList(const UploadUrlList &) = default ;
      UploadUrlList(UploadUrlList &&) = default ;
      UploadUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadUrlList() = default ;
      UploadUrlList& operator=(const UploadUrlList &) = default ;
      UploadUrlList& operator=(UploadUrlList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Context : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Context& obj) { 
          DARABONBA_PTR_TO_JSON(AccessId, accessId_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(Signature, signature_);
        };
        friend void from_json(const Darabonba::Json& j, Context& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(Signature, signature_);
        };
        Context() = default ;
        Context(const Context &) = default ;
        Context(Context &&) = default ;
        Context(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Context() = default ;
        Context& operator=(const Context &) = default ;
        Context& operator=(Context &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessId_ == nullptr
        && this->ossKey_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr; };
        // accessId Field Functions 
        bool hasAccessId() const { return this->accessId_ != nullptr;};
        void deleteAccessId() { this->accessId_ = nullptr;};
        inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
        inline Context& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline Context& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline Context& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline Context& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      protected:
        // The AccessKey ID that is used to access the OSS bucket.
        shared_ptr<string> accessId_ {};
        // The key of the file that is used after the file is uploaded to the OSS bucket.
        shared_ptr<string> ossKey_ {};
        // The policy that poses limits on file upload. For example, the policy can limit the size of the file.
        shared_ptr<string> policy_ {};
        // The signature that is used to upload the file.
        shared_ptr<string> signature_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->context_ == nullptr && this->expire_ == nullptr && this->fileExist_ == nullptr && this->hashKey_ == nullptr && this->internalUrl_ == nullptr
        && this->message_ == nullptr && this->publicUrl_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline UploadUrlList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // context Field Functions 
      bool hasContext() const { return this->context_ != nullptr;};
      void deleteContext() { this->context_ = nullptr;};
      inline const UploadUrlList::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, UploadUrlList::Context) };
      inline UploadUrlList::Context getContext() { DARABONBA_PTR_GET(context_, UploadUrlList::Context) };
      inline UploadUrlList& setContext(const UploadUrlList::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
      inline UploadUrlList& setContext(UploadUrlList::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


      // expire Field Functions 
      bool hasExpire() const { return this->expire_ != nullptr;};
      void deleteExpire() { this->expire_ = nullptr;};
      inline string getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
      inline UploadUrlList& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


      // fileExist Field Functions 
      bool hasFileExist() const { return this->fileExist_ != nullptr;};
      void deleteFileExist() { this->fileExist_ = nullptr;};
      inline bool getFileExist() const { DARABONBA_PTR_GET_DEFAULT(fileExist_, false) };
      inline UploadUrlList& setFileExist(bool fileExist) { DARABONBA_PTR_SET_VALUE(fileExist_, fileExist) };


      // hashKey Field Functions 
      bool hasHashKey() const { return this->hashKey_ != nullptr;};
      void deleteHashKey() { this->hashKey_ = nullptr;};
      inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
      inline UploadUrlList& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


      // internalUrl Field Functions 
      bool hasInternalUrl() const { return this->internalUrl_ != nullptr;};
      void deleteInternalUrl() { this->internalUrl_ = nullptr;};
      inline string getInternalUrl() const { DARABONBA_PTR_GET_DEFAULT(internalUrl_, "") };
      inline UploadUrlList& setInternalUrl(string internalUrl) { DARABONBA_PTR_SET_VALUE(internalUrl_, internalUrl) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline UploadUrlList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // publicUrl Field Functions 
      bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
      void deletePublicUrl() { this->publicUrl_ = nullptr;};
      inline string getPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
      inline UploadUrlList& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


    protected:
      // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
      shared_ptr<string> code_ {};
      // The signature information.
      shared_ptr<UploadUrlList::Context> context_ {};
      // The timestamp when the values of the parameters expire. Unit: milliseconds.
      shared_ptr<string> expire_ {};
      // Indicates whether the file exists in the cloud. Valid values:
      // 
      // *   **true**: The file exists in the cloud. You do not need to upload the file.
      // *   **false**: The file does not exist in the cloud. You must upload the file.
      shared_ptr<bool> fileExist_ {};
      // The identifier of the file.
      shared_ptr<string> hashKey_ {};
      // The internal endpoint of the URL to which the file is uploaded.
      shared_ptr<string> internalUrl_ {};
      // The error message returned.
      shared_ptr<string> message_ {};
      // The public endpoint of the URL to which the file is uploaded.
      shared_ptr<string> publicUrl_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uploadUrlList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFileDetectUploadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadUrlList Field Functions 
    bool hasUploadUrlList() const { return this->uploadUrlList_ != nullptr;};
    void deleteUploadUrlList() { this->uploadUrlList_ = nullptr;};
    inline const vector<CreateFileDetectUploadUrlResponseBody::UploadUrlList> & getUploadUrlList() const { DARABONBA_PTR_GET_CONST(uploadUrlList_, vector<CreateFileDetectUploadUrlResponseBody::UploadUrlList>) };
    inline vector<CreateFileDetectUploadUrlResponseBody::UploadUrlList> getUploadUrlList() { DARABONBA_PTR_GET(uploadUrlList_, vector<CreateFileDetectUploadUrlResponseBody::UploadUrlList>) };
    inline CreateFileDetectUploadUrlResponseBody& setUploadUrlList(const vector<CreateFileDetectUploadUrlResponseBody::UploadUrlList> & uploadUrlList) { DARABONBA_PTR_SET_VALUE(uploadUrlList_, uploadUrlList) };
    inline CreateFileDetectUploadUrlResponseBody& setUploadUrlList(vector<CreateFileDetectUploadUrlResponseBody::UploadUrlList> && uploadUrlList) { DARABONBA_PTR_SET_RVALUE(uploadUrlList_, uploadUrlList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array consisting of the parameters that are required to upload a file.
    shared_ptr<vector<CreateFileDetectUploadUrlResponseBody::UploadUrlList>> uploadUrlList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
