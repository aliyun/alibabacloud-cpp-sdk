// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESECURITYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESECURITYGROUPSRESPONSEBODY_HPP_
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
  class GetInstanceSecurityGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
    };
    GetInstanceSecurityGroupsResponseBody() = default ;
    GetInstanceSecurityGroupsResponseBody(const GetInstanceSecurityGroupsResponseBody &) = default ;
    GetInstanceSecurityGroupsResponseBody(GetInstanceSecurityGroupsResponseBody &&) = default ;
    GetInstanceSecurityGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceSecurityGroupsResponseBody() = default ;
    GetInstanceSecurityGroupsResponseBody& operator=(const GetInstanceSecurityGroupsResponseBody &) = default ;
    GetInstanceSecurityGroupsResponseBody& operator=(GetInstanceSecurityGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->instanceId_ == nullptr && return this->requestId_ == nullptr && return this->securityGroups_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetInstanceSecurityGroupsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceSecurityGroupsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceSecurityGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<string> & securityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<string>) };
    inline vector<string> securityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<string>) };
    inline GetInstanceSecurityGroupsResponseBody& setSecurityGroups(const vector<string> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline GetInstanceSecurityGroupsResponseBody& setSecurityGroups(vector<string> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> securityGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
