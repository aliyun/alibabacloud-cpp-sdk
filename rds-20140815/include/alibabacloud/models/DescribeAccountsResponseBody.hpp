// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SystemAdminAccountFirstActivationTime, systemAdminAccountFirstActivationTime_);
      DARABONBA_PTR_TO_JSON(SystemAdminAccountStatus, systemAdminAccountStatus_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemAdminAccountFirstActivationTime, systemAdminAccountFirstActivationTime_);
      DARABONBA_PTR_FROM_JSON(SystemAdminAccountStatus, systemAdminAccountStatus_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeAccountsResponseBody() = default ;
    DescribeAccountsResponseBody(const DescribeAccountsResponseBody &) = default ;
    DescribeAccountsResponseBody(DescribeAccountsResponseBody &&) = default ;
    DescribeAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBody() = default ;
    DescribeAccountsResponseBody& operator=(const DescribeAccountsResponseBody &) = default ;
    DescribeAccountsResponseBody& operator=(DescribeAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accounts_ == nullptr
        && return this->pageNumber_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->systemAdminAccountFirstActivationTime_ == nullptr && return this->systemAdminAccountStatus_ == nullptr
        && return this->totalRecordCount_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const DescribeAccountsResponseBodyAccounts & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, DescribeAccountsResponseBodyAccounts) };
    inline DescribeAccountsResponseBodyAccounts accounts() { DARABONBA_PTR_GET(accounts_, DescribeAccountsResponseBodyAccounts) };
    inline DescribeAccountsResponseBody& setAccounts(const DescribeAccountsResponseBodyAccounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeAccountsResponseBody& setAccounts(DescribeAccountsResponseBodyAccounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccountsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAccountsResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // systemAdminAccountFirstActivationTime Field Functions 
    bool hasSystemAdminAccountFirstActivationTime() const { return this->systemAdminAccountFirstActivationTime_ != nullptr;};
    void deleteSystemAdminAccountFirstActivationTime() { this->systemAdminAccountFirstActivationTime_ = nullptr;};
    inline string systemAdminAccountFirstActivationTime() const { DARABONBA_PTR_GET_DEFAULT(systemAdminAccountFirstActivationTime_, "") };
    inline DescribeAccountsResponseBody& setSystemAdminAccountFirstActivationTime(string systemAdminAccountFirstActivationTime) { DARABONBA_PTR_SET_VALUE(systemAdminAccountFirstActivationTime_, systemAdminAccountFirstActivationTime) };


    // systemAdminAccountStatus Field Functions 
    bool hasSystemAdminAccountStatus() const { return this->systemAdminAccountStatus_ != nullptr;};
    void deleteSystemAdminAccountStatus() { this->systemAdminAccountStatus_ = nullptr;};
    inline string systemAdminAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(systemAdminAccountStatus_, "") };
    inline DescribeAccountsResponseBody& setSystemAdminAccountStatus(string systemAdminAccountStatus) { DARABONBA_PTR_SET_VALUE(systemAdminAccountStatus_, systemAdminAccountStatus) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeAccountsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The information about the account.
    std::shared_ptr<DescribeAccountsResponseBodyAccounts> accounts_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The first time when the system admin account was enabled. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // >  This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<string> systemAdminAccountFirstActivationTime_ = nullptr;
    // Indicates whether the system admin account was enabled. Valid values:
    // 
    // *   **true**: The system admin account was enabled.
    // *   **false**: The system admin account was disabled.
    // 
    // >  The [system admin account](https://help.aliyun.com/document_detail/170736.html) is supported only for the instances that run SQL Server. If the instance runs SQL Server, a value is returned for this parameter. If the instance runs a different database engine, no value is returned for this parameter.
    std::shared_ptr<string> systemAdminAccountStatus_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
