// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDCASESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPENDCASESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class AppendCasesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendCasesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(Cases, casesShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AppendCasesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(Cases, casesShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AppendCasesShrinkRequest() = default ;
    AppendCasesShrinkRequest(const AppendCasesShrinkRequest &) = default ;
    AppendCasesShrinkRequest(AppendCasesShrinkRequest &&) = default ;
    AppendCasesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppendCasesShrinkRequest() = default ;
    AppendCasesShrinkRequest& operator=(const AppendCasesShrinkRequest &) = default ;
    AppendCasesShrinkRequest& operator=(AppendCasesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->campaignId_ == nullptr
        && this->casesShrink_ == nullptr && this->instanceId_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AppendCasesShrinkRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // casesShrink Field Functions 
    bool hasCasesShrink() const { return this->casesShrink_ != nullptr;};
    void deleteCasesShrink() { this->casesShrink_ = nullptr;};
    inline string getCasesShrink() const { DARABONBA_PTR_GET_DEFAULT(casesShrink_, "") };
    inline AppendCasesShrinkRequest& setCasesShrink(string casesShrink) { DARABONBA_PTR_SET_VALUE(casesShrink_, casesShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppendCasesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The outbound call task ID.
    // 
    // This parameter is required.
    shared_ptr<string> campaignId_ {};
    // The list of contacts.
    // 
    // This parameter is required.
    shared_ptr<string> casesShrink_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
