// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetUploadInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUploadInfoResponseBody() = default ;
    GetUploadInfoResponseBody(const GetUploadInfoResponseBody &) = default ;
    GetUploadInfoResponseBody(GetUploadInfoResponseBody &&) = default ;
    GetUploadInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadInfoResponseBody() = default ;
    GetUploadInfoResponseBody& operator=(const GetUploadInfoResponseBody &) = default ;
    GetUploadInfoResponseBody& operator=(GetUploadInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && this->code_ == nullptr && this->expire_ == nullptr && this->folder_ == nullptr && this->host_ == nullptr && this->httpStatusCode_ == nullptr
        && this->key_ == nullptr && this->msg_ == nullptr && this->name_ == nullptr && this->policy_ == nullptr && this->requestId_ == nullptr
        && this->signature_ == nullptr && this->success_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GetUploadInfoResponseBody& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetUploadInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline GetUploadInfoResponseBody& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline string getFolder() const { DARABONBA_PTR_GET_DEFAULT(folder_, "") };
    inline GetUploadInfoResponseBody& setFolder(string folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetUploadInfoResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUploadInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetUploadInfoResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetUploadInfoResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUploadInfoResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetUploadInfoResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetUploadInfoResponseBody& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUploadInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Upload authorization ID.
    shared_ptr<string> accessId_ {};
    // Error code, consistent with HTTP status.
    shared_ptr<int32_t> code_ {};
    // In seconds.
    shared_ptr<int64_t> expire_ {};
    // Folder name.
    shared_ptr<string> folder_ {};
    // Upload host.
    shared_ptr<string> host_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Key used for uploading files.
    shared_ptr<string> key_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // Used for front-end image upload.
    shared_ptr<string> name_ {};
    // OSS upload file Policy.
    shared_ptr<string> policy_ {};
    // ID assigned by the backend to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Upload signature information.
    shared_ptr<string> signature_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
