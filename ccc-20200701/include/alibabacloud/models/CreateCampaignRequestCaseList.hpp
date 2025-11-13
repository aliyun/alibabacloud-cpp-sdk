// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECAMPAIGNREQUESTCASELIST_HPP_
#define ALIBABACLOUD_MODELS_CREATECAMPAIGNREQUESTCASELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateCampaignRequestCaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCampaignRequestCaseList& obj) { 
      DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCampaignRequestCaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
    };
    CreateCampaignRequestCaseList() = default ;
    CreateCampaignRequestCaseList(const CreateCampaignRequestCaseList &) = default ;
    CreateCampaignRequestCaseList(CreateCampaignRequestCaseList &&) = default ;
    CreateCampaignRequestCaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCampaignRequestCaseList() = default ;
    CreateCampaignRequestCaseList& operator=(const CreateCampaignRequestCaseList &) = default ;
    CreateCampaignRequestCaseList& operator=(CreateCampaignRequestCaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customVariables_ == nullptr
        && return this->phoneNumber_ == nullptr && return this->referenceId_ == nullptr; };
    // customVariables Field Functions 
    bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
    void deleteCustomVariables() { this->customVariables_ = nullptr;};
    inline string customVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
    inline CreateCampaignRequestCaseList& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline CreateCampaignRequestCaseList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline CreateCampaignRequestCaseList& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


  protected:
    std::shared_ptr<string> customVariables_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> referenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
