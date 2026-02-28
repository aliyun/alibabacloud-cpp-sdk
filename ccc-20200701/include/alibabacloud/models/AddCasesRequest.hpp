// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASESREQUEST_HPP_
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
  class AddCasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(CaseList, caseList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(CaseList, caseList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AddCasesRequest() = default ;
    AddCasesRequest(const AddCasesRequest &) = default ;
    AddCasesRequest(AddCasesRequest &&) = default ;
    AddCasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasesRequest() = default ;
    AddCasesRequest& operator=(const AddCasesRequest &) = default ;
    AddCasesRequest& operator=(AddCasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CaseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CaseList& obj) { 
        DARABONBA_PTR_TO_JSON(Caller, caller_);
        DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_TO_JSON(MaskedCallee, maskedCallee_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      };
      friend void from_json(const Darabonba::Json& j, CaseList& obj) { 
        DARABONBA_PTR_FROM_JSON(Caller, caller_);
        DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_FROM_JSON(MaskedCallee, maskedCallee_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      };
      CaseList() = default ;
      CaseList(const CaseList &) = default ;
      CaseList(CaseList &&) = default ;
      CaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CaseList() = default ;
      CaseList& operator=(const CaseList &) = default ;
      CaseList& operator=(CaseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->caller_ == nullptr
        && this->customVariables_ == nullptr && this->maskedCallee_ == nullptr && this->phoneNumber_ == nullptr && this->referenceId_ == nullptr; };
      // caller Field Functions 
      bool hasCaller() const { return this->caller_ != nullptr;};
      void deleteCaller() { this->caller_ = nullptr;};
      inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
      inline CaseList& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


      // customVariables Field Functions 
      bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
      void deleteCustomVariables() { this->customVariables_ = nullptr;};
      inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
      inline CaseList& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


      // maskedCallee Field Functions 
      bool hasMaskedCallee() const { return this->maskedCallee_ != nullptr;};
      void deleteMaskedCallee() { this->maskedCallee_ = nullptr;};
      inline string getMaskedCallee() const { DARABONBA_PTR_GET_DEFAULT(maskedCallee_, "") };
      inline CaseList& setMaskedCallee(string maskedCallee) { DARABONBA_PTR_SET_VALUE(maskedCallee_, maskedCallee) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline CaseList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline CaseList& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    protected:
      shared_ptr<string> caller_ {};
      shared_ptr<string> customVariables_ {};
      shared_ptr<string> maskedCallee_ {};
      shared_ptr<string> phoneNumber_ {};
      shared_ptr<string> referenceId_ {};
    };

    virtual bool empty() const override { return this->campaignId_ == nullptr
        && this->caseList_ == nullptr && this->instanceId_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AddCasesRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // caseList Field Functions 
    bool hasCaseList() const { return this->caseList_ != nullptr;};
    void deleteCaseList() { this->caseList_ = nullptr;};
    inline const vector<AddCasesRequest::CaseList> & getCaseList() const { DARABONBA_PTR_GET_CONST(caseList_, vector<AddCasesRequest::CaseList>) };
    inline vector<AddCasesRequest::CaseList> getCaseList() { DARABONBA_PTR_GET(caseList_, vector<AddCasesRequest::CaseList>) };
    inline AddCasesRequest& setCaseList(const vector<AddCasesRequest::CaseList> & caseList) { DARABONBA_PTR_SET_VALUE(caseList_, caseList) };
    inline AddCasesRequest& setCaseList(vector<AddCasesRequest::CaseList> && caseList) { DARABONBA_PTR_SET_RVALUE(caseList_, caseList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddCasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> campaignId_ {};
    shared_ptr<vector<AddCasesRequest::CaseList>> caseList_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
