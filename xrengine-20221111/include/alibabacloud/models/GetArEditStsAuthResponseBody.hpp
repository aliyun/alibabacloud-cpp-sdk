// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAREDITSTSAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAREDITSTSAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class GetArEditStsAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArEditStsAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetArEditStsAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetArEditStsAuthResponseBody() = default ;
    GetArEditStsAuthResponseBody(const GetArEditStsAuthResponseBody &) = default ;
    GetArEditStsAuthResponseBody(GetArEditStsAuthResponseBody &&) = default ;
    GetArEditStsAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArEditStsAuthResponseBody() = default ;
    GetArEditStsAuthResponseBody& operator=(const GetArEditStsAuthResponseBody &) = default ;
    GetArEditStsAuthResponseBody& operator=(GetArEditStsAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(EditPath, editPath_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(Map3DPath, map3DPath_);
        DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_TO_JSON(OssRegion, ossRegion_);
        DARABONBA_PTR_TO_JSON(PublishPath, publishPath_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(EditPath, editPath_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(Map3DPath, map3DPath_);
        DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_FROM_JSON(OssRegion, ossRegion_);
        DARABONBA_PTR_FROM_JSON(PublishPath, publishPath_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
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
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->editPath_ == nullptr && this->expiration_ == nullptr && this->map3DPath_ == nullptr && this->ossBucket_ == nullptr
        && this->ossRegion_ == nullptr && this->publishPath_ == nullptr && this->securityToken_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Data& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline Data& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // editPath Field Functions 
      bool hasEditPath() const { return this->editPath_ != nullptr;};
      void deleteEditPath() { this->editPath_ = nullptr;};
      inline string getEditPath() const { DARABONBA_PTR_GET_DEFAULT(editPath_, "") };
      inline Data& setEditPath(string editPath) { DARABONBA_PTR_SET_VALUE(editPath_, editPath) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline int64_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
      inline Data& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // map3DPath Field Functions 
      bool hasMap3DPath() const { return this->map3DPath_ != nullptr;};
      void deleteMap3DPath() { this->map3DPath_ = nullptr;};
      inline string getMap3DPath() const { DARABONBA_PTR_GET_DEFAULT(map3DPath_, "") };
      inline Data& setMap3DPath(string map3DPath) { DARABONBA_PTR_SET_VALUE(map3DPath_, map3DPath) };


      // ossBucket Field Functions 
      bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
      void deleteOssBucket() { this->ossBucket_ = nullptr;};
      inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
      inline Data& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


      // ossRegion Field Functions 
      bool hasOssRegion() const { return this->ossRegion_ != nullptr;};
      void deleteOssRegion() { this->ossRegion_ = nullptr;};
      inline string getOssRegion() const { DARABONBA_PTR_GET_DEFAULT(ossRegion_, "") };
      inline Data& setOssRegion(string ossRegion) { DARABONBA_PTR_SET_VALUE(ossRegion_, ossRegion) };


      // publishPath Field Functions 
      bool hasPublishPath() const { return this->publishPath_ != nullptr;};
      void deletePublishPath() { this->publishPath_ = nullptr;};
      inline string getPublishPath() const { DARABONBA_PTR_GET_DEFAULT(publishPath_, "") };
      inline Data& setPublishPath(string publishPath) { DARABONBA_PTR_SET_VALUE(publishPath_, publishPath) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Data& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    protected:
      shared_ptr<string> accessKeyId_ {};
      shared_ptr<string> accessKeySecret_ {};
      shared_ptr<string> editPath_ {};
      shared_ptr<int64_t> expiration_ {};
      shared_ptr<string> map3DPath_ {};
      shared_ptr<string> ossBucket_ {};
      shared_ptr<string> ossRegion_ {};
      shared_ptr<string> publishPath_ {};
      shared_ptr<string> securityToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorName_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArEditStsAuthResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetArEditStsAuthResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetArEditStsAuthResponseBody::Data) };
    inline GetArEditStsAuthResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetArEditStsAuthResponseBody::Data) };
    inline GetArEditStsAuthResponseBody& setData(const GetArEditStsAuthResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetArEditStsAuthResponseBody& setData(GetArEditStsAuthResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline GetArEditStsAuthResponseBody& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetArEditStsAuthResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetArEditStsAuthResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArEditStsAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetArEditStsAuthResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetArEditStsAuthResponseBody::Data> data_ {};
    shared_ptr<string> errorName_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
