// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMSRESPONSEBODYCHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMSRESPONSEBODYCHECKITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCheckItemsResponseBodyCheckItemsAssistInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckItemsResponseBodyCheckItemsCheckPolicies.hpp>
#include <alibabacloud/models/ListCheckItemsResponseBodyCheckItemsDescription.hpp>
#include <alibabacloud/models/ListCheckItemsResponseBodyCheckItemsSolution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemsResponseBodyCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemsResponseBodyCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckPolicies, checkPolicies_);
      DARABONBA_PTR_TO_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemsResponseBodyCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckPolicies, checkPolicies_);
      DARABONBA_PTR_FROM_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListCheckItemsResponseBodyCheckItems() = default ;
    ListCheckItemsResponseBodyCheckItems(const ListCheckItemsResponseBodyCheckItems &) = default ;
    ListCheckItemsResponseBodyCheckItems(ListCheckItemsResponseBodyCheckItems &&) = default ;
    ListCheckItemsResponseBodyCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemsResponseBodyCheckItems() = default ;
    ListCheckItemsResponseBodyCheckItems& operator=(const ListCheckItemsResponseBodyCheckItems &) = default ;
    ListCheckItemsResponseBodyCheckItems& operator=(ListCheckItemsResponseBodyCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistInfo_ == nullptr
        && return this->checkId_ == nullptr && return this->checkPolicies_ == nullptr && return this->checkRule_ == nullptr && return this->checkShowName_ == nullptr && return this->checkType_ == nullptr
        && return this->description_ == nullptr && return this->instanceSubType_ == nullptr && return this->instanceType_ == nullptr && return this->remark_ == nullptr && return this->riskLevel_ == nullptr
        && return this->solution_ == nullptr && return this->status_ == nullptr && return this->vendor_ == nullptr; };
    // assistInfo Field Functions 
    bool hasAssistInfo() const { return this->assistInfo_ != nullptr;};
    void deleteAssistInfo() { this->assistInfo_ = nullptr;};
    inline const Models::ListCheckItemsResponseBodyCheckItemsAssistInfo & assistInfo() const { DARABONBA_PTR_GET_CONST(assistInfo_, Models::ListCheckItemsResponseBodyCheckItemsAssistInfo) };
    inline Models::ListCheckItemsResponseBodyCheckItemsAssistInfo assistInfo() { DARABONBA_PTR_GET(assistInfo_, Models::ListCheckItemsResponseBodyCheckItemsAssistInfo) };
    inline ListCheckItemsResponseBodyCheckItems& setAssistInfo(const Models::ListCheckItemsResponseBodyCheckItemsAssistInfo & assistInfo) { DARABONBA_PTR_SET_VALUE(assistInfo_, assistInfo) };
    inline ListCheckItemsResponseBodyCheckItems& setAssistInfo(Models::ListCheckItemsResponseBodyCheckItemsAssistInfo && assistInfo) { DARABONBA_PTR_SET_RVALUE(assistInfo_, assistInfo) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckItemsResponseBodyCheckItems& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkPolicies Field Functions 
    bool hasCheckPolicies() const { return this->checkPolicies_ != nullptr;};
    void deleteCheckPolicies() { this->checkPolicies_ = nullptr;};
    inline const vector<Models::ListCheckItemsResponseBodyCheckItemsCheckPolicies> & checkPolicies() const { DARABONBA_PTR_GET_CONST(checkPolicies_, vector<Models::ListCheckItemsResponseBodyCheckItemsCheckPolicies>) };
    inline vector<Models::ListCheckItemsResponseBodyCheckItemsCheckPolicies> checkPolicies() { DARABONBA_PTR_GET(checkPolicies_, vector<Models::ListCheckItemsResponseBodyCheckItemsCheckPolicies>) };
    inline ListCheckItemsResponseBodyCheckItems& setCheckPolicies(const vector<Models::ListCheckItemsResponseBodyCheckItemsCheckPolicies> & checkPolicies) { DARABONBA_PTR_SET_VALUE(checkPolicies_, checkPolicies) };
    inline ListCheckItemsResponseBodyCheckItems& setCheckPolicies(vector<Models::ListCheckItemsResponseBodyCheckItemsCheckPolicies> && checkPolicies) { DARABONBA_PTR_SET_RVALUE(checkPolicies_, checkPolicies) };


    // checkRule Field Functions 
    bool hasCheckRule() const { return this->checkRule_ != nullptr;};
    void deleteCheckRule() { this->checkRule_ = nullptr;};
    inline string checkRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const Models::ListCheckItemsResponseBodyCheckItemsDescription & description() const { DARABONBA_PTR_GET_CONST(description_, Models::ListCheckItemsResponseBodyCheckItemsDescription) };
    inline Models::ListCheckItemsResponseBodyCheckItemsDescription description() { DARABONBA_PTR_GET(description_, Models::ListCheckItemsResponseBodyCheckItemsDescription) };
    inline ListCheckItemsResponseBodyCheckItems& setDescription(const Models::ListCheckItemsResponseBodyCheckItemsDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline ListCheckItemsResponseBodyCheckItems& setDescription(Models::ListCheckItemsResponseBodyCheckItemsDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline const Models::ListCheckItemsResponseBodyCheckItemsSolution & solution() const { DARABONBA_PTR_GET_CONST(solution_, Models::ListCheckItemsResponseBodyCheckItemsSolution) };
    inline Models::ListCheckItemsResponseBodyCheckItemsSolution solution() { DARABONBA_PTR_GET(solution_, Models::ListCheckItemsResponseBodyCheckItemsSolution) };
    inline ListCheckItemsResponseBodyCheckItems& setSolution(const Models::ListCheckItemsResponseBodyCheckItemsSolution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
    inline ListCheckItemsResponseBodyCheckItems& setSolution(Models::ListCheckItemsResponseBodyCheckItemsSolution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListCheckItemsResponseBodyCheckItems& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The help information for the check item.
    std::shared_ptr<Models::ListCheckItemsResponseBodyCheckItemsAssistInfo> assistInfo_ = nullptr;
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // A list of standard, regulation, and section information associated with the check result.
    std::shared_ptr<vector<Models::ListCheckItemsResponseBodyCheckItemsCheckPolicies>> checkPolicies_ = nullptr;
    // 自定义检查项定义规则。
    std::shared_ptr<string> checkRule_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // The source type of the Security Posture check item:
    //  - **CUSTOM**: User-defined
    //  - **SYSTEM**: Predefined by the Security Posture platform
    std::shared_ptr<string> checkType_ = nullptr;
    // The description information of the check item.
    std::shared_ptr<Models::ListCheckItemsResponseBodyCheckItemsDescription> description_ = nullptr;
    // The sub-type of the cloud product\\"s asset.
    std::shared_ptr<string> instanceSubType_ = nullptr;
    // The asset type of the cloud product.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Remark information.
    std::shared_ptr<string> remark_ = nullptr;
    // The risk level of the check item. Values:
    // - **HIGH**: High risk
    // - **MEDIUM**: Medium risk
    // - **LOW**: Low risk
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The solution information for the check item.
    std::shared_ptr<Models::ListCheckItemsResponseBodyCheckItemsSolution> solution_ = nullptr;
    // The status of the check item. Values:
    // - **EDIT**: In editing
    // - **RELEASE**: Released
    std::shared_ptr<string> status_ = nullptr;
    // The cloud asset vendor.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
