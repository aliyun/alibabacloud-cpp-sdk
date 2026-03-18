// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetProjectResponseBody() = default ;
    GetProjectResponseBody(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody(GetProjectResponseBody &&) = default ;
    GetProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBody() = default ;
    GetProjectResponseBody& operator=(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody& operator=(GetProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(comment, comment_);
        DARABONBA_PTR_TO_JSON(costStorage, costStorage_);
        DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
        DARABONBA_PTR_TO_JSON(defaultQuota, defaultQuota_);
        DARABONBA_PTR_TO_JSON(ipWhiteList, ipWhiteList_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(owner, owner_);
        DARABONBA_PTR_TO_JSON(productType, productType_);
        DARABONBA_PTR_TO_JSON(properties, properties_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
        DARABONBA_PTR_TO_JSON(securityProperties, securityProperties_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(superAdmins, superAdmins_);
        DARABONBA_PTR_TO_JSON(threeTierModel, threeTierModel_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(comment, comment_);
        DARABONBA_PTR_FROM_JSON(costStorage, costStorage_);
        DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(defaultQuota, defaultQuota_);
        DARABONBA_PTR_FROM_JSON(ipWhiteList, ipWhiteList_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(owner, owner_);
        DARABONBA_PTR_FROM_JSON(productType, productType_);
        DARABONBA_PTR_FROM_JSON(properties, properties_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
        DARABONBA_PTR_FROM_JSON(securityProperties, securityProperties_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(superAdmins, superAdmins_);
        DARABONBA_PTR_FROM_JSON(threeTierModel, threeTierModel_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecurityProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityProperties& obj) { 
          DARABONBA_PTR_TO_JSON(enableDownloadPrivilege, enableDownloadPrivilege_);
          DARABONBA_PTR_TO_JSON(labelSecurity, labelSecurity_);
          DARABONBA_PTR_TO_JSON(objectCreatorHasAccessPermission, objectCreatorHasAccessPermission_);
          DARABONBA_PTR_TO_JSON(objectCreatorHasGrantPermission, objectCreatorHasGrantPermission_);
          DARABONBA_PTR_TO_JSON(projectProtection, projectProtection_);
          DARABONBA_PTR_TO_JSON(usingAcl, usingAcl_);
          DARABONBA_PTR_TO_JSON(usingPolicy, usingPolicy_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(enableDownloadPrivilege, enableDownloadPrivilege_);
          DARABONBA_PTR_FROM_JSON(labelSecurity, labelSecurity_);
          DARABONBA_PTR_FROM_JSON(objectCreatorHasAccessPermission, objectCreatorHasAccessPermission_);
          DARABONBA_PTR_FROM_JSON(objectCreatorHasGrantPermission, objectCreatorHasGrantPermission_);
          DARABONBA_PTR_FROM_JSON(projectProtection, projectProtection_);
          DARABONBA_PTR_FROM_JSON(usingAcl, usingAcl_);
          DARABONBA_PTR_FROM_JSON(usingPolicy, usingPolicy_);
        };
        SecurityProperties() = default ;
        SecurityProperties(const SecurityProperties &) = default ;
        SecurityProperties(SecurityProperties &&) = default ;
        SecurityProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityProperties() = default ;
        SecurityProperties& operator=(const SecurityProperties &) = default ;
        SecurityProperties& operator=(SecurityProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProjectProtection : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProjectProtection& obj) { 
            DARABONBA_PTR_TO_JSON(exceptionPolicy, exceptionPolicy_);
            DARABONBA_PTR_TO_JSON(protected, protected_);
          };
          friend void from_json(const Darabonba::Json& j, ProjectProtection& obj) { 
            DARABONBA_PTR_FROM_JSON(exceptionPolicy, exceptionPolicy_);
            DARABONBA_PTR_FROM_JSON(protected, protected_);
          };
          ProjectProtection() = default ;
          ProjectProtection(const ProjectProtection &) = default ;
          ProjectProtection(ProjectProtection &&) = default ;
          ProjectProtection(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProjectProtection() = default ;
          ProjectProtection& operator=(const ProjectProtection &) = default ;
          ProjectProtection& operator=(ProjectProtection &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->exceptionPolicy_ == nullptr
        && this->protected_ == nullptr; };
          // exceptionPolicy Field Functions 
          bool hasExceptionPolicy() const { return this->exceptionPolicy_ != nullptr;};
          void deleteExceptionPolicy() { this->exceptionPolicy_ = nullptr;};
          inline string getExceptionPolicy() const { DARABONBA_PTR_GET_DEFAULT(exceptionPolicy_, "") };
          inline ProjectProtection& setExceptionPolicy(string exceptionPolicy) { DARABONBA_PTR_SET_VALUE(exceptionPolicy_, exceptionPolicy) };


          // protected Field Functions 
          bool hasProtected() const { return this->protected_ != nullptr;};
          void deleteProtected() { this->protected_ = nullptr;};
          inline bool getProtected() const { DARABONBA_PTR_GET_DEFAULT(protected_, false) };
          inline ProjectProtection& setProtected(bool _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


        protected:
          // If data protection is enabled for a project, you can configure an exception policy to specify exception or trusted projects. This policy allows specified users to transfer data from a specified object to a specified project. The data protection mechanism does not apply to the scenarios described in the exception policy.
          shared_ptr<string> exceptionPolicy_ {};
          // Specifies whether to enable the <props="intl">[data protection mechanism](https://www.alibabacloud.com/help/en/maxcompute/security-and-compliance/project-data-protection) for the project to prohibit or allow data to flow out of the project. By default, this mechanism is disabled.
          shared_ptr<bool> protected_ {};
        };

        virtual bool empty() const override { return this->enableDownloadPrivilege_ == nullptr
        && this->labelSecurity_ == nullptr && this->objectCreatorHasAccessPermission_ == nullptr && this->objectCreatorHasGrantPermission_ == nullptr && this->projectProtection_ == nullptr && this->usingAcl_ == nullptr
        && this->usingPolicy_ == nullptr; };
        // enableDownloadPrivilege Field Functions 
        bool hasEnableDownloadPrivilege() const { return this->enableDownloadPrivilege_ != nullptr;};
        void deleteEnableDownloadPrivilege() { this->enableDownloadPrivilege_ = nullptr;};
        inline bool getEnableDownloadPrivilege() const { DARABONBA_PTR_GET_DEFAULT(enableDownloadPrivilege_, false) };
        inline SecurityProperties& setEnableDownloadPrivilege(bool enableDownloadPrivilege) { DARABONBA_PTR_SET_VALUE(enableDownloadPrivilege_, enableDownloadPrivilege) };


        // labelSecurity Field Functions 
        bool hasLabelSecurity() const { return this->labelSecurity_ != nullptr;};
        void deleteLabelSecurity() { this->labelSecurity_ = nullptr;};
        inline bool getLabelSecurity() const { DARABONBA_PTR_GET_DEFAULT(labelSecurity_, false) };
        inline SecurityProperties& setLabelSecurity(bool labelSecurity) { DARABONBA_PTR_SET_VALUE(labelSecurity_, labelSecurity) };


        // objectCreatorHasAccessPermission Field Functions 
        bool hasObjectCreatorHasAccessPermission() const { return this->objectCreatorHasAccessPermission_ != nullptr;};
        void deleteObjectCreatorHasAccessPermission() { this->objectCreatorHasAccessPermission_ = nullptr;};
        inline bool getObjectCreatorHasAccessPermission() const { DARABONBA_PTR_GET_DEFAULT(objectCreatorHasAccessPermission_, false) };
        inline SecurityProperties& setObjectCreatorHasAccessPermission(bool objectCreatorHasAccessPermission) { DARABONBA_PTR_SET_VALUE(objectCreatorHasAccessPermission_, objectCreatorHasAccessPermission) };


        // objectCreatorHasGrantPermission Field Functions 
        bool hasObjectCreatorHasGrantPermission() const { return this->objectCreatorHasGrantPermission_ != nullptr;};
        void deleteObjectCreatorHasGrantPermission() { this->objectCreatorHasGrantPermission_ = nullptr;};
        inline bool getObjectCreatorHasGrantPermission() const { DARABONBA_PTR_GET_DEFAULT(objectCreatorHasGrantPermission_, false) };
        inline SecurityProperties& setObjectCreatorHasGrantPermission(bool objectCreatorHasGrantPermission) { DARABONBA_PTR_SET_VALUE(objectCreatorHasGrantPermission_, objectCreatorHasGrantPermission) };


        // projectProtection Field Functions 
        bool hasProjectProtection() const { return this->projectProtection_ != nullptr;};
        void deleteProjectProtection() { this->projectProtection_ = nullptr;};
        inline const SecurityProperties::ProjectProtection & getProjectProtection() const { DARABONBA_PTR_GET_CONST(projectProtection_, SecurityProperties::ProjectProtection) };
        inline SecurityProperties::ProjectProtection getProjectProtection() { DARABONBA_PTR_GET(projectProtection_, SecurityProperties::ProjectProtection) };
        inline SecurityProperties& setProjectProtection(const SecurityProperties::ProjectProtection & projectProtection) { DARABONBA_PTR_SET_VALUE(projectProtection_, projectProtection) };
        inline SecurityProperties& setProjectProtection(SecurityProperties::ProjectProtection && projectProtection) { DARABONBA_PTR_SET_RVALUE(projectProtection_, projectProtection) };


        // usingAcl Field Functions 
        bool hasUsingAcl() const { return this->usingAcl_ != nullptr;};
        void deleteUsingAcl() { this->usingAcl_ = nullptr;};
        inline bool getUsingAcl() const { DARABONBA_PTR_GET_DEFAULT(usingAcl_, false) };
        inline SecurityProperties& setUsingAcl(bool usingAcl) { DARABONBA_PTR_SET_VALUE(usingAcl_, usingAcl) };


        // usingPolicy Field Functions 
        bool hasUsingPolicy() const { return this->usingPolicy_ != nullptr;};
        void deleteUsingPolicy() { this->usingPolicy_ = nullptr;};
        inline bool getUsingPolicy() const { DARABONBA_PTR_GET_DEFAULT(usingPolicy_, false) };
        inline SecurityProperties& setUsingPolicy(bool usingPolicy) { DARABONBA_PTR_SET_VALUE(usingPolicy_, usingPolicy) };


      protected:
        // Specifies whether to use the <props="intl">[download control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/download-control) feature. By default, this feature is disabled.
        shared_ptr<bool> enableDownloadPrivilege_ {};
        // Specifies whether to use the <props="intl">[label-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/label-based-access-control) feature. By default, this feature is disabled.
        shared_ptr<bool> labelSecurity_ {};
        // Specifies whether the creator of an object has access permissions on the object. Default value: true.
        shared_ptr<bool> objectCreatorHasAccessPermission_ {};
        // Specifies whether the creator of an object has grant permissions on the object. Default value: true.
        shared_ptr<bool> objectCreatorHasGrantPermission_ {};
        // The properties of the <props="intl">[data protection mechanism](https://www.alibabacloud.com/help/en/maxcompute/security-and-compliance/project-data-protection).
        shared_ptr<SecurityProperties::ProjectProtection> projectProtection_ {};
        // Specifies whether to use the <props="intl">[ACL-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/acl-based-access-control) feature. By default, this feature is enabled.
        shared_ptr<bool> usingAcl_ {};
        // Specifies whether to use the <props="intl">[policy-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/policy-based-access-control-1) feature. By default, this feature is enabled.
        shared_ptr<bool> usingPolicy_ {};
      };

      class SaleTag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SaleTag& obj) { 
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, SaleTag& obj) { 
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        };
        SaleTag() = default ;
        SaleTag(const SaleTag &) = default ;
        SaleTag(SaleTag &&) = default ;
        SaleTag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SaleTag() = default ;
        SaleTag& operator=(const SaleTag &) = default ;
        SaleTag& operator=(SaleTag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline SaleTag& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline SaleTag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The instance ID of the default computing quota.
        shared_ptr<string> resourceId_ {};
        // The billing method of the default computing quota.
        shared_ptr<string> resourceType_ {};
      };

      class Properties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Properties& obj) { 
          DARABONBA_PTR_TO_JSON(allowFullScan, allowFullScan_);
          DARABONBA_PTR_TO_JSON(autoMvQuotaGb, autoMvQuotaGb_);
          DARABONBA_PTR_TO_JSON(elderTunnelQuota, elderTunnelQuota_);
          DARABONBA_PTR_TO_JSON(enableAutoMv, enableAutoMv_);
          DARABONBA_PTR_TO_JSON(enableDecimal2, enableDecimal2_);
          DARABONBA_PTR_TO_JSON(enableDr, enableDr_);
          DARABONBA_PTR_TO_JSON(enableFdcCacheForce, enableFdcCacheForce_);
          DARABONBA_PTR_TO_JSON(enableTieredStorage, enableTieredStorage_);
          DARABONBA_PTR_TO_JSON(enableTunnelQuotaRoute, enableTunnelQuotaRoute_);
          DARABONBA_PTR_TO_JSON(encryption, encryption_);
          DARABONBA_PTR_TO_JSON(externalProjectProperties, externalProjectProperties_);
          DARABONBA_PTR_TO_JSON(fdcQuota, fdcQuota_);
          DARABONBA_PTR_TO_JSON(retentionDays, retentionDays_);
          DARABONBA_PTR_TO_JSON(sqlMeteringMax, sqlMeteringMax_);
          DARABONBA_PTR_TO_JSON(storageTierInfo, storageTierInfo_);
          DARABONBA_PTR_TO_JSON(tableLifecycle, tableLifecycle_);
          DARABONBA_PTR_TO_JSON(tableLifecycleConfig, tableLifecycleConfig_);
          DARABONBA_PTR_TO_JSON(timezone, timezone_);
          DARABONBA_PTR_TO_JSON(tunnelQuota, tunnelQuota_);
          DARABONBA_PTR_TO_JSON(typeSystem, typeSystem_);
        };
        friend void from_json(const Darabonba::Json& j, Properties& obj) { 
          DARABONBA_PTR_FROM_JSON(allowFullScan, allowFullScan_);
          DARABONBA_PTR_FROM_JSON(autoMvQuotaGb, autoMvQuotaGb_);
          DARABONBA_PTR_FROM_JSON(elderTunnelQuota, elderTunnelQuota_);
          DARABONBA_PTR_FROM_JSON(enableAutoMv, enableAutoMv_);
          DARABONBA_PTR_FROM_JSON(enableDecimal2, enableDecimal2_);
          DARABONBA_PTR_FROM_JSON(enableDr, enableDr_);
          DARABONBA_PTR_FROM_JSON(enableFdcCacheForce, enableFdcCacheForce_);
          DARABONBA_PTR_FROM_JSON(enableTieredStorage, enableTieredStorage_);
          DARABONBA_PTR_FROM_JSON(enableTunnelQuotaRoute, enableTunnelQuotaRoute_);
          DARABONBA_PTR_FROM_JSON(encryption, encryption_);
          DARABONBA_PTR_FROM_JSON(externalProjectProperties, externalProjectProperties_);
          DARABONBA_PTR_FROM_JSON(fdcQuota, fdcQuota_);
          DARABONBA_PTR_FROM_JSON(retentionDays, retentionDays_);
          DARABONBA_PTR_FROM_JSON(sqlMeteringMax, sqlMeteringMax_);
          DARABONBA_PTR_FROM_JSON(storageTierInfo, storageTierInfo_);
          DARABONBA_PTR_FROM_JSON(tableLifecycle, tableLifecycle_);
          DARABONBA_PTR_FROM_JSON(tableLifecycleConfig, tableLifecycleConfig_);
          DARABONBA_PTR_FROM_JSON(timezone, timezone_);
          DARABONBA_PTR_FROM_JSON(tunnelQuota, tunnelQuota_);
          DARABONBA_PTR_FROM_JSON(typeSystem, typeSystem_);
        };
        Properties() = default ;
        Properties(const Properties &) = default ;
        Properties(Properties &&) = default ;
        Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Properties() = default ;
        Properties& operator=(const Properties &) = default ;
        Properties& operator=(Properties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TableLifecycleConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableLifecycleConfig& obj) { 
            DARABONBA_PTR_TO_JSON(TierToLongterm, tierToLongterm_);
            DARABONBA_PTR_TO_JSON(TierToLowFrequency, tierToLowFrequency_);
          };
          friend void from_json(const Darabonba::Json& j, TableLifecycleConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(TierToLongterm, tierToLongterm_);
            DARABONBA_PTR_FROM_JSON(TierToLowFrequency, tierToLowFrequency_);
          };
          TableLifecycleConfig() = default ;
          TableLifecycleConfig(const TableLifecycleConfig &) = default ;
          TableLifecycleConfig(TableLifecycleConfig &&) = default ;
          TableLifecycleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableLifecycleConfig() = default ;
          TableLifecycleConfig& operator=(const TableLifecycleConfig &) = default ;
          TableLifecycleConfig& operator=(TableLifecycleConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TierToLowFrequency : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TierToLowFrequency& obj) { 
              DARABONBA_PTR_TO_JSON(DaysAfterLastAccessGreaterThan, daysAfterLastAccessGreaterThan_);
              DARABONBA_PTR_TO_JSON(DaysAfterLastModificationGreaterThan, daysAfterLastModificationGreaterThan_);
              DARABONBA_PTR_TO_JSON(DaysAfterLastTierModificationGreaterThan, daysAfterLastTierModificationGreaterThan_);
            };
            friend void from_json(const Darabonba::Json& j, TierToLowFrequency& obj) { 
              DARABONBA_PTR_FROM_JSON(DaysAfterLastAccessGreaterThan, daysAfterLastAccessGreaterThan_);
              DARABONBA_PTR_FROM_JSON(DaysAfterLastModificationGreaterThan, daysAfterLastModificationGreaterThan_);
              DARABONBA_PTR_FROM_JSON(DaysAfterLastTierModificationGreaterThan, daysAfterLastTierModificationGreaterThan_);
            };
            TierToLowFrequency() = default ;
            TierToLowFrequency(const TierToLowFrequency &) = default ;
            TierToLowFrequency(TierToLowFrequency &&) = default ;
            TierToLowFrequency(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TierToLowFrequency() = default ;
            TierToLowFrequency& operator=(const TierToLowFrequency &) = default ;
            TierToLowFrequency& operator=(TierToLowFrequency &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->daysAfterLastAccessGreaterThan_ == nullptr
        && this->daysAfterLastModificationGreaterThan_ == nullptr && this->daysAfterLastTierModificationGreaterThan_ == nullptr; };
            // daysAfterLastAccessGreaterThan Field Functions 
            bool hasDaysAfterLastAccessGreaterThan() const { return this->daysAfterLastAccessGreaterThan_ != nullptr;};
            void deleteDaysAfterLastAccessGreaterThan() { this->daysAfterLastAccessGreaterThan_ = nullptr;};
            inline int64_t getDaysAfterLastAccessGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastAccessGreaterThan_, 0L) };
            inline TierToLowFrequency& setDaysAfterLastAccessGreaterThan(int64_t daysAfterLastAccessGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastAccessGreaterThan_, daysAfterLastAccessGreaterThan) };


            // daysAfterLastModificationGreaterThan Field Functions 
            bool hasDaysAfterLastModificationGreaterThan() const { return this->daysAfterLastModificationGreaterThan_ != nullptr;};
            void deleteDaysAfterLastModificationGreaterThan() { this->daysAfterLastModificationGreaterThan_ = nullptr;};
            inline int64_t getDaysAfterLastModificationGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastModificationGreaterThan_, 0L) };
            inline TierToLowFrequency& setDaysAfterLastModificationGreaterThan(int64_t daysAfterLastModificationGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastModificationGreaterThan_, daysAfterLastModificationGreaterThan) };


            // daysAfterLastTierModificationGreaterThan Field Functions 
            bool hasDaysAfterLastTierModificationGreaterThan() const { return this->daysAfterLastTierModificationGreaterThan_ != nullptr;};
            void deleteDaysAfterLastTierModificationGreaterThan() { this->daysAfterLastTierModificationGreaterThan_ = nullptr;};
            inline int64_t getDaysAfterLastTierModificationGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastTierModificationGreaterThan_, 0L) };
            inline TierToLowFrequency& setDaysAfterLastTierModificationGreaterThan(int64_t daysAfterLastTierModificationGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastTierModificationGreaterThan_, daysAfterLastTierModificationGreaterThan) };


          protected:
            // The number of days after the data was last accessed. After this period, the storage class is automatically changed. This corresponds to the `LastAccessTime` of the table or partition.
            // 
            // > If the LastAccessTime of the table or partition is empty:
            // >
            // > - For tables or partitions that were created before October 1, 2023, the last access time is considered 00:00:00 on October 1, 2023 (UTC+0).
            // >
            // > - For tables or partitions that were created on or after October 1, 2023, if the data has not been accessed, the creation time of the table or partition is considered the last access time.
            shared_ptr<int64_t> daysAfterLastAccessGreaterThan_ {};
            // The number of days after the data was last modified. After this period, the storage class is automatically changed. This corresponds to the `LastModifiedTime` of the table or partition.
            shared_ptr<int64_t> daysAfterLastModificationGreaterThan_ {};
            // The number of days after the storage class was last changed.
            shared_ptr<int64_t> daysAfterLastTierModificationGreaterThan_ {};
          };

          class TierToLongterm : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TierToLongterm& obj) { 
              DARABONBA_PTR_TO_JSON(DaysAfterLastAccessGreaterThan, daysAfterLastAccessGreaterThan_);
              DARABONBA_PTR_TO_JSON(DaysAfterLastModificationGreaterThan, daysAfterLastModificationGreaterThan_);
              DARABONBA_PTR_TO_JSON(DaysAfterLastTierModificationGreaterThan, daysAfterLastTierModificationGreaterThan_);
            };
            friend void from_json(const Darabonba::Json& j, TierToLongterm& obj) { 
              DARABONBA_PTR_FROM_JSON(DaysAfterLastAccessGreaterThan, daysAfterLastAccessGreaterThan_);
              DARABONBA_PTR_FROM_JSON(DaysAfterLastModificationGreaterThan, daysAfterLastModificationGreaterThan_);
              DARABONBA_PTR_FROM_JSON(DaysAfterLastTierModificationGreaterThan, daysAfterLastTierModificationGreaterThan_);
            };
            TierToLongterm() = default ;
            TierToLongterm(const TierToLongterm &) = default ;
            TierToLongterm(TierToLongterm &&) = default ;
            TierToLongterm(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TierToLongterm() = default ;
            TierToLongterm& operator=(const TierToLongterm &) = default ;
            TierToLongterm& operator=(TierToLongterm &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->daysAfterLastAccessGreaterThan_ == nullptr
        && this->daysAfterLastModificationGreaterThan_ == nullptr && this->daysAfterLastTierModificationGreaterThan_ == nullptr; };
            // daysAfterLastAccessGreaterThan Field Functions 
            bool hasDaysAfterLastAccessGreaterThan() const { return this->daysAfterLastAccessGreaterThan_ != nullptr;};
            void deleteDaysAfterLastAccessGreaterThan() { this->daysAfterLastAccessGreaterThan_ = nullptr;};
            inline int64_t getDaysAfterLastAccessGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastAccessGreaterThan_, 0L) };
            inline TierToLongterm& setDaysAfterLastAccessGreaterThan(int64_t daysAfterLastAccessGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastAccessGreaterThan_, daysAfterLastAccessGreaterThan) };


            // daysAfterLastModificationGreaterThan Field Functions 
            bool hasDaysAfterLastModificationGreaterThan() const { return this->daysAfterLastModificationGreaterThan_ != nullptr;};
            void deleteDaysAfterLastModificationGreaterThan() { this->daysAfterLastModificationGreaterThan_ = nullptr;};
            inline int64_t getDaysAfterLastModificationGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastModificationGreaterThan_, 0L) };
            inline TierToLongterm& setDaysAfterLastModificationGreaterThan(int64_t daysAfterLastModificationGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastModificationGreaterThan_, daysAfterLastModificationGreaterThan) };


            // daysAfterLastTierModificationGreaterThan Field Functions 
            bool hasDaysAfterLastTierModificationGreaterThan() const { return this->daysAfterLastTierModificationGreaterThan_ != nullptr;};
            void deleteDaysAfterLastTierModificationGreaterThan() { this->daysAfterLastTierModificationGreaterThan_ = nullptr;};
            inline int64_t getDaysAfterLastTierModificationGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastTierModificationGreaterThan_, 0L) };
            inline TierToLongterm& setDaysAfterLastTierModificationGreaterThan(int64_t daysAfterLastTierModificationGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastTierModificationGreaterThan_, daysAfterLastTierModificationGreaterThan) };


          protected:
            // The number of days after the data was last accessed. After this period, the storage class is automatically changed. This corresponds to the `LastAccessTime` of the table or partition.
            // 
            // > If the LastAccessTime of the table or partition is empty:
            // >
            // > - For tables or partitions that were created before October 1, 2023, the last access time is considered 00:00:00 on October 1, 2023 (UTC+0).
            // >
            // > - For tables or partitions that were created on or after October 1, 2023, if the data has not been accessed, the creation time of the table or partition is considered the last access time.
            shared_ptr<int64_t> daysAfterLastAccessGreaterThan_ {};
            // The number of days after the data was last modified. After this period, the storage class is automatically changed. This corresponds to the `LastModifiedTime` of the table or partition.
            shared_ptr<int64_t> daysAfterLastModificationGreaterThan_ {};
            // The number of days after the storage class was last changed.
            shared_ptr<int64_t> daysAfterLastTierModificationGreaterThan_ {};
          };

          virtual bool empty() const override { return this->tierToLongterm_ == nullptr
        && this->tierToLowFrequency_ == nullptr; };
          // tierToLongterm Field Functions 
          bool hasTierToLongterm() const { return this->tierToLongterm_ != nullptr;};
          void deleteTierToLongterm() { this->tierToLongterm_ = nullptr;};
          inline const TableLifecycleConfig::TierToLongterm & getTierToLongterm() const { DARABONBA_PTR_GET_CONST(tierToLongterm_, TableLifecycleConfig::TierToLongterm) };
          inline TableLifecycleConfig::TierToLongterm getTierToLongterm() { DARABONBA_PTR_GET(tierToLongterm_, TableLifecycleConfig::TierToLongterm) };
          inline TableLifecycleConfig& setTierToLongterm(const TableLifecycleConfig::TierToLongterm & tierToLongterm) { DARABONBA_PTR_SET_VALUE(tierToLongterm_, tierToLongterm) };
          inline TableLifecycleConfig& setTierToLongterm(TableLifecycleConfig::TierToLongterm && tierToLongterm) { DARABONBA_PTR_SET_RVALUE(tierToLongterm_, tierToLongterm) };


          // tierToLowFrequency Field Functions 
          bool hasTierToLowFrequency() const { return this->tierToLowFrequency_ != nullptr;};
          void deleteTierToLowFrequency() { this->tierToLowFrequency_ = nullptr;};
          inline const TableLifecycleConfig::TierToLowFrequency & getTierToLowFrequency() const { DARABONBA_PTR_GET_CONST(tierToLowFrequency_, TableLifecycleConfig::TierToLowFrequency) };
          inline TableLifecycleConfig::TierToLowFrequency getTierToLowFrequency() { DARABONBA_PTR_GET(tierToLowFrequency_, TableLifecycleConfig::TierToLowFrequency) };
          inline TableLifecycleConfig& setTierToLowFrequency(const TableLifecycleConfig::TierToLowFrequency & tierToLowFrequency) { DARABONBA_PTR_SET_VALUE(tierToLowFrequency_, tierToLowFrequency) };
          inline TableLifecycleConfig& setTierToLowFrequency(TableLifecycleConfig::TierToLowFrequency && tierToLowFrequency) { DARABONBA_PTR_SET_RVALUE(tierToLowFrequency_, tierToLowFrequency) };


        protected:
          // The identifier for the long-term storage class.
          shared_ptr<TableLifecycleConfig::TierToLongterm> tierToLongterm_ {};
          // The identifier for the IA storage class.
          shared_ptr<TableLifecycleConfig::TierToLowFrequency> tierToLowFrequency_ {};
        };

        class TableLifecycle : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableLifecycle& obj) { 
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TableLifecycle& obj) { 
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          TableLifecycle() = default ;
          TableLifecycle(const TableLifecycle &) = default ;
          TableLifecycle(TableLifecycle &&) = default ;
          TableLifecycle(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableLifecycle() = default ;
          TableLifecycle& operator=(const TableLifecycle &) = default ;
          TableLifecycle& operator=(TableLifecycle &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline TableLifecycle& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TableLifecycle& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The lifecycle type. Valid values:
          // 
          // - **mandatory**: The Lifecycle clause is required. You must set a lifecycle for the table.
          // 
          // - **optional**: The Lifecycle clause is optional when you create a table. If you do not set a lifecycle for the table, the table is permanently valid.
          // 
          // - **inherit**: If you do not set a lifecycle for a table when you create it, the lifecycle of the table is the value of odps.table.lifecycle.value.
          shared_ptr<string> type_ {};
          // The lifecycle of the table. Unit: days. The value can be an integer from 1 to 37231. The default value is 37231.
          shared_ptr<string> value_ {};
        };

        class StorageTierInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StorageTierInfo& obj) { 
            DARABONBA_PTR_TO_JSON(projectBackupSize, projectBackupSize_);
            DARABONBA_PTR_TO_JSON(projectTotalSize, projectTotalSize_);
            DARABONBA_PTR_TO_JSON(storageTierSize, storageTierSize_);
          };
          friend void from_json(const Darabonba::Json& j, StorageTierInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(projectBackupSize, projectBackupSize_);
            DARABONBA_PTR_FROM_JSON(projectTotalSize, projectTotalSize_);
            DARABONBA_PTR_FROM_JSON(storageTierSize, storageTierSize_);
          };
          StorageTierInfo() = default ;
          StorageTierInfo(const StorageTierInfo &) = default ;
          StorageTierInfo(StorageTierInfo &&) = default ;
          StorageTierInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StorageTierInfo() = default ;
          StorageTierInfo& operator=(const StorageTierInfo &) = default ;
          StorageTierInfo& operator=(StorageTierInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StorageTierSize : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StorageTierSize& obj) { 
              DARABONBA_PTR_TO_JSON(longTermSize, longTermSize_);
              DARABONBA_PTR_TO_JSON(lowFrequencySize, lowFrequencySize_);
              DARABONBA_PTR_TO_JSON(standardSize, standardSize_);
            };
            friend void from_json(const Darabonba::Json& j, StorageTierSize& obj) { 
              DARABONBA_PTR_FROM_JSON(longTermSize, longTermSize_);
              DARABONBA_PTR_FROM_JSON(lowFrequencySize, lowFrequencySize_);
              DARABONBA_PTR_FROM_JSON(standardSize, standardSize_);
            };
            StorageTierSize() = default ;
            StorageTierSize(const StorageTierSize &) = default ;
            StorageTierSize(StorageTierSize &&) = default ;
            StorageTierSize(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StorageTierSize() = default ;
            StorageTierSize& operator=(const StorageTierSize &) = default ;
            StorageTierSize& operator=(StorageTierSize &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->longTermSize_ == nullptr
        && this->lowFrequencySize_ == nullptr && this->standardSize_ == nullptr; };
            // longTermSize Field Functions 
            bool hasLongTermSize() const { return this->longTermSize_ != nullptr;};
            void deleteLongTermSize() { this->longTermSize_ = nullptr;};
            inline int64_t getLongTermSize() const { DARABONBA_PTR_GET_DEFAULT(longTermSize_, 0L) };
            inline StorageTierSize& setLongTermSize(int64_t longTermSize) { DARABONBA_PTR_SET_VALUE(longTermSize_, longTermSize) };


            // lowFrequencySize Field Functions 
            bool hasLowFrequencySize() const { return this->lowFrequencySize_ != nullptr;};
            void deleteLowFrequencySize() { this->lowFrequencySize_ = nullptr;};
            inline int64_t getLowFrequencySize() const { DARABONBA_PTR_GET_DEFAULT(lowFrequencySize_, 0L) };
            inline StorageTierSize& setLowFrequencySize(int64_t lowFrequencySize) { DARABONBA_PTR_SET_VALUE(lowFrequencySize_, lowFrequencySize) };


            // standardSize Field Functions 
            bool hasStandardSize() const { return this->standardSize_ != nullptr;};
            void deleteStandardSize() { this->standardSize_ = nullptr;};
            inline int64_t getStandardSize() const { DARABONBA_PTR_GET_DEFAULT(standardSize_, 0L) };
            inline StorageTierSize& setStandardSize(int64_t standardSize) { DARABONBA_PTR_SET_VALUE(standardSize_, standardSize) };


          protected:
            // The long-term storage usage.
            shared_ptr<int64_t> longTermSize_ {};
            // The IA storage class usage.
            shared_ptr<int64_t> lowFrequencySize_ {};
            // The Standard storage usage.
            shared_ptr<int64_t> standardSize_ {};
          };

          virtual bool empty() const override { return this->projectBackupSize_ == nullptr
        && this->projectTotalSize_ == nullptr && this->storageTierSize_ == nullptr; };
          // projectBackupSize Field Functions 
          bool hasProjectBackupSize() const { return this->projectBackupSize_ != nullptr;};
          void deleteProjectBackupSize() { this->projectBackupSize_ = nullptr;};
          inline int64_t getProjectBackupSize() const { DARABONBA_PTR_GET_DEFAULT(projectBackupSize_, 0L) };
          inline StorageTierInfo& setProjectBackupSize(int64_t projectBackupSize) { DARABONBA_PTR_SET_VALUE(projectBackupSize_, projectBackupSize) };


          // projectTotalSize Field Functions 
          bool hasProjectTotalSize() const { return this->projectTotalSize_ != nullptr;};
          void deleteProjectTotalSize() { this->projectTotalSize_ = nullptr;};
          inline int64_t getProjectTotalSize() const { DARABONBA_PTR_GET_DEFAULT(projectTotalSize_, 0L) };
          inline StorageTierInfo& setProjectTotalSize(int64_t projectTotalSize) { DARABONBA_PTR_SET_VALUE(projectTotalSize_, projectTotalSize) };


          // storageTierSize Field Functions 
          bool hasStorageTierSize() const { return this->storageTierSize_ != nullptr;};
          void deleteStorageTierSize() { this->storageTierSize_ = nullptr;};
          inline const StorageTierInfo::StorageTierSize & getStorageTierSize() const { DARABONBA_PTR_GET_CONST(storageTierSize_, StorageTierInfo::StorageTierSize) };
          inline StorageTierInfo::StorageTierSize getStorageTierSize() { DARABONBA_PTR_GET(storageTierSize_, StorageTierInfo::StorageTierSize) };
          inline StorageTierInfo& setStorageTierSize(const StorageTierInfo::StorageTierSize & storageTierSize) { DARABONBA_PTR_SET_VALUE(storageTierSize_, storageTierSize) };
          inline StorageTierInfo& setStorageTierSize(StorageTierInfo::StorageTierSize && storageTierSize) { DARABONBA_PTR_SET_RVALUE(storageTierSize_, storageTierSize) };


        protected:
          // The backup storage size.
          shared_ptr<int64_t> projectBackupSize_ {};
          // The total storage usage.
          shared_ptr<int64_t> projectTotalSize_ {};
          // The <props="intl">[tiered storage](https://www.alibabacloud.com/help/en/maxcompute/user-guide/tiered-storage) information.
          shared_ptr<StorageTierInfo::StorageTierSize> storageTierSize_ {};
        };

        class ExternalProjectProperties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExternalProjectProperties& obj) { 
            DARABONBA_PTR_TO_JSON(externalCatalogId, externalCatalogId_);
            DARABONBA_PTR_TO_JSON(foreignServerName, foreignServerName_);
            DARABONBA_PTR_TO_JSON(foreignServerType, foreignServerType_);
            DARABONBA_PTR_TO_JSON(isExternalCatalogBound, isExternalCatalogBound_);
            DARABONBA_PTR_TO_JSON(tableFormat, tableFormat_);
            DARABONBA_PTR_TO_JSON(warehouse, warehouse_);
          };
          friend void from_json(const Darabonba::Json& j, ExternalProjectProperties& obj) { 
            DARABONBA_PTR_FROM_JSON(externalCatalogId, externalCatalogId_);
            DARABONBA_PTR_FROM_JSON(foreignServerName, foreignServerName_);
            DARABONBA_PTR_FROM_JSON(foreignServerType, foreignServerType_);
            DARABONBA_PTR_FROM_JSON(isExternalCatalogBound, isExternalCatalogBound_);
            DARABONBA_PTR_FROM_JSON(tableFormat, tableFormat_);
            DARABONBA_PTR_FROM_JSON(warehouse, warehouse_);
          };
          ExternalProjectProperties() = default ;
          ExternalProjectProperties(const ExternalProjectProperties &) = default ;
          ExternalProjectProperties(ExternalProjectProperties &&) = default ;
          ExternalProjectProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExternalProjectProperties() = default ;
          ExternalProjectProperties& operator=(const ExternalProjectProperties &) = default ;
          ExternalProjectProperties& operator=(ExternalProjectProperties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->externalCatalogId_ == nullptr
        && this->foreignServerName_ == nullptr && this->foreignServerType_ == nullptr && this->isExternalCatalogBound_ == nullptr && this->tableFormat_ == nullptr && this->warehouse_ == nullptr; };
          // externalCatalogId Field Functions 
          bool hasExternalCatalogId() const { return this->externalCatalogId_ != nullptr;};
          void deleteExternalCatalogId() { this->externalCatalogId_ = nullptr;};
          inline string getExternalCatalogId() const { DARABONBA_PTR_GET_DEFAULT(externalCatalogId_, "") };
          inline ExternalProjectProperties& setExternalCatalogId(string externalCatalogId) { DARABONBA_PTR_SET_VALUE(externalCatalogId_, externalCatalogId) };


          // foreignServerName Field Functions 
          bool hasForeignServerName() const { return this->foreignServerName_ != nullptr;};
          void deleteForeignServerName() { this->foreignServerName_ = nullptr;};
          inline string getForeignServerName() const { DARABONBA_PTR_GET_DEFAULT(foreignServerName_, "") };
          inline ExternalProjectProperties& setForeignServerName(string foreignServerName) { DARABONBA_PTR_SET_VALUE(foreignServerName_, foreignServerName) };


          // foreignServerType Field Functions 
          bool hasForeignServerType() const { return this->foreignServerType_ != nullptr;};
          void deleteForeignServerType() { this->foreignServerType_ = nullptr;};
          inline string getForeignServerType() const { DARABONBA_PTR_GET_DEFAULT(foreignServerType_, "") };
          inline ExternalProjectProperties& setForeignServerType(string foreignServerType) { DARABONBA_PTR_SET_VALUE(foreignServerType_, foreignServerType) };


          // isExternalCatalogBound Field Functions 
          bool hasIsExternalCatalogBound() const { return this->isExternalCatalogBound_ != nullptr;};
          void deleteIsExternalCatalogBound() { this->isExternalCatalogBound_ = nullptr;};
          inline string getIsExternalCatalogBound() const { DARABONBA_PTR_GET_DEFAULT(isExternalCatalogBound_, "") };
          inline ExternalProjectProperties& setIsExternalCatalogBound(string isExternalCatalogBound) { DARABONBA_PTR_SET_VALUE(isExternalCatalogBound_, isExternalCatalogBound) };


          // tableFormat Field Functions 
          bool hasTableFormat() const { return this->tableFormat_ != nullptr;};
          void deleteTableFormat() { this->tableFormat_ = nullptr;};
          inline string getTableFormat() const { DARABONBA_PTR_GET_DEFAULT(tableFormat_, "") };
          inline ExternalProjectProperties& setTableFormat(string tableFormat) { DARABONBA_PTR_SET_VALUE(tableFormat_, tableFormat) };


          // warehouse Field Functions 
          bool hasWarehouse() const { return this->warehouse_ != nullptr;};
          void deleteWarehouse() { this->warehouse_ = nullptr;};
          inline string getWarehouse() const { DARABONBA_PTR_GET_DEFAULT(warehouse_, "") };
          inline ExternalProjectProperties& setWarehouse(string warehouse) { DARABONBA_PTR_SET_VALUE(warehouse_, warehouse) };


        protected:
          shared_ptr<string> externalCatalogId_ {};
          shared_ptr<string> foreignServerName_ {};
          shared_ptr<string> foreignServerType_ {};
          // Specifies whether the project is an external project of <props="intl">[data lakehouse 2.0](https://www.alibabacloud.com/help/en/maxcompute/user-guide/lake-warehouse-integrated-2-0-use-guide).
          shared_ptr<string> isExternalCatalogBound_ {};
          shared_ptr<string> tableFormat_ {};
          shared_ptr<string> warehouse_ {};
        };

        class Encryption : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Encryption& obj) { 
            DARABONBA_PTR_TO_JSON(algorithm, algorithm_);
            DARABONBA_PTR_TO_JSON(enable, enable_);
            DARABONBA_PTR_TO_JSON(key, key_);
          };
          friend void from_json(const Darabonba::Json& j, Encryption& obj) { 
            DARABONBA_PTR_FROM_JSON(algorithm, algorithm_);
            DARABONBA_PTR_FROM_JSON(enable, enable_);
            DARABONBA_PTR_FROM_JSON(key, key_);
          };
          Encryption() = default ;
          Encryption(const Encryption &) = default ;
          Encryption(Encryption &&) = default ;
          Encryption(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Encryption() = default ;
          Encryption& operator=(const Encryption &) = default ;
          Encryption& operator=(Encryption &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->enable_ == nullptr && this->key_ == nullptr; };
          // algorithm Field Functions 
          bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
          void deleteAlgorithm() { this->algorithm_ = nullptr;};
          inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
          inline Encryption& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline Encryption& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Encryption& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        protected:
          // The data encryption algorithm. Supported algorithms include AES256, AESCTR, and RC4.
          shared_ptr<string> algorithm_ {};
          // Specifies whether to enable data encryption for the project. For more information, see <props="intl">[Storage encryption](https://www.alibabacloud.com/help/en/maxcompute/security-and-compliance/storage-encryption).
          shared_ptr<bool> enable_ {};
          // The type of key used for data encryption. Valid values include MaxCompute Default Key and Bring-Your-Own-Key (BYOK). MaxCompute Default Key is a default key created within MaxCompute.
          shared_ptr<string> key_ {};
        };

        virtual bool empty() const override { return this->allowFullScan_ == nullptr
        && this->autoMvQuotaGb_ == nullptr && this->elderTunnelQuota_ == nullptr && this->enableAutoMv_ == nullptr && this->enableDecimal2_ == nullptr && this->enableDr_ == nullptr
        && this->enableFdcCacheForce_ == nullptr && this->enableTieredStorage_ == nullptr && this->enableTunnelQuotaRoute_ == nullptr && this->encryption_ == nullptr && this->externalProjectProperties_ == nullptr
        && this->fdcQuota_ == nullptr && this->retentionDays_ == nullptr && this->sqlMeteringMax_ == nullptr && this->storageTierInfo_ == nullptr && this->tableLifecycle_ == nullptr
        && this->tableLifecycleConfig_ == nullptr && this->timezone_ == nullptr && this->tunnelQuota_ == nullptr && this->typeSystem_ == nullptr; };
        // allowFullScan Field Functions 
        bool hasAllowFullScan() const { return this->allowFullScan_ != nullptr;};
        void deleteAllowFullScan() { this->allowFullScan_ = nullptr;};
        inline bool getAllowFullScan() const { DARABONBA_PTR_GET_DEFAULT(allowFullScan_, false) };
        inline Properties& setAllowFullScan(bool allowFullScan) { DARABONBA_PTR_SET_VALUE(allowFullScan_, allowFullScan) };


        // autoMvQuotaGb Field Functions 
        bool hasAutoMvQuotaGb() const { return this->autoMvQuotaGb_ != nullptr;};
        void deleteAutoMvQuotaGb() { this->autoMvQuotaGb_ = nullptr;};
        inline int64_t getAutoMvQuotaGb() const { DARABONBA_PTR_GET_DEFAULT(autoMvQuotaGb_, 0L) };
        inline Properties& setAutoMvQuotaGb(int64_t autoMvQuotaGb) { DARABONBA_PTR_SET_VALUE(autoMvQuotaGb_, autoMvQuotaGb) };


        // elderTunnelQuota Field Functions 
        bool hasElderTunnelQuota() const { return this->elderTunnelQuota_ != nullptr;};
        void deleteElderTunnelQuota() { this->elderTunnelQuota_ = nullptr;};
        inline string getElderTunnelQuota() const { DARABONBA_PTR_GET_DEFAULT(elderTunnelQuota_, "") };
        inline Properties& setElderTunnelQuota(string elderTunnelQuota) { DARABONBA_PTR_SET_VALUE(elderTunnelQuota_, elderTunnelQuota) };


        // enableAutoMv Field Functions 
        bool hasEnableAutoMv() const { return this->enableAutoMv_ != nullptr;};
        void deleteEnableAutoMv() { this->enableAutoMv_ = nullptr;};
        inline bool getEnableAutoMv() const { DARABONBA_PTR_GET_DEFAULT(enableAutoMv_, false) };
        inline Properties& setEnableAutoMv(bool enableAutoMv) { DARABONBA_PTR_SET_VALUE(enableAutoMv_, enableAutoMv) };


        // enableDecimal2 Field Functions 
        bool hasEnableDecimal2() const { return this->enableDecimal2_ != nullptr;};
        void deleteEnableDecimal2() { this->enableDecimal2_ = nullptr;};
        inline bool getEnableDecimal2() const { DARABONBA_PTR_GET_DEFAULT(enableDecimal2_, false) };
        inline Properties& setEnableDecimal2(bool enableDecimal2) { DARABONBA_PTR_SET_VALUE(enableDecimal2_, enableDecimal2) };


        // enableDr Field Functions 
        bool hasEnableDr() const { return this->enableDr_ != nullptr;};
        void deleteEnableDr() { this->enableDr_ = nullptr;};
        inline bool getEnableDr() const { DARABONBA_PTR_GET_DEFAULT(enableDr_, false) };
        inline Properties& setEnableDr(bool enableDr) { DARABONBA_PTR_SET_VALUE(enableDr_, enableDr) };


        // enableFdcCacheForce Field Functions 
        bool hasEnableFdcCacheForce() const { return this->enableFdcCacheForce_ != nullptr;};
        void deleteEnableFdcCacheForce() { this->enableFdcCacheForce_ = nullptr;};
        inline bool getEnableFdcCacheForce() const { DARABONBA_PTR_GET_DEFAULT(enableFdcCacheForce_, false) };
        inline Properties& setEnableFdcCacheForce(bool enableFdcCacheForce) { DARABONBA_PTR_SET_VALUE(enableFdcCacheForce_, enableFdcCacheForce) };


        // enableTieredStorage Field Functions 
        bool hasEnableTieredStorage() const { return this->enableTieredStorage_ != nullptr;};
        void deleteEnableTieredStorage() { this->enableTieredStorage_ = nullptr;};
        inline bool getEnableTieredStorage() const { DARABONBA_PTR_GET_DEFAULT(enableTieredStorage_, false) };
        inline Properties& setEnableTieredStorage(bool enableTieredStorage) { DARABONBA_PTR_SET_VALUE(enableTieredStorage_, enableTieredStorage) };


        // enableTunnelQuotaRoute Field Functions 
        bool hasEnableTunnelQuotaRoute() const { return this->enableTunnelQuotaRoute_ != nullptr;};
        void deleteEnableTunnelQuotaRoute() { this->enableTunnelQuotaRoute_ = nullptr;};
        inline bool getEnableTunnelQuotaRoute() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelQuotaRoute_, false) };
        inline Properties& setEnableTunnelQuotaRoute(bool enableTunnelQuotaRoute) { DARABONBA_PTR_SET_VALUE(enableTunnelQuotaRoute_, enableTunnelQuotaRoute) };


        // encryption Field Functions 
        bool hasEncryption() const { return this->encryption_ != nullptr;};
        void deleteEncryption() { this->encryption_ = nullptr;};
        inline const Properties::Encryption & getEncryption() const { DARABONBA_PTR_GET_CONST(encryption_, Properties::Encryption) };
        inline Properties::Encryption getEncryption() { DARABONBA_PTR_GET(encryption_, Properties::Encryption) };
        inline Properties& setEncryption(const Properties::Encryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
        inline Properties& setEncryption(Properties::Encryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


        // externalProjectProperties Field Functions 
        bool hasExternalProjectProperties() const { return this->externalProjectProperties_ != nullptr;};
        void deleteExternalProjectProperties() { this->externalProjectProperties_ = nullptr;};
        inline const Properties::ExternalProjectProperties & getExternalProjectProperties() const { DARABONBA_PTR_GET_CONST(externalProjectProperties_, Properties::ExternalProjectProperties) };
        inline Properties::ExternalProjectProperties getExternalProjectProperties() { DARABONBA_PTR_GET(externalProjectProperties_, Properties::ExternalProjectProperties) };
        inline Properties& setExternalProjectProperties(const Properties::ExternalProjectProperties & externalProjectProperties) { DARABONBA_PTR_SET_VALUE(externalProjectProperties_, externalProjectProperties) };
        inline Properties& setExternalProjectProperties(Properties::ExternalProjectProperties && externalProjectProperties) { DARABONBA_PTR_SET_RVALUE(externalProjectProperties_, externalProjectProperties) };


        // fdcQuota Field Functions 
        bool hasFdcQuota() const { return this->fdcQuota_ != nullptr;};
        void deleteFdcQuota() { this->fdcQuota_ = nullptr;};
        inline string getFdcQuota() const { DARABONBA_PTR_GET_DEFAULT(fdcQuota_, "") };
        inline Properties& setFdcQuota(string fdcQuota) { DARABONBA_PTR_SET_VALUE(fdcQuota_, fdcQuota) };


        // retentionDays Field Functions 
        bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
        void deleteRetentionDays() { this->retentionDays_ = nullptr;};
        inline int64_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0L) };
        inline Properties& setRetentionDays(int64_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


        // sqlMeteringMax Field Functions 
        bool hasSqlMeteringMax() const { return this->sqlMeteringMax_ != nullptr;};
        void deleteSqlMeteringMax() { this->sqlMeteringMax_ = nullptr;};
        inline string getSqlMeteringMax() const { DARABONBA_PTR_GET_DEFAULT(sqlMeteringMax_, "") };
        inline Properties& setSqlMeteringMax(string sqlMeteringMax) { DARABONBA_PTR_SET_VALUE(sqlMeteringMax_, sqlMeteringMax) };


        // storageTierInfo Field Functions 
        bool hasStorageTierInfo() const { return this->storageTierInfo_ != nullptr;};
        void deleteStorageTierInfo() { this->storageTierInfo_ = nullptr;};
        inline const Properties::StorageTierInfo & getStorageTierInfo() const { DARABONBA_PTR_GET_CONST(storageTierInfo_, Properties::StorageTierInfo) };
        inline Properties::StorageTierInfo getStorageTierInfo() { DARABONBA_PTR_GET(storageTierInfo_, Properties::StorageTierInfo) };
        inline Properties& setStorageTierInfo(const Properties::StorageTierInfo & storageTierInfo) { DARABONBA_PTR_SET_VALUE(storageTierInfo_, storageTierInfo) };
        inline Properties& setStorageTierInfo(Properties::StorageTierInfo && storageTierInfo) { DARABONBA_PTR_SET_RVALUE(storageTierInfo_, storageTierInfo) };


        // tableLifecycle Field Functions 
        bool hasTableLifecycle() const { return this->tableLifecycle_ != nullptr;};
        void deleteTableLifecycle() { this->tableLifecycle_ = nullptr;};
        inline const Properties::TableLifecycle & getTableLifecycle() const { DARABONBA_PTR_GET_CONST(tableLifecycle_, Properties::TableLifecycle) };
        inline Properties::TableLifecycle getTableLifecycle() { DARABONBA_PTR_GET(tableLifecycle_, Properties::TableLifecycle) };
        inline Properties& setTableLifecycle(const Properties::TableLifecycle & tableLifecycle) { DARABONBA_PTR_SET_VALUE(tableLifecycle_, tableLifecycle) };
        inline Properties& setTableLifecycle(Properties::TableLifecycle && tableLifecycle) { DARABONBA_PTR_SET_RVALUE(tableLifecycle_, tableLifecycle) };


        // tableLifecycleConfig Field Functions 
        bool hasTableLifecycleConfig() const { return this->tableLifecycleConfig_ != nullptr;};
        void deleteTableLifecycleConfig() { this->tableLifecycleConfig_ = nullptr;};
        inline const Properties::TableLifecycleConfig & getTableLifecycleConfig() const { DARABONBA_PTR_GET_CONST(tableLifecycleConfig_, Properties::TableLifecycleConfig) };
        inline Properties::TableLifecycleConfig getTableLifecycleConfig() { DARABONBA_PTR_GET(tableLifecycleConfig_, Properties::TableLifecycleConfig) };
        inline Properties& setTableLifecycleConfig(const Properties::TableLifecycleConfig & tableLifecycleConfig) { DARABONBA_PTR_SET_VALUE(tableLifecycleConfig_, tableLifecycleConfig) };
        inline Properties& setTableLifecycleConfig(Properties::TableLifecycleConfig && tableLifecycleConfig) { DARABONBA_PTR_SET_RVALUE(tableLifecycleConfig_, tableLifecycleConfig) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline Properties& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


        // tunnelQuota Field Functions 
        bool hasTunnelQuota() const { return this->tunnelQuota_ != nullptr;};
        void deleteTunnelQuota() { this->tunnelQuota_ = nullptr;};
        inline string getTunnelQuota() const { DARABONBA_PTR_GET_DEFAULT(tunnelQuota_, "") };
        inline Properties& setTunnelQuota(string tunnelQuota) { DARABONBA_PTR_SET_VALUE(tunnelQuota_, tunnelQuota) };


        // typeSystem Field Functions 
        bool hasTypeSystem() const { return this->typeSystem_ != nullptr;};
        void deleteTypeSystem() { this->typeSystem_ = nullptr;};
        inline string getTypeSystem() const { DARABONBA_PTR_GET_DEFAULT(typeSystem_, "") };
        inline Properties& setTypeSystem(string typeSystem) { DARABONBA_PTR_SET_VALUE(typeSystem_, typeSystem) };


      protected:
        // Specifies whether to allow a full table scan in the project. A full table scan consumes a large amount of resources and reduces processing efficiency. By default, this feature is disabled.
        shared_ptr<bool> allowFullScan_ {};
        shared_ptr<int64_t> autoMvQuotaGb_ {};
        // The parent resource group of the Data Transmission Service resource group that is bound to the project. This parameter is for internal use.
        shared_ptr<string> elderTunnelQuota_ {};
        shared_ptr<bool> enableAutoMv_ {};
        // Specifies whether to enable the DECIMAL data type of MaxCompute V2.0 for the project.
        shared_ptr<bool> enableDecimal2_ {};
        shared_ptr<bool> enableDr_ {};
        // Specifies whether to forcefully enable external table caching.
        shared_ptr<bool> enableFdcCacheForce_ {};
        // Specifies whether to enable <props="intl">[tiered storage](https://www.alibabacloud.com/help/en/maxcompute/user-guide/tiered-storage).
        shared_ptr<bool> enableTieredStorage_ {};
        // Specifies whether to enable routing for the Data Transmission Service resource group.
        // 
        // - true: The data transmission tasks that are submitted by default in the project use the Data Transmission Service resource group that is bound to the project.
        // 
        // - false: The data transmission tasks that are submitted by default in the project use the shared Data Transmission Service resource group.
        shared_ptr<bool> enableTunnelQuotaRoute_ {};
        // The storage encryption properties.
        shared_ptr<Properties::Encryption> encryption_ {};
        // The properties of the external project.
        shared_ptr<Properties::ExternalProjectProperties> externalProjectProperties_ {};
        // The quota for external table caching.
        shared_ptr<string> fdcQuota_ {};
        // The retention period of backup data. Unit: days. During this period, you can restore the current data version to any backup version. The value can be an integer from 0 to 30. The default value is 1. A value of 0 indicates that the backup feature is disabled.
        shared_ptr<int64_t> retentionDays_ {};
        // The maximum consumption threshold of a single SQL statement. Formula: Amount of scanned data (GB) × Complexity.
        shared_ptr<string> sqlMeteringMax_ {};
        // The <props="intl">[tiered storage](https://www.alibabacloud.com/help/en/maxcompute/user-guide/tiered-storage) information.
        shared_ptr<Properties::StorageTierInfo> storageTierInfo_ {};
        // The lifecycle properties of the table.
        shared_ptr<Properties::TableLifecycle> tableLifecycle_ {};
        // The properties of the <props="intl">[tiered storage lifecycle rule](https://www.alibabacloud.com/help/en/maxcompute/user-guide/tiered-storage#f61fc9db76nna). After you set these properties, the system automatically triggers the conversion of storage classes based on the rule.
        shared_ptr<Properties::TableLifecycleConfig> tableLifecycleConfig_ {};
        // The time zone of the project. This parameter corresponds to the `odps.sql.timezone` property.
        shared_ptr<string> timezone_ {};
        // The <props="intl">[Data Transmission Service](https://www.alibabacloud.com/help/en/maxcompute/user-guide/overview-of-dts) resource group that is bound to the project.
        // 
        // - Default (shared Data Transmission Service resource group): The project cannot use a subscription Data Transmission Service resource group. Regardless of the value of the default Data Transmission Service resource group, the Data Transmission Service automatically uses the Default resource group for data transmission tasks that are submitted by default in the project.
        // 
        // - Subscription Data Transmission Service resource group: The project can use a subscription Data Transmission Service resource group.
        shared_ptr<string> tunnelQuota_ {};
        // The data type edition. Valid values:
        // 
        // - **1**: V1.0
        // 
        // - **2**: V2.0
        // 
        // - **hive**: Hive-compatible
        // 
        // For more information, see <props="intl">[Data type editions](https://www.alibabacloud.com/help/en/maxcompute/user-guide/data-type-editions).
        shared_ptr<string> typeSystem_ {};
      };

      class IpWhiteList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpWhiteList& obj) { 
          DARABONBA_PTR_TO_JSON(ipList, ipList_);
          DARABONBA_PTR_TO_JSON(vpcIpList, vpcIpList_);
        };
        friend void from_json(const Darabonba::Json& j, IpWhiteList& obj) { 
          DARABONBA_PTR_FROM_JSON(ipList, ipList_);
          DARABONBA_PTR_FROM_JSON(vpcIpList, vpcIpList_);
        };
        IpWhiteList() = default ;
        IpWhiteList(const IpWhiteList &) = default ;
        IpWhiteList(IpWhiteList &&) = default ;
        IpWhiteList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpWhiteList() = default ;
        IpWhiteList& operator=(const IpWhiteList &) = default ;
        IpWhiteList& operator=(IpWhiteList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipList_ == nullptr
        && this->vpcIpList_ == nullptr; };
        // ipList Field Functions 
        bool hasIpList() const { return this->ipList_ != nullptr;};
        void deleteIpList() { this->ipList_ = nullptr;};
        inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
        inline IpWhiteList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


        // vpcIpList Field Functions 
        bool hasVpcIpList() const { return this->vpcIpList_ != nullptr;};
        void deleteVpcIpList() { this->vpcIpList_ = nullptr;};
        inline string getVpcIpList() const { DARABONBA_PTR_GET_DEFAULT(vpcIpList_, "") };
        inline IpWhiteList& setVpcIpList(string vpcIpList) { DARABONBA_PTR_SET_VALUE(vpcIpList_, vpcIpList) };


      protected:
        // The IP address whitelist for access over the Internet or a network that is used to interconnect with other Alibaba Cloud services.
        // 
        // > If you configure only this IP address whitelist, access over the Internet or the network that is used to interconnect with other Alibaba Cloud services is restricted based on the configuration, and access over a VPC is prohibited.
        shared_ptr<string> ipList_ {};
        // The IP address whitelist for access over a VPC.
        // 
        // > If you configure only this IP address whitelist, access over a VPC is restricted based on the configuration, and access over the Internet or a network that is used to interconnect with other Alibaba Cloud services is prohibited.
        shared_ptr<string> vpcIpList_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->costStorage_ == nullptr && this->createdTime_ == nullptr && this->defaultQuota_ == nullptr && this->ipWhiteList_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->productType_ == nullptr && this->properties_ == nullptr && this->regionId_ == nullptr && this->saleTag_ == nullptr
        && this->securityProperties_ == nullptr && this->status_ == nullptr && this->superAdmins_ == nullptr && this->threeTierModel_ == nullptr && this->type_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // costStorage Field Functions 
      bool hasCostStorage() const { return this->costStorage_ != nullptr;};
      void deleteCostStorage() { this->costStorage_ = nullptr;};
      inline string getCostStorage() const { DARABONBA_PTR_GET_DEFAULT(costStorage_, "") };
      inline Data& setCostStorage(string costStorage) { DARABONBA_PTR_SET_VALUE(costStorage_, costStorage) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Data& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // defaultQuota Field Functions 
      bool hasDefaultQuota() const { return this->defaultQuota_ != nullptr;};
      void deleteDefaultQuota() { this->defaultQuota_ = nullptr;};
      inline string getDefaultQuota() const { DARABONBA_PTR_GET_DEFAULT(defaultQuota_, "") };
      inline Data& setDefaultQuota(string defaultQuota) { DARABONBA_PTR_SET_VALUE(defaultQuota_, defaultQuota) };


      // ipWhiteList Field Functions 
      bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
      void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
      inline const Data::IpWhiteList & getIpWhiteList() const { DARABONBA_PTR_GET_CONST(ipWhiteList_, Data::IpWhiteList) };
      inline Data::IpWhiteList getIpWhiteList() { DARABONBA_PTR_GET(ipWhiteList_, Data::IpWhiteList) };
      inline Data& setIpWhiteList(const Data::IpWhiteList & ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };
      inline Data& setIpWhiteList(Data::IpWhiteList && ipWhiteList) { DARABONBA_PTR_SET_RVALUE(ipWhiteList_, ipWhiteList) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline const Data::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, Data::Properties) };
      inline Data::Properties getProperties() { DARABONBA_PTR_GET(properties_, Data::Properties) };
      inline Data& setProperties(const Data::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
      inline Data& setProperties(Data::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // saleTag Field Functions 
      bool hasSaleTag() const { return this->saleTag_ != nullptr;};
      void deleteSaleTag() { this->saleTag_ = nullptr;};
      inline const Data::SaleTag & getSaleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, Data::SaleTag) };
      inline Data::SaleTag getSaleTag() { DARABONBA_PTR_GET(saleTag_, Data::SaleTag) };
      inline Data& setSaleTag(const Data::SaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
      inline Data& setSaleTag(Data::SaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


      // securityProperties Field Functions 
      bool hasSecurityProperties() const { return this->securityProperties_ != nullptr;};
      void deleteSecurityProperties() { this->securityProperties_ = nullptr;};
      inline const Data::SecurityProperties & getSecurityProperties() const { DARABONBA_PTR_GET_CONST(securityProperties_, Data::SecurityProperties) };
      inline Data::SecurityProperties getSecurityProperties() { DARABONBA_PTR_GET(securityProperties_, Data::SecurityProperties) };
      inline Data& setSecurityProperties(const Data::SecurityProperties & securityProperties) { DARABONBA_PTR_SET_VALUE(securityProperties_, securityProperties) };
      inline Data& setSecurityProperties(Data::SecurityProperties && securityProperties) { DARABONBA_PTR_SET_RVALUE(securityProperties_, securityProperties) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // superAdmins Field Functions 
      bool hasSuperAdmins() const { return this->superAdmins_ != nullptr;};
      void deleteSuperAdmins() { this->superAdmins_ = nullptr;};
      inline const vector<string> & getSuperAdmins() const { DARABONBA_PTR_GET_CONST(superAdmins_, vector<string>) };
      inline vector<string> getSuperAdmins() { DARABONBA_PTR_GET(superAdmins_, vector<string>) };
      inline Data& setSuperAdmins(const vector<string> & superAdmins) { DARABONBA_PTR_SET_VALUE(superAdmins_, superAdmins) };
      inline Data& setSuperAdmins(vector<string> && superAdmins) { DARABONBA_PTR_SET_RVALUE(superAdmins_, superAdmins) };


      // threeTierModel Field Functions 
      bool hasThreeTierModel() const { return this->threeTierModel_ != nullptr;};
      void deleteThreeTierModel() { this->threeTierModel_ = nullptr;};
      inline bool getThreeTierModel() const { DARABONBA_PTR_GET_DEFAULT(threeTierModel_, false) };
      inline Data& setThreeTierModel(bool threeTierModel) { DARABONBA_PTR_SET_VALUE(threeTierModel_, threeTierModel) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The project description.
      shared_ptr<string> comment_ {};
      // The total storage usage. This value indicates the logical storage size after data is collected and compressed for the project. The storage usage is the same as the usage for billing.
      shared_ptr<string> costStorage_ {};
      // The time when the project was created.
      shared_ptr<int64_t> createdTime_ {};
      // The default computing quota. Quotas are used for resource allocation. If you do not specify a computing quota, jobs that are initiated in the project consume resources from the default quota. For more information, see <props="intl">[Use of computing resources](https://www.alibabacloud.com/help/en/maxcompute/user-guide/use-of-computing-resources).
      shared_ptr<string> defaultQuota_ {};
      // The IP address whitelist.
      shared_ptr<Data::IpWhiteList> ipWhiteList_ {};
      // The project name.
      shared_ptr<string> name_ {};
      // The account information of the project owner.
      shared_ptr<string> owner_ {};
      // The billing method of the default computing quota.
      shared_ptr<string> productType_ {};
      // The basic properties of the project.
      shared_ptr<Data::Properties> properties_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The instance ID and billing method of the default computing quota.
      shared_ptr<Data::SaleTag> saleTag_ {};
      // The permission properties.
      shared_ptr<Data::SecurityProperties> securityProperties_ {};
      // The project status. Valid values:
      // 
      // - **AVAILABLE**: Normal
      // 
      // - **READONLY**: read-only
      // 
      // - **FROZEN**: frozen
      // 
      // - **DELETING**: being deleted
      shared_ptr<string> status_ {};
      // The list of members that are assigned the `Super_Administrator` role in the project.
      shared_ptr<vector<string>> superAdmins_ {};
      // Specifies whether data storage by schema is supported. MaxCompute supports schemas. A schema is an object in a project. It is used to classify objects such as tables, resources, and user-defined functions (UDFs). You can create multiple schemas in a project. For more information, see <props="intl">[Schema operations](https://www.alibabacloud.com/help/en/maxcompute/user-guide/schema-related-operations).
      shared_ptr<bool> threeTierModel_ {};
      // The project type. Valid values:
      // 
      // - **managed**: an internal project.
      // 
      // - **external**: an external project.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetProjectResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetProjectResponseBody::Data) };
    inline GetProjectResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetProjectResponseBody::Data) };
    inline GetProjectResponseBody& setData(const GetProjectResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetProjectResponseBody& setData(GetProjectResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetProjectResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetProjectResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetProjectResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetProjectResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    // 
    // - 1xx: Informational response. The request is received and is being processed.
    // 
    // - 2xx: Success. The request is successfully received, understood, and accepted by the server.
    // 
    // - 3xx: Redirection. The request is redirected, and further actions are required to complete the request.
    // 
    // - 4xx: Client error. The request contains invalid request parameters or syntax, or specific request conditions cannot be met.
    // 
    // - 5xx: Server error. The server cannot fulfill the request for other reasons.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
