// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPROVALPROCESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPROVALPROCESSESREQUEST_HPP_
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
  class DeleteApprovalProcessesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApprovalProcessesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessIds, processIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApprovalProcessesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessIds, processIds_);
    };
    DeleteApprovalProcessesRequest() = default ;
    DeleteApprovalProcessesRequest(const DeleteApprovalProcessesRequest &) = default ;
    DeleteApprovalProcessesRequest(DeleteApprovalProcessesRequest &&) = default ;
    DeleteApprovalProcessesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApprovalProcessesRequest() = default ;
    DeleteApprovalProcessesRequest& operator=(const DeleteApprovalProcessesRequest &) = default ;
    DeleteApprovalProcessesRequest& operator=(DeleteApprovalProcessesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->processIds_ != nullptr; };
    // processIds Field Functions 
    bool hasProcessIds() const { return this->processIds_ != nullptr;};
    void deleteProcessIds() { this->processIds_ = nullptr;};
    inline const vector<string> & processIds() const { DARABONBA_PTR_GET_CONST(processIds_, vector<string>) };
    inline vector<string> processIds() { DARABONBA_PTR_GET(processIds_, vector<string>) };
    inline DeleteApprovalProcessesRequest& setProcessIds(const vector<string> & processIds) { DARABONBA_PTR_SET_VALUE(processIds_, processIds) };
    inline DeleteApprovalProcessesRequest& setProcessIds(vector<string> && processIds) { DARABONBA_PTR_SET_RVALUE(processIds_, processIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> processIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
