// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASFORAPPROVALPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASFORAPPROVALPROCESSESRESPONSEBODY_HPP_
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
  class ListApprovalSchemasForApprovalProcessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalSchemasForApprovalProcessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalSchemasForApprovalProcessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListApprovalSchemasForApprovalProcessesResponseBody() = default ;
    ListApprovalSchemasForApprovalProcessesResponseBody(const ListApprovalSchemasForApprovalProcessesResponseBody &) = default ;
    ListApprovalSchemasForApprovalProcessesResponseBody(ListApprovalSchemasForApprovalProcessesResponseBody &&) = default ;
    ListApprovalSchemasForApprovalProcessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalSchemasForApprovalProcessesResponseBody() = default ;
    ListApprovalSchemasForApprovalProcessesResponseBody& operator=(const ListApprovalSchemasForApprovalProcessesResponseBody &) = default ;
    ListApprovalSchemasForApprovalProcessesResponseBody& operator=(ListApprovalSchemasForApprovalProcessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Processes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Processes& obj) { 
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      };
      friend void from_json(const Darabonba::Json& j, Processes& obj) { 
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
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
      class Schemas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schemas& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(SchemaContent, schemaContent_);
          DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SchemaVersion, schemaVersion_);
        };
        friend void from_json(const Darabonba::Json& j, Schemas& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(SchemaContent, schemaContent_);
          DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SchemaVersion, schemaVersion_);
        };
        Schemas() = default ;
        Schemas(const Schemas &) = default ;
        Schemas(Schemas &&) = default ;
        Schemas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schemas() = default ;
        Schemas& operator=(const Schemas &) = default ;
        Schemas& operator=(Schemas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->isDefault_ == nullptr && this->policyType_ == nullptr && this->schemaContent_ == nullptr && this->schemaId_ == nullptr
        && this->schemaName_ == nullptr && this->schemaVersion_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Schemas& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Schemas& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline Schemas& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline Schemas& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // schemaContent Field Functions 
        bool hasSchemaContent() const { return this->schemaContent_ != nullptr;};
        void deleteSchemaContent() { this->schemaContent_ = nullptr;};
        inline string getSchemaContent() const { DARABONBA_PTR_GET_DEFAULT(schemaContent_, "") };
        inline Schemas& setSchemaContent(string schemaContent) { DARABONBA_PTR_SET_VALUE(schemaContent_, schemaContent) };


        // schemaId Field Functions 
        bool hasSchemaId() const { return this->schemaId_ != nullptr;};
        void deleteSchemaId() { this->schemaId_ = nullptr;};
        inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
        inline Schemas& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Schemas& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // schemaVersion Field Functions 
        bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
        void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
        inline int64_t getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, 0L) };
        inline Schemas& setSchemaVersion(int64_t schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<string> policyType_ {};
        shared_ptr<string> schemaContent_ {};
        shared_ptr<string> schemaId_ {};
        shared_ptr<string> schemaName_ {};
        shared_ptr<int64_t> schemaVersion_ {};
      };

      virtual bool empty() const override { return this->processId_ == nullptr
        && this->schemas_ == nullptr; };
      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Processes& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // schemas Field Functions 
      bool hasSchemas() const { return this->schemas_ != nullptr;};
      void deleteSchemas() { this->schemas_ = nullptr;};
      inline const vector<Processes::Schemas> & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<Processes::Schemas>) };
      inline vector<Processes::Schemas> getSchemas() { DARABONBA_PTR_GET(schemas_, vector<Processes::Schemas>) };
      inline Processes& setSchemas(const vector<Processes::Schemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
      inline Processes& setSchemas(vector<Processes::Schemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    protected:
      shared_ptr<string> processId_ {};
      shared_ptr<vector<Processes::Schemas>> schemas_ {};
    };

    virtual bool empty() const override { return this->processes_ == nullptr
        && this->requestId_ == nullptr; };
    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<ListApprovalSchemasForApprovalProcessesResponseBody::Processes> & getProcesses() const { DARABONBA_PTR_GET_CONST(processes_, vector<ListApprovalSchemasForApprovalProcessesResponseBody::Processes>) };
    inline vector<ListApprovalSchemasForApprovalProcessesResponseBody::Processes> getProcesses() { DARABONBA_PTR_GET(processes_, vector<ListApprovalSchemasForApprovalProcessesResponseBody::Processes>) };
    inline ListApprovalSchemasForApprovalProcessesResponseBody& setProcesses(const vector<ListApprovalSchemasForApprovalProcessesResponseBody::Processes> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ListApprovalSchemasForApprovalProcessesResponseBody& setProcesses(vector<ListApprovalSchemasForApprovalProcessesResponseBody::Processes> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalSchemasForApprovalProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListApprovalSchemasForApprovalProcessesResponseBody::Processes>> processes_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
