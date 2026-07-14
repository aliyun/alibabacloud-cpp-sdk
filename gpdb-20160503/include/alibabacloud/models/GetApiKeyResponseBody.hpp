// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(AuthServices, authServices_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyPrefix, keyPrefix_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(AuthServices, authServices_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyPrefix, keyPrefix_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApiKeyResponseBody() = default ;
    GetApiKeyResponseBody(const GetApiKeyResponseBody &) = default ;
    GetApiKeyResponseBody(GetApiKeyResponseBody &&) = default ;
    GetApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiKeyResponseBody() = default ;
    GetApiKeyResponseBody& operator=(const GetApiKeyResponseBody &) = default ;
    GetApiKeyResponseBody& operator=(GetApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthServices& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      };
      friend void from_json(const Darabonba::Json& j, AuthServices& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      };
      AuthServices() = default ;
      AuthServices(const AuthServices &) = default ;
      AuthServices(AuthServices &&) = default ;
      AuthServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthServices() = default ;
      AuthServices& operator=(const AuthServices &) = default ;
      AuthServices& operator=(AuthServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serviceId_ == nullptr
        && this->serviceType_ == nullptr; };
      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline AuthServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline AuthServices& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    protected:
      shared_ptr<string> serviceId_ {};
      shared_ptr<string> serviceType_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->authServices_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->keyId_ == nullptr && this->keyName_ == nullptr
        && this->keyPrefix_ == nullptr && this->requestId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline GetApiKeyResponseBody& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // authServices Field Functions 
    bool hasAuthServices() const { return this->authServices_ != nullptr;};
    void deleteAuthServices() { this->authServices_ = nullptr;};
    inline const vector<GetApiKeyResponseBody::AuthServices> & getAuthServices() const { DARABONBA_PTR_GET_CONST(authServices_, vector<GetApiKeyResponseBody::AuthServices>) };
    inline vector<GetApiKeyResponseBody::AuthServices> getAuthServices() { DARABONBA_PTR_GET(authServices_, vector<GetApiKeyResponseBody::AuthServices>) };
    inline GetApiKeyResponseBody& setAuthServices(const vector<GetApiKeyResponseBody::AuthServices> & authServices) { DARABONBA_PTR_SET_VALUE(authServices_, authServices) };
    inline GetApiKeyResponseBody& setAuthServices(vector<GetApiKeyResponseBody::AuthServices> && authServices) { DARABONBA_PTR_SET_RVALUE(authServices_, authServices) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetApiKeyResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApiKeyResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GetApiKeyResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline GetApiKeyResponseBody& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyPrefix Field Functions 
    bool hasKeyPrefix() const { return this->keyPrefix_ != nullptr;};
    void deleteKeyPrefix() { this->keyPrefix_ = nullptr;};
    inline string getKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyPrefix_, "") };
    inline GetApiKeyResponseBody& setKeyPrefix(string keyPrefix) { DARABONBA_PTR_SET_VALUE(keyPrefix_, keyPrefix) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<vector<GetApiKeyResponseBody::AuthServices>> authServices_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> keyId_ {};
    shared_ptr<string> keyName_ {};
    shared_ptr<string> keyPrefix_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
