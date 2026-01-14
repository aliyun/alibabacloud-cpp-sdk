// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEACLREQUEST_HPP_
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
  class CreateInstanceAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(decision, decision_);
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelists_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(decision, decision_);
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelists_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    CreateInstanceAclRequest() = default ;
    CreateInstanceAclRequest(const CreateInstanceAclRequest &) = default ;
    CreateInstanceAclRequest(CreateInstanceAclRequest &&) = default ;
    CreateInstanceAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceAclRequest() = default ;
    CreateInstanceAclRequest& operator=(const CreateInstanceAclRequest &) = default ;
    CreateInstanceAclRequest& operator=(CreateInstanceAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && this->decision_ == nullptr && this->ipWhitelists_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline CreateInstanceAclRequest& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline CreateInstanceAclRequest& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // decision Field Functions 
    bool hasDecision() const { return this->decision_ != nullptr;};
    void deleteDecision() { this->decision_ = nullptr;};
    inline string getDecision() const { DARABONBA_PTR_GET_DEFAULT(decision_, "") };
    inline CreateInstanceAclRequest& setDecision(string decision) { DARABONBA_PTR_SET_VALUE(decision_, decision) };


    // ipWhitelists Field Functions 
    bool hasIpWhitelists() const { return this->ipWhitelists_ != nullptr;};
    void deleteIpWhitelists() { this->ipWhitelists_ = nullptr;};
    inline const vector<string> & getIpWhitelists() const { DARABONBA_PTR_GET_CONST(ipWhitelists_, vector<string>) };
    inline vector<string> getIpWhitelists() { DARABONBA_PTR_GET(ipWhitelists_, vector<string>) };
    inline CreateInstanceAclRequest& setIpWhitelists(const vector<string> & ipWhitelists) { DARABONBA_PTR_SET_VALUE(ipWhitelists_, ipWhitelists) };
    inline CreateInstanceAclRequest& setIpWhitelists(vector<string> && ipWhitelists) { DARABONBA_PTR_SET_RVALUE(ipWhitelists_, ipWhitelists) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline CreateInstanceAclRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateInstanceAclRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The type of operations that can be performed on the resource.
    // 
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
    // 
    // This parameter is required.
    shared_ptr<vector<string>> actions_ {};
    // The decision result of the authorization.
    // 
    // Valid values:
    // 
    // *   Deny
    // *   Allow
    // 
    // This parameter is required.
    shared_ptr<string> decision_ {};
    // The IP addresses in the whitelist.
    shared_ptr<vector<string>> ipWhitelists_ {};
    // The name of the resource on which you want to grant permissions.
    // 
    // This parameter is required.
    shared_ptr<string> resourceName_ {};
    // The type of the resource on which you want to grant permissions.
    // 
    // Valid values:
    // 
    // *   Group
    // *   Topic
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
