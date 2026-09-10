// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETAOSSTEMPKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETAOSSTEMPKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetMetaOssTempKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaOssTempKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaOssTempKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMetaOssTempKeyResponseBody() = default ;
    GetMetaOssTempKeyResponseBody(const GetMetaOssTempKeyResponseBody &) = default ;
    GetMetaOssTempKeyResponseBody(GetMetaOssTempKeyResponseBody &&) = default ;
    GetMetaOssTempKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaOssTempKeyResponseBody() = default ;
    GetMetaOssTempKeyResponseBody& operator=(const GetMetaOssTempKeyResponseBody &) = default ;
    GetMetaOssTempKeyResponseBody& operator=(GetMetaOssTempKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ak, ak_);
        DARABONBA_PTR_TO_JSON(bucket, bucket_);
        DARABONBA_PTR_TO_JSON(dir, dir_);
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(expire, expire_);
        DARABONBA_PTR_TO_JSON(policy, policy_);
        DARABONBA_PTR_TO_JSON(securityToken, securityToken_);
        DARABONBA_PTR_TO_JSON(signature, signature_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ak, ak_);
        DARABONBA_PTR_FROM_JSON(bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(dir, dir_);
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(expire, expire_);
        DARABONBA_PTR_FROM_JSON(policy, policy_);
        DARABONBA_PTR_FROM_JSON(securityToken, securityToken_);
        DARABONBA_PTR_FROM_JSON(signature, signature_);
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
      virtual bool empty() const override { return this->ak_ == nullptr
        && this->bucket_ == nullptr && this->dir_ == nullptr && this->endpoint_ == nullptr && this->expire_ == nullptr && this->policy_ == nullptr
        && this->securityToken_ == nullptr && this->signature_ == nullptr; };
      // ak Field Functions 
      bool hasAk() const { return this->ak_ != nullptr;};
      void deleteAk() { this->ak_ = nullptr;};
      inline string getAk() const { DARABONBA_PTR_GET_DEFAULT(ak_, "") };
      inline Data& setAk(string ak) { DARABONBA_PTR_SET_VALUE(ak_, ak) };


      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline Data& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // dir Field Functions 
      bool hasDir() const { return this->dir_ != nullptr;};
      void deleteDir() { this->dir_ = nullptr;};
      inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
      inline Data& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // expire Field Functions 
      bool hasExpire() const { return this->expire_ != nullptr;};
      void deleteExpire() { this->expire_ = nullptr;};
      inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
      inline Data& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Data& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Data& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Data& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    protected:
      // The temporary AccessKey ID (STS token). This value is used together with securityToken to authenticate direct uploads to OSS. This is a sensitive credential. Do not hard-code it in your code or print it to logs.
      shared_ptr<string> ak_ {};
      // The name of the OSS bucket.
      shared_ptr<string> bucket_ {};
      // The allowed OSS upload directory prefix. The value must end with a forward slash (/). The key of the uploaded object must start with this prefix. Otherwise, the request is rejected by OSS.
      shared_ptr<string> dir_ {};
      // The endpoint of the region where the OSS bucket resides.
      shared_ptr<string> endpoint_ {};
      // The credential expiration timestamp in Unix seconds. Before use, verify whether the current time has exceeded this value. If the credential has expired, obtain new credentials.
      shared_ptr<int64_t> expire_ {};
      // The Base64-encoded upload policy that defines constraints such as file size and path prefix. The decoded value is a JSON string.
      shared_ptr<string> policy_ {};
      // The STS temporary security token. This value is used together with ak for authentication and is returned only in STS authentication mode. This is a sensitive credential. Do not hard-code it in your code or print it to logs.
      shared_ptr<string> securityToken_ {};
      // The signature calculated based on the policy. The OSS server uses this signature to verify the validity of upload requests.
      shared_ptr<string> signature_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaOssTempKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaOssTempKeyResponseBody::Data) };
    inline GetMetaOssTempKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaOssTempKeyResponseBody::Data) };
    inline GetMetaOssTempKeyResponseBody& setData(const GetMetaOssTempKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaOssTempKeyResponseBody& setData(GetMetaOssTempKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetMetaOssTempKeyResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetMetaOssTempKeyResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaOssTempKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response body. For more information about the fields, see the child field descriptions.
    shared_ptr<GetMetaOssTempKeyResponseBody::Data> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // Indicates whether the call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call failed. Check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
