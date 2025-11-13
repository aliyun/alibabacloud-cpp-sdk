// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKITEMSHRINKREQUEST_HPP_
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
  class CreateCheckItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistInfo, assistInfoShrink_);
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
    friend void from_json(const Darabonba::Json& j, CreateCheckItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfoShrink_);
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
    CreateCheckItemShrinkRequest() = default ;
    CreateCheckItemShrinkRequest(const CreateCheckItemShrinkRequest &) = default ;
    CreateCheckItemShrinkRequest(CreateCheckItemShrinkRequest &&) = default ;
    CreateCheckItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckItemShrinkRequest() = default ;
    CreateCheckItemShrinkRequest& operator=(const CreateCheckItemShrinkRequest &) = default ;
    CreateCheckItemShrinkRequest& operator=(CreateCheckItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistInfoShrink_ == nullptr
        && return this->checkRule_ == nullptr && return this->checkShowName_ == nullptr && return this->descriptionShrink_ == nullptr && return this->instanceSubType_ == nullptr && return this->instanceType_ == nullptr
        && return this->remark_ == nullptr && return this->riskLevel_ == nullptr && return this->sectionIds_ == nullptr && return this->solutionShrink_ == nullptr && return this->status_ == nullptr
        && return this->vendor_ == nullptr; };
    // assistInfoShrink Field Functions 
    bool hasAssistInfoShrink() const { return this->assistInfoShrink_ != nullptr;};
    void deleteAssistInfoShrink() { this->assistInfoShrink_ = nullptr;};
    inline string assistInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(assistInfoShrink_, "") };
    inline CreateCheckItemShrinkRequest& setAssistInfoShrink(string assistInfoShrink) { DARABONBA_PTR_SET_VALUE(assistInfoShrink_, assistInfoShrink) };


    // checkRule Field Functions 
    bool hasCheckRule() const { return this->checkRule_ != nullptr;};
    void deleteCheckRule() { this->checkRule_ = nullptr;};
    inline string checkRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
    inline CreateCheckItemShrinkRequest& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline CreateCheckItemShrinkRequest& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // descriptionShrink Field Functions 
    bool hasDescriptionShrink() const { return this->descriptionShrink_ != nullptr;};
    void deleteDescriptionShrink() { this->descriptionShrink_ = nullptr;};
    inline string descriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(descriptionShrink_, "") };
    inline CreateCheckItemShrinkRequest& setDescriptionShrink(string descriptionShrink) { DARABONBA_PTR_SET_VALUE(descriptionShrink_, descriptionShrink) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline CreateCheckItemShrinkRequest& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateCheckItemShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateCheckItemShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline CreateCheckItemShrinkRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sectionIds Field Functions 
    bool hasSectionIds() const { return this->sectionIds_ != nullptr;};
    void deleteSectionIds() { this->sectionIds_ = nullptr;};
    inline const vector<int64_t> & sectionIds() const { DARABONBA_PTR_GET_CONST(sectionIds_, vector<int64_t>) };
    inline vector<int64_t> sectionIds() { DARABONBA_PTR_GET(sectionIds_, vector<int64_t>) };
    inline CreateCheckItemShrinkRequest& setSectionIds(const vector<int64_t> & sectionIds) { DARABONBA_PTR_SET_VALUE(sectionIds_, sectionIds) };
    inline CreateCheckItemShrinkRequest& setSectionIds(vector<int64_t> && sectionIds) { DARABONBA_PTR_SET_RVALUE(sectionIds_, sectionIds) };


    // solutionShrink Field Functions 
    bool hasSolutionShrink() const { return this->solutionShrink_ != nullptr;};
    void deleteSolutionShrink() { this->solutionShrink_ = nullptr;};
    inline string solutionShrink() const { DARABONBA_PTR_GET_DEFAULT(solutionShrink_, "") };
    inline CreateCheckItemShrinkRequest& setSolutionShrink(string solutionShrink) { DARABONBA_PTR_SET_VALUE(solutionShrink_, solutionShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCheckItemShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline CreateCheckItemShrinkRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Help information for the check item.
    std::shared_ptr<string> assistInfoShrink_ = nullptr;
    // Definition rule for the custom check item.
    // 
    // This parameter is required.
    std::shared_ptr<string> checkRule_ = nullptr;
    // Name of the custom check item.
    // 
    // This parameter is required.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // Description information of the check item.
    std::shared_ptr<string> descriptionShrink_ = nullptr;
    // Sub-asset type of the cloud product.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceSubType_ = nullptr;
    // Asset type of the cloud product.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Remark information.
    std::shared_ptr<string> remark_ = nullptr;
    // Risk level of the check item. Values:
    // - **HIGH**: High risk
    // - **MEDIUM**: Medium risk
    // - **LOW**: Low risk
    // 
    // This parameter is required.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Array of section IDs associated with the check item.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> sectionIds_ = nullptr;
    // Solution information for the check item.
    std::shared_ptr<string> solutionShrink_ = nullptr;
    // Status of the check item. Values:
    // - **EDIT**: In editing
    // - **RELEASE**: Released
    // 
    // > - Changing from **Released** to **In editing** will clear all historical records
    // > - Only the **Released** status allows the use of the check item for inspection.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // Cloud asset vendor.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get the available vendors.
    // 
    // This parameter is required.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
