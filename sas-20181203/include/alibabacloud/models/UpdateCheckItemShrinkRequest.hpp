// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKITEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCheckItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistInfo, assistInfoShrink_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(Description, descriptionShrink_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SectionIds, sectionIds_);
      DARABONBA_PTR_TO_JSON(Solution, solutionShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfoShrink_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(Description, descriptionShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SectionIds, sectionIds_);
      DARABONBA_PTR_FROM_JSON(Solution, solutionShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    UpdateCheckItemShrinkRequest() = default ;
    UpdateCheckItemShrinkRequest(const UpdateCheckItemShrinkRequest &) = default ;
    UpdateCheckItemShrinkRequest(UpdateCheckItemShrinkRequest &&) = default ;
    UpdateCheckItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckItemShrinkRequest() = default ;
    UpdateCheckItemShrinkRequest& operator=(const UpdateCheckItemShrinkRequest &) = default ;
    UpdateCheckItemShrinkRequest& operator=(UpdateCheckItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistInfoShrink_ == nullptr
        && this->checkId_ == nullptr && this->checkRule_ == nullptr && this->checkShowName_ == nullptr && this->descriptionShrink_ == nullptr && this->instanceSubType_ == nullptr
        && this->instanceType_ == nullptr && this->remark_ == nullptr && this->riskLevel_ == nullptr && this->sectionIds_ == nullptr && this->solutionShrink_ == nullptr
        && this->status_ == nullptr && this->vendor_ == nullptr; };
    // assistInfoShrink Field Functions 
    bool hasAssistInfoShrink() const { return this->assistInfoShrink_ != nullptr;};
    void deleteAssistInfoShrink() { this->assistInfoShrink_ = nullptr;};
    inline string getAssistInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(assistInfoShrink_, "") };
    inline UpdateCheckItemShrinkRequest& setAssistInfoShrink(string assistInfoShrink) { DARABONBA_PTR_SET_VALUE(assistInfoShrink_, assistInfoShrink) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline UpdateCheckItemShrinkRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkRule Field Functions 
    bool hasCheckRule() const { return this->checkRule_ != nullptr;};
    void deleteCheckRule() { this->checkRule_ = nullptr;};
    inline string getCheckRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
    inline UpdateCheckItemShrinkRequest& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline UpdateCheckItemShrinkRequest& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // descriptionShrink Field Functions 
    bool hasDescriptionShrink() const { return this->descriptionShrink_ != nullptr;};
    void deleteDescriptionShrink() { this->descriptionShrink_ = nullptr;};
    inline string getDescriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(descriptionShrink_, "") };
    inline UpdateCheckItemShrinkRequest& setDescriptionShrink(string descriptionShrink) { DARABONBA_PTR_SET_VALUE(descriptionShrink_, descriptionShrink) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string getInstanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline UpdateCheckItemShrinkRequest& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateCheckItemShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateCheckItemShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline UpdateCheckItemShrinkRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sectionIds Field Functions 
    bool hasSectionIds() const { return this->sectionIds_ != nullptr;};
    void deleteSectionIds() { this->sectionIds_ = nullptr;};
    inline const vector<int64_t> & getSectionIds() const { DARABONBA_PTR_GET_CONST(sectionIds_, vector<int64_t>) };
    inline vector<int64_t> getSectionIds() { DARABONBA_PTR_GET(sectionIds_, vector<int64_t>) };
    inline UpdateCheckItemShrinkRequest& setSectionIds(const vector<int64_t> & sectionIds) { DARABONBA_PTR_SET_VALUE(sectionIds_, sectionIds) };
    inline UpdateCheckItemShrinkRequest& setSectionIds(vector<int64_t> && sectionIds) { DARABONBA_PTR_SET_RVALUE(sectionIds_, sectionIds) };


    // solutionShrink Field Functions 
    bool hasSolutionShrink() const { return this->solutionShrink_ != nullptr;};
    void deleteSolutionShrink() { this->solutionShrink_ = nullptr;};
    inline string getSolutionShrink() const { DARABONBA_PTR_GET_DEFAULT(solutionShrink_, "") };
    inline UpdateCheckItemShrinkRequest& setSolutionShrink(string solutionShrink) { DARABONBA_PTR_SET_VALUE(solutionShrink_, solutionShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateCheckItemShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline UpdateCheckItemShrinkRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Help information for the check item.
    shared_ptr<string> assistInfoShrink_ {};
    // ID of the custom check item to be updated.
    // > You can call the [ListCheckItems](~~ListCheckItems~~) API to get this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> checkId_ {};
    // Definition rule for the custom check item.
    shared_ptr<string> checkRule_ {};
    // Name of the custom check item.
    shared_ptr<string> checkShowName_ {};
    // Description of the check item.
    shared_ptr<string> descriptionShrink_ {};
    // Sub-asset type of the cloud product.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get this parameter.
    shared_ptr<string> instanceSubType_ {};
    // Asset type of the cloud product.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get this parameter.
    shared_ptr<string> instanceType_ {};
    // Remark information
    shared_ptr<string> remark_ {};
    // Risk level of the check item. Values:
    // - **HIGH**: High risk
    // - **MEDIUM**: Medium risk
    // - **LOW**: Low risk
    shared_ptr<string> riskLevel_ {};
    // Array of section IDs associated with the check item.
    shared_ptr<vector<int64_t>> sectionIds_ {};
    // Solution information for the check item.
    shared_ptr<string> solutionShrink_ {};
    // Status of the check item. Values:
    // - **EDIT**: In editing
    // - **RELEASE**: Released
    // 
    // > - Changing from **Released** to **In editing** will clear all historical records
    // > - Only the **Released** status allows the use of the check item for inspection.
    shared_ptr<string> status_ {};
    // Cloud asset vendor.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get the available vendors.
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
