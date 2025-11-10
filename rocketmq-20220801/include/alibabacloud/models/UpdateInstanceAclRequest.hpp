// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEACLREQUEST_HPP_
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
  class UpdateInstanceAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(decision, decision_);
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelists_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(decision, decision_);
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelists_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    UpdateInstanceAclRequest() = default ;
    UpdateInstanceAclRequest(const UpdateInstanceAclRequest &) = default ;
    UpdateInstanceAclRequest(UpdateInstanceAclRequest &&) = default ;
    UpdateInstanceAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceAclRequest() = default ;
    UpdateInstanceAclRequest& operator=(const UpdateInstanceAclRequest &) = default ;
    UpdateInstanceAclRequest& operator=(UpdateInstanceAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->decision_ == nullptr && return this->ipWhitelists_ == nullptr && return this->resourceName_ == nullptr && return this->resourceType_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> actions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline UpdateInstanceAclRequest& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline UpdateInstanceAclRequest& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // decision Field Functions 
    bool hasDecision() const { return this->decision_ != nullptr;};
    void deleteDecision() { this->decision_ = nullptr;};
    inline string decision() const { DARABONBA_PTR_GET_DEFAULT(decision_, "") };
    inline UpdateInstanceAclRequest& setDecision(string decision) { DARABONBA_PTR_SET_VALUE(decision_, decision) };


    // ipWhitelists Field Functions 
    bool hasIpWhitelists() const { return this->ipWhitelists_ != nullptr;};
    void deleteIpWhitelists() { this->ipWhitelists_ = nullptr;};
    inline const vector<string> & ipWhitelists() const { DARABONBA_PTR_GET_CONST(ipWhitelists_, vector<string>) };
    inline vector<string> ipWhitelists() { DARABONBA_PTR_GET(ipWhitelists_, vector<string>) };
    inline UpdateInstanceAclRequest& setIpWhitelists(const vector<string> & ipWhitelists) { DARABONBA_PTR_SET_VALUE(ipWhitelists_, ipWhitelists) };
    inline UpdateInstanceAclRequest& setIpWhitelists(vector<string> && ipWhitelists) { DARABONBA_PTR_SET_RVALUE(ipWhitelists_, ipWhitelists) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline UpdateInstanceAclRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateInstanceAclRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The following types of operations are supported based on the resource type:
    // 
    // *   Topic: Pub, Sub, and Pub|Sub
    // *   Group: Sub
    // 
    // Valid values:
    // 
    // *   Sub: subscribe
    // *   Pub|Sub: publish and subscribe
    // *   Pub: publish
    std::shared_ptr<vector<string>> actions_ = nullptr;
    // The decision result of the authorization.
    // 
    // Valid values:
    // 
    // *   Deny
    // *   Allow
    std::shared_ptr<string> decision_ = nullptr;
    // The IP addresses in the whitelist.
    std::shared_ptr<vector<string>> ipWhitelists_ = nullptr;
    // The name of the resource on which you want to grant permissions.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The type of the resource on which you want to grant permissions.
    // 
    // Valid values:
    // 
    // *   Group
    // *   Topic
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
