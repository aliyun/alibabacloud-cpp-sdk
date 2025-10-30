// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASRESPONSEBODYSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASRESPONSEBODYSCHEMAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalProcessesForApprovalSchemasResponseBodySchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesForApprovalSchemasResponseBodySchemas& obj) { 
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesForApprovalSchemasResponseBodySchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    ListApprovalProcessesForApprovalSchemasResponseBodySchemas() = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemas(const ListApprovalProcessesForApprovalSchemasResponseBodySchemas &) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemas(ListApprovalProcessesForApprovalSchemasResponseBodySchemas &&) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesForApprovalSchemasResponseBodySchemas() = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemas& operator=(const ListApprovalProcessesForApprovalSchemasResponseBodySchemas &) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemas& operator=(ListApprovalProcessesForApprovalSchemasResponseBodySchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processes_ == nullptr
        && return this->schemaId_ == nullptr; };
    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<Models::ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses> & processes() const { DARABONBA_PTR_GET_CONST(processes_, vector<Models::ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses>) };
    inline vector<Models::ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses> processes() { DARABONBA_PTR_GET(processes_, vector<Models::ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses>) };
    inline ListApprovalProcessesForApprovalSchemasResponseBodySchemas& setProcesses(const vector<Models::ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ListApprovalProcessesForApprovalSchemasResponseBodySchemas& setProcesses(vector<Models::ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline ListApprovalProcessesForApprovalSchemasResponseBodySchemas& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    std::shared_ptr<vector<Models::ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses>> processes_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
