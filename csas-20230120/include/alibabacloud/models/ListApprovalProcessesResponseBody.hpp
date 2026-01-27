// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODY_HPP_
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
  class ListApprovalProcessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListApprovalProcessesResponseBody() = default ;
    ListApprovalProcessesResponseBody(const ListApprovalProcessesResponseBody &) = default ;
    ListApprovalProcessesResponseBody(ListApprovalProcessesResponseBody &&) = default ;
    ListApprovalProcessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesResponseBody() = default ;
    ListApprovalProcessesResponseBody& operator=(const ListApprovalProcessesResponseBody &) = default ;
    ListApprovalProcessesResponseBody& operator=(ListApprovalProcessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Processes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Processes& obj) { 
        DARABONBA_PTR_TO_JSON(AppUninstallPolicies, appUninstallPolicies_);
        DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DeviceRegistrationPolicies, deviceRegistrationPolicies_);
        DARABONBA_PTR_TO_JSON(DlpSendPolicies, dlpSendPolicies_);
        DARABONBA_PTR_TO_JSON(DomainBlacklistPolicies, domainBlacklistPolicies_);
        DARABONBA_PTR_TO_JSON(DomainWhitelistPolicies, domainWhitelistPolicies_);
        DARABONBA_PTR_TO_JSON(EndpointHardeningPolicies, endpointHardeningPolicies_);
        DARABONBA_PTR_TO_JSON(PeripheralBlockPolicies, peripheralBlockPolicies_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
        DARABONBA_PTR_TO_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
        DARABONBA_PTR_TO_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
      };
      friend void from_json(const Darabonba::Json& j, Processes& obj) { 
        DARABONBA_PTR_FROM_JSON(AppUninstallPolicies, appUninstallPolicies_);
        DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DeviceRegistrationPolicies, deviceRegistrationPolicies_);
        DARABONBA_PTR_FROM_JSON(DlpSendPolicies, dlpSendPolicies_);
        DARABONBA_PTR_FROM_JSON(DomainBlacklistPolicies, domainBlacklistPolicies_);
        DARABONBA_PTR_FROM_JSON(DomainWhitelistPolicies, domainWhitelistPolicies_);
        DARABONBA_PTR_FROM_JSON(EndpointHardeningPolicies, endpointHardeningPolicies_);
        DARABONBA_PTR_FROM_JSON(PeripheralBlockPolicies, peripheralBlockPolicies_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
        DARABONBA_PTR_FROM_JSON(SoftwareBlockPolicies, softwareBlockPolicies_);
        DARABONBA_PTR_FROM_JSON(SoftwareHardeningPolicies, softwareHardeningPolicies_);
      };
      Processes() = default ;
      Processes(const Processes &) = default ;
      Processes(Processes &&) = default ;
      Processes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Processes() = default ;
      Processes& operator=(const Processes &) = default ;
      Processes& operator=(Processes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SoftwareHardeningPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SoftwareHardeningPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, SoftwareHardeningPolicies& obj) { 
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
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
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
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class SoftwareBlockPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SoftwareBlockPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, SoftwareBlockPolicies& obj) { 
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
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
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
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class PeripheralBlockPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeripheralBlockPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, PeripheralBlockPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        };
        PeripheralBlockPolicies() = default ;
        PeripheralBlockPolicies(const PeripheralBlockPolicies &) = default ;
        PeripheralBlockPolicies(PeripheralBlockPolicies &&) = default ;
        PeripheralBlockPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeripheralBlockPolicies() = default ;
        PeripheralBlockPolicies& operator=(const PeripheralBlockPolicies &) = default ;
        PeripheralBlockPolicies& operator=(PeripheralBlockPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
        // policyIds Field Functions 
        bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
        void deletePolicyIds() { this->policyIds_ = nullptr;};
        inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
        inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
        inline PeripheralBlockPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
        inline PeripheralBlockPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline PeripheralBlockPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      protected:
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class EndpointHardeningPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointHardeningPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointHardeningPolicies& obj) { 
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
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
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
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DomainWhitelistPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainWhitelistPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainWhitelistPolicies& obj) { 
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
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
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
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DomainBlacklistPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainBlacklistPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainBlacklistPolicies& obj) { 
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
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
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
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DlpSendPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DlpSendPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DlpSendPolicies& obj) { 
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
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
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
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class DeviceRegistrationPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceRegistrationPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceRegistrationPolicies& obj) { 
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
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
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
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      class AppUninstallPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppUninstallPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        };
        friend void from_json(const Darabonba::Json& j, AppUninstallPolicies& obj) { 
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
        virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->schemaId_ == nullptr; };
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
        shared_ptr<vector<string>> policyIds_ {};
        shared_ptr<string> schemaId_ {};
      };

      virtual bool empty() const override { return this->appUninstallPolicies_ == nullptr
        && this->approvalType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->deviceRegistrationPolicies_ == nullptr && this->dlpSendPolicies_ == nullptr
        && this->domainBlacklistPolicies_ == nullptr && this->domainWhitelistPolicies_ == nullptr && this->endpointHardeningPolicies_ == nullptr && this->peripheralBlockPolicies_ == nullptr && this->processId_ == nullptr
        && this->processName_ == nullptr && this->processNodes_ == nullptr && this->softwareBlockPolicies_ == nullptr && this->softwareHardeningPolicies_ == nullptr; };
      // appUninstallPolicies Field Functions 
      bool hasAppUninstallPolicies() const { return this->appUninstallPolicies_ != nullptr;};
      void deleteAppUninstallPolicies() { this->appUninstallPolicies_ = nullptr;};
      inline const Processes::AppUninstallPolicies & getAppUninstallPolicies() const { DARABONBA_PTR_GET_CONST(appUninstallPolicies_, Processes::AppUninstallPolicies) };
      inline Processes::AppUninstallPolicies getAppUninstallPolicies() { DARABONBA_PTR_GET(appUninstallPolicies_, Processes::AppUninstallPolicies) };
      inline Processes& setAppUninstallPolicies(const Processes::AppUninstallPolicies & appUninstallPolicies) { DARABONBA_PTR_SET_VALUE(appUninstallPolicies_, appUninstallPolicies) };
      inline Processes& setAppUninstallPolicies(Processes::AppUninstallPolicies && appUninstallPolicies) { DARABONBA_PTR_SET_RVALUE(appUninstallPolicies_, appUninstallPolicies) };


      // approvalType Field Functions 
      bool hasApprovalType() const { return this->approvalType_ != nullptr;};
      void deleteApprovalType() { this->approvalType_ = nullptr;};
      inline int32_t getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, 0) };
      inline Processes& setApprovalType(int32_t approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Processes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Processes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // deviceRegistrationPolicies Field Functions 
      bool hasDeviceRegistrationPolicies() const { return this->deviceRegistrationPolicies_ != nullptr;};
      void deleteDeviceRegistrationPolicies() { this->deviceRegistrationPolicies_ = nullptr;};
      inline const Processes::DeviceRegistrationPolicies & getDeviceRegistrationPolicies() const { DARABONBA_PTR_GET_CONST(deviceRegistrationPolicies_, Processes::DeviceRegistrationPolicies) };
      inline Processes::DeviceRegistrationPolicies getDeviceRegistrationPolicies() { DARABONBA_PTR_GET(deviceRegistrationPolicies_, Processes::DeviceRegistrationPolicies) };
      inline Processes& setDeviceRegistrationPolicies(const Processes::DeviceRegistrationPolicies & deviceRegistrationPolicies) { DARABONBA_PTR_SET_VALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };
      inline Processes& setDeviceRegistrationPolicies(Processes::DeviceRegistrationPolicies && deviceRegistrationPolicies) { DARABONBA_PTR_SET_RVALUE(deviceRegistrationPolicies_, deviceRegistrationPolicies) };


      // dlpSendPolicies Field Functions 
      bool hasDlpSendPolicies() const { return this->dlpSendPolicies_ != nullptr;};
      void deleteDlpSendPolicies() { this->dlpSendPolicies_ = nullptr;};
      inline const Processes::DlpSendPolicies & getDlpSendPolicies() const { DARABONBA_PTR_GET_CONST(dlpSendPolicies_, Processes::DlpSendPolicies) };
      inline Processes::DlpSendPolicies getDlpSendPolicies() { DARABONBA_PTR_GET(dlpSendPolicies_, Processes::DlpSendPolicies) };
      inline Processes& setDlpSendPolicies(const Processes::DlpSendPolicies & dlpSendPolicies) { DARABONBA_PTR_SET_VALUE(dlpSendPolicies_, dlpSendPolicies) };
      inline Processes& setDlpSendPolicies(Processes::DlpSendPolicies && dlpSendPolicies) { DARABONBA_PTR_SET_RVALUE(dlpSendPolicies_, dlpSendPolicies) };


      // domainBlacklistPolicies Field Functions 
      bool hasDomainBlacklistPolicies() const { return this->domainBlacklistPolicies_ != nullptr;};
      void deleteDomainBlacklistPolicies() { this->domainBlacklistPolicies_ = nullptr;};
      inline const Processes::DomainBlacklistPolicies & getDomainBlacklistPolicies() const { DARABONBA_PTR_GET_CONST(domainBlacklistPolicies_, Processes::DomainBlacklistPolicies) };
      inline Processes::DomainBlacklistPolicies getDomainBlacklistPolicies() { DARABONBA_PTR_GET(domainBlacklistPolicies_, Processes::DomainBlacklistPolicies) };
      inline Processes& setDomainBlacklistPolicies(const Processes::DomainBlacklistPolicies & domainBlacklistPolicies) { DARABONBA_PTR_SET_VALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };
      inline Processes& setDomainBlacklistPolicies(Processes::DomainBlacklistPolicies && domainBlacklistPolicies) { DARABONBA_PTR_SET_RVALUE(domainBlacklistPolicies_, domainBlacklistPolicies) };


      // domainWhitelistPolicies Field Functions 
      bool hasDomainWhitelistPolicies() const { return this->domainWhitelistPolicies_ != nullptr;};
      void deleteDomainWhitelistPolicies() { this->domainWhitelistPolicies_ = nullptr;};
      inline const Processes::DomainWhitelistPolicies & getDomainWhitelistPolicies() const { DARABONBA_PTR_GET_CONST(domainWhitelistPolicies_, Processes::DomainWhitelistPolicies) };
      inline Processes::DomainWhitelistPolicies getDomainWhitelistPolicies() { DARABONBA_PTR_GET(domainWhitelistPolicies_, Processes::DomainWhitelistPolicies) };
      inline Processes& setDomainWhitelistPolicies(const Processes::DomainWhitelistPolicies & domainWhitelistPolicies) { DARABONBA_PTR_SET_VALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };
      inline Processes& setDomainWhitelistPolicies(Processes::DomainWhitelistPolicies && domainWhitelistPolicies) { DARABONBA_PTR_SET_RVALUE(domainWhitelistPolicies_, domainWhitelistPolicies) };


      // endpointHardeningPolicies Field Functions 
      bool hasEndpointHardeningPolicies() const { return this->endpointHardeningPolicies_ != nullptr;};
      void deleteEndpointHardeningPolicies() { this->endpointHardeningPolicies_ = nullptr;};
      inline const Processes::EndpointHardeningPolicies & getEndpointHardeningPolicies() const { DARABONBA_PTR_GET_CONST(endpointHardeningPolicies_, Processes::EndpointHardeningPolicies) };
      inline Processes::EndpointHardeningPolicies getEndpointHardeningPolicies() { DARABONBA_PTR_GET(endpointHardeningPolicies_, Processes::EndpointHardeningPolicies) };
      inline Processes& setEndpointHardeningPolicies(const Processes::EndpointHardeningPolicies & endpointHardeningPolicies) { DARABONBA_PTR_SET_VALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };
      inline Processes& setEndpointHardeningPolicies(Processes::EndpointHardeningPolicies && endpointHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(endpointHardeningPolicies_, endpointHardeningPolicies) };


      // peripheralBlockPolicies Field Functions 
      bool hasPeripheralBlockPolicies() const { return this->peripheralBlockPolicies_ != nullptr;};
      void deletePeripheralBlockPolicies() { this->peripheralBlockPolicies_ = nullptr;};
      inline const Processes::PeripheralBlockPolicies & getPeripheralBlockPolicies() const { DARABONBA_PTR_GET_CONST(peripheralBlockPolicies_, Processes::PeripheralBlockPolicies) };
      inline Processes::PeripheralBlockPolicies getPeripheralBlockPolicies() { DARABONBA_PTR_GET(peripheralBlockPolicies_, Processes::PeripheralBlockPolicies) };
      inline Processes& setPeripheralBlockPolicies(const Processes::PeripheralBlockPolicies & peripheralBlockPolicies) { DARABONBA_PTR_SET_VALUE(peripheralBlockPolicies_, peripheralBlockPolicies) };
      inline Processes& setPeripheralBlockPolicies(Processes::PeripheralBlockPolicies && peripheralBlockPolicies) { DARABONBA_PTR_SET_RVALUE(peripheralBlockPolicies_, peripheralBlockPolicies) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Processes& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Processes& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // processNodes Field Functions 
      bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
      void deleteProcessNodes() { this->processNodes_ = nullptr;};
      inline const vector<vector<Processes::ProcessNodes>> & getProcessNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<Processes::ProcessNodes>>) };
      inline vector<vector<Processes::ProcessNodes>> getProcessNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<Processes::ProcessNodes>>) };
      inline Processes& setProcessNodes(const vector<vector<Processes::ProcessNodes>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
      inline Processes& setProcessNodes(vector<vector<Processes::ProcessNodes>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


      // softwareBlockPolicies Field Functions 
      bool hasSoftwareBlockPolicies() const { return this->softwareBlockPolicies_ != nullptr;};
      void deleteSoftwareBlockPolicies() { this->softwareBlockPolicies_ = nullptr;};
      inline const Processes::SoftwareBlockPolicies & getSoftwareBlockPolicies() const { DARABONBA_PTR_GET_CONST(softwareBlockPolicies_, Processes::SoftwareBlockPolicies) };
      inline Processes::SoftwareBlockPolicies getSoftwareBlockPolicies() { DARABONBA_PTR_GET(softwareBlockPolicies_, Processes::SoftwareBlockPolicies) };
      inline Processes& setSoftwareBlockPolicies(const Processes::SoftwareBlockPolicies & softwareBlockPolicies) { DARABONBA_PTR_SET_VALUE(softwareBlockPolicies_, softwareBlockPolicies) };
      inline Processes& setSoftwareBlockPolicies(Processes::SoftwareBlockPolicies && softwareBlockPolicies) { DARABONBA_PTR_SET_RVALUE(softwareBlockPolicies_, softwareBlockPolicies) };


      // softwareHardeningPolicies Field Functions 
      bool hasSoftwareHardeningPolicies() const { return this->softwareHardeningPolicies_ != nullptr;};
      void deleteSoftwareHardeningPolicies() { this->softwareHardeningPolicies_ = nullptr;};
      inline const Processes::SoftwareHardeningPolicies & getSoftwareHardeningPolicies() const { DARABONBA_PTR_GET_CONST(softwareHardeningPolicies_, Processes::SoftwareHardeningPolicies) };
      inline Processes::SoftwareHardeningPolicies getSoftwareHardeningPolicies() { DARABONBA_PTR_GET(softwareHardeningPolicies_, Processes::SoftwareHardeningPolicies) };
      inline Processes& setSoftwareHardeningPolicies(const Processes::SoftwareHardeningPolicies & softwareHardeningPolicies) { DARABONBA_PTR_SET_VALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };
      inline Processes& setSoftwareHardeningPolicies(Processes::SoftwareHardeningPolicies && softwareHardeningPolicies) { DARABONBA_PTR_SET_RVALUE(softwareHardeningPolicies_, softwareHardeningPolicies) };


    protected:
      shared_ptr<Processes::AppUninstallPolicies> appUninstallPolicies_ {};
      shared_ptr<int32_t> approvalType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Processes::DeviceRegistrationPolicies> deviceRegistrationPolicies_ {};
      shared_ptr<Processes::DlpSendPolicies> dlpSendPolicies_ {};
      shared_ptr<Processes::DomainBlacklistPolicies> domainBlacklistPolicies_ {};
      shared_ptr<Processes::DomainWhitelistPolicies> domainWhitelistPolicies_ {};
      shared_ptr<Processes::EndpointHardeningPolicies> endpointHardeningPolicies_ {};
      shared_ptr<Processes::PeripheralBlockPolicies> peripheralBlockPolicies_ {};
      shared_ptr<string> processId_ {};
      shared_ptr<string> processName_ {};
      shared_ptr<vector<vector<Processes::ProcessNodes>>> processNodes_ {};
      shared_ptr<Processes::SoftwareBlockPolicies> softwareBlockPolicies_ {};
      shared_ptr<Processes::SoftwareHardeningPolicies> softwareHardeningPolicies_ {};
    };

    virtual bool empty() const override { return this->processes_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<ListApprovalProcessesResponseBody::Processes> & getProcesses() const { DARABONBA_PTR_GET_CONST(processes_, vector<ListApprovalProcessesResponseBody::Processes>) };
    inline vector<ListApprovalProcessesResponseBody::Processes> getProcesses() { DARABONBA_PTR_GET(processes_, vector<ListApprovalProcessesResponseBody::Processes>) };
    inline ListApprovalProcessesResponseBody& setProcesses(const vector<ListApprovalProcessesResponseBody::Processes> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ListApprovalProcessesResponseBody& setProcesses(vector<ListApprovalProcessesResponseBody::Processes> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListApprovalProcessesResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<vector<ListApprovalProcessesResponseBody::Processes>> processes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
