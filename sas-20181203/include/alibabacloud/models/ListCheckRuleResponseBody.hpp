// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRULERESPONSEBODY_HPP_
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
  class ListCheckRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRules, checkRules_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRules, checkRules_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckRuleResponseBody() = default ;
    ListCheckRuleResponseBody(const ListCheckRuleResponseBody &) = default ;
    ListCheckRuleResponseBody(ListCheckRuleResponseBody &&) = default ;
    ListCheckRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRuleResponseBody() = default ;
    ListCheckRuleResponseBody& operator=(const ListCheckRuleResponseBody &) = default ;
    ListCheckRuleResponseBody& operator=(ListCheckRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of data entries displayed on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number in a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of data entries displayed per page in a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of data entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    class CheckRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CheckRules& obj) { 
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
      CheckRules() = default ;
      CheckRules(const CheckRules &) = default ;
      CheckRules(CheckRules &&) = default ;
      CheckRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckRules() = default ;
      CheckRules& operator=(const CheckRules &) = default ;
      CheckRules& operator=(CheckRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CheckPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(sectionShowName, sectionShowName_);
        };
        friend void from_json(const Darabonba::Json& j, CheckPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(sectionShowName, sectionShowName_);
        };
        CheckPolicies() = default ;
        CheckPolicies(const CheckPolicies &) = default ;
        CheckPolicies(CheckPolicies &&) = default ;
        CheckPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CheckPolicies() = default ;
        CheckPolicies& operator=(const CheckPolicies &) = default ;
        CheckPolicies& operator=(CheckPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sectionShowName_ == nullptr; };
        // sectionShowName Field Functions 
        bool hasSectionShowName() const { return this->sectionShowName_ != nullptr;};
        void deleteSectionShowName() { this->sectionShowName_ = nullptr;};
        inline string getSectionShowName() const { DARABONBA_PTR_GET_DEFAULT(sectionShowName_, "") };
        inline CheckPolicies& setSectionShowName(string sectionShowName) { DARABONBA_PTR_SET_VALUE(sectionShowName_, sectionShowName) };


      protected:
        // Display name of the item\\"s chapter.
        shared_ptr<string> sectionShowName_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->assetSubType_ == nullptr && this->assetType_ == nullptr && this->checkId_ == nullptr && this->checkPolicies_ == nullptr && this->checkShowName_ == nullptr
        && this->instanceSubType_ == nullptr && this->instanceType_ == nullptr && this->remark_ == nullptr && this->ruleId_ == nullptr && this->ruleType_ == nullptr
        && this->scopeType_ == nullptr && this->vendor_ == nullptr && this->vendorName_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline CheckRules& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline CheckRules& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline CheckRules& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline CheckRules& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkPolicies Field Functions 
      bool hasCheckPolicies() const { return this->checkPolicies_ != nullptr;};
      void deleteCheckPolicies() { this->checkPolicies_ = nullptr;};
      inline const vector<CheckRules::CheckPolicies> & getCheckPolicies() const { DARABONBA_PTR_GET_CONST(checkPolicies_, vector<CheckRules::CheckPolicies>) };
      inline vector<CheckRules::CheckPolicies> getCheckPolicies() { DARABONBA_PTR_GET(checkPolicies_, vector<CheckRules::CheckPolicies>) };
      inline CheckRules& setCheckPolicies(const vector<CheckRules::CheckPolicies> & checkPolicies) { DARABONBA_PTR_SET_VALUE(checkPolicies_, checkPolicies) };
      inline CheckRules& setCheckPolicies(vector<CheckRules::CheckPolicies> && checkPolicies) { DARABONBA_PTR_SET_RVALUE(checkPolicies_, checkPolicies) };


      // checkShowName Field Functions 
      bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
      void deleteCheckShowName() { this->checkShowName_ = nullptr;};
      inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
      inline CheckRules& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


      // instanceSubType Field Functions 
      bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
      void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
      inline string getInstanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
      inline CheckRules& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline CheckRules& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline CheckRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline CheckRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline CheckRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline CheckRules& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline CheckRules& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      // vendorName Field Functions 
      bool hasVendorName() const { return this->vendorName_ != nullptr;};
      void deleteVendorName() { this->vendorName_ = nullptr;};
      inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
      inline CheckRules& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    protected:
      // The UID of the current user.
      shared_ptr<int64_t> aliUid_ {};
      // The subtype of the cloud product.
      // 
      // > For specific meanings, refer to the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) AssetSubType.
      shared_ptr<int32_t> assetSubType_ {};
      // The type of cloud asset.
      // > For specific meanings, refer to the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) AssetType.
      shared_ptr<int32_t> assetType_ {};
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The display name of the check item section.
      shared_ptr<vector<CheckRules::CheckPolicies>> checkPolicies_ {};
      // The name of the check item.
      shared_ptr<string> checkShowName_ {};
      // The sub-asset type of the cloud product.
      shared_ptr<string> instanceSubType_ {};
      // The asset type of the cloud product.
      shared_ptr<string> instanceType_ {};
      // Remark.
      shared_ptr<string> remark_ {};
      // The ID of the rule.
      shared_ptr<int64_t> ruleId_ {};
      // The type of rule. Default is **WHITE**. Values:
      // - **WHITE**: Add to whitelist
      shared_ptr<string> ruleType_ {};
      // The scope where the rule applies. Values:
      // - **INSTNACE**: Instance
      // - **ITEM**: Check item
      shared_ptr<string> scopeType_ {};
      // The server vendor. Values:
      // 
      // - **0**: Alibaba Cloud asset
      // - **1**: Non-cloud asset
      // - **2**: IDC asset
      // - **3**, **4**, **5**, **7**: Other cloud assets
      shared_ptr<int32_t> vendor_ {};
      // The name of the server provider.
      shared_ptr<string> vendorName_ {};
    };

    virtual bool empty() const override { return this->checkRules_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // checkRules Field Functions 
    bool hasCheckRules() const { return this->checkRules_ != nullptr;};
    void deleteCheckRules() { this->checkRules_ = nullptr;};
    inline const vector<ListCheckRuleResponseBody::CheckRules> & getCheckRules() const { DARABONBA_PTR_GET_CONST(checkRules_, vector<ListCheckRuleResponseBody::CheckRules>) };
    inline vector<ListCheckRuleResponseBody::CheckRules> getCheckRules() { DARABONBA_PTR_GET(checkRules_, vector<ListCheckRuleResponseBody::CheckRules>) };
    inline ListCheckRuleResponseBody& setCheckRules(const vector<ListCheckRuleResponseBody::CheckRules> & checkRules) { DARABONBA_PTR_SET_VALUE(checkRules_, checkRules) };
    inline ListCheckRuleResponseBody& setCheckRules(vector<ListCheckRuleResponseBody::CheckRules> && checkRules) { DARABONBA_PTR_SET_RVALUE(checkRules_, checkRules) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckRuleResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckRuleResponseBody::PageInfo) };
    inline ListCheckRuleResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckRuleResponseBody::PageInfo) };
    inline ListCheckRuleResponseBody& setPageInfo(const ListCheckRuleResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckRuleResponseBody& setPageInfo(ListCheckRuleResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Check rules.
    shared_ptr<vector<ListCheckRuleResponseBody::CheckRules>> checkRules_ {};
    // Pagination information.
    shared_ptr<ListCheckRuleResponseBody::PageInfo> pageInfo_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request. It can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
