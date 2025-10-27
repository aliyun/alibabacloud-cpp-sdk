// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIRECOVERABLELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIRECOVERABLELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniRecoverableListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniRecoverableListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniRecoverableListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DescribeUniRecoverableListRequest() = default ;
    DescribeUniRecoverableListRequest(const DescribeUniRecoverableListRequest &) = default ;
    DescribeUniRecoverableListRequest(DescribeUniRecoverableListRequest &&) = default ;
    DescribeUniRecoverableListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniRecoverableListRequest() = default ;
    DescribeUniRecoverableListRequest& operator=(const DescribeUniRecoverableListRequest &) = default ;
    DescribeUniRecoverableListRequest& operator=(DescribeUniRecoverableListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->database_ == nullptr && return this->pageSize_ == nullptr && return this->policyId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeUniRecoverableListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeUniRecoverableListRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUniRecoverableListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeUniRecoverableListRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the anti-ransomware policy.
    // 
    // > You can call the [DescribeUniBackupPolicies](~~DescribeUniBackupPolicies~~) operation to query the IDs of anti-ransomware policies.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
