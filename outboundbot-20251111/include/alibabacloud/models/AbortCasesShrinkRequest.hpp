// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABORTCASESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABORTCASESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class AbortCasesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbortCasesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AbortCasesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbersShrink_);
    };
    AbortCasesShrinkRequest() = default ;
    AbortCasesShrinkRequest(const AbortCasesShrinkRequest &) = default ;
    AbortCasesShrinkRequest(AbortCasesShrinkRequest &&) = default ;
    AbortCasesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbortCasesShrinkRequest() = default ;
    AbortCasesShrinkRequest& operator=(const AbortCasesShrinkRequest &) = default ;
    AbortCasesShrinkRequest& operator=(AbortCasesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->campaignId_ == nullptr
        && this->instanceId_ == nullptr && this->phoneNumbersShrink_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AbortCasesShrinkRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AbortCasesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phoneNumbersShrink Field Functions 
    bool hasPhoneNumbersShrink() const { return this->phoneNumbersShrink_ != nullptr;};
    void deletePhoneNumbersShrink() { this->phoneNumbersShrink_ = nullptr;};
    inline string getPhoneNumbersShrink() const { DARABONBA_PTR_GET_DEFAULT(phoneNumbersShrink_, "") };
    inline AbortCasesShrinkRequest& setPhoneNumbersShrink(string phoneNumbersShrink) { DARABONBA_PTR_SET_VALUE(phoneNumbersShrink_, phoneNumbersShrink) };


  protected:
    // The ID of the predictive outbound call campaign.
    // 
    // This parameter is required.
    shared_ptr<string> campaignId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of contact phone numbers to cancel.
    shared_ptr<string> phoneNumbersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
