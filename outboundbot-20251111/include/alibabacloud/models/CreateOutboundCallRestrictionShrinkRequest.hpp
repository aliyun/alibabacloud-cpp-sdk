// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOUTBOUNDCALLRESTRICTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOUTBOUNDCALLRESTRICTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class CreateOutboundCallRestrictionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOutboundCallRestrictionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutboundCallRestriction, outboundCallRestrictionShrink_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOutboundCallRestrictionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutboundCallRestriction, outboundCallRestrictionShrink_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    CreateOutboundCallRestrictionShrinkRequest() = default ;
    CreateOutboundCallRestrictionShrinkRequest(const CreateOutboundCallRestrictionShrinkRequest &) = default ;
    CreateOutboundCallRestrictionShrinkRequest(CreateOutboundCallRestrictionShrinkRequest &&) = default ;
    CreateOutboundCallRestrictionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOutboundCallRestrictionShrinkRequest() = default ;
    CreateOutboundCallRestrictionShrinkRequest& operator=(const CreateOutboundCallRestrictionShrinkRequest &) = default ;
    CreateOutboundCallRestrictionShrinkRequest& operator=(CreateOutboundCallRestrictionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->outboundCallRestrictionShrink_ == nullptr && this->policy_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateOutboundCallRestrictionShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundCallRestrictionShrink Field Functions 
    bool hasOutboundCallRestrictionShrink() const { return this->outboundCallRestrictionShrink_ != nullptr;};
    void deleteOutboundCallRestrictionShrink() { this->outboundCallRestrictionShrink_ = nullptr;};
    inline string getOutboundCallRestrictionShrink() const { DARABONBA_PTR_GET_DEFAULT(outboundCallRestrictionShrink_, "") };
    inline CreateOutboundCallRestrictionShrinkRequest& setOutboundCallRestrictionShrink(string outboundCallRestrictionShrink) { DARABONBA_PTR_SET_VALUE(outboundCallRestrictionShrink_, outboundCallRestrictionShrink) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline int32_t getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, 0) };
    inline CreateOutboundCallRestrictionShrinkRequest& setPolicy(int32_t policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The outbound call restriction.
    shared_ptr<string> outboundCallRestrictionShrink_ {};
    // The policy. Valid values:
    // 0: blacklist.
    // 1: whitelist.
    shared_ptr<int32_t> policy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
