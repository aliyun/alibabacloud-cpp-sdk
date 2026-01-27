// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_TO_JSON(ExternalConfig, externalConfig_);
      DARABONBA_PTR_TO_JSON(MatchSchemaConfigs, matchSchemaConfigs_);
      DARABONBA_PTR_TO_JSON(MatchSchemas, matchSchemas_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_FROM_JSON(ExternalConfig, externalConfig_);
      DARABONBA_PTR_FROM_JSON(MatchSchemaConfigs, matchSchemaConfigs_);
      DARABONBA_PTR_FROM_JSON(MatchSchemas, matchSchemas_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
    };
    UpdateApprovalProcessRequest() = default ;
    UpdateApprovalProcessRequest(const UpdateApprovalProcessRequest &) = default ;
    UpdateApprovalProcessRequest(UpdateApprovalProcessRequest &&) = default ;
    UpdateApprovalProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessRequest() = default ;
    UpdateApprovalProcessRequest& operator=(const UpdateApprovalProcessRequest &) = default ;
    UpdateApprovalProcessRequest& operator=(UpdateApprovalProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MatchSchemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MatchSchemas& obj) { 
        DARABONBA_PTR_TO_JSON(AppUninstallSchemaId, appUninstallSchemaId_);
        DARABONBA_PTR_TO_JSON(DeviceRegistrationSchemaId, deviceRegistrationSchemaId_);
        DARABONBA_PTR_TO_JSON(DlpSendSchemaId, dlpSendSchemaId_);
        DARABONBA_PTR_TO_JSON(DomainBlacklistSchemaId, domainBlacklistSchemaId_);
        DARABONBA_PTR_TO_JSON(DomainWhitelistSchemaId, domainWhitelistSchemaId_);
        DARABONBA_PTR_TO_JSON(EndpointHardeningSchemaId, endpointHardeningSchemaId_);
        DARABONBA_PTR_TO_JSON(PeripheralBlockSchemaId, peripheralBlockSchemaId_);
        DARABONBA_PTR_TO_JSON(SoftwareBlockSchemaId, softwareBlockSchemaId_);
        DARABONBA_PTR_TO_JSON(SoftwareHardeningSchemaId, softwareHardeningSchemaId_);
      };
      friend void from_json(const Darabonba::Json& j, MatchSchemas& obj) { 
        DARABONBA_PTR_FROM_JSON(AppUninstallSchemaId, appUninstallSchemaId_);
        DARABONBA_PTR_FROM_JSON(DeviceRegistrationSchemaId, deviceRegistrationSchemaId_);
        DARABONBA_PTR_FROM_JSON(DlpSendSchemaId, dlpSendSchemaId_);
        DARABONBA_PTR_FROM_JSON(DomainBlacklistSchemaId, domainBlacklistSchemaId_);
        DARABONBA_PTR_FROM_JSON(DomainWhitelistSchemaId, domainWhitelistSchemaId_);
        DARABONBA_PTR_FROM_JSON(EndpointHardeningSchemaId, endpointHardeningSchemaId_);
        DARABONBA_PTR_FROM_JSON(PeripheralBlockSchemaId, peripheralBlockSchemaId_);
        DARABONBA_PTR_FROM_JSON(SoftwareBlockSchemaId, softwareBlockSchemaId_);
        DARABONBA_PTR_FROM_JSON(SoftwareHardeningSchemaId, softwareHardeningSchemaId_);
      };
      MatchSchemas() = default ;
      MatchSchemas(const MatchSchemas &) = default ;
      MatchSchemas(MatchSchemas &&) = default ;
      MatchSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MatchSchemas() = default ;
      MatchSchemas& operator=(const MatchSchemas &) = default ;
      MatchSchemas& operator=(MatchSchemas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appUninstallSchemaId_ == nullptr
        && this->deviceRegistrationSchemaId_ == nullptr && this->dlpSendSchemaId_ == nullptr && this->domainBlacklistSchemaId_ == nullptr && this->domainWhitelistSchemaId_ == nullptr && this->endpointHardeningSchemaId_ == nullptr
        && this->peripheralBlockSchemaId_ == nullptr && this->softwareBlockSchemaId_ == nullptr && this->softwareHardeningSchemaId_ == nullptr; };
      // appUninstallSchemaId Field Functions 
      bool hasAppUninstallSchemaId() const { return this->appUninstallSchemaId_ != nullptr;};
      void deleteAppUninstallSchemaId() { this->appUninstallSchemaId_ = nullptr;};
      inline string getAppUninstallSchemaId() const { DARABONBA_PTR_GET_DEFAULT(appUninstallSchemaId_, "") };
      inline MatchSchemas& setAppUninstallSchemaId(string appUninstallSchemaId) { DARABONBA_PTR_SET_VALUE(appUninstallSchemaId_, appUninstallSchemaId) };


      // deviceRegistrationSchemaId Field Functions 
      bool hasDeviceRegistrationSchemaId() const { return this->deviceRegistrationSchemaId_ != nullptr;};
      void deleteDeviceRegistrationSchemaId() { this->deviceRegistrationSchemaId_ = nullptr;};
      inline string getDeviceRegistrationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(deviceRegistrationSchemaId_, "") };
      inline MatchSchemas& setDeviceRegistrationSchemaId(string deviceRegistrationSchemaId) { DARABONBA_PTR_SET_VALUE(deviceRegistrationSchemaId_, deviceRegistrationSchemaId) };


      // dlpSendSchemaId Field Functions 
      bool hasDlpSendSchemaId() const { return this->dlpSendSchemaId_ != nullptr;};
      void deleteDlpSendSchemaId() { this->dlpSendSchemaId_ = nullptr;};
      inline string getDlpSendSchemaId() const { DARABONBA_PTR_GET_DEFAULT(dlpSendSchemaId_, "") };
      inline MatchSchemas& setDlpSendSchemaId(string dlpSendSchemaId) { DARABONBA_PTR_SET_VALUE(dlpSendSchemaId_, dlpSendSchemaId) };


      // domainBlacklistSchemaId Field Functions 
      bool hasDomainBlacklistSchemaId() const { return this->domainBlacklistSchemaId_ != nullptr;};
      void deleteDomainBlacklistSchemaId() { this->domainBlacklistSchemaId_ = nullptr;};
      inline string getDomainBlacklistSchemaId() const { DARABONBA_PTR_GET_DEFAULT(domainBlacklistSchemaId_, "") };
      inline MatchSchemas& setDomainBlacklistSchemaId(string domainBlacklistSchemaId) { DARABONBA_PTR_SET_VALUE(domainBlacklistSchemaId_, domainBlacklistSchemaId) };


      // domainWhitelistSchemaId Field Functions 
      bool hasDomainWhitelistSchemaId() const { return this->domainWhitelistSchemaId_ != nullptr;};
      void deleteDomainWhitelistSchemaId() { this->domainWhitelistSchemaId_ = nullptr;};
      inline string getDomainWhitelistSchemaId() const { DARABONBA_PTR_GET_DEFAULT(domainWhitelistSchemaId_, "") };
      inline MatchSchemas& setDomainWhitelistSchemaId(string domainWhitelistSchemaId) { DARABONBA_PTR_SET_VALUE(domainWhitelistSchemaId_, domainWhitelistSchemaId) };


      // endpointHardeningSchemaId Field Functions 
      bool hasEndpointHardeningSchemaId() const { return this->endpointHardeningSchemaId_ != nullptr;};
      void deleteEndpointHardeningSchemaId() { this->endpointHardeningSchemaId_ = nullptr;};
      inline string getEndpointHardeningSchemaId() const { DARABONBA_PTR_GET_DEFAULT(endpointHardeningSchemaId_, "") };
      inline MatchSchemas& setEndpointHardeningSchemaId(string endpointHardeningSchemaId) { DARABONBA_PTR_SET_VALUE(endpointHardeningSchemaId_, endpointHardeningSchemaId) };


      // peripheralBlockSchemaId Field Functions 
      bool hasPeripheralBlockSchemaId() const { return this->peripheralBlockSchemaId_ != nullptr;};
      void deletePeripheralBlockSchemaId() { this->peripheralBlockSchemaId_ = nullptr;};
      inline string getPeripheralBlockSchemaId() const { DARABONBA_PTR_GET_DEFAULT(peripheralBlockSchemaId_, "") };
      inline MatchSchemas& setPeripheralBlockSchemaId(string peripheralBlockSchemaId) { DARABONBA_PTR_SET_VALUE(peripheralBlockSchemaId_, peripheralBlockSchemaId) };


      // softwareBlockSchemaId Field Functions 
      bool hasSoftwareBlockSchemaId() const { return this->softwareBlockSchemaId_ != nullptr;};
      void deleteSoftwareBlockSchemaId() { this->softwareBlockSchemaId_ = nullptr;};
      inline string getSoftwareBlockSchemaId() const { DARABONBA_PTR_GET_DEFAULT(softwareBlockSchemaId_, "") };
      inline MatchSchemas& setSoftwareBlockSchemaId(string softwareBlockSchemaId) { DARABONBA_PTR_SET_VALUE(softwareBlockSchemaId_, softwareBlockSchemaId) };


      // softwareHardeningSchemaId Field Functions 
      bool hasSoftwareHardeningSchemaId() const { return this->softwareHardeningSchemaId_ != nullptr;};
      void deleteSoftwareHardeningSchemaId() { this->softwareHardeningSchemaId_ = nullptr;};
      inline string getSoftwareHardeningSchemaId() const { DARABONBA_PTR_GET_DEFAULT(softwareHardeningSchemaId_, "") };
      inline MatchSchemas& setSoftwareHardeningSchemaId(string softwareHardeningSchemaId) { DARABONBA_PTR_SET_VALUE(softwareHardeningSchemaId_, softwareHardeningSchemaId) };


    protected:
      shared_ptr<string> appUninstallSchemaId_ {};
      shared_ptr<string> deviceRegistrationSchemaId_ {};
      shared_ptr<string> dlpSendSchemaId_ {};
      shared_ptr<string> domainBlacklistSchemaId_ {};
      shared_ptr<string> domainWhitelistSchemaId_ {};
      shared_ptr<string> endpointHardeningSchemaId_ {};
      shared_ptr<string> peripheralBlockSchemaId_ {};
      shared_ptr<string> softwareBlockSchemaId_ {};
      shared_ptr<string> softwareHardeningSchemaId_ {};
    };

    class MatchSchemaConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MatchSchemaConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(AppUninstallSchemaConfig, appUninstallSchemaConfig_);
        DARABONBA_PTR_TO_JSON(DeviceRegistrationSchemaConfig, deviceRegistrationSchemaConfig_);
        DARABONBA_PTR_TO_JSON(DlpSendSchemaConfig, dlpSendSchemaConfig_);
        DARABONBA_PTR_TO_JSON(DomainBlacklistSchemaConfig, domainBlacklistSchemaConfig_);
        DARABONBA_PTR_TO_JSON(DomainWhitelistSchemaConfig, domainWhitelistSchemaConfig_);
        DARABONBA_PTR_TO_JSON(EndpointHardeningSchemaConfig, endpointHardeningSchemaConfig_);
        DARABONBA_PTR_TO_JSON(PeripheralBlockSchemaConfig, peripheralBlockSchemaConfig_);
        DARABONBA_PTR_TO_JSON(SoftwareBlockSchemaConfig, softwareBlockSchemaConfig_);
        DARABONBA_PTR_TO_JSON(SoftwareHardeningSchemaConfig, softwareHardeningSchemaConfig_);
      };
      friend void from_json(const Darabonba::Json& j, MatchSchemaConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(AppUninstallSchemaConfig, appUninstallSchemaConfig_);
        DARABONBA_PTR_FROM_JSON(DeviceRegistrationSchemaConfig, deviceRegistrationSchemaConfig_);
        DARABONBA_PTR_FROM_JSON(DlpSendSchemaConfig, dlpSendSchemaConfig_);
        DARABONBA_PTR_FROM_JSON(DomainBlacklistSchemaConfig, domainBlacklistSchemaConfig_);
        DARABONBA_PTR_FROM_JSON(DomainWhitelistSchemaConfig, domainWhitelistSchemaConfig_);
        DARABONBA_PTR_FROM_JSON(EndpointHardeningSchemaConfig, endpointHardeningSchemaConfig_);
        DARABONBA_PTR_FROM_JSON(PeripheralBlockSchemaConfig, peripheralBlockSchemaConfig_);
        DARABONBA_PTR_FROM_JSON(SoftwareBlockSchemaConfig, softwareBlockSchemaConfig_);
        DARABONBA_PTR_FROM_JSON(SoftwareHardeningSchemaConfig, softwareHardeningSchemaConfig_);
      };
      MatchSchemaConfigs() = default ;
      MatchSchemaConfigs(const MatchSchemaConfigs &) = default ;
      MatchSchemaConfigs(MatchSchemaConfigs &&) = default ;
      MatchSchemaConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MatchSchemaConfigs() = default ;
      MatchSchemaConfigs& operator=(const MatchSchemaConfigs &) = default ;
      MatchSchemaConfigs& operator=(MatchSchemaConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SoftwareHardeningSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SoftwareHardeningSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, SoftwareHardeningSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        SoftwareHardeningSchemaConfig() = default ;
        SoftwareHardeningSchemaConfig(const SoftwareHardeningSchemaConfig &) = default ;
        SoftwareHardeningSchemaConfig(SoftwareHardeningSchemaConfig &&) = default ;
        SoftwareHardeningSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SoftwareHardeningSchemaConfig() = default ;
        SoftwareHardeningSchemaConfig& operator=(const SoftwareHardeningSchemaConfig &) = default ;
        SoftwareHardeningSchemaConfig& operator=(SoftwareHardeningSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline SoftwareHardeningSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<SoftwareHardeningSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<SoftwareHardeningSchemaConfig::FieldMap>) };
        inline vector<SoftwareHardeningSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<SoftwareHardeningSchemaConfig::FieldMap>) };
        inline SoftwareHardeningSchemaConfig& setFieldMap(const vector<SoftwareHardeningSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline SoftwareHardeningSchemaConfig& setFieldMap(vector<SoftwareHardeningSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline SoftwareHardeningSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<SoftwareHardeningSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      class SoftwareBlockSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SoftwareBlockSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, SoftwareBlockSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        SoftwareBlockSchemaConfig() = default ;
        SoftwareBlockSchemaConfig(const SoftwareBlockSchemaConfig &) = default ;
        SoftwareBlockSchemaConfig(SoftwareBlockSchemaConfig &&) = default ;
        SoftwareBlockSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SoftwareBlockSchemaConfig() = default ;
        SoftwareBlockSchemaConfig& operator=(const SoftwareBlockSchemaConfig &) = default ;
        SoftwareBlockSchemaConfig& operator=(SoftwareBlockSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline SoftwareBlockSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<SoftwareBlockSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<SoftwareBlockSchemaConfig::FieldMap>) };
        inline vector<SoftwareBlockSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<SoftwareBlockSchemaConfig::FieldMap>) };
        inline SoftwareBlockSchemaConfig& setFieldMap(const vector<SoftwareBlockSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline SoftwareBlockSchemaConfig& setFieldMap(vector<SoftwareBlockSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline SoftwareBlockSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<SoftwareBlockSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      class PeripheralBlockSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeripheralBlockSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, PeripheralBlockSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        PeripheralBlockSchemaConfig() = default ;
        PeripheralBlockSchemaConfig(const PeripheralBlockSchemaConfig &) = default ;
        PeripheralBlockSchemaConfig(PeripheralBlockSchemaConfig &&) = default ;
        PeripheralBlockSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeripheralBlockSchemaConfig() = default ;
        PeripheralBlockSchemaConfig& operator=(const PeripheralBlockSchemaConfig &) = default ;
        PeripheralBlockSchemaConfig& operator=(PeripheralBlockSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline PeripheralBlockSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<PeripheralBlockSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<PeripheralBlockSchemaConfig::FieldMap>) };
        inline vector<PeripheralBlockSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<PeripheralBlockSchemaConfig::FieldMap>) };
        inline PeripheralBlockSchemaConfig& setFieldMap(const vector<PeripheralBlockSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline PeripheralBlockSchemaConfig& setFieldMap(vector<PeripheralBlockSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline PeripheralBlockSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<PeripheralBlockSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      class EndpointHardeningSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointHardeningSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointHardeningSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        EndpointHardeningSchemaConfig() = default ;
        EndpointHardeningSchemaConfig(const EndpointHardeningSchemaConfig &) = default ;
        EndpointHardeningSchemaConfig(EndpointHardeningSchemaConfig &&) = default ;
        EndpointHardeningSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndpointHardeningSchemaConfig() = default ;
        EndpointHardeningSchemaConfig& operator=(const EndpointHardeningSchemaConfig &) = default ;
        EndpointHardeningSchemaConfig& operator=(EndpointHardeningSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline EndpointHardeningSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<EndpointHardeningSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<EndpointHardeningSchemaConfig::FieldMap>) };
        inline vector<EndpointHardeningSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<EndpointHardeningSchemaConfig::FieldMap>) };
        inline EndpointHardeningSchemaConfig& setFieldMap(const vector<EndpointHardeningSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline EndpointHardeningSchemaConfig& setFieldMap(vector<EndpointHardeningSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline EndpointHardeningSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<EndpointHardeningSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DomainWhitelistSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainWhitelistSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainWhitelistSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        DomainWhitelistSchemaConfig() = default ;
        DomainWhitelistSchemaConfig(const DomainWhitelistSchemaConfig &) = default ;
        DomainWhitelistSchemaConfig(DomainWhitelistSchemaConfig &&) = default ;
        DomainWhitelistSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainWhitelistSchemaConfig() = default ;
        DomainWhitelistSchemaConfig& operator=(const DomainWhitelistSchemaConfig &) = default ;
        DomainWhitelistSchemaConfig& operator=(DomainWhitelistSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline DomainWhitelistSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<DomainWhitelistSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<DomainWhitelistSchemaConfig::FieldMap>) };
        inline vector<DomainWhitelistSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<DomainWhitelistSchemaConfig::FieldMap>) };
        inline DomainWhitelistSchemaConfig& setFieldMap(const vector<DomainWhitelistSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline DomainWhitelistSchemaConfig& setFieldMap(vector<DomainWhitelistSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline DomainWhitelistSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<DomainWhitelistSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DomainBlacklistSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainBlacklistSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainBlacklistSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        DomainBlacklistSchemaConfig() = default ;
        DomainBlacklistSchemaConfig(const DomainBlacklistSchemaConfig &) = default ;
        DomainBlacklistSchemaConfig(DomainBlacklistSchemaConfig &&) = default ;
        DomainBlacklistSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainBlacklistSchemaConfig() = default ;
        DomainBlacklistSchemaConfig& operator=(const DomainBlacklistSchemaConfig &) = default ;
        DomainBlacklistSchemaConfig& operator=(DomainBlacklistSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline DomainBlacklistSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<DomainBlacklistSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<DomainBlacklistSchemaConfig::FieldMap>) };
        inline vector<DomainBlacklistSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<DomainBlacklistSchemaConfig::FieldMap>) };
        inline DomainBlacklistSchemaConfig& setFieldMap(const vector<DomainBlacklistSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline DomainBlacklistSchemaConfig& setFieldMap(vector<DomainBlacklistSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline DomainBlacklistSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<DomainBlacklistSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DlpSendSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DlpSendSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DlpSendSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        DlpSendSchemaConfig() = default ;
        DlpSendSchemaConfig(const DlpSendSchemaConfig &) = default ;
        DlpSendSchemaConfig(DlpSendSchemaConfig &&) = default ;
        DlpSendSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DlpSendSchemaConfig() = default ;
        DlpSendSchemaConfig& operator=(const DlpSendSchemaConfig &) = default ;
        DlpSendSchemaConfig& operator=(DlpSendSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline DlpSendSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<DlpSendSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<DlpSendSchemaConfig::FieldMap>) };
        inline vector<DlpSendSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<DlpSendSchemaConfig::FieldMap>) };
        inline DlpSendSchemaConfig& setFieldMap(const vector<DlpSendSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline DlpSendSchemaConfig& setFieldMap(vector<DlpSendSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline DlpSendSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<DlpSendSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DeviceRegistrationSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceRegistrationSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceRegistrationSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        DeviceRegistrationSchemaConfig() = default ;
        DeviceRegistrationSchemaConfig(const DeviceRegistrationSchemaConfig &) = default ;
        DeviceRegistrationSchemaConfig(DeviceRegistrationSchemaConfig &&) = default ;
        DeviceRegistrationSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceRegistrationSchemaConfig() = default ;
        DeviceRegistrationSchemaConfig& operator=(const DeviceRegistrationSchemaConfig &) = default ;
        DeviceRegistrationSchemaConfig& operator=(DeviceRegistrationSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline DeviceRegistrationSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<DeviceRegistrationSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<DeviceRegistrationSchemaConfig::FieldMap>) };
        inline vector<DeviceRegistrationSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<DeviceRegistrationSchemaConfig::FieldMap>) };
        inline DeviceRegistrationSchemaConfig& setFieldMap(const vector<DeviceRegistrationSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline DeviceRegistrationSchemaConfig& setFieldMap(vector<DeviceRegistrationSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline DeviceRegistrationSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<DeviceRegistrationSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      class AppUninstallSchemaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppUninstallSchemaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, AppUninstallSchemaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        AppUninstallSchemaConfig() = default ;
        AppUninstallSchemaConfig(const AppUninstallSchemaConfig &) = default ;
        AppUninstallSchemaConfig(AppUninstallSchemaConfig &&) = default ;
        AppUninstallSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppUninstallSchemaConfig() = default ;
        AppUninstallSchemaConfig& operator=(const AppUninstallSchemaConfig &) = default ;
        AppUninstallSchemaConfig& operator=(AppUninstallSchemaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FieldMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldMap& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
            DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_TO_JSON(SystemField, systemField_);
          };
          friend void from_json(const Darabonba::Json& j, FieldMap& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
            DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
            DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
          };
          FieldMap() = default ;
          FieldMap(const FieldMap &) = default ;
          FieldMap(FieldMap &&) = default ;
          FieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldMap() = default ;
          FieldMap& operator=(const FieldMap &) = default ;
          FieldMap& operator=(FieldMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayField_ == nullptr
        && this->displayFieldValue_ == nullptr && this->systemField_ == nullptr; };
          // displayField Field Functions 
          bool hasDisplayField() const { return this->displayField_ != nullptr;};
          void deleteDisplayField() { this->displayField_ = nullptr;};
          inline string getDisplayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
          inline FieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


          // displayFieldValue Field Functions 
          bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
          void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
          inline string getDisplayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
          inline FieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


          // systemField Field Functions 
          bool hasSystemField() const { return this->systemField_ != nullptr;};
          void deleteSystemField() { this->systemField_ = nullptr;};
          inline string getSystemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
          inline FieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


        protected:
          shared_ptr<string> displayField_ {};
          shared_ptr<string> displayFieldValue_ {};
          shared_ptr<string> systemField_ {};
        };

        virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && this->fieldMap_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline AppUninstallSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<AppUninstallSchemaConfig::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<AppUninstallSchemaConfig::FieldMap>) };
        inline vector<AppUninstallSchemaConfig::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<AppUninstallSchemaConfig::FieldMap>) };
        inline AppUninstallSchemaConfig& setFieldMap(const vector<AppUninstallSchemaConfig::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline AppUninstallSchemaConfig& setFieldMap(vector<AppUninstallSchemaConfig::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline AppUninstallSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<AppUninstallSchemaConfig::FieldMap>> fieldMap_ {};
        shared_ptr<string> schemaId_ {};
      };

      virtual bool empty() const override { return this->appUninstallSchemaConfig_ == nullptr
        && this->deviceRegistrationSchemaConfig_ == nullptr && this->dlpSendSchemaConfig_ == nullptr && this->domainBlacklistSchemaConfig_ == nullptr && this->domainWhitelistSchemaConfig_ == nullptr && this->endpointHardeningSchemaConfig_ == nullptr
        && this->peripheralBlockSchemaConfig_ == nullptr && this->softwareBlockSchemaConfig_ == nullptr && this->softwareHardeningSchemaConfig_ == nullptr; };
      // appUninstallSchemaConfig Field Functions 
      bool hasAppUninstallSchemaConfig() const { return this->appUninstallSchemaConfig_ != nullptr;};
      void deleteAppUninstallSchemaConfig() { this->appUninstallSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::AppUninstallSchemaConfig & getAppUninstallSchemaConfig() const { DARABONBA_PTR_GET_CONST(appUninstallSchemaConfig_, MatchSchemaConfigs::AppUninstallSchemaConfig) };
      inline MatchSchemaConfigs::AppUninstallSchemaConfig getAppUninstallSchemaConfig() { DARABONBA_PTR_GET(appUninstallSchemaConfig_, MatchSchemaConfigs::AppUninstallSchemaConfig) };
      inline MatchSchemaConfigs& setAppUninstallSchemaConfig(const MatchSchemaConfigs::AppUninstallSchemaConfig & appUninstallSchemaConfig) { DARABONBA_PTR_SET_VALUE(appUninstallSchemaConfig_, appUninstallSchemaConfig) };
      inline MatchSchemaConfigs& setAppUninstallSchemaConfig(MatchSchemaConfigs::AppUninstallSchemaConfig && appUninstallSchemaConfig) { DARABONBA_PTR_SET_RVALUE(appUninstallSchemaConfig_, appUninstallSchemaConfig) };


      // deviceRegistrationSchemaConfig Field Functions 
      bool hasDeviceRegistrationSchemaConfig() const { return this->deviceRegistrationSchemaConfig_ != nullptr;};
      void deleteDeviceRegistrationSchemaConfig() { this->deviceRegistrationSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::DeviceRegistrationSchemaConfig & getDeviceRegistrationSchemaConfig() const { DARABONBA_PTR_GET_CONST(deviceRegistrationSchemaConfig_, MatchSchemaConfigs::DeviceRegistrationSchemaConfig) };
      inline MatchSchemaConfigs::DeviceRegistrationSchemaConfig getDeviceRegistrationSchemaConfig() { DARABONBA_PTR_GET(deviceRegistrationSchemaConfig_, MatchSchemaConfigs::DeviceRegistrationSchemaConfig) };
      inline MatchSchemaConfigs& setDeviceRegistrationSchemaConfig(const MatchSchemaConfigs::DeviceRegistrationSchemaConfig & deviceRegistrationSchemaConfig) { DARABONBA_PTR_SET_VALUE(deviceRegistrationSchemaConfig_, deviceRegistrationSchemaConfig) };
      inline MatchSchemaConfigs& setDeviceRegistrationSchemaConfig(MatchSchemaConfigs::DeviceRegistrationSchemaConfig && deviceRegistrationSchemaConfig) { DARABONBA_PTR_SET_RVALUE(deviceRegistrationSchemaConfig_, deviceRegistrationSchemaConfig) };


      // dlpSendSchemaConfig Field Functions 
      bool hasDlpSendSchemaConfig() const { return this->dlpSendSchemaConfig_ != nullptr;};
      void deleteDlpSendSchemaConfig() { this->dlpSendSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::DlpSendSchemaConfig & getDlpSendSchemaConfig() const { DARABONBA_PTR_GET_CONST(dlpSendSchemaConfig_, MatchSchemaConfigs::DlpSendSchemaConfig) };
      inline MatchSchemaConfigs::DlpSendSchemaConfig getDlpSendSchemaConfig() { DARABONBA_PTR_GET(dlpSendSchemaConfig_, MatchSchemaConfigs::DlpSendSchemaConfig) };
      inline MatchSchemaConfigs& setDlpSendSchemaConfig(const MatchSchemaConfigs::DlpSendSchemaConfig & dlpSendSchemaConfig) { DARABONBA_PTR_SET_VALUE(dlpSendSchemaConfig_, dlpSendSchemaConfig) };
      inline MatchSchemaConfigs& setDlpSendSchemaConfig(MatchSchemaConfigs::DlpSendSchemaConfig && dlpSendSchemaConfig) { DARABONBA_PTR_SET_RVALUE(dlpSendSchemaConfig_, dlpSendSchemaConfig) };


      // domainBlacklistSchemaConfig Field Functions 
      bool hasDomainBlacklistSchemaConfig() const { return this->domainBlacklistSchemaConfig_ != nullptr;};
      void deleteDomainBlacklistSchemaConfig() { this->domainBlacklistSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::DomainBlacklistSchemaConfig & getDomainBlacklistSchemaConfig() const { DARABONBA_PTR_GET_CONST(domainBlacklistSchemaConfig_, MatchSchemaConfigs::DomainBlacklistSchemaConfig) };
      inline MatchSchemaConfigs::DomainBlacklistSchemaConfig getDomainBlacklistSchemaConfig() { DARABONBA_PTR_GET(domainBlacklistSchemaConfig_, MatchSchemaConfigs::DomainBlacklistSchemaConfig) };
      inline MatchSchemaConfigs& setDomainBlacklistSchemaConfig(const MatchSchemaConfigs::DomainBlacklistSchemaConfig & domainBlacklistSchemaConfig) { DARABONBA_PTR_SET_VALUE(domainBlacklistSchemaConfig_, domainBlacklistSchemaConfig) };
      inline MatchSchemaConfigs& setDomainBlacklistSchemaConfig(MatchSchemaConfigs::DomainBlacklistSchemaConfig && domainBlacklistSchemaConfig) { DARABONBA_PTR_SET_RVALUE(domainBlacklistSchemaConfig_, domainBlacklistSchemaConfig) };


      // domainWhitelistSchemaConfig Field Functions 
      bool hasDomainWhitelistSchemaConfig() const { return this->domainWhitelistSchemaConfig_ != nullptr;};
      void deleteDomainWhitelistSchemaConfig() { this->domainWhitelistSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::DomainWhitelistSchemaConfig & getDomainWhitelistSchemaConfig() const { DARABONBA_PTR_GET_CONST(domainWhitelistSchemaConfig_, MatchSchemaConfigs::DomainWhitelistSchemaConfig) };
      inline MatchSchemaConfigs::DomainWhitelistSchemaConfig getDomainWhitelistSchemaConfig() { DARABONBA_PTR_GET(domainWhitelistSchemaConfig_, MatchSchemaConfigs::DomainWhitelistSchemaConfig) };
      inline MatchSchemaConfigs& setDomainWhitelistSchemaConfig(const MatchSchemaConfigs::DomainWhitelistSchemaConfig & domainWhitelistSchemaConfig) { DARABONBA_PTR_SET_VALUE(domainWhitelistSchemaConfig_, domainWhitelistSchemaConfig) };
      inline MatchSchemaConfigs& setDomainWhitelistSchemaConfig(MatchSchemaConfigs::DomainWhitelistSchemaConfig && domainWhitelistSchemaConfig) { DARABONBA_PTR_SET_RVALUE(domainWhitelistSchemaConfig_, domainWhitelistSchemaConfig) };


      // endpointHardeningSchemaConfig Field Functions 
      bool hasEndpointHardeningSchemaConfig() const { return this->endpointHardeningSchemaConfig_ != nullptr;};
      void deleteEndpointHardeningSchemaConfig() { this->endpointHardeningSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::EndpointHardeningSchemaConfig & getEndpointHardeningSchemaConfig() const { DARABONBA_PTR_GET_CONST(endpointHardeningSchemaConfig_, MatchSchemaConfigs::EndpointHardeningSchemaConfig) };
      inline MatchSchemaConfigs::EndpointHardeningSchemaConfig getEndpointHardeningSchemaConfig() { DARABONBA_PTR_GET(endpointHardeningSchemaConfig_, MatchSchemaConfigs::EndpointHardeningSchemaConfig) };
      inline MatchSchemaConfigs& setEndpointHardeningSchemaConfig(const MatchSchemaConfigs::EndpointHardeningSchemaConfig & endpointHardeningSchemaConfig) { DARABONBA_PTR_SET_VALUE(endpointHardeningSchemaConfig_, endpointHardeningSchemaConfig) };
      inline MatchSchemaConfigs& setEndpointHardeningSchemaConfig(MatchSchemaConfigs::EndpointHardeningSchemaConfig && endpointHardeningSchemaConfig) { DARABONBA_PTR_SET_RVALUE(endpointHardeningSchemaConfig_, endpointHardeningSchemaConfig) };


      // peripheralBlockSchemaConfig Field Functions 
      bool hasPeripheralBlockSchemaConfig() const { return this->peripheralBlockSchemaConfig_ != nullptr;};
      void deletePeripheralBlockSchemaConfig() { this->peripheralBlockSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::PeripheralBlockSchemaConfig & getPeripheralBlockSchemaConfig() const { DARABONBA_PTR_GET_CONST(peripheralBlockSchemaConfig_, MatchSchemaConfigs::PeripheralBlockSchemaConfig) };
      inline MatchSchemaConfigs::PeripheralBlockSchemaConfig getPeripheralBlockSchemaConfig() { DARABONBA_PTR_GET(peripheralBlockSchemaConfig_, MatchSchemaConfigs::PeripheralBlockSchemaConfig) };
      inline MatchSchemaConfigs& setPeripheralBlockSchemaConfig(const MatchSchemaConfigs::PeripheralBlockSchemaConfig & peripheralBlockSchemaConfig) { DARABONBA_PTR_SET_VALUE(peripheralBlockSchemaConfig_, peripheralBlockSchemaConfig) };
      inline MatchSchemaConfigs& setPeripheralBlockSchemaConfig(MatchSchemaConfigs::PeripheralBlockSchemaConfig && peripheralBlockSchemaConfig) { DARABONBA_PTR_SET_RVALUE(peripheralBlockSchemaConfig_, peripheralBlockSchemaConfig) };


      // softwareBlockSchemaConfig Field Functions 
      bool hasSoftwareBlockSchemaConfig() const { return this->softwareBlockSchemaConfig_ != nullptr;};
      void deleteSoftwareBlockSchemaConfig() { this->softwareBlockSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::SoftwareBlockSchemaConfig & getSoftwareBlockSchemaConfig() const { DARABONBA_PTR_GET_CONST(softwareBlockSchemaConfig_, MatchSchemaConfigs::SoftwareBlockSchemaConfig) };
      inline MatchSchemaConfigs::SoftwareBlockSchemaConfig getSoftwareBlockSchemaConfig() { DARABONBA_PTR_GET(softwareBlockSchemaConfig_, MatchSchemaConfigs::SoftwareBlockSchemaConfig) };
      inline MatchSchemaConfigs& setSoftwareBlockSchemaConfig(const MatchSchemaConfigs::SoftwareBlockSchemaConfig & softwareBlockSchemaConfig) { DARABONBA_PTR_SET_VALUE(softwareBlockSchemaConfig_, softwareBlockSchemaConfig) };
      inline MatchSchemaConfigs& setSoftwareBlockSchemaConfig(MatchSchemaConfigs::SoftwareBlockSchemaConfig && softwareBlockSchemaConfig) { DARABONBA_PTR_SET_RVALUE(softwareBlockSchemaConfig_, softwareBlockSchemaConfig) };


      // softwareHardeningSchemaConfig Field Functions 
      bool hasSoftwareHardeningSchemaConfig() const { return this->softwareHardeningSchemaConfig_ != nullptr;};
      void deleteSoftwareHardeningSchemaConfig() { this->softwareHardeningSchemaConfig_ = nullptr;};
      inline const MatchSchemaConfigs::SoftwareHardeningSchemaConfig & getSoftwareHardeningSchemaConfig() const { DARABONBA_PTR_GET_CONST(softwareHardeningSchemaConfig_, MatchSchemaConfigs::SoftwareHardeningSchemaConfig) };
      inline MatchSchemaConfigs::SoftwareHardeningSchemaConfig getSoftwareHardeningSchemaConfig() { DARABONBA_PTR_GET(softwareHardeningSchemaConfig_, MatchSchemaConfigs::SoftwareHardeningSchemaConfig) };
      inline MatchSchemaConfigs& setSoftwareHardeningSchemaConfig(const MatchSchemaConfigs::SoftwareHardeningSchemaConfig & softwareHardeningSchemaConfig) { DARABONBA_PTR_SET_VALUE(softwareHardeningSchemaConfig_, softwareHardeningSchemaConfig) };
      inline MatchSchemaConfigs& setSoftwareHardeningSchemaConfig(MatchSchemaConfigs::SoftwareHardeningSchemaConfig && softwareHardeningSchemaConfig) { DARABONBA_PTR_SET_RVALUE(softwareHardeningSchemaConfig_, softwareHardeningSchemaConfig) };


    protected:
      shared_ptr<MatchSchemaConfigs::AppUninstallSchemaConfig> appUninstallSchemaConfig_ {};
      shared_ptr<MatchSchemaConfigs::DeviceRegistrationSchemaConfig> deviceRegistrationSchemaConfig_ {};
      shared_ptr<MatchSchemaConfigs::DlpSendSchemaConfig> dlpSendSchemaConfig_ {};
      shared_ptr<MatchSchemaConfigs::DomainBlacklistSchemaConfig> domainBlacklistSchemaConfig_ {};
      shared_ptr<MatchSchemaConfigs::DomainWhitelistSchemaConfig> domainWhitelistSchemaConfig_ {};
      shared_ptr<MatchSchemaConfigs::EndpointHardeningSchemaConfig> endpointHardeningSchemaConfig_ {};
      shared_ptr<MatchSchemaConfigs::PeripheralBlockSchemaConfig> peripheralBlockSchemaConfig_ {};
      shared_ptr<MatchSchemaConfigs::SoftwareBlockSchemaConfig> softwareBlockSchemaConfig_ {};
      shared_ptr<MatchSchemaConfigs::SoftwareHardeningSchemaConfig> softwareHardeningSchemaConfig_ {};
    };

    virtual bool empty() const override { return this->approvalType_ == nullptr
        && this->description_ == nullptr && this->eventLabel_ == nullptr && this->externalConfig_ == nullptr && this->matchSchemaConfigs_ == nullptr && this->matchSchemas_ == nullptr
        && this->processId_ == nullptr && this->processName_ == nullptr && this->processNodes_ == nullptr; };
    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline int32_t getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, 0) };
    inline UpdateApprovalProcessRequest& setApprovalType(int32_t approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApprovalProcessRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string getEventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline UpdateApprovalProcessRequest& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


    // externalConfig Field Functions 
    bool hasExternalConfig() const { return this->externalConfig_ != nullptr;};
    void deleteExternalConfig() { this->externalConfig_ = nullptr;};
    inline string getExternalConfig() const { DARABONBA_PTR_GET_DEFAULT(externalConfig_, "") };
    inline UpdateApprovalProcessRequest& setExternalConfig(string externalConfig) { DARABONBA_PTR_SET_VALUE(externalConfig_, externalConfig) };


    // matchSchemaConfigs Field Functions 
    bool hasMatchSchemaConfigs() const { return this->matchSchemaConfigs_ != nullptr;};
    void deleteMatchSchemaConfigs() { this->matchSchemaConfigs_ = nullptr;};
    inline const UpdateApprovalProcessRequest::MatchSchemaConfigs & getMatchSchemaConfigs() const { DARABONBA_PTR_GET_CONST(matchSchemaConfigs_, UpdateApprovalProcessRequest::MatchSchemaConfigs) };
    inline UpdateApprovalProcessRequest::MatchSchemaConfigs getMatchSchemaConfigs() { DARABONBA_PTR_GET(matchSchemaConfigs_, UpdateApprovalProcessRequest::MatchSchemaConfigs) };
    inline UpdateApprovalProcessRequest& setMatchSchemaConfigs(const UpdateApprovalProcessRequest::MatchSchemaConfigs & matchSchemaConfigs) { DARABONBA_PTR_SET_VALUE(matchSchemaConfigs_, matchSchemaConfigs) };
    inline UpdateApprovalProcessRequest& setMatchSchemaConfigs(UpdateApprovalProcessRequest::MatchSchemaConfigs && matchSchemaConfigs) { DARABONBA_PTR_SET_RVALUE(matchSchemaConfigs_, matchSchemaConfigs) };


    // matchSchemas Field Functions 
    bool hasMatchSchemas() const { return this->matchSchemas_ != nullptr;};
    void deleteMatchSchemas() { this->matchSchemas_ = nullptr;};
    inline const UpdateApprovalProcessRequest::MatchSchemas & getMatchSchemas() const { DARABONBA_PTR_GET_CONST(matchSchemas_, UpdateApprovalProcessRequest::MatchSchemas) };
    inline UpdateApprovalProcessRequest::MatchSchemas getMatchSchemas() { DARABONBA_PTR_GET(matchSchemas_, UpdateApprovalProcessRequest::MatchSchemas) };
    inline UpdateApprovalProcessRequest& setMatchSchemas(const UpdateApprovalProcessRequest::MatchSchemas & matchSchemas) { DARABONBA_PTR_SET_VALUE(matchSchemas_, matchSchemas) };
    inline UpdateApprovalProcessRequest& setMatchSchemas(UpdateApprovalProcessRequest::MatchSchemas && matchSchemas) { DARABONBA_PTR_SET_RVALUE(matchSchemas_, matchSchemas) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline UpdateApprovalProcessRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline UpdateApprovalProcessRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<string>> & getProcessNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<string>>) };
    inline vector<vector<string>> getProcessNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<string>>) };
    inline UpdateApprovalProcessRequest& setProcessNodes(const vector<vector<string>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline UpdateApprovalProcessRequest& setProcessNodes(vector<vector<string>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


  protected:
    shared_ptr<int32_t> approvalType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> eventLabel_ {};
    shared_ptr<string> externalConfig_ {};
    shared_ptr<UpdateApprovalProcessRequest::MatchSchemaConfigs> matchSchemaConfigs_ {};
    shared_ptr<UpdateApprovalProcessRequest::MatchSchemas> matchSchemas_ {};
    // This parameter is required.
    shared_ptr<string> processId_ {};
    shared_ptr<string> processName_ {};
    shared_ptr<vector<vector<string>>> processNodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
