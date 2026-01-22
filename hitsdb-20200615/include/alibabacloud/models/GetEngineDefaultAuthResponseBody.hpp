// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENGINEDEFAULTAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENGINEDEFAULTAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetEngineDefaultAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEngineDefaultAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AuthInfos, authInfos_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEngineDefaultAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AuthInfos, authInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEngineDefaultAuthResponseBody() = default ;
    GetEngineDefaultAuthResponseBody(const GetEngineDefaultAuthResponseBody &) = default ;
    GetEngineDefaultAuthResponseBody(GetEngineDefaultAuthResponseBody &&) = default ;
    GetEngineDefaultAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEngineDefaultAuthResponseBody() = default ;
    GetEngineDefaultAuthResponseBody& operator=(const GetEngineDefaultAuthResponseBody &) = default ;
    GetEngineDefaultAuthResponseBody& operator=(GetEngineDefaultAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, AuthInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      AuthInfos() = default ;
      AuthInfos(const AuthInfos &) = default ;
      AuthInfos(AuthInfos &&) = default ;
      AuthInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthInfos() = default ;
      AuthInfos& operator=(const AuthInfos &) = default ;
      AuthInfos& operator=(AuthInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->engine_ == nullptr
        && this->password_ == nullptr && this->username_ == nullptr; };
      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline AuthInfos& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline AuthInfos& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline AuthInfos& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> engine_ {};
      shared_ptr<string> password_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->authInfos_ == nullptr && this->instanceId_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetEngineDefaultAuthResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // authInfos Field Functions 
    bool hasAuthInfos() const { return this->authInfos_ != nullptr;};
    void deleteAuthInfos() { this->authInfos_ = nullptr;};
    inline const vector<GetEngineDefaultAuthResponseBody::AuthInfos> & getAuthInfos() const { DARABONBA_PTR_GET_CONST(authInfos_, vector<GetEngineDefaultAuthResponseBody::AuthInfos>) };
    inline vector<GetEngineDefaultAuthResponseBody::AuthInfos> getAuthInfos() { DARABONBA_PTR_GET(authInfos_, vector<GetEngineDefaultAuthResponseBody::AuthInfos>) };
    inline GetEngineDefaultAuthResponseBody& setAuthInfos(const vector<GetEngineDefaultAuthResponseBody::AuthInfos> & authInfos) { DARABONBA_PTR_SET_VALUE(authInfos_, authInfos) };
    inline GetEngineDefaultAuthResponseBody& setAuthInfos(vector<GetEngineDefaultAuthResponseBody::AuthInfos> && authInfos) { DARABONBA_PTR_SET_RVALUE(authInfos_, authInfos) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEngineDefaultAuthResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEngineDefaultAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<GetEngineDefaultAuthResponseBody::AuthInfos>> authInfos_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
