// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEACLRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEACLRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListInstanceAclResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAclResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(aclType, aclType_);
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(decision, decision_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelists_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAclResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(aclType, aclType_);
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(decision, decision_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelists_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    ListInstanceAclResponseBodyDataList() = default ;
    ListInstanceAclResponseBodyDataList(const ListInstanceAclResponseBodyDataList &) = default ;
    ListInstanceAclResponseBodyDataList(ListInstanceAclResponseBodyDataList &&) = default ;
    ListInstanceAclResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAclResponseBodyDataList() = default ;
    ListInstanceAclResponseBodyDataList& operator=(const ListInstanceAclResponseBodyDataList &) = default ;
    ListInstanceAclResponseBodyDataList& operator=(ListInstanceAclResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclType_ != nullptr
        && this->actions_ != nullptr && this->decision_ != nullptr && this->instanceId_ != nullptr && this->ipWhitelists_ != nullptr && this->regionId_ != nullptr
        && this->resourceName_ != nullptr && this->resourceType_ != nullptr && this->username_ != nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline ListInstanceAclResponseBodyDataList& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> actions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline ListInstanceAclResponseBodyDataList& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline ListInstanceAclResponseBodyDataList& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // decision Field Functions 
    bool hasDecision() const { return this->decision_ != nullptr;};
    void deleteDecision() { this->decision_ = nullptr;};
    inline string decision() const { DARABONBA_PTR_GET_DEFAULT(decision_, "") };
    inline ListInstanceAclResponseBodyDataList& setDecision(string decision) { DARABONBA_PTR_SET_VALUE(decision_, decision) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceAclResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipWhitelists Field Functions 
    bool hasIpWhitelists() const { return this->ipWhitelists_ != nullptr;};
    void deleteIpWhitelists() { this->ipWhitelists_ = nullptr;};
    inline const vector<string> & ipWhitelists() const { DARABONBA_PTR_GET_CONST(ipWhitelists_, vector<string>) };
    inline vector<string> ipWhitelists() { DARABONBA_PTR_GET(ipWhitelists_, vector<string>) };
    inline ListInstanceAclResponseBodyDataList& setIpWhitelists(const vector<string> & ipWhitelists) { DARABONBA_PTR_SET_VALUE(ipWhitelists_, ipWhitelists) };
    inline ListInstanceAclResponseBodyDataList& setIpWhitelists(vector<string> && ipWhitelists) { DARABONBA_PTR_SET_RVALUE(ipWhitelists_, ipWhitelists) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstanceAclResponseBodyDataList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListInstanceAclResponseBodyDataList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListInstanceAclResponseBodyDataList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListInstanceAclResponseBodyDataList& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The ACL type.
    // 
    // Valid value:
    // 
    // *   APACHE: open source ACL.
    std::shared_ptr<string> aclType_ = nullptr;
    // The types of the operations that are allowed by the ACL.
    std::shared_ptr<vector<string>> actions_ = nullptr;
    // The decision result.
    // 
    // Valid values:
    // 
    // *   Deny: Access is denied.
    // *   Allow: Access is allowed.
    std::shared_ptr<string> decision_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address whitelists.
    std::shared_ptr<vector<string>> ipWhitelists_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource type.
    // 
    // Valid values:
    // 
    // *   Group
    // *   Topic
    std::shared_ptr<string> resourceType_ = nullptr;
    // The username.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
