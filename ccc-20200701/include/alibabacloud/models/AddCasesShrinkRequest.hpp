// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddCasesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(CaseList, caseListShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(CaseList, caseListShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AddCasesShrinkRequest() = default ;
    AddCasesShrinkRequest(const AddCasesShrinkRequest &) = default ;
    AddCasesShrinkRequest(AddCasesShrinkRequest &&) = default ;
    AddCasesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasesShrinkRequest() = default ;
    AddCasesShrinkRequest& operator=(const AddCasesShrinkRequest &) = default ;
    AddCasesShrinkRequest& operator=(AddCasesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->campaignId_ == nullptr
        && return this->caseListShrink_ == nullptr && return this->instanceId_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AddCasesShrinkRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // caseListShrink Field Functions 
    bool hasCaseListShrink() const { return this->caseListShrink_ != nullptr;};
    void deleteCaseListShrink() { this->caseListShrink_ = nullptr;};
    inline string caseListShrink() const { DARABONBA_PTR_GET_DEFAULT(caseListShrink_, "") };
    inline AddCasesShrinkRequest& setCaseListShrink(string caseListShrink) { DARABONBA_PTR_SET_VALUE(caseListShrink_, caseListShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddCasesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> campaignId_ = nullptr;
    std::shared_ptr<string> caseListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
