// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENGINEDEFAULTAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENGINEDEFAULTAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEngineDefaultAuthResponseBodyAuthInfos.hpp>
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
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->authInfos_ == nullptr && return this->instanceId_ == nullptr && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetEngineDefaultAuthResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // authInfos Field Functions 
    bool hasAuthInfos() const { return this->authInfos_ != nullptr;};
    void deleteAuthInfos() { this->authInfos_ = nullptr;};
    inline const vector<GetEngineDefaultAuthResponseBodyAuthInfos> & authInfos() const { DARABONBA_PTR_GET_CONST(authInfos_, vector<GetEngineDefaultAuthResponseBodyAuthInfos>) };
    inline vector<GetEngineDefaultAuthResponseBodyAuthInfos> authInfos() { DARABONBA_PTR_GET(authInfos_, vector<GetEngineDefaultAuthResponseBodyAuthInfos>) };
    inline GetEngineDefaultAuthResponseBody& setAuthInfos(const vector<GetEngineDefaultAuthResponseBodyAuthInfos> & authInfos) { DARABONBA_PTR_SET_VALUE(authInfos_, authInfos) };
    inline GetEngineDefaultAuthResponseBody& setAuthInfos(vector<GetEngineDefaultAuthResponseBodyAuthInfos> && authInfos) { DARABONBA_PTR_SET_RVALUE(authInfos_, authInfos) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEngineDefaultAuthResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEngineDefaultAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<vector<GetEngineDefaultAuthResponseBodyAuthInfos>> authInfos_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
