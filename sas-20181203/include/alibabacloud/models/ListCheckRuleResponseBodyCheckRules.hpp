// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRULERESPONSEBODYCHECKRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRULERESPONSEBODYCHECKRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckRuleResponseBodyCheckRulesCheckPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckRuleResponseBodyCheckRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRuleResponseBodyCheckRules& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckPolicies, checkPolicies_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRuleResponseBodyCheckRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckPolicies, checkPolicies_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
    };
    ListCheckRuleResponseBodyCheckRules() = default ;
    ListCheckRuleResponseBodyCheckRules(const ListCheckRuleResponseBodyCheckRules &) = default ;
    ListCheckRuleResponseBodyCheckRules(ListCheckRuleResponseBodyCheckRules &&) = default ;
    ListCheckRuleResponseBodyCheckRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRuleResponseBodyCheckRules() = default ;
    ListCheckRuleResponseBodyCheckRules& operator=(const ListCheckRuleResponseBodyCheckRules &) = default ;
    ListCheckRuleResponseBodyCheckRules& operator=(ListCheckRuleResponseBodyCheckRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->assetSubType_ == nullptr && return this->assetType_ == nullptr && return this->checkId_ == nullptr && return this->checkPolicies_ == nullptr && return this->checkShowName_ == nullptr
        && return this->instanceSubType_ == nullptr && return this->instanceType_ == nullptr && return this->remark_ == nullptr && return this->ruleId_ == nullptr && return this->ruleType_ == nullptr
        && return this->scopeType_ == nullptr && return this->vendor_ == nullptr && return this->vendorName_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListCheckRuleResponseBodyCheckRules& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline ListCheckRuleResponseBodyCheckRules& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline ListCheckRuleResponseBodyCheckRules& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckRuleResponseBodyCheckRules& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkPolicies Field Functions 
    bool hasCheckPolicies() const { return this->checkPolicies_ != nullptr;};
    void deleteCheckPolicies() { this->checkPolicies_ = nullptr;};
    inline const vector<Models::ListCheckRuleResponseBodyCheckRulesCheckPolicies> & checkPolicies() const { DARABONBA_PTR_GET_CONST(checkPolicies_, vector<Models::ListCheckRuleResponseBodyCheckRulesCheckPolicies>) };
    inline vector<Models::ListCheckRuleResponseBodyCheckRulesCheckPolicies> checkPolicies() { DARABONBA_PTR_GET(checkPolicies_, vector<Models::ListCheckRuleResponseBodyCheckRulesCheckPolicies>) };
    inline ListCheckRuleResponseBodyCheckRules& setCheckPolicies(const vector<Models::ListCheckRuleResponseBodyCheckRulesCheckPolicies> & checkPolicies) { DARABONBA_PTR_SET_VALUE(checkPolicies_, checkPolicies) };
    inline ListCheckRuleResponseBodyCheckRules& setCheckPolicies(vector<Models::ListCheckRuleResponseBodyCheckRulesCheckPolicies> && checkPolicies) { DARABONBA_PTR_SET_RVALUE(checkPolicies_, checkPolicies) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline ListCheckRuleResponseBodyCheckRules& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline ListCheckRuleResponseBodyCheckRules& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListCheckRuleResponseBodyCheckRules& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCheckRuleResponseBodyCheckRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListCheckRuleResponseBodyCheckRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListCheckRuleResponseBodyCheckRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ListCheckRuleResponseBodyCheckRules& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline ListCheckRuleResponseBodyCheckRules& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string vendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline ListCheckRuleResponseBodyCheckRules& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


  protected:
    // The UID of the current user.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The subtype of the cloud product.
    // 
    // > For specific meanings, refer to the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) AssetSubType.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The type of cloud asset.
    // > For specific meanings, refer to the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) AssetType.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The display name of the check item section.
    std::shared_ptr<vector<Models::ListCheckRuleResponseBodyCheckRulesCheckPolicies>> checkPolicies_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // The sub-asset type of the cloud product.
    std::shared_ptr<string> instanceSubType_ = nullptr;
    // The asset type of the cloud product.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Remark.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The type of rule. Default is **WHITE**. Values:
    // - **WHITE**: Add to whitelist
    std::shared_ptr<string> ruleType_ = nullptr;
    // The scope where the rule applies. Values:
    // - **INSTNACE**: Instance
    // - **ITEM**: Check item
    std::shared_ptr<string> scopeType_ = nullptr;
    // The server vendor. Values:
    // 
    // - **0**: Alibaba Cloud asset
    // - **1**: Non-cloud asset
    // - **2**: IDC asset
    // - **3**, **4**, **5**, **7**: Other cloud assets
    std::shared_ptr<int32_t> vendor_ = nullptr;
    // The name of the server provider.
    std::shared_ptr<string> vendorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
