// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIREWALLRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIREWALLRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class CreateFirewallRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirewallRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FirewallRules, firewallRulesShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirewallRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FirewallRules, firewallRulesShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateFirewallRulesShrinkRequest() = default ;
    CreateFirewallRulesShrinkRequest(const CreateFirewallRulesShrinkRequest &) = default ;
    CreateFirewallRulesShrinkRequest(CreateFirewallRulesShrinkRequest &&) = default ;
    CreateFirewallRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirewallRulesShrinkRequest() = default ;
    CreateFirewallRulesShrinkRequest& operator=(const CreateFirewallRulesShrinkRequest &) = default ;
    CreateFirewallRulesShrinkRequest& operator=(CreateFirewallRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key that is specified for the firewall rule. Valid values of N: 1 to 20.
      // 
      // The tag key cannot be an empty string. It can be up to 64 characters in length, cannot start with aliyun or acs:, and cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value that is specified for the firewall rule. Valid values of N: 1 to 20.
      // 
      // The tag value can be an empty string. It can be up to 64 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->firewallRulesShrink_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFirewallRulesShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // firewallRulesShrink Field Functions 
    bool hasFirewallRulesShrink() const { return this->firewallRulesShrink_ != nullptr;};
    void deleteFirewallRulesShrink() { this->firewallRulesShrink_ = nullptr;};
    inline string getFirewallRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(firewallRulesShrink_, "") };
    inline CreateFirewallRulesShrinkRequest& setFirewallRulesShrink(string firewallRulesShrink) { DARABONBA_PTR_SET_VALUE(firewallRulesShrink_, firewallRulesShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFirewallRulesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFirewallRulesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFirewallRulesShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFirewallRulesShrinkRequest::Tag>) };
    inline vector<CreateFirewallRulesShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateFirewallRulesShrinkRequest::Tag>) };
    inline CreateFirewallRulesShrinkRequest& setTag(const vector<CreateFirewallRulesShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFirewallRulesShrinkRequest& setTag(vector<CreateFirewallRulesShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token.
    shared_ptr<string> clientToken_ {};
    // The array of firewall rules.
    shared_ptr<string> firewallRulesShrink_ {};
    // The instance ID of the specified simple application server.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the regions where simple application servers are available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of tags. The list can contain up to 20 tags.
    shared_ptr<vector<CreateFirewallRulesShrinkRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
