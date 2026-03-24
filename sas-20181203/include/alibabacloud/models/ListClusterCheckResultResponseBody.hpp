// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCHECKRESULTRESPONSEBODY_HPP_
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
  class ListClusterCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Checks, checks_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Checks, checks_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterCheckResultResponseBody() = default ;
    ListClusterCheckResultResponseBody(const ListClusterCheckResultResponseBody &) = default ;
    ListClusterCheckResultResponseBody(ListClusterCheckResultResponseBody &&) = default ;
    ListClusterCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterCheckResultResponseBody() = default ;
    ListClusterCheckResultResponseBody& operator=(const ListClusterCheckResultResponseBody &) = default ;
    ListClusterCheckResultResponseBody& operator=(ListClusterCheckResultResponseBody &&) = default ;
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
      // The number of data entries displayed on the current page during pagination.
      shared_ptr<int32_t> count_ {};
      // Page number in the pagination query.
      shared_ptr<int32_t> currentPage_ {};
      // Number of items per page in the pagination query. The default value is **20**, indicating that 20 items are displayed per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of data entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Checks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Checks& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(CheckPolicies, checkPolicies_);
        DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TrialPermission, trialPermission_);
        DARABONBA_PTR_TO_JSON(TrialPermissionType, trialPermissionType_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, Checks& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(CheckPolicies, checkPolicies_);
        DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TrialPermission, trialPermission_);
        DARABONBA_PTR_FROM_JSON(TrialPermissionType, trialPermissionType_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      Checks() = default ;
      Checks(const Checks &) = default ;
      Checks(Checks &&) = default ;
      Checks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Checks() = default ;
      Checks& operator=(const Checks &) = default ;
      Checks& operator=(Checks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CheckPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(RequirementId, requirementId_);
          DARABONBA_PTR_TO_JSON(RequirementShowName, requirementShowName_);
          DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
          DARABONBA_PTR_TO_JSON(SectionShowName, sectionShowName_);
          DARABONBA_PTR_TO_JSON(StandardId, standardId_);
          DARABONBA_PTR_TO_JSON(StandardShowName, standardShowName_);
        };
        friend void from_json(const Darabonba::Json& j, CheckPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(RequirementId, requirementId_);
          DARABONBA_PTR_FROM_JSON(RequirementShowName, requirementShowName_);
          DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
          DARABONBA_PTR_FROM_JSON(SectionShowName, sectionShowName_);
          DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
          DARABONBA_PTR_FROM_JSON(StandardShowName, standardShowName_);
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
        virtual bool empty() const override { return this->requirementId_ == nullptr
        && this->requirementShowName_ == nullptr && this->sectionId_ == nullptr && this->sectionShowName_ == nullptr && this->standardId_ == nullptr && this->standardShowName_ == nullptr; };
        // requirementId Field Functions 
        bool hasRequirementId() const { return this->requirementId_ != nullptr;};
        void deleteRequirementId() { this->requirementId_ = nullptr;};
        inline int64_t getRequirementId() const { DARABONBA_PTR_GET_DEFAULT(requirementId_, 0L) };
        inline CheckPolicies& setRequirementId(int64_t requirementId) { DARABONBA_PTR_SET_VALUE(requirementId_, requirementId) };


        // requirementShowName Field Functions 
        bool hasRequirementShowName() const { return this->requirementShowName_ != nullptr;};
        void deleteRequirementShowName() { this->requirementShowName_ = nullptr;};
        inline string getRequirementShowName() const { DARABONBA_PTR_GET_DEFAULT(requirementShowName_, "") };
        inline CheckPolicies& setRequirementShowName(string requirementShowName) { DARABONBA_PTR_SET_VALUE(requirementShowName_, requirementShowName) };


        // sectionId Field Functions 
        bool hasSectionId() const { return this->sectionId_ != nullptr;};
        void deleteSectionId() { this->sectionId_ = nullptr;};
        inline int64_t getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
        inline CheckPolicies& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


        // sectionShowName Field Functions 
        bool hasSectionShowName() const { return this->sectionShowName_ != nullptr;};
        void deleteSectionShowName() { this->sectionShowName_ = nullptr;};
        inline string getSectionShowName() const { DARABONBA_PTR_GET_DEFAULT(sectionShowName_, "") };
        inline CheckPolicies& setSectionShowName(string sectionShowName) { DARABONBA_PTR_SET_VALUE(sectionShowName_, sectionShowName) };


        // standardId Field Functions 
        bool hasStandardId() const { return this->standardId_ != nullptr;};
        void deleteStandardId() { this->standardId_ = nullptr;};
        inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
        inline CheckPolicies& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


        // standardShowName Field Functions 
        bool hasStandardShowName() const { return this->standardShowName_ != nullptr;};
        void deleteStandardShowName() { this->standardShowName_ = nullptr;};
        inline string getStandardShowName() const { DARABONBA_PTR_GET_DEFAULT(standardShowName_, "") };
        inline CheckPolicies& setStandardShowName(string standardShowName) { DARABONBA_PTR_SET_VALUE(standardShowName_, standardShowName) };


      protected:
        // Requirement ID of the check item.
        shared_ptr<int64_t> requirementId_ {};
        // Display name of the requirement for the check item.
        shared_ptr<string> requirementShowName_ {};
        // Section ID of the check item.
        shared_ptr<int64_t> sectionId_ {};
        // Display name of the section for the check item.
        shared_ptr<string> sectionShowName_ {};
        // Standard ID of the check item.
        shared_ptr<int64_t> standardId_ {};
        // Display name of the standard for the check item.
        shared_ptr<string> standardShowName_ {};
      };

      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->checkId_ == nullptr && this->checkPolicies_ == nullptr && this->checkShowName_ == nullptr && this->checkType_ == nullptr
        && this->instanceSubType_ == nullptr && this->instanceType_ == nullptr && this->lastCheckTime_ == nullptr && this->riskLevel_ == nullptr && this->status_ == nullptr
        && this->trialPermission_ == nullptr && this->trialPermissionType_ == nullptr && this->vendor_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline Checks& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline Checks& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline Checks& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkPolicies Field Functions 
      bool hasCheckPolicies() const { return this->checkPolicies_ != nullptr;};
      void deleteCheckPolicies() { this->checkPolicies_ = nullptr;};
      inline const vector<Checks::CheckPolicies> & getCheckPolicies() const { DARABONBA_PTR_GET_CONST(checkPolicies_, vector<Checks::CheckPolicies>) };
      inline vector<Checks::CheckPolicies> getCheckPolicies() { DARABONBA_PTR_GET(checkPolicies_, vector<Checks::CheckPolicies>) };
      inline Checks& setCheckPolicies(const vector<Checks::CheckPolicies> & checkPolicies) { DARABONBA_PTR_SET_VALUE(checkPolicies_, checkPolicies) };
      inline Checks& setCheckPolicies(vector<Checks::CheckPolicies> && checkPolicies) { DARABONBA_PTR_SET_RVALUE(checkPolicies_, checkPolicies) };


      // checkShowName Field Functions 
      bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
      void deleteCheckShowName() { this->checkShowName_ = nullptr;};
      inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
      inline Checks& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
      inline Checks& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // instanceSubType Field Functions 
      bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
      void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
      inline string getInstanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
      inline Checks& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Checks& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // lastCheckTime Field Functions 
      bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
      void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
      inline int64_t getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, 0L) };
      inline Checks& setLastCheckTime(int64_t lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Checks& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Checks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trialPermission Field Functions 
      bool hasTrialPermission() const { return this->trialPermission_ != nullptr;};
      void deleteTrialPermission() { this->trialPermission_ = nullptr;};
      inline bool getTrialPermission() const { DARABONBA_PTR_GET_DEFAULT(trialPermission_, false) };
      inline Checks& setTrialPermission(bool trialPermission) { DARABONBA_PTR_SET_VALUE(trialPermission_, trialPermission) };


      // trialPermissionType Field Functions 
      bool hasTrialPermissionType() const { return this->trialPermissionType_ != nullptr;};
      void deleteTrialPermissionType() { this->trialPermissionType_ = nullptr;};
      inline int32_t getTrialPermissionType() const { DARABONBA_PTR_GET_DEFAULT(trialPermissionType_, 0) };
      inline Checks& setTrialPermissionType(int32_t trialPermissionType) { DARABONBA_PTR_SET_VALUE(trialPermissionType_, trialPermissionType) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline Checks& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // Subtype of the cloud product.
      shared_ptr<int32_t> assetSubType_ {};
      // Asset type.
      shared_ptr<int32_t> assetType_ {};
      // ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // Information about the standards, requirements, and sections associated with the check result.
      shared_ptr<vector<Checks::CheckPolicies>> checkPolicies_ {};
      // Name of the check item.
      shared_ptr<string> checkShowName_ {};
      // Source type of the security check item:
      //  - **CUSTOM**：User-defined
      //  - **SYSTEM**：Predefined by the Security Platform
      shared_ptr<string> checkType_ {};
      // Subtype of the cloud product asset. Values:
      // 
      // - When **InstanceType** is **ECS**, this parameter can take the following values:
      //     - **INSTANCE**
      //     - **DISK**
      //     - **SECURITY_GROUP**
      // - When **InstanceType** is **ACR**, this parameter can take the following values:
      //     - **REPOSITORY_ENTERPRISE**
      //     - **REPOSITORY_PERSON**
      // - When **InstanceType** is **RAM**, this parameter can take the following values:
      //     - **ALIAS**
      //     - **USER**
      //     - **POLICY**
      //     - **GROUP**
      // - When **InstanceType** is **WAF**, this parameter can take the following values:
      //     - **DOMAIN**
      // - For other **InstanceType** values, this parameter can take the following value:
      //     - **INSTANCE**
      shared_ptr<string> instanceSubType_ {};
      // Asset type of the cloud product.
      shared_ptr<string> instanceType_ {};
      // Timestamp of the latest check, in milliseconds.
      shared_ptr<int64_t> lastCheckTime_ {};
      // Risk level of the check item. Possible values:
      // 
      // - **HIGH**：High
      // - **MEDIUM**：Medium
      // - **LOW**：Low
      shared_ptr<string> riskLevel_ {};
      // Status of the check item. Values:
      // 
      // - **PASS**: Passed
      // - **NOT_PASS**: Not passed
      // - **CHECKING**: Checking
      // - **NOT_CHECK**: Not checked
      // - **WHITELIST**: Whitelisted
      shared_ptr<string> status_ {};
      // Whether the check depends on TRIAL permissions.
      shared_ptr<bool> trialPermission_ {};
      // Whether the check item requires enabling data delivery of operation audit for more than 30 days to build a behavior baseline.
      // - **1**：Required
      // - **0**：Not Required
      shared_ptr<int32_t> trialPermissionType_ {};
      // Vendor of the asset. Values:
      // 
      // 0: Alibaba Cloud
      // 3: Other cloud
      // 4: Other cloud
      // 5: Other cloud
      // 7: Other cloud
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->checks_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<ListClusterCheckResultResponseBody::Checks> & getChecks() const { DARABONBA_PTR_GET_CONST(checks_, vector<ListClusterCheckResultResponseBody::Checks>) };
    inline vector<ListClusterCheckResultResponseBody::Checks> getChecks() { DARABONBA_PTR_GET(checks_, vector<ListClusterCheckResultResponseBody::Checks>) };
    inline ListClusterCheckResultResponseBody& setChecks(const vector<ListClusterCheckResultResponseBody::Checks> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline ListClusterCheckResultResponseBody& setChecks(vector<ListClusterCheckResultResponseBody::Checks> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListClusterCheckResultResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListClusterCheckResultResponseBody::PageInfo) };
    inline ListClusterCheckResultResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListClusterCheckResultResponseBody::PageInfo) };
    inline ListClusterCheckResultResponseBody& setPageInfo(const ListClusterCheckResultResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListClusterCheckResultResponseBody& setPageInfo(ListClusterCheckResultResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information on check results.
    shared_ptr<vector<ListClusterCheckResultResponseBody::Checks>> checks_ {};
    // Pagination information.
    shared_ptr<ListClusterCheckResultResponseBody::PageInfo> pageInfo_ {};
    // The ID of the current request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
