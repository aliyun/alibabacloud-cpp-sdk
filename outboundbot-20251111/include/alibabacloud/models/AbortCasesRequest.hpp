// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABORTCASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABORTCASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class AbortCasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbortCasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
    };
    friend void from_json(const Darabonba::Json& j, AbortCasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
    };
    AbortCasesRequest() = default ;
    AbortCasesRequest(const AbortCasesRequest &) = default ;
    AbortCasesRequest(AbortCasesRequest &&) = default ;
    AbortCasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbortCasesRequest() = default ;
    AbortCasesRequest& operator=(const AbortCasesRequest &) = default ;
    AbortCasesRequest& operator=(AbortCasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->campaignId_ == nullptr
        && this->instanceId_ == nullptr && this->phoneNumbers_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AbortCasesRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AbortCasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline const vector<string> & getPhoneNumbers() const { DARABONBA_PTR_GET_CONST(phoneNumbers_, vector<string>) };
    inline vector<string> getPhoneNumbers() { DARABONBA_PTR_GET(phoneNumbers_, vector<string>) };
    inline AbortCasesRequest& setPhoneNumbers(const vector<string> & phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };
    inline AbortCasesRequest& setPhoneNumbers(vector<string> && phoneNumbers) { DARABONBA_PTR_SET_RVALUE(phoneNumbers_, phoneNumbers) };


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
    shared_ptr<vector<string>> phoneNumbers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
