// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCheckItemRequestAssistInfo.hpp>
#include <alibabacloud/models/CreateCheckItemRequestDescription.hpp>
#include <vector>
#include <alibabacloud/models/CreateCheckItemRequestSolution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateCheckItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistInfo, assistInfo_);
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
    friend void from_json(const Darabonba::Json& j, CreateCheckItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfo_);
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
    CreateCheckItemRequest() = default ;
    CreateCheckItemRequest(const CreateCheckItemRequest &) = default ;
    CreateCheckItemRequest(CreateCheckItemRequest &&) = default ;
    CreateCheckItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckItemRequest() = default ;
    CreateCheckItemRequest& operator=(const CreateCheckItemRequest &) = default ;
    CreateCheckItemRequest& operator=(CreateCheckItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistInfo_ == nullptr
        && return this->checkRule_ == nullptr && return this->checkShowName_ == nullptr && return this->description_ == nullptr && return this->instanceSubType_ == nullptr && return this->instanceType_ == nullptr
        && return this->remark_ == nullptr && return this->riskLevel_ == nullptr && return this->sectionIds_ == nullptr && return this->solution_ == nullptr && return this->status_ == nullptr
        && return this->vendor_ == nullptr; };
    // assistInfo Field Functions 
    bool hasAssistInfo() const { return this->assistInfo_ != nullptr;};
    void deleteAssistInfo() { this->assistInfo_ = nullptr;};
    inline const CreateCheckItemRequestAssistInfo & assistInfo() const { DARABONBA_PTR_GET_CONST(assistInfo_, CreateCheckItemRequestAssistInfo) };
    inline CreateCheckItemRequestAssistInfo assistInfo() { DARABONBA_PTR_GET(assistInfo_, CreateCheckItemRequestAssistInfo) };
    inline CreateCheckItemRequest& setAssistInfo(const CreateCheckItemRequestAssistInfo & assistInfo) { DARABONBA_PTR_SET_VALUE(assistInfo_, assistInfo) };
    inline CreateCheckItemRequest& setAssistInfo(CreateCheckItemRequestAssistInfo && assistInfo) { DARABONBA_PTR_SET_RVALUE(assistInfo_, assistInfo) };


    // checkRule Field Functions 
    bool hasCheckRule() const { return this->checkRule_ != nullptr;};
    void deleteCheckRule() { this->checkRule_ = nullptr;};
    inline string checkRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
    inline CreateCheckItemRequest& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline CreateCheckItemRequest& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const CreateCheckItemRequestDescription & description() const { DARABONBA_PTR_GET_CONST(description_, CreateCheckItemRequestDescription) };
    inline CreateCheckItemRequestDescription description() { DARABONBA_PTR_GET(description_, CreateCheckItemRequestDescription) };
    inline CreateCheckItemRequest& setDescription(const CreateCheckItemRequestDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline CreateCheckItemRequest& setDescription(CreateCheckItemRequestDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline CreateCheckItemRequest& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateCheckItemRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateCheckItemRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline CreateCheckItemRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sectionIds Field Functions 
    bool hasSectionIds() const { return this->sectionIds_ != nullptr;};
    void deleteSectionIds() { this->sectionIds_ = nullptr;};
    inline const vector<int64_t> & sectionIds() const { DARABONBA_PTR_GET_CONST(sectionIds_, vector<int64_t>) };
    inline vector<int64_t> sectionIds() { DARABONBA_PTR_GET(sectionIds_, vector<int64_t>) };
    inline CreateCheckItemRequest& setSectionIds(const vector<int64_t> & sectionIds) { DARABONBA_PTR_SET_VALUE(sectionIds_, sectionIds) };
    inline CreateCheckItemRequest& setSectionIds(vector<int64_t> && sectionIds) { DARABONBA_PTR_SET_RVALUE(sectionIds_, sectionIds) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline const CreateCheckItemRequestSolution & solution() const { DARABONBA_PTR_GET_CONST(solution_, CreateCheckItemRequestSolution) };
    inline CreateCheckItemRequestSolution solution() { DARABONBA_PTR_GET(solution_, CreateCheckItemRequestSolution) };
    inline CreateCheckItemRequest& setSolution(const CreateCheckItemRequestSolution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
    inline CreateCheckItemRequest& setSolution(CreateCheckItemRequestSolution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCheckItemRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline CreateCheckItemRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Help information for the check item.
    std::shared_ptr<CreateCheckItemRequestAssistInfo> assistInfo_ = nullptr;
    // Definition rule for the custom check item.
    // 
    // This parameter is required.
    std::shared_ptr<string> checkRule_ = nullptr;
    // Name of the custom check item.
    // 
    // This parameter is required.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // Description information of the check item.
    std::shared_ptr<CreateCheckItemRequestDescription> description_ = nullptr;
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
    std::shared_ptr<CreateCheckItemRequestSolution> solution_ = nullptr;
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
