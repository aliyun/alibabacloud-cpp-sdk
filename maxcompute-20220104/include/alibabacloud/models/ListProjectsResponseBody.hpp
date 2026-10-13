// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
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
  class ListProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListProjectsResponseBody() = default ;
    ListProjectsResponseBody(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody(ListProjectsResponseBody &&) = default ;
    ListProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBody() = default ;
    ListProjectsResponseBody& operator=(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody& operator=(ListProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(marker, marker_);
        DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
        DARABONBA_PTR_TO_JSON(projects, projects_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(marker, marker_);
        DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
        DARABONBA_PTR_FROM_JSON(projects, projects_);
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
      class Projects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Projects& obj) { 
          DARABONBA_PTR_TO_JSON(comment, comment_);
          DARABONBA_PTR_TO_JSON(costStorage, costStorage_);
          DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
          DARABONBA_PTR_TO_JSON(defaultQuota, defaultQuota_);
          DARABONBA_PTR_TO_JSON(ipWhiteList, ipWhiteList_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(owner, owner_);
          DARABONBA_PTR_TO_JSON(properties, properties_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
          DARABONBA_PTR_TO_JSON(securityProperties, securityProperties_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(threeTierModel, threeTierModel_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Projects& obj) { 
          DARABONBA_PTR_FROM_JSON(comment, comment_);
          DARABONBA_PTR_FROM_JSON(costStorage, costStorage_);
          DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(defaultQuota, defaultQuota_);
          DARABONBA_PTR_FROM_JSON(ipWhiteList, ipWhiteList_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(owner, owner_);
          DARABONBA_PTR_FROM_JSON(properties, properties_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
          DARABONBA_PTR_FROM_JSON(securityProperties, securityProperties_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(threeTierModel, threeTierModel_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Projects() = default ;
        Projects(const Projects &) = default ;
        Projects(Projects &&) = default ;
        Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Projects() = default ;
        Projects& operator=(const Projects &) = default ;
        Projects& operator=(Projects &&) = default ;
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
            // If you enable data protection for the project, you can configure exceptions or trusted projects to allow specified users to transfer data of specified objects to specified projects. All scenarios described in the exception policy can bypass the data protection mechanism.
            shared_ptr<string> exceptionPolicy_ {};
            // Specifies whether to enable the <props="china">[data protection mechanism](https://www.alibabacloud.com/help/zh/maxcompute/security-and-compliance/project-data-protection)
            // <props="intl">[data protection mechanism](https://www.alibabacloud.com/help/en/maxcompute/security-and-compliance/project-data-protection) for the project to prohibit or allow data stream out of the project. The default enabling status is disabled.
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
          // Specifies whether to use the <props="china">[download control](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/download-control)
          // <props="intl">[download control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/label-based-access-control) feature. By default, this feature is disabled.
          shared_ptr<bool> enableDownloadPrivilege_ {};
          // Specifies whether to use the <props="china">[label-based access control](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/label-based-access-control)
          // <props="intl">[label-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/label-based-access-control) feature. By default, this feature is disabled.
          shared_ptr<bool> labelSecurity_ {};
          // Specifies whether to allow object creators to have access permissions on the objects. By default, this is allowed.
          shared_ptr<bool> objectCreatorHasAccessPermission_ {};
          // Specifies whether to allow object creators to have authorization permissions on the objects. By default, this is allowed.
          shared_ptr<bool> objectCreatorHasGrantPermission_ {};
          // The <props="china">[data protection mechanism](https://www.alibabacloud.com/help/zh/maxcompute/security-and-compliance/project-data-protection)
          // <props="intl">[data protection mechanism](https://www.alibabacloud.com/help/en/maxcompute/security-and-compliance/project-data-protection) properties.
          shared_ptr<SecurityProperties::ProjectProtection> projectProtection_ {};
          // Specifies whether to use the <props="china">[ACL-based access control](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/acl-based-access-control)
          // <props="intl">[ACL-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/acl-based-access-control) feature. By default, this feature is enabled.
          shared_ptr<bool> usingAcl_ {};
          // Specifies whether to use the <props="china">[policy-based access control](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/policy-based-access-control-1)
          // <props="intl">[policy-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/policy-based-access-control-1) feature. By default, this feature is enabled.
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
          // The instance ID of the default compute quota.
          shared_ptr<string> resourceId_ {};
          // The billing method of the default compute quota.
          shared_ptr<string> resourceType_ {};
        };

        class Properties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Properties& obj) { 
            DARABONBA_PTR_TO_JSON(allowFullScan, allowFullScan_);
            DARABONBA_PTR_TO_JSON(enableDecimal2, enableDecimal2_);
            DARABONBA_PTR_TO_JSON(enableTunnelQuotaRoute, enableTunnelQuotaRoute_);
            DARABONBA_PTR_TO_JSON(encryption, encryption_);
            DARABONBA_PTR_TO_JSON(externalProjectProperties, externalProjectProperties_);
            DARABONBA_PTR_TO_JSON(retentionDays, retentionDays_);
            DARABONBA_PTR_TO_JSON(sqlMeteringMax, sqlMeteringMax_);
            DARABONBA_PTR_TO_JSON(tableLifecycle, tableLifecycle_);
            DARABONBA_PTR_TO_JSON(timezone, timezone_);
            DARABONBA_PTR_TO_JSON(tunnelQuota, tunnelQuota_);
            DARABONBA_PTR_TO_JSON(typeSystem, typeSystem_);
          };
          friend void from_json(const Darabonba::Json& j, Properties& obj) { 
            DARABONBA_PTR_FROM_JSON(allowFullScan, allowFullScan_);
            DARABONBA_PTR_FROM_JSON(enableDecimal2, enableDecimal2_);
            DARABONBA_PTR_FROM_JSON(enableTunnelQuotaRoute, enableTunnelQuotaRoute_);
            DARABONBA_PTR_FROM_JSON(encryption, encryption_);
            DARABONBA_PTR_FROM_JSON(externalProjectProperties, externalProjectProperties_);
            DARABONBA_PTR_FROM_JSON(retentionDays, retentionDays_);
            DARABONBA_PTR_FROM_JSON(sqlMeteringMax, sqlMeteringMax_);
            DARABONBA_PTR_FROM_JSON(tableLifecycle, tableLifecycle_);
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
            // - **mandatory**: The LIFECYCLE clause is required. You must specify a lifecycle for the table.
            // - **optional**: The LIFECYCLE clause is optional when you create a table. If you do not specify a lifecycle for the table, the table never expires.
            // - **inherit**: If you do not specify a lifecycle for a table when you create the table, the lifecycle of the table is the value of the odps.table.lifecycle.value parameter.
            shared_ptr<string> type_ {};
            // The lifecycle of the table. Unit: days. Valid values: 1 to 37231. Default value: 37231.
            shared_ptr<string> value_ {};
          };

          class ExternalProjectProperties : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ExternalProjectProperties& obj) { 
              DARABONBA_PTR_TO_JSON(isExternalCatalogBound, isExternalCatalogBound_);
            };
            friend void from_json(const Darabonba::Json& j, ExternalProjectProperties& obj) { 
              DARABONBA_PTR_FROM_JSON(isExternalCatalogBound, isExternalCatalogBound_);
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
            virtual bool empty() const override { return this->isExternalCatalogBound_ == nullptr; };
            // isExternalCatalogBound Field Functions 
            bool hasIsExternalCatalogBound() const { return this->isExternalCatalogBound_ != nullptr;};
            void deleteIsExternalCatalogBound() { this->isExternalCatalogBound_ = nullptr;};
            inline string getIsExternalCatalogBound() const { DARABONBA_PTR_GET_DEFAULT(isExternalCatalogBound_, "") };
            inline ExternalProjectProperties& setIsExternalCatalogBound(string isExternalCatalogBound) { DARABONBA_PTR_SET_VALUE(isExternalCatalogBound_, isExternalCatalogBound) };


          protected:
            // Specifies whether the project is an external project of <props="china">[Data Lakehouse Solution 2.0](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/lake-warehouse-integrated-2-0-use-guide)
            // <props="intl">[Data Lakehouse Solution 2.0](https://www.alibabacloud.com/help/en/maxcompute/user-guide/lake-warehouse-integrated-2-0-use-guide).
            shared_ptr<string> isExternalCatalogBound_ {};
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
            // The data encryption algorithm. The encryption algorithms supported by the key include AES256, AESCTR, and RC4.
            shared_ptr<string> algorithm_ {};
            // Specifies whether to enable data encryption for the project. For more information about data encryption, see 
            // <props="china">[Storage encryption](https://www.alibabacloud.com/help/zh/maxcompute/security-and-compliance/storage-encryption)
            // <props="intl">[Storage encryption](https://www.alibabacloud.com/help/en/maxcompute/security-and-compliance/storage-encryption).
            shared_ptr<bool> enable_ {};
            // The type of the key used for data encryption. Valid values include the default key (MaxCompute Default Key) and Bring Your Own Key (BYOK). The default key is a default key created internally by MaxCompute.
            shared_ptr<string> key_ {};
          };

          virtual bool empty() const override { return this->allowFullScan_ == nullptr
        && this->enableDecimal2_ == nullptr && this->enableTunnelQuotaRoute_ == nullptr && this->encryption_ == nullptr && this->externalProjectProperties_ == nullptr && this->retentionDays_ == nullptr
        && this->sqlMeteringMax_ == nullptr && this->tableLifecycle_ == nullptr && this->timezone_ == nullptr && this->tunnelQuota_ == nullptr && this->typeSystem_ == nullptr; };
          // allowFullScan Field Functions 
          bool hasAllowFullScan() const { return this->allowFullScan_ != nullptr;};
          void deleteAllowFullScan() { this->allowFullScan_ = nullptr;};
          inline bool getAllowFullScan() const { DARABONBA_PTR_GET_DEFAULT(allowFullScan_, false) };
          inline Properties& setAllowFullScan(bool allowFullScan) { DARABONBA_PTR_SET_VALUE(allowFullScan_, allowFullScan) };


          // enableDecimal2 Field Functions 
          bool hasEnableDecimal2() const { return this->enableDecimal2_ != nullptr;};
          void deleteEnableDecimal2() { this->enableDecimal2_ = nullptr;};
          inline bool getEnableDecimal2() const { DARABONBA_PTR_GET_DEFAULT(enableDecimal2_, false) };
          inline Properties& setEnableDecimal2(bool enableDecimal2) { DARABONBA_PTR_SET_VALUE(enableDecimal2_, enableDecimal2) };


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


          // tableLifecycle Field Functions 
          bool hasTableLifecycle() const { return this->tableLifecycle_ != nullptr;};
          void deleteTableLifecycle() { this->tableLifecycle_ = nullptr;};
          inline const Properties::TableLifecycle & getTableLifecycle() const { DARABONBA_PTR_GET_CONST(tableLifecycle_, Properties::TableLifecycle) };
          inline Properties::TableLifecycle getTableLifecycle() { DARABONBA_PTR_GET(tableLifecycle_, Properties::TableLifecycle) };
          inline Properties& setTableLifecycle(const Properties::TableLifecycle & tableLifecycle) { DARABONBA_PTR_SET_VALUE(tableLifecycle_, tableLifecycle) };
          inline Properties& setTableLifecycle(Properties::TableLifecycle && tableLifecycle) { DARABONBA_PTR_SET_RVALUE(tableLifecycle_, tableLifecycle) };


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
          // Specifies whether to allow full table scans in the project. Full table scans consume a large amount of resources. To improve processing efficiency, this feature is disabled by default.
          shared_ptr<bool> allowFullScan_ {};
          // Specifies whether to enable the DECIMAL data type of MaxCompute V2.0 for the project.
          shared_ptr<bool> enableDecimal2_ {};
          // Specifies whether to enable EPS resource group routing for the data transfer service.
          // - true: Data transfer tasks submitted by default in the project use the bound EPS resource group for the data transfer service.
          // - false: Data transfer tasks submitted by default in the project use the shared EPS resource group for the data transfer service.
          shared_ptr<bool> enableTunnelQuotaRoute_ {};
          // The storage encryption properties.
          shared_ptr<Properties::Encryption> encryption_ {};
          // The properties of the external project.
          shared_ptr<Properties::ExternalProjectProperties> externalProjectProperties_ {};
          // The retention period of backup data in days. During this period, you can restore the current version to any backed-up data version. Valid values: 0 to 30. Default value: 1. A value of 0 indicates that the backup feature is disabled.
          shared_ptr<int64_t> retentionDays_ {};
          // The maximum threshold for the consumption of a single SQL statement. Unit: scanned data volume (GB) × complexity.
          shared_ptr<string> sqlMeteringMax_ {};
          // The lifecycle properties of tables.
          shared_ptr<Properties::TableLifecycle> tableLifecycle_ {};
          // The time zone of the project, which is the odps.sql.timezone property.
          shared_ptr<string> timezone_ {};
          // The EPS resource group of the <props="china">[data transfer service](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/overview-of-dts)
          // <props="intl">[data transfer service](https://www.alibabacloud.com/help/en/maxcompute/user-guide/overview-of-dts) bound to the project.
          // 
          // - Default (shared EPS resource group for the data transfer service): The project is not allowed to use the subscription EPS resource group for the data transfer service. Regardless of the default EPS resource group setting, data transfer tasks submitted by default in this project automatically use the Default EPS resource group.
          // 
          // - Subscription EPS resource group for the data transfer service: The project is allowed to use the subscription EPS resource group for the data transfer service.
          shared_ptr<string> tunnelQuota_ {};
          // The data type edition. Valid values:
          // - **1**: MaxCompute V1.0 data type edition
          // - **2**: MaxCompute V2.0 data type edition
          // - **hive**: Hive-compatible data type edition
          // 
          // For more information about the differences among the three data type editions, see <props="china">[Data type editions](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/data-type-editions)
          // <props="intl">[Data type editions](https://www.alibabacloud.com/help/en/maxcompute/user-guide/data-type-editions).
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
          // The IP address whitelist for the Internet and cloud service interconnection network.
          // 
          // > If you configure only the IP address whitelist for the Internet and cloud service interconnection network, access from the Internet and cloud service interconnection network is restricted by the configuration, and all access from VPCs is prohibited.
          shared_ptr<string> ipList_ {};
          // The IP address whitelist for VPCs.
          // > If you configure only the IP address whitelist for VPCs, access from VPCs is restricted by the configuration, and all access from the Internet and cloud service interconnection network is prohibited.
          shared_ptr<string> vpcIpList_ {};
        };

        virtual bool empty() const override { return this->comment_ == nullptr
        && this->costStorage_ == nullptr && this->createdTime_ == nullptr && this->defaultQuota_ == nullptr && this->ipWhiteList_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->properties_ == nullptr && this->regionId_ == nullptr && this->saleTag_ == nullptr && this->securityProperties_ == nullptr
        && this->status_ == nullptr && this->threeTierModel_ == nullptr && this->type_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Projects& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // costStorage Field Functions 
        bool hasCostStorage() const { return this->costStorage_ != nullptr;};
        void deleteCostStorage() { this->costStorage_ = nullptr;};
        inline string getCostStorage() const { DARABONBA_PTR_GET_DEFAULT(costStorage_, "") };
        inline Projects& setCostStorage(string costStorage) { DARABONBA_PTR_SET_VALUE(costStorage_, costStorage) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline Projects& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // defaultQuota Field Functions 
        bool hasDefaultQuota() const { return this->defaultQuota_ != nullptr;};
        void deleteDefaultQuota() { this->defaultQuota_ = nullptr;};
        inline string getDefaultQuota() const { DARABONBA_PTR_GET_DEFAULT(defaultQuota_, "") };
        inline Projects& setDefaultQuota(string defaultQuota) { DARABONBA_PTR_SET_VALUE(defaultQuota_, defaultQuota) };


        // ipWhiteList Field Functions 
        bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
        void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
        inline const Projects::IpWhiteList & getIpWhiteList() const { DARABONBA_PTR_GET_CONST(ipWhiteList_, Projects::IpWhiteList) };
        inline Projects::IpWhiteList getIpWhiteList() { DARABONBA_PTR_GET(ipWhiteList_, Projects::IpWhiteList) };
        inline Projects& setIpWhiteList(const Projects::IpWhiteList & ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };
        inline Projects& setIpWhiteList(Projects::IpWhiteList && ipWhiteList) { DARABONBA_PTR_SET_RVALUE(ipWhiteList_, ipWhiteList) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Projects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Projects& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const Projects::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, Projects::Properties) };
        inline Projects::Properties getProperties() { DARABONBA_PTR_GET(properties_, Projects::Properties) };
        inline Projects& setProperties(const Projects::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline Projects& setProperties(Projects::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Projects& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // saleTag Field Functions 
        bool hasSaleTag() const { return this->saleTag_ != nullptr;};
        void deleteSaleTag() { this->saleTag_ = nullptr;};
        inline const Projects::SaleTag & getSaleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, Projects::SaleTag) };
        inline Projects::SaleTag getSaleTag() { DARABONBA_PTR_GET(saleTag_, Projects::SaleTag) };
        inline Projects& setSaleTag(const Projects::SaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
        inline Projects& setSaleTag(Projects::SaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


        // securityProperties Field Functions 
        bool hasSecurityProperties() const { return this->securityProperties_ != nullptr;};
        void deleteSecurityProperties() { this->securityProperties_ = nullptr;};
        inline const Projects::SecurityProperties & getSecurityProperties() const { DARABONBA_PTR_GET_CONST(securityProperties_, Projects::SecurityProperties) };
        inline Projects::SecurityProperties getSecurityProperties() { DARABONBA_PTR_GET(securityProperties_, Projects::SecurityProperties) };
        inline Projects& setSecurityProperties(const Projects::SecurityProperties & securityProperties) { DARABONBA_PTR_SET_VALUE(securityProperties_, securityProperties) };
        inline Projects& setSecurityProperties(Projects::SecurityProperties && securityProperties) { DARABONBA_PTR_SET_RVALUE(securityProperties_, securityProperties) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Projects& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // threeTierModel Field Functions 
        bool hasThreeTierModel() const { return this->threeTierModel_ != nullptr;};
        void deleteThreeTierModel() { this->threeTierModel_ = nullptr;};
        inline bool getThreeTierModel() const { DARABONBA_PTR_GET_DEFAULT(threeTierModel_, false) };
        inline Projects& setThreeTierModel(bool threeTierModel) { DARABONBA_PTR_SET_VALUE(threeTierModel_, threeTierModel) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Projects& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The project description.
        shared_ptr<string> comment_ {};
        // The total storage size. This value indicates the current storage size of the project and is consistent with the billing metric. It represents the logical storage size after data compression at the project level.
        shared_ptr<string> costStorage_ {};
        // The creation time. The time is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> createdTime_ {};
        // The default compute quota.
        // This is used to allocate compute resources. If no compute quota is specified, jobs initiated in the project consume resources from the default quota. For more information about how to use compute resources, see <props="china">[Use of computing resources](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/use-of-computing-resources)
        // <props="intl">[Use of computing resources](https://www.alibabacloud.com/help/en/maxcompute/user-guide/use-of-computing-resources).
        shared_ptr<string> defaultQuota_ {};
        // The IP address whitelist.
        shared_ptr<Projects::IpWhiteList> ipWhiteList_ {};
        // The project names.
        shared_ptr<string> name_ {};
        // The account information of the project owner.
        shared_ptr<string> owner_ {};
        // The basic properties of the project.
        shared_ptr<Projects::Properties> properties_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The instance ID and billing method of the default compute quota.
        shared_ptr<Projects::SaleTag> saleTag_ {};
        // The security properties.
        shared_ptr<Projects::SecurityProperties> securityProperties_ {};
        // The project status. Valid values:
        // - **AVAILABLE**: normal
        // - **READONLY**: read-only
        // - **FROZEN**: frozen
        // - **DELETING**: deleting
        shared_ptr<string> status_ {};
        // Specifies whether to support schema-based storage.
        // MaxCompute supports schemas, which are located under projects and used to classify objects such as tables, resources, and UDFs. A project can contain multiple schemas. For more information, see <props="china">[Schema-related operations](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/schema-related-operations)
        // <props="intl">[Schema-related operations](https://www.alibabacloud.com/help/en/maxcompute/user-guide/schema-related-operations).
        shared_ptr<bool> threeTierModel_ {};
        // The project type. Valid values:
        // - **managed**: internal project
        // - **external**: external project
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->marker_ == nullptr && this->maxItem_ == nullptr && this->projects_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // marker Field Functions 
      bool hasMarker() const { return this->marker_ != nullptr;};
      void deleteMarker() { this->marker_ = nullptr;};
      inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
      inline Data& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


      // maxItem Field Functions 
      bool hasMaxItem() const { return this->maxItem_ != nullptr;};
      void deleteMaxItem() { this->maxItem_ = nullptr;};
      inline int32_t getMaxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
      inline Data& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<Data::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Data::Projects>) };
      inline vector<Data::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<Data::Projects>) };
      inline Data& setProjects(const vector<Data::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline Data& setProjects(vector<Data::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    protected:
      // The pagination token. The current operation only supports sequential pagination. A non-empty nextToken value indicates that more data is available. You can use the nextToken value as a parameter to query the next page.
      shared_ptr<string> nextToken_ {};
      // The marker used to specify the starting point of the returned results. The results are sorted in alphabetical order and returned starting from the first item after the marker.
      shared_ptr<string> marker_ {};
      // The maximum number of results to return per page.
      shared_ptr<int32_t> maxItem_ {};
      // The list of projects.
      shared_ptr<vector<Data::Projects>> projects_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListProjectsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListProjectsResponseBody::Data) };
    inline ListProjectsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListProjectsResponseBody::Data) };
    inline ListProjectsResponseBody& setData(const ListProjectsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProjectsResponseBody& setData(ListProjectsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<ListProjectsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
