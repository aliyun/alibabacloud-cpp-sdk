// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASRESPONSEBODY_HPP_
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
  class ListApprovalProcessesForApprovalSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesForApprovalSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesForApprovalSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
    };
    ListApprovalProcessesForApprovalSchemasResponseBody() = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody(const ListApprovalProcessesForApprovalSchemasResponseBody &) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody(ListApprovalProcessesForApprovalSchemasResponseBody &&) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesForApprovalSchemasResponseBody() = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody& operator=(const ListApprovalProcessesForApprovalSchemasResponseBody &) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody& operator=(ListApprovalProcessesForApprovalSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schemas& obj) { 
        DARABONBA_PTR_TO_JSON(Processes, processes_);
        DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
      };
      friend void from_json(const Darabonba::Json& j, Schemas& obj) { 
        DARABONBA_PTR_FROM_JSON(Processes, processes_);
        DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
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
      class Processes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Processes& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ProcessId, processId_);
          DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        };
        friend void from_json(const Darabonba::Json& j, Processes& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
          DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->processId_ == nullptr && this->processName_ == nullptr; };
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


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> processId_ {};
        shared_ptr<string> processName_ {};
      };

      virtual bool empty() const override { return this->processes_ == nullptr
        && this->schemaId_ == nullptr; };
      // processes Field Functions 
      bool hasProcesses() const { return this->processes_ != nullptr;};
      void deleteProcesses() { this->processes_ = nullptr;};
      inline const vector<Schemas::Processes> & getProcesses() const { DARABONBA_PTR_GET_CONST(processes_, vector<Schemas::Processes>) };
      inline vector<Schemas::Processes> getProcesses() { DARABONBA_PTR_GET(processes_, vector<Schemas::Processes>) };
      inline Schemas& setProcesses(const vector<Schemas::Processes> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
      inline Schemas& setProcesses(vector<Schemas::Processes> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


      // schemaId Field Functions 
      bool hasSchemaId() const { return this->schemaId_ != nullptr;};
      void deleteSchemaId() { this->schemaId_ = nullptr;};
      inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
      inline Schemas& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    protected:
      shared_ptr<vector<Schemas::Processes>> processes_ {};
      shared_ptr<string> schemaId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->schemas_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalProcessesForApprovalSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<ListApprovalProcessesForApprovalSchemasResponseBody::Schemas> & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<ListApprovalProcessesForApprovalSchemasResponseBody::Schemas>) };
    inline vector<ListApprovalProcessesForApprovalSchemasResponseBody::Schemas> getSchemas() { DARABONBA_PTR_GET(schemas_, vector<ListApprovalProcessesForApprovalSchemasResponseBody::Schemas>) };
    inline ListApprovalProcessesForApprovalSchemasResponseBody& setSchemas(const vector<ListApprovalProcessesForApprovalSchemasResponseBody::Schemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline ListApprovalProcessesForApprovalSchemasResponseBody& setSchemas(vector<ListApprovalProcessesForApprovalSchemasResponseBody::Schemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListApprovalProcessesForApprovalSchemasResponseBody::Schemas>> schemas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
