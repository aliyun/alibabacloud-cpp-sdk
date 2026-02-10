// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTRESPONSEBODY_HPP_
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
  class DescribeCloudVendorAccountAKListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorAccountAKListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudVendorAccountAKs, cloudVendorAccountAKs_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorAccountAKListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudVendorAccountAKs, cloudVendorAccountAKs_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudVendorAccountAKListResponseBody() = default ;
    DescribeCloudVendorAccountAKListResponseBody(const DescribeCloudVendorAccountAKListResponseBody &) = default ;
    DescribeCloudVendorAccountAKListResponseBody(DescribeCloudVendorAccountAKListResponseBody &&) = default ;
    DescribeCloudVendorAccountAKListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorAccountAKListResponseBody() = default ;
    DescribeCloudVendorAccountAKListResponseBody& operator=(const DescribeCloudVendorAccountAKListResponseBody &) = default ;
    DescribeCloudVendorAccountAKListResponseBody& operator=(DescribeCloudVendorAccountAKListResponseBody &&) = default ;
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class CloudVendorAccountAKs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudVendorAccountAKs& obj) { 
        DARABONBA_PTR_TO_JSON(AkType, akType_);
        DARABONBA_PTR_TO_JSON(AuthId, authId_);
        DARABONBA_PTR_TO_JSON(AuthModules, authModules_);
        DARABONBA_PTR_TO_JSON(CtdrCloudUserId, ctdrCloudUserId_);
        DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(SecretId, secretId_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        DARABONBA_PTR_TO_JSON(VendorAuthAlias, vendorAuthAlias_);
        DARABONBA_PTR_TO_JSON(VendorUid, vendorUid_);
        DARABONBA_PTR_TO_JSON(VendorUserName, vendorUserName_);
      };
      friend void from_json(const Darabonba::Json& j, CloudVendorAccountAKs& obj) { 
        DARABONBA_PTR_FROM_JSON(AkType, akType_);
        DARABONBA_PTR_FROM_JSON(AuthId, authId_);
        DARABONBA_PTR_FROM_JSON(AuthModules, authModules_);
        DARABONBA_PTR_FROM_JSON(CtdrCloudUserId, ctdrCloudUserId_);
        DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        DARABONBA_PTR_FROM_JSON(VendorAuthAlias, vendorAuthAlias_);
        DARABONBA_PTR_FROM_JSON(VendorUid, vendorUid_);
        DARABONBA_PTR_FROM_JSON(VendorUserName, vendorUserName_);
      };
      CloudVendorAccountAKs() = default ;
      CloudVendorAccountAKs(const CloudVendorAccountAKs &) = default ;
      CloudVendorAccountAKs(CloudVendorAccountAKs &&) = default ;
      CloudVendorAccountAKs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudVendorAccountAKs() = default ;
      CloudVendorAccountAKs& operator=(const CloudVendorAccountAKs &) = default ;
      CloudVendorAccountAKs& operator=(CloudVendorAccountAKs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthModules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthModules& obj) { 
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Module, module_);
          DARABONBA_PTR_TO_JSON(ModuleAssetType, moduleAssetType_);
          DARABONBA_PTR_TO_JSON(ModuleDisp, moduleDisp_);
          DARABONBA_PTR_TO_JSON(ModuleServiceStatus, moduleServiceStatus_);
          DARABONBA_PTR_TO_JSON(ModuleStatement, moduleStatement_);
          DARABONBA_PTR_TO_JSON(TrailMessage, trailMessage_);
          DARABONBA_PTR_TO_JSON(TrailStatus, trailStatus_);
        };
        friend void from_json(const Darabonba::Json& j, AuthModules& obj) { 
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Module, module_);
          DARABONBA_PTR_FROM_JSON(ModuleAssetType, moduleAssetType_);
          DARABONBA_PTR_FROM_JSON(ModuleDisp, moduleDisp_);
          DARABONBA_PTR_FROM_JSON(ModuleServiceStatus, moduleServiceStatus_);
          DARABONBA_PTR_FROM_JSON(ModuleStatement, moduleStatement_);
          DARABONBA_PTR_FROM_JSON(TrailMessage, trailMessage_);
          DARABONBA_PTR_FROM_JSON(TrailStatus, trailStatus_);
        };
        AuthModules() = default ;
        AuthModules(const AuthModules &) = default ;
        AuthModules(AuthModules &&) = default ;
        AuthModules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthModules() = default ;
        AuthModules& operator=(const AuthModules &) = default ;
        AuthModules& operator=(AuthModules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->message_ == nullptr
        && this->module_ == nullptr && this->moduleAssetType_ == nullptr && this->moduleDisp_ == nullptr && this->moduleServiceStatus_ == nullptr && this->moduleStatement_ == nullptr
        && this->trailMessage_ == nullptr && this->trailStatus_ == nullptr; };
        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AuthModules& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
        inline AuthModules& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


        // moduleAssetType Field Functions 
        bool hasModuleAssetType() const { return this->moduleAssetType_ != nullptr;};
        void deleteModuleAssetType() { this->moduleAssetType_ = nullptr;};
        inline string getModuleAssetType() const { DARABONBA_PTR_GET_DEFAULT(moduleAssetType_, "") };
        inline AuthModules& setModuleAssetType(string moduleAssetType) { DARABONBA_PTR_SET_VALUE(moduleAssetType_, moduleAssetType) };


        // moduleDisp Field Functions 
        bool hasModuleDisp() const { return this->moduleDisp_ != nullptr;};
        void deleteModuleDisp() { this->moduleDisp_ = nullptr;};
        inline string getModuleDisp() const { DARABONBA_PTR_GET_DEFAULT(moduleDisp_, "") };
        inline AuthModules& setModuleDisp(string moduleDisp) { DARABONBA_PTR_SET_VALUE(moduleDisp_, moduleDisp) };


        // moduleServiceStatus Field Functions 
        bool hasModuleServiceStatus() const { return this->moduleServiceStatus_ != nullptr;};
        void deleteModuleServiceStatus() { this->moduleServiceStatus_ = nullptr;};
        inline int32_t getModuleServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleServiceStatus_, 0) };
        inline AuthModules& setModuleServiceStatus(int32_t moduleServiceStatus) { DARABONBA_PTR_SET_VALUE(moduleServiceStatus_, moduleServiceStatus) };


        // moduleStatement Field Functions 
        bool hasModuleStatement() const { return this->moduleStatement_ != nullptr;};
        void deleteModuleStatement() { this->moduleStatement_ = nullptr;};
        inline string getModuleStatement() const { DARABONBA_PTR_GET_DEFAULT(moduleStatement_, "") };
        inline AuthModules& setModuleStatement(string moduleStatement) { DARABONBA_PTR_SET_VALUE(moduleStatement_, moduleStatement) };


        // trailMessage Field Functions 
        bool hasTrailMessage() const { return this->trailMessage_ != nullptr;};
        void deleteTrailMessage() { this->trailMessage_ = nullptr;};
        inline string getTrailMessage() const { DARABONBA_PTR_GET_DEFAULT(trailMessage_, "") };
        inline AuthModules& setTrailMessage(string trailMessage) { DARABONBA_PTR_SET_VALUE(trailMessage_, trailMessage) };


        // trailStatus Field Functions 
        bool hasTrailStatus() const { return this->trailStatus_ != nullptr;};
        void deleteTrailStatus() { this->trailStatus_ = nullptr;};
        inline string getTrailStatus() const { DARABONBA_PTR_GET_DEFAULT(trailStatus_, "") };
        inline AuthModules& setTrailStatus(string trailStatus) { DARABONBA_PTR_SET_VALUE(trailStatus_, trailStatus) };


      protected:
        // The error message of the module.
        shared_ptr<string> message_ {};
        // The code of the module. Valid values:
        // 
        // *   **HOST**: host
        // *   **CSPM**: configuration assessment
        // *   **SIEM**: CloudSiem
        // *   **TRIAL**: log audit
        shared_ptr<string> module_ {};
        // The cloud asset that is associated with the module.
        shared_ptr<string> moduleAssetType_ {};
        // The display name of the module.
        shared_ptr<string> moduleDisp_ {};
        // The service status of the module. Valid values:
        // 
        // *   **0**: being used
        // *   **1**: exception occurred
        // *   **2**: being validated
        // *   **3**: validation timed out
        shared_ptr<int32_t> moduleServiceStatus_ {};
        // The permission description of the module.
        shared_ptr<string> moduleStatement_ {};
        // The error message of the log audit service.
        shared_ptr<string> trailMessage_ {};
        // The status of the log audit service. Valid values:
        // 
        // *   **init**: being initialized
        // *   **verify**: being validated
        // *   **enable**: enabled
        // *   **disable**: disabled
        // *   **error**: exception occurred
        // *   **timeout**: validation timed out
        shared_ptr<string> trailStatus_ {};
      };

      virtual bool empty() const override { return this->akType_ == nullptr
        && this->authId_ == nullptr && this->authModules_ == nullptr && this->ctdrCloudUserId_ == nullptr && this->extendInfo_ == nullptr && this->message_ == nullptr
        && this->secretId_ == nullptr && this->serviceStatus_ == nullptr && this->status_ == nullptr && this->vendor_ == nullptr && this->vendorAuthAlias_ == nullptr
        && this->vendorUid_ == nullptr && this->vendorUserName_ == nullptr; };
      // akType Field Functions 
      bool hasAkType() const { return this->akType_ != nullptr;};
      void deleteAkType() { this->akType_ = nullptr;};
      inline string getAkType() const { DARABONBA_PTR_GET_DEFAULT(akType_, "") };
      inline CloudVendorAccountAKs& setAkType(string akType) { DARABONBA_PTR_SET_VALUE(akType_, akType) };


      // authId Field Functions 
      bool hasAuthId() const { return this->authId_ != nullptr;};
      void deleteAuthId() { this->authId_ = nullptr;};
      inline int64_t getAuthId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
      inline CloudVendorAccountAKs& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


      // authModules Field Functions 
      bool hasAuthModules() const { return this->authModules_ != nullptr;};
      void deleteAuthModules() { this->authModules_ = nullptr;};
      inline const vector<CloudVendorAccountAKs::AuthModules> & getAuthModules() const { DARABONBA_PTR_GET_CONST(authModules_, vector<CloudVendorAccountAKs::AuthModules>) };
      inline vector<CloudVendorAccountAKs::AuthModules> getAuthModules() { DARABONBA_PTR_GET(authModules_, vector<CloudVendorAccountAKs::AuthModules>) };
      inline CloudVendorAccountAKs& setAuthModules(const vector<CloudVendorAccountAKs::AuthModules> & authModules) { DARABONBA_PTR_SET_VALUE(authModules_, authModules) };
      inline CloudVendorAccountAKs& setAuthModules(vector<CloudVendorAccountAKs::AuthModules> && authModules) { DARABONBA_PTR_SET_RVALUE(authModules_, authModules) };


      // ctdrCloudUserId Field Functions 
      bool hasCtdrCloudUserId() const { return this->ctdrCloudUserId_ != nullptr;};
      void deleteCtdrCloudUserId() { this->ctdrCloudUserId_ = nullptr;};
      inline string getCtdrCloudUserId() const { DARABONBA_PTR_GET_DEFAULT(ctdrCloudUserId_, "") };
      inline CloudVendorAccountAKs& setCtdrCloudUserId(string ctdrCloudUserId) { DARABONBA_PTR_SET_VALUE(ctdrCloudUserId_, ctdrCloudUserId) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline CloudVendorAccountAKs& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline CloudVendorAccountAKs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline CloudVendorAccountAKs& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline int32_t getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
      inline CloudVendorAccountAKs& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline CloudVendorAccountAKs& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline CloudVendorAccountAKs& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      // vendorAuthAlias Field Functions 
      bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
      void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
      inline string getVendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
      inline CloudVendorAccountAKs& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


      // vendorUid Field Functions 
      bool hasVendorUid() const { return this->vendorUid_ != nullptr;};
      void deleteVendorUid() { this->vendorUid_ = nullptr;};
      inline string getVendorUid() const { DARABONBA_PTR_GET_DEFAULT(vendorUid_, "") };
      inline CloudVendorAccountAKs& setVendorUid(string vendorUid) { DARABONBA_PTR_SET_VALUE(vendorUid_, vendorUid) };


      // vendorUserName Field Functions 
      bool hasVendorUserName() const { return this->vendorUserName_ != nullptr;};
      void deleteVendorUserName() { this->vendorUserName_ = nullptr;};
      inline string getVendorUserName() const { DARABONBA_PTR_GET_DEFAULT(vendorUserName_, "") };
      inline CloudVendorAccountAKs& setVendorUserName(string vendorUserName) { DARABONBA_PTR_SET_VALUE(vendorUserName_, vendorUserName) };


    protected:
      // The type of the account to which the AccessKey pair belongs. Valid values:
      // 
      // *   **primary**: a primary account
      // *   **sub**: a sub-account
      shared_ptr<string> akType_ {};
      // The unique ID of the AccessKey pair.
      shared_ptr<int64_t> authId_ {};
      // The modules that are associated with the AccessKey pair.
      shared_ptr<vector<CloudVendorAccountAKs::AuthModules>> authModules_ {};
      // The Account ID.
      shared_ptr<string> ctdrCloudUserId_ {};
      // The extended information of the module.
      shared_ptr<string> extendInfo_ {};
      // The error message of the AccessKey pair.
      shared_ptr<string> message_ {};
      // The AccessKey ID.
      shared_ptr<string> secretId_ {};
      // The service status of the AccessKey pair. Valid values:
      // 
      // *   **0**: being used
      // *   **1**: exception occurred
      // *   **2**: being validated
      // *   **3**: validation timed out
      shared_ptr<int32_t> serviceStatus_ {};
      // The status of the AccessKey pair. Valid values:
      // 
      // *   **0**: enabled
      // *   **1**: disabled
      shared_ptr<int32_t> status_ {};
      // The cloud service provider. Valid values:
      // 
      // *   **Tencent**: Tencent Cloud
      // *   **HUAWEICLOUD**: Huawei Cloud
      // *   **Azure**: Microsoft Azure
      // *   **AWS**: Amazon Web Services (AWS)
      shared_ptr<string> vendor_ {};
      // The name of the AccessKey pair.
      shared_ptr<string> vendorAuthAlias_ {};
      // Account ID of the multi-cloud instance.
      shared_ptr<string> vendorUid_ {};
      // Account name of the multi-cloud instance.
      shared_ptr<string> vendorUserName_ {};
    };

    virtual bool empty() const override { return this->cloudVendorAccountAKs_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // cloudVendorAccountAKs Field Functions 
    bool hasCloudVendorAccountAKs() const { return this->cloudVendorAccountAKs_ != nullptr;};
    void deleteCloudVendorAccountAKs() { this->cloudVendorAccountAKs_ = nullptr;};
    inline const vector<DescribeCloudVendorAccountAKListResponseBody::CloudVendorAccountAKs> & getCloudVendorAccountAKs() const { DARABONBA_PTR_GET_CONST(cloudVendorAccountAKs_, vector<DescribeCloudVendorAccountAKListResponseBody::CloudVendorAccountAKs>) };
    inline vector<DescribeCloudVendorAccountAKListResponseBody::CloudVendorAccountAKs> getCloudVendorAccountAKs() { DARABONBA_PTR_GET(cloudVendorAccountAKs_, vector<DescribeCloudVendorAccountAKListResponseBody::CloudVendorAccountAKs>) };
    inline DescribeCloudVendorAccountAKListResponseBody& setCloudVendorAccountAKs(const vector<DescribeCloudVendorAccountAKListResponseBody::CloudVendorAccountAKs> & cloudVendorAccountAKs) { DARABONBA_PTR_SET_VALUE(cloudVendorAccountAKs_, cloudVendorAccountAKs) };
    inline DescribeCloudVendorAccountAKListResponseBody& setCloudVendorAccountAKs(vector<DescribeCloudVendorAccountAKListResponseBody::CloudVendorAccountAKs> && cloudVendorAccountAKs) { DARABONBA_PTR_SET_RVALUE(cloudVendorAccountAKs_, cloudVendorAccountAKs) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCloudVendorAccountAKListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCloudVendorAccountAKListResponseBody::PageInfo) };
    inline DescribeCloudVendorAccountAKListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCloudVendorAccountAKListResponseBody::PageInfo) };
    inline DescribeCloudVendorAccountAKListResponseBody& setPageInfo(const DescribeCloudVendorAccountAKListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCloudVendorAccountAKListResponseBody& setPageInfo(DescribeCloudVendorAccountAKListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudVendorAccountAKListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AccessKey pairs.
    shared_ptr<vector<DescribeCloudVendorAccountAKListResponseBody::CloudVendorAccountAKs>> cloudVendorAccountAKs_ {};
    // The pagination information.
    shared_ptr<DescribeCloudVendorAccountAKListResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
