// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSRESPONSEBODY_HPP_
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
  class UpdateApprovalProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApprovalProcessResponseBody() = default ;
    UpdateApprovalProcessResponseBody(const UpdateApprovalProcessResponseBody &) = default ;
    UpdateApprovalProcessResponseBody(UpdateApprovalProcessResponseBody &&) = default ;
    UpdateApprovalProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessResponseBody() = default ;
    UpdateApprovalProcessResponseBody& operator=(const UpdateApprovalProcessResponseBody &) = default ;
    UpdateApprovalProcessResponseBody& operator=(UpdateApprovalProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Process : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Process& obj) { 
        DARABONBA_PTR_TO_JSON(AppUninstallPolicies, appUninstallPolicies_);
        DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DeviceRegistrationPolicies, deviceRegistrationPolicies_);
        DARABONBA_PTR_TO_JSON(DlpSendPolicies, dlpSendPolicies_);
        DARABONBA_PTR_TO_JSON(DomainBlacklistPolicies, domainBlacklistPolicies_);
        DARABONBA_PTR_TO_JSON(DomainWhitelistPolicies, domainWhitelistPolicies_);
        DARABONBA_PTR_TO_JSON(EndpointHardeningPolicies, endpointHardeningPolicies_);
        DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
        DARABONBA_PTR_TO_JSON(ExternalConfig, externalConfig_);
        DARABONBA_PTR_TO_JSON(PeripheraBlockPolicies, peripheraBlockPolicies_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
        DARABONBA_PTR_TO_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
        DARABONBA_PTR_TO_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
      };
      friend void from_json(const Darabonba::Json& j, Process& obj) { 
        DARABONBA_PTR_FROM_JSON(AppUninstallPolicies, appUninstallPolicies_);
        DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DeviceRegistrationPolicies, deviceRegistrationPolicies_);
        DARABONBA_PTR_FROM_JSON(DlpSendPolicies, dlpSendPolicies_);
        DARABONBA_PTR_FROM_JSON(DomainBlacklistPolicies, domainBlacklistPolicies_);
        DARABONBA_PTR_FROM_JSON(DomainWhitelistPolicies, domainWhitelistPolicies_);
        DARABONBA_PTR_FROM_JSON(EndpointHardeningPolicies, endpointHardeningPolicies_);
        DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
        DARABONBA_PTR_FROM_JSON(ExternalConfig, externalConfig_);
        DARABONBA_PTR_FROM_JSON(PeripheraBlockPolicies, peripheraBlockPolicies_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
        DARABONBA_PTR_FROM_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
        DARABONBA_PTR_FROM_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
      };
      Process() = default ;
      Process(const Process &) = default ;
      Process(Process &&) = default ;
      Process(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Process() = default ;
      Process& operator=(const Process &) = default ;
      Process& operator=(Process &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SoftwareHardeningPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SoftwareHardeningPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, SoftwareHardeningPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        SoftwareHardeningPolicies() = default ;
        SoftwareHardeningPolicies(const SoftwareHardeningPolicies &) = default ;
        SoftwareHardeningPolicies(SoftwareHardeningPolicies &&) = default ;
        SoftwareHardeningPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SoftwareHardeningPolicies() = default ;
        SoftwareHardeningPolicies& operator=(const SoftwareHardeningPolicies &) = default ;
        SoftwareHardeningPolicies& operator=(SoftwareHardeningPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline SoftwareHardeningPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<SoftwareHardeningPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<SoftwareHardeningPolicies::FieldMap>) };
        inline vector<SoftwareHardeningPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<SoftwareHardeningPolicies::FieldMap>) };
        inline SoftwareHardeningPolicies& setFieldMap(const vector<SoftwareHardeningPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline SoftwareHardeningPolicies& setFieldMap(vector<SoftwareHardeningPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline SoftwareHardeningPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline SoftwareHardeningPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline SoftwareHardeningPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<SoftwareHardeningPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class SoftwareBlockPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SoftwareBlockPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, SoftwareBlockPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        SoftwareBlockPolicies() = default ;
        SoftwareBlockPolicies(const SoftwareBlockPolicies &) = default ;
        SoftwareBlockPolicies(SoftwareBlockPolicies &&) = default ;
        SoftwareBlockPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SoftwareBlockPolicies() = default ;
        SoftwareBlockPolicies& operator=(const SoftwareBlockPolicies &) = default ;
        SoftwareBlockPolicies& operator=(SoftwareBlockPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline SoftwareBlockPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<SoftwareBlockPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<SoftwareBlockPolicies::FieldMap>) };
        inline vector<SoftwareBlockPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<SoftwareBlockPolicies::FieldMap>) };
        inline SoftwareBlockPolicies& setFieldMap(const vector<SoftwareBlockPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline SoftwareBlockPolicies& setFieldMap(vector<SoftwareBlockPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline SoftwareBlockPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline SoftwareBlockPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline SoftwareBlockPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<SoftwareBlockPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class PeripheraBlockPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeripheraBlockPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, PeripheraBlockPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        PeripheraBlockPolicies() = default ;
        PeripheraBlockPolicies(const PeripheraBlockPolicies &) = default ;
        PeripheraBlockPolicies(PeripheraBlockPolicies &&) = default ;
        PeripheraBlockPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeripheraBlockPolicies() = default ;
        PeripheraBlockPolicies& operator=(const PeripheraBlockPolicies &) = default ;
        PeripheraBlockPolicies& operator=(PeripheraBlockPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline PeripheraBlockPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<PeripheraBlockPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<PeripheraBlockPolicies::FieldMap>) };
        inline vector<PeripheraBlockPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<PeripheraBlockPolicies::FieldMap>) };
        inline PeripheraBlockPolicies& setFieldMap(const vector<PeripheraBlockPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline PeripheraBlockPolicies& setFieldMap(vector<PeripheraBlockPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline PeripheraBlockPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline PeripheraBlockPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline PeripheraBlockPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<PeripheraBlockPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class EndpointHardeningPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointHardeningPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointHardeningPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        EndpointHardeningPolicies() = default ;
        EndpointHardeningPolicies(const EndpointHardeningPolicies &) = default ;
        EndpointHardeningPolicies(EndpointHardeningPolicies &&) = default ;
        EndpointHardeningPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndpointHardeningPolicies() = default ;
        EndpointHardeningPolicies& operator=(const EndpointHardeningPolicies &) = default ;
        EndpointHardeningPolicies& operator=(EndpointHardeningPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline EndpointHardeningPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<EndpointHardeningPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<EndpointHardeningPolicies::FieldMap>) };
        inline vector<EndpointHardeningPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<EndpointHardeningPolicies::FieldMap>) };
        inline EndpointHardeningPolicies& setFieldMap(const vector<EndpointHardeningPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline EndpointHardeningPolicies& setFieldMap(vector<EndpointHardeningPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline EndpointHardeningPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline EndpointHardeningPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline EndpointHardeningPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<EndpointHardeningPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DomainWhitelistPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainWhitelistPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainWhitelistPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        DomainWhitelistPolicies() = default ;
        DomainWhitelistPolicies(const DomainWhitelistPolicies &) = default ;
        DomainWhitelistPolicies(DomainWhitelistPolicies &&) = default ;
        DomainWhitelistPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainWhitelistPolicies() = default ;
        DomainWhitelistPolicies& operator=(const DomainWhitelistPolicies &) = default ;
        DomainWhitelistPolicies& operator=(DomainWhitelistPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline DomainWhitelistPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<DomainWhitelistPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<DomainWhitelistPolicies::FieldMap>) };
        inline vector<DomainWhitelistPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<DomainWhitelistPolicies::FieldMap>) };
        inline DomainWhitelistPolicies& setFieldMap(const vector<DomainWhitelistPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline DomainWhitelistPolicies& setFieldMap(vector<DomainWhitelistPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline DomainWhitelistPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline DomainWhitelistPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline DomainWhitelistPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<DomainWhitelistPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DomainBlacklistPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainBlacklistPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainBlacklistPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        DomainBlacklistPolicies() = default ;
        DomainBlacklistPolicies(const DomainBlacklistPolicies &) = default ;
        DomainBlacklistPolicies(DomainBlacklistPolicies &&) = default ;
        DomainBlacklistPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainBlacklistPolicies() = default ;
        DomainBlacklistPolicies& operator=(const DomainBlacklistPolicies &) = default ;
        DomainBlacklistPolicies& operator=(DomainBlacklistPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline DomainBlacklistPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<DomainBlacklistPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<DomainBlacklistPolicies::FieldMap>) };
        inline vector<DomainBlacklistPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<DomainBlacklistPolicies::FieldMap>) };
        inline DomainBlacklistPolicies& setFieldMap(const vector<DomainBlacklistPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline DomainBlacklistPolicies& setFieldMap(vector<DomainBlacklistPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline DomainBlacklistPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline DomainBlacklistPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline DomainBlacklistPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<DomainBlacklistPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DlpSendPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DlpSendPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DlpSendPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        DlpSendPolicies() = default ;
        DlpSendPolicies(const DlpSendPolicies &) = default ;
        DlpSendPolicies(DlpSendPolicies &&) = default ;
        DlpSendPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DlpSendPolicies() = default ;
        DlpSendPolicies& operator=(const DlpSendPolicies &) = default ;
        DlpSendPolicies& operator=(DlpSendPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline DlpSendPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<DlpSendPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<DlpSendPolicies::FieldMap>) };
        inline vector<DlpSendPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<DlpSendPolicies::FieldMap>) };
        inline DlpSendPolicies& setFieldMap(const vector<DlpSendPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline DlpSendPolicies& setFieldMap(vector<DlpSendPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline DlpSendPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline DlpSendPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline DlpSendPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<DlpSendPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DeviceRegistrationPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceRegistrationPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceRegistrationPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        DeviceRegistrationPolicies() = default ;
        DeviceRegistrationPolicies(const DeviceRegistrationPolicies &) = default ;
        DeviceRegistrationPolicies(DeviceRegistrationPolicies &&) = default ;
        DeviceRegistrationPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceRegistrationPolicies() = default ;
        DeviceRegistrationPolicies& operator=(const DeviceRegistrationPolicies &) = default ;
        DeviceRegistrationPolicies& operator=(DeviceRegistrationPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline DeviceRegistrationPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<DeviceRegistrationPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<DeviceRegistrationPolicies::FieldMap>) };
        inline vector<DeviceRegistrationPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<DeviceRegistrationPolicies::FieldMap>) };
        inline DeviceRegistrationPolicies& setFieldMap(const vector<DeviceRegistrationPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline DeviceRegistrationPolicies& setFieldMap(vector<DeviceRegistrationPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline DeviceRegistrationPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline DeviceRegistrationPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline DeviceRegistrationPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<DeviceRegistrationPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class AppUninstallPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppUninstallPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, AppUninstallPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
          DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        AppUninstallPolicies() = default ;
        AppUninstallPolicies(const AppUninstallPolicies &) = default ;
        AppUninstallPolicies(AppUninstallPolicies &&) = default ;
        AppUninstallPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppUninstallPolicies() = default ;
        AppUninstallPolicies& operator=(const AppUninstallPolicies &) = default ;
        AppUninstallPolicies& operator=(AppUninstallPolicies &&) = default ;
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
        && this->fieldMap_ == nullptr && this->policyIds_ == nullptr && this->schemaId_ == nullptr; };
        // externalProcessId Field Functions 
        bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
        void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
        inline string getExternalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
        inline AppUninstallPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


        // fieldMap Field Functions 
        bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
        void deleteFieldMap() { this->fieldMap_ = nullptr;};
        inline const vector<AppUninstallPolicies::FieldMap> & getFieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<AppUninstallPolicies::FieldMap>) };
        inline vector<AppUninstallPolicies::FieldMap> getFieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<AppUninstallPolicies::FieldMap>) };
        inline AppUninstallPolicies& setFieldMap(const vector<AppUninstallPolicies::FieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
        inline AppUninstallPolicies& setFieldMap(vector<AppUninstallPolicies::FieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline AppUninstallPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline AppUninstallPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline AppUninstallPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<string> externalProcessId_ {};
        shared_ptr<vector<AppUninstallPolicies::FieldMap>> fieldMap_ {};
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      virtual bool empty() const override { return this->appUninstallPolicies_ == nullptr
        && this->approvalType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->deviceRegistrationPolicies_ == nullptr && this->dlpSendPolicies_ == nullptr
        && this->domainBlacklistPolicies_ == nullptr && this->domainWhitelistPolicies_ == nullptr && this->endpointHardeningPolicies_ == nullptr && this->eventLabel_ == nullptr && this->externalConfig_ == nullptr
        && this->peripheraBlockPolicies_ == nullptr && this->processId_ == nullptr && this->processName_ == nullptr && this->processNodes_ == nullptr && this->softwareBlockPolicies_ == nullptr
        && this->softwareHardeningPolicies_ == nullptr; };
      // appUninstallPolicies Field Functions 
      bool hasAppUninstallPolicies() const { return this->appUninstallPolicies_ != nullptr;};
      void deleteAppUninstallPolicies() { this->appUninstallPolicies_ = nullptr;};
      inline const Process::AppUninstallPolicies & getAppUninstallPolicies() const { DARABONBA_PTR_GET_CONST(appUninstallPolicies_, Process::AppUninstallPolicies) };
      inline Process::AppUninstallPolicies getAppUninstallPolicies() { DARABONBA_PTR_GET(appUninstallPolicies_, Process::AppUninstallPolicies) };
      inline Process& setAppUninstallPolicies(const Process::AppUninstallPolicies & appUninstallPolicies) { DARABONBA_PTR_SET_VALUE(appUninstallPolicies_, appUninstallPolicies) };
      inline Process& setAppUninstallPolicies(Process::AppUninstallPolicies && appUninstallPolicies) { DARABONBA_PTR_SET_RVALUE(appUninstallPolicies_, appUninstallPolicies) };


      // approvalType Field Functions 
      bool hasApprovalType() const { return this->approvalType_ != nullptr;};
      void deleteApprovalType() { this->approvalType_ = nullptr;};
      inline int32_t getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, 0) };
      inline Process& setApprovalType(int32_t approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Process& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Process& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // deviceRegistrationPolicies Field Functions 
      bool hasDeviceRegistrationPolicies() const { return this->deviceRegistrationPolicies_ != nullptr;};
      void deleteDeviceRegistrationPolicies() { this->deviceRegistrationPolicies_ = nullptr;};
      inline const Process::DeviceRegistrationPolicies & getDeviceRegistrationPolicies() const { DARABONBA_PTR_GET_CONST(deviceRegistrationPolicies_, Process::DeviceRegistrationPolicies) };
      inline Process::DeviceRegistrationPolicies getDeviceRegistrationPolicies() { DARABONBA_PTR_GET(deviceRegistrationPolicies_, Process::DeviceRegistrationPolicies) };
      inline Process& setDeviceRegistrationPolicies(const Process::DeviceRegistrationPolicies & deviceRegistrationPolicies) { DARABONBA_PTR_SET_VALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };
      inline Process& setDeviceRegistrationPolicies(Process::DeviceRegistrationPolicies && deviceRegistrationPolicies) { DARABONBA_PTR_SET_RVALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };


      // dlpSendPolicies Field Functions 
      bool hasDlpSendPolicies() const { return this->dlpSendPolicies_ != nullptr;};
      void deleteDlpSendPolicies() { this->dlpSendPolicies_ = nullptr;};
      inline const Process::DlpSendPolicies & getDlpSendPolicies() const { DARABONBA_PTR_GET_CONST(dlpSendPolicies_, Process::DlpSendPolicies) };
      inline Process::DlpSendPolicies getDlpSendPolicies() { DARABONBA_PTR_GET(dlpSendPolicies_, Process::DlpSendPolicies) };
      inline Process& setDlpSendPolicies(const Process::DlpSendPolicies & dlpSendPolicies) { DARABONBA_PTR_SET_VALUE(dlpSendPolicies_, dlpSendPolicies) };
      inline Process& setDlpSendPolicies(Process::DlpSendPolicies && dlpSendPolicies) { DARABONBA_PTR_SET_RVALUE(dlpSendPolicies_, dlpSendPolicies) };


      // domainBlacklistPolicies Field Functions 
      bool hasDomainBlacklistPolicies() const { return this->domainBlacklistPolicies_ != nullptr;};
      void deleteDomainBlacklistPolicies() { this->domainBlacklistPolicies_ = nullptr;};
      inline const Process::DomainBlacklistPolicies & getDomainBlacklistPolicies() const { DARABONBA_PTR_GET_CONST(domainBlacklistPolicies_, Process::DomainBlacklistPolicies) };
      inline Process::DomainBlacklistPolicies getDomainBlacklistPolicies() { DARABONBA_PTR_GET(domainBlacklistPolicies_, Process::DomainBlacklistPolicies) };
      inline Process& setDomainBlacklistPolicies(const Process::DomainBlacklistPolicies & domainBlacklistPolicies) { DARABONBA_PTR_SET_VALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };
      inline Process& setDomainBlacklistPolicies(Process::DomainBlacklistPolicies && domainBlacklistPolicies) { DARABONBA_PTR_SET_RVALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };


      // domainWhitelistPolicies Field Functions 
      bool hasDomainWhitelistPolicies() const { return this->domainWhitelistPolicies_ != nullptr;};
      void deleteDomainWhitelistPolicies() { this->domainWhitelistPolicies_ = nullptr;};
      inline const Process::DomainWhitelistPolicies & getDomainWhitelistPolicies() const { DARABONBA_PTR_GET_CONST(domainWhitelistPolicies_, Process::DomainWhitelistPolicies) };
      inline Process::DomainWhitelistPolicies getDomainWhitelistPolicies() { DARABONBA_PTR_GET(domainWhitelistPolicies_, Process::DomainWhitelistPolicies) };
      inline Process& setDomainWhitelistPolicies(const Process::DomainWhitelistPolicies & domainWhitelistPolicies) { DARABONBA_PTR_SET_VALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };
      inline Process& setDomainWhitelistPolicies(Process::DomainWhitelistPolicies && domainWhitelistPolicies) { DARABONBA_PTR_SET_RVALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };


      // endpointHardeningPolicies Field Functions 
      bool hasEndpointHardeningPolicies() const { return this->endpointHardeningPolicies_ != nullptr;};
      void deleteEndpointHardeningPolicies() { this->endpointHardeningPolicies_ = nullptr;};
      inline const Process::EndpointHardeningPolicies & getEndpointHardeningPolicies() const { DARABONBA_PTR_GET_CONST(endpointHardeningPolicies_, Process::EndpointHardeningPolicies) };
      inline Process::EndpointHardeningPolicies getEndpointHardeningPolicies() { DARABONBA_PTR_GET(endpointHardeningPolicies_, Process::EndpointHardeningPolicies) };
      inline Process& setEndpointHardeningPolicies(const Process::EndpointHardeningPolicies & endpointHardeningPolicies) { DARABONBA_PTR_SET_VALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };
      inline Process& setEndpointHardeningPolicies(Process::EndpointHardeningPolicies && endpointHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };


      // eventLabel Field Functions 
      bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
      void deleteEventLabel() { this->eventLabel_ = nullptr;};
      inline string getEventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
      inline Process& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


      // externalConfig Field Functions 
      bool hasExternalConfig() const { return this->externalConfig_ != nullptr;};
      void deleteExternalConfig() { this->externalConfig_ = nullptr;};
      inline string getExternalConfig() const { DARABONBA_PTR_GET_DEFAULT(externalConfig_, "") };
      inline Process& setExternalConfig(string externalConfig) { DARABONBA_PTR_SET_VALUE(externalConfig_, externalConfig) };


      // peripheraBlockPolicies Field Functions 
      bool hasPeripheraBlockPolicies() const { return this->peripheraBlockPolicies_ != nullptr;};
      void deletePeripheraBlockPolicies() { this->peripheraBlockPolicies_ = nullptr;};
      inline const Process::PeripheraBlockPolicies & getPeripheraBlockPolicies() const { DARABONBA_PTR_GET_CONST(peripheraBlockPolicies_, Process::PeripheraBlockPolicies) };
      inline Process::PeripheraBlockPolicies getPeripheraBlockPolicies() { DARABONBA_PTR_GET(peripheraBlockPolicies_, Process::PeripheraBlockPolicies) };
      inline Process& setPeripheraBlockPolicies(const Process::PeripheraBlockPolicies & peripheraBlockPolicies) { DARABONBA_PTR_SET_VALUE(peripheraBlockPolicies_, peripheraBlockPolicies) };
      inline Process& setPeripheraBlockPolicies(Process::PeripheraBlockPolicies && peripheraBlockPolicies) { DARABONBA_PTR_SET_RVALUE(peripheraBlockPolicies_, peripheraBlockPolicies) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Process& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Process& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // processNodes Field Functions 
      bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
      void deleteProcessNodes() { this->processNodes_ = nullptr;};
      inline const vector<vector<Process::ProcessNodes>> & getProcessNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<Process::ProcessNodes>>) };
      inline vector<vector<Process::ProcessNodes>> getProcessNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<Process::ProcessNodes>>) };
      inline Process& setProcessNodes(const vector<vector<Process::ProcessNodes>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
      inline Process& setProcessNodes(vector<vector<Process::ProcessNodes>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


      // softwareBlockPolicies Field Functions 
      bool hasSoftwareBlockPolicies() const { return this->softwareBlockPolicies_ != nullptr;};
      void deleteSoftwareBlockPolicies() { this->softwareBlockPolicies_ = nullptr;};
      inline const Process::SoftwareBlockPolicies & getSoftwareBlockPolicies() const { DARABONBA_PTR_GET_CONST(softwareBlockPolicies_, Process::SoftwareBlockPolicies) };
      inline Process::SoftwareBlockPolicies getSoftwareBlockPolicies() { DARABONBA_PTR_GET(softwareBlockPolicies_, Process::SoftwareBlockPolicies) };
      inline Process& setSoftwareBlockPolicies(const Process::SoftwareBlockPolicies & softwareBlockPolicies) { DARABONBA_PTR_SET_VALUE(softwareBlockPolicies_, softwareBlockPolicies) };
      inline Process& setSoftwareBlockPolicies(Process::SoftwareBlockPolicies && softwareBlockPolicies) { DARABONBA_PTR_SET_RVALUE(softwareBlockPolicies_, softwareBlockPolicies) };


      // softwareHardeningPolicies Field Functions 
      bool hasSoftwareHardeningPolicies() const { return this->softwareHardeningPolicies_ != nullptr;};
      void deleteSoftwareHardeningPolicies() { this->softwareHardeningPolicies_ = nullptr;};
      inline const Process::SoftwareHardeningPolicies & getSoftwareHardeningPolicies() const { DARABONBA_PTR_GET_CONST(softwareHardeningPolicies_, Process::SoftwareHardeningPolicies) };
      inline Process::SoftwareHardeningPolicies getSoftwareHardeningPolicies() { DARABONBA_PTR_GET(softwareHardeningPolicies_, Process::SoftwareHardeningPolicies) };
      inline Process& setSoftwareHardeningPolicies(const Process::SoftwareHardeningPolicies & softwareHardeningPolicies) { DARABONBA_PTR_SET_VALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };
      inline Process& setSoftwareHardeningPolicies(Process::SoftwareHardeningPolicies && softwareHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };


    protected:
      shared_ptr<Process::AppUninstallPolicies> appUninstallPolicies_ {};
      shared_ptr<int32_t> approvalType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Process::DeviceRegistrationPolicies> deviceRegistrationPolicies_ {};
      shared_ptr<Process::DlpSendPolicies> dlpSendPolicies_ {};
      shared_ptr<Process::DomainBlacklistPolicies> domainBlacklistPolicies_ {};
      shared_ptr<Process::DomainWhitelistPolicies> domainWhitelistPolicies_ {};
      shared_ptr<Process::EndpointHardeningPolicies> endpointHardeningPolicies_ {};
      shared_ptr<string> eventLabel_ {};
      shared_ptr<string> externalConfig_ {};
      shared_ptr<Process::PeripheraBlockPolicies> peripheraBlockPolicies_ {};
      shared_ptr<string> processId_ {};
      shared_ptr<string> processName_ {};
      shared_ptr<vector<vector<Process::ProcessNodes>>> processNodes_ {};
      shared_ptr<Process::SoftwareBlockPolicies> softwareBlockPolicies_ {};
      shared_ptr<Process::SoftwareHardeningPolicies> softwareHardeningPolicies_ {};
    };

    virtual bool empty() const override { return this->process_ == nullptr
        && this->requestId_ == nullptr; };
    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline const UpdateApprovalProcessResponseBody::Process & getProcess() const { DARABONBA_PTR_GET_CONST(process_, UpdateApprovalProcessResponseBody::Process) };
    inline UpdateApprovalProcessResponseBody::Process getProcess() { DARABONBA_PTR_GET(process_, UpdateApprovalProcessResponseBody::Process) };
    inline UpdateApprovalProcessResponseBody& setProcess(const UpdateApprovalProcessResponseBody::Process & process) { DARABONBA_PTR_SET_VALUE(process_, process) };
    inline UpdateApprovalProcessResponseBody& setProcess(UpdateApprovalProcessResponseBody::Process && process) { DARABONBA_PTR_SET_RVALUE(process_, process) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApprovalProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateApprovalProcessResponseBody::Process> process_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
