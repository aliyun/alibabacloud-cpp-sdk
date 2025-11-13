// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateCheckItemRequestAssistInfo.hpp>
#include <alibabacloud/models/UpdateCheckItemRequestDescription.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCheckItemRequestSolution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCheckItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SectionIds, sectionIds_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SectionIds, sectionIds_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    UpdateCheckItemRequest() = default ;
    UpdateCheckItemRequest(const UpdateCheckItemRequest &) = default ;
    UpdateCheckItemRequest(UpdateCheckItemRequest &&) = default ;
    UpdateCheckItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckItemRequest() = default ;
    UpdateCheckItemRequest& operator=(const UpdateCheckItemRequest &) = default ;
    UpdateCheckItemRequest& operator=(UpdateCheckItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistInfo_ == nullptr
        && return this->checkId_ == nullptr && return this->checkRule_ == nullptr && return this->checkShowName_ == nullptr && return this->description_ == nullptr && return this->instanceSubType_ == nullptr
        && return this->instanceType_ == nullptr && return this->remark_ == nullptr && return this->riskLevel_ == nullptr && return this->sectionIds_ == nullptr && return this->solution_ == nullptr
        && return this->status_ == nullptr && return this->vendor_ == nullptr; };
    // assistInfo Field Functions 
    bool hasAssistInfo() const { return this->assistInfo_ != nullptr;};
    void deleteAssistInfo() { this->assistInfo_ = nullptr;};
    inline const UpdateCheckItemRequestAssistInfo & assistInfo() const { DARABONBA_PTR_GET_CONST(assistInfo_, UpdateCheckItemRequestAssistInfo) };
    inline UpdateCheckItemRequestAssistInfo assistInfo() { DARABONBA_PTR_GET(assistInfo_, UpdateCheckItemRequestAssistInfo) };
    inline UpdateCheckItemRequest& setAssistInfo(const UpdateCheckItemRequestAssistInfo & assistInfo) { DARABONBA_PTR_SET_VALUE(assistInfo_, assistInfo) };
    inline UpdateCheckItemRequest& setAssistInfo(UpdateCheckItemRequestAssistInfo && assistInfo) { DARABONBA_PTR_SET_RVALUE(assistInfo_, assistInfo) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline UpdateCheckItemRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkRule Field Functions 
    bool hasCheckRule() const { return this->checkRule_ != nullptr;};
    void deleteCheckRule() { this->checkRule_ = nullptr;};
    inline string checkRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
    inline UpdateCheckItemRequest& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline UpdateCheckItemRequest& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const UpdateCheckItemRequestDescription & description() const { DARABONBA_PTR_GET_CONST(description_, UpdateCheckItemRequestDescription) };
    inline UpdateCheckItemRequestDescription description() { DARABONBA_PTR_GET(description_, UpdateCheckItemRequestDescription) };
    inline UpdateCheckItemRequest& setDescription(const UpdateCheckItemRequestDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline UpdateCheckItemRequest& setDescription(UpdateCheckItemRequestDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline UpdateCheckItemRequest& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateCheckItemRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateCheckItemRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline UpdateCheckItemRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sectionIds Field Functions 
    bool hasSectionIds() const { return this->sectionIds_ != nullptr;};
    void deleteSectionIds() { this->sectionIds_ = nullptr;};
    inline const vector<int64_t> & sectionIds() const { DARABONBA_PTR_GET_CONST(sectionIds_, vector<int64_t>) };
    inline vector<int64_t> sectionIds() { DARABONBA_PTR_GET(sectionIds_, vector<int64_t>) };
    inline UpdateCheckItemRequest& setSectionIds(const vector<int64_t> & sectionIds) { DARABONBA_PTR_SET_VALUE(sectionIds_, sectionIds) };
    inline UpdateCheckItemRequest& setSectionIds(vector<int64_t> && sectionIds) { DARABONBA_PTR_SET_RVALUE(sectionIds_, sectionIds) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline const UpdateCheckItemRequestSolution & solution() const { DARABONBA_PTR_GET_CONST(solution_, UpdateCheckItemRequestSolution) };
    inline UpdateCheckItemRequestSolution solution() { DARABONBA_PTR_GET(solution_, UpdateCheckItemRequestSolution) };
    inline UpdateCheckItemRequest& setSolution(const UpdateCheckItemRequestSolution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
    inline UpdateCheckItemRequest& setSolution(UpdateCheckItemRequestSolution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateCheckItemRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline UpdateCheckItemRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Help information for the check item.
    std::shared_ptr<UpdateCheckItemRequestAssistInfo> assistInfo_ = nullptr;
    // ID of the custom check item to be updated.
    // > You can call the [ListCheckItems](~~ListCheckItems~~) API to get this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // Definition rule for the custom check item.
    std::shared_ptr<string> checkRule_ = nullptr;
    // Name of the custom check item.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // Description of the check item.
    std::shared_ptr<UpdateCheckItemRequestDescription> description_ = nullptr;
    // Sub-asset type of the cloud product.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get this parameter.
    std::shared_ptr<string> instanceSubType_ = nullptr;
    // Asset type of the cloud product.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get this parameter.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Remark information
    std::shared_ptr<string> remark_ = nullptr;
    // Risk level of the check item. Values:
    // - **HIGH**: High risk
    // - **MEDIUM**: Medium risk
    // - **LOW**: Low risk
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Array of section IDs associated with the check item.
    std::shared_ptr<vector<int64_t>> sectionIds_ = nullptr;
    // Solution information for the check item.
    std::shared_ptr<UpdateCheckItemRequestSolution> solution_ = nullptr;
    // Status of the check item. Values:
    // - **EDIT**: In editing
    // - **RELEASE**: Released
    // 
    // > - Changing from **Released** to **In editing** will clear all historical records
    // > - Only the **Released** status allows the use of the check item for inspection.
    std::shared_ptr<string> status_ = nullptr;
    // Cloud asset vendor.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get the available vendors.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
