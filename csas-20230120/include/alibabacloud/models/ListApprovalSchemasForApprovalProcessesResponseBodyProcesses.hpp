// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASFORAPPROVALPROCESSESRESPONSEBODYPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASFORAPPROVALPROCESSESRESPONSEBODYPROCESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApprovalSchemasForApprovalProcessesResponseBodyProcessesSchemas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalSchemasForApprovalProcessesResponseBodyProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalSchemasForApprovalProcessesResponseBodyProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalSchemasForApprovalProcessesResponseBodyProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
    };
    ListApprovalSchemasForApprovalProcessesResponseBodyProcesses() = default ;
    ListApprovalSchemasForApprovalProcessesResponseBodyProcesses(const ListApprovalSchemasForApprovalProcessesResponseBodyProcesses &) = default ;
    ListApprovalSchemasForApprovalProcessesResponseBodyProcesses(ListApprovalSchemasForApprovalProcessesResponseBodyProcesses &&) = default ;
    ListApprovalSchemasForApprovalProcessesResponseBodyProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalSchemasForApprovalProcessesResponseBodyProcesses() = default ;
    ListApprovalSchemasForApprovalProcessesResponseBodyProcesses& operator=(const ListApprovalSchemasForApprovalProcessesResponseBodyProcesses &) = default ;
    ListApprovalSchemasForApprovalProcessesResponseBodyProcesses& operator=(ListApprovalSchemasForApprovalProcessesResponseBodyProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processId_ == nullptr
        && return this->schemas_ == nullptr; };
    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline ListApprovalSchemasForApprovalProcessesResponseBodyProcesses& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<Models::ListApprovalSchemasForApprovalProcessesResponseBodyProcessesSchemas> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<Models::ListApprovalSchemasForApprovalProcessesResponseBodyProcessesSchemas>) };
    inline vector<Models::ListApprovalSchemasForApprovalProcessesResponseBodyProcessesSchemas> schemas() { DARABONBA_PTR_GET(schemas_, vector<Models::ListApprovalSchemasForApprovalProcessesResponseBodyProcessesSchemas>) };
    inline ListApprovalSchemasForApprovalProcessesResponseBodyProcesses& setSchemas(const vector<Models::ListApprovalSchemasForApprovalProcessesResponseBodyProcessesSchemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline ListApprovalSchemasForApprovalProcessesResponseBodyProcesses& setSchemas(vector<Models::ListApprovalSchemasForApprovalProcessesResponseBodyProcessesSchemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


  protected:
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<vector<Models::ListApprovalSchemasForApprovalProcessesResponseBodyProcessesSchemas>> schemas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
