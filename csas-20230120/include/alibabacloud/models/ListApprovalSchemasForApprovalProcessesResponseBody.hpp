// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASFORAPPROVALPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASFORAPPROVALPROCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApprovalSchemasForApprovalProcessesResponseBodyProcesses.hpp>
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
    virtual bool empty() const override { this->processes_ != nullptr
        && this->requestId_ != nullptr; };
    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<ListApprovalSchemasForApprovalProcessesResponseBodyProcesses> & processes() const { DARABONBA_PTR_GET_CONST(processes_, vector<ListApprovalSchemasForApprovalProcessesResponseBodyProcesses>) };
    inline vector<ListApprovalSchemasForApprovalProcessesResponseBodyProcesses> processes() { DARABONBA_PTR_GET(processes_, vector<ListApprovalSchemasForApprovalProcessesResponseBodyProcesses>) };
    inline ListApprovalSchemasForApprovalProcessesResponseBody& setProcesses(const vector<ListApprovalSchemasForApprovalProcessesResponseBodyProcesses> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ListApprovalSchemasForApprovalProcessesResponseBody& setProcesses(vector<ListApprovalSchemasForApprovalProcessesResponseBodyProcesses> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalSchemasForApprovalProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListApprovalSchemasForApprovalProcessesResponseBodyProcesses>> processes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
