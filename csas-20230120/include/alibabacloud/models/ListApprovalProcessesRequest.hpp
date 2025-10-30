// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESREQUEST_HPP_
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
  class ListApprovalProcessesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(ProcessIds, processIds_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(ProcessIds, processIds_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListApprovalProcessesRequest() = default ;
    ListApprovalProcessesRequest(const ListApprovalProcessesRequest &) = default ;
    ListApprovalProcessesRequest(ListApprovalProcessesRequest &&) = default ;
    ListApprovalProcessesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesRequest() = default ;
    ListApprovalProcessesRequest& operator=(const ListApprovalProcessesRequest &) = default ;
    ListApprovalProcessesRequest& operator=(ListApprovalProcessesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->policyId_ == nullptr && return this->policyType_ == nullptr && return this->processIds_ == nullptr && return this->processName_ == nullptr
        && return this->saseUserId_ == nullptr && return this->username_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListApprovalProcessesRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApprovalProcessesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListApprovalProcessesRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListApprovalProcessesRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // processIds Field Functions 
    bool hasProcessIds() const { return this->processIds_ != nullptr;};
    void deleteProcessIds() { this->processIds_ = nullptr;};
    inline const vector<string> & processIds() const { DARABONBA_PTR_GET_CONST(processIds_, vector<string>) };
    inline vector<string> processIds() { DARABONBA_PTR_GET(processIds_, vector<string>) };
    inline ListApprovalProcessesRequest& setProcessIds(const vector<string> & processIds) { DARABONBA_PTR_SET_VALUE(processIds_, processIds) };
    inline ListApprovalProcessesRequest& setProcessIds(vector<string> && processIds) { DARABONBA_PTR_SET_RVALUE(processIds_, processIds) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline ListApprovalProcessesRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListApprovalProcessesRequest& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListApprovalProcessesRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<vector<string>> processIds_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
