// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDCASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPENDCASESREQUEST_HPP_
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
  class AppendCasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendCasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(Cases, cases_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AppendCasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(Cases, cases_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AppendCasesRequest() = default ;
    AppendCasesRequest(const AppendCasesRequest &) = default ;
    AppendCasesRequest(AppendCasesRequest &&) = default ;
    AppendCasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppendCasesRequest() = default ;
    AppendCasesRequest& operator=(const AppendCasesRequest &) = default ;
    AppendCasesRequest& operator=(AppendCasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cases& obj) { 
        DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      };
      friend void from_json(const Darabonba::Json& j, Cases& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      };
      Cases() = default ;
      Cases(const Cases &) = default ;
      Cases(Cases &&) = default ;
      Cases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cases() = default ;
      Cases& operator=(const Cases &) = default ;
      Cases& operator=(Cases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customVariables_ == nullptr
        && this->phoneNumber_ == nullptr && this->priority_ == nullptr && this->referenceId_ == nullptr; };
      // customVariables Field Functions 
      bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
      void deleteCustomVariables() { this->customVariables_ = nullptr;};
      inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
      inline Cases& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Cases& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Cases& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline Cases& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    protected:
      // Custom variables defined by the customer. The value is a JSON object that contains up to 10 properties. The name and value of each property are defined by the customer.
      shared_ptr<string> customVariables_ {};
      // The phone number of the contact.
      shared_ptr<string> phoneNumber_ {};
      // The priority.
      shared_ptr<int32_t> priority_ {};
      // The business system ID of the contact.
      shared_ptr<string> referenceId_ {};
    };

    virtual bool empty() const override { return this->campaignId_ == nullptr
        && this->cases_ == nullptr && this->instanceId_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AppendCasesRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // cases Field Functions 
    bool hasCases() const { return this->cases_ != nullptr;};
    void deleteCases() { this->cases_ = nullptr;};
    inline const vector<AppendCasesRequest::Cases> & getCases() const { DARABONBA_PTR_GET_CONST(cases_, vector<AppendCasesRequest::Cases>) };
    inline vector<AppendCasesRequest::Cases> getCases() { DARABONBA_PTR_GET(cases_, vector<AppendCasesRequest::Cases>) };
    inline AppendCasesRequest& setCases(const vector<AppendCasesRequest::Cases> & cases) { DARABONBA_PTR_SET_VALUE(cases_, cases) };
    inline AppendCasesRequest& setCases(vector<AppendCasesRequest::Cases> && cases) { DARABONBA_PTR_SET_RVALUE(cases_, cases) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppendCasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The outbound call task ID.
    // 
    // This parameter is required.
    shared_ptr<string> campaignId_ {};
    // The list of contacts.
    // 
    // This parameter is required.
    shared_ptr<vector<AppendCasesRequest::Cases>> cases_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
