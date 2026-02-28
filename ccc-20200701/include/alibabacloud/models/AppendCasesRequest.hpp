// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDCASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPENDCASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AppendCasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendCasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AppendCasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
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
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(Caller, caller_);
        DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_TO_JSON(MaskedCallee, maskedCallee_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(Caller, caller_);
        DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_FROM_JSON(MaskedCallee, maskedCallee_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->caller_ == nullptr && this->customVariables_ == nullptr && this->maskedCallee_ == nullptr && this->phoneNumber_ == nullptr && this->referenceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Body& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // caller Field Functions 
      bool hasCaller() const { return this->caller_ != nullptr;};
      void deleteCaller() { this->caller_ = nullptr;};
      inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
      inline Body& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


      // customVariables Field Functions 
      bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
      void deleteCustomVariables() { this->customVariables_ = nullptr;};
      inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
      inline Body& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


      // maskedCallee Field Functions 
      bool hasMaskedCallee() const { return this->maskedCallee_ != nullptr;};
      void deleteMaskedCallee() { this->maskedCallee_ = nullptr;};
      inline string getMaskedCallee() const { DARABONBA_PTR_GET_DEFAULT(maskedCallee_, "") };
      inline Body& setMaskedCallee(string maskedCallee) { DARABONBA_PTR_SET_VALUE(maskedCallee_, maskedCallee) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Body& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline Body& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    protected:
      shared_ptr<string> agentId_ {};
      shared_ptr<string> caller_ {};
      shared_ptr<string> customVariables_ {};
      shared_ptr<string> maskedCallee_ {};
      shared_ptr<string> phoneNumber_ {};
      shared_ptr<string> referenceId_ {};
    };

    virtual bool empty() const override { return this->campaignId_ == nullptr
        && this->instanceId_ == nullptr && this->body_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AppendCasesRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppendCasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<AppendCasesRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<AppendCasesRequest::Body>) };
    inline vector<AppendCasesRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<AppendCasesRequest::Body>) };
    inline AppendCasesRequest& setBody(const vector<AppendCasesRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AppendCasesRequest& setBody(vector<AppendCasesRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<string> campaignId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<AppendCasesRequest::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
