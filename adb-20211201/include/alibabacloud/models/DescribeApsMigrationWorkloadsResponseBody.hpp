// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSMIGRATIONWORKLOADSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSMIGRATIONWORKLOADSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsMigrationWorkloadsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsMigrationWorkloadsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MigrationWorkloads, migrationWorkloads_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsMigrationWorkloadsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MigrationWorkloads, migrationWorkloads_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApsMigrationWorkloadsResponseBody() = default ;
    DescribeApsMigrationWorkloadsResponseBody(const DescribeApsMigrationWorkloadsResponseBody &) = default ;
    DescribeApsMigrationWorkloadsResponseBody(DescribeApsMigrationWorkloadsResponseBody &&) = default ;
    DescribeApsMigrationWorkloadsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsMigrationWorkloadsResponseBody() = default ;
    DescribeApsMigrationWorkloadsResponseBody& operator=(const DescribeApsMigrationWorkloadsResponseBody &) = default ;
    DescribeApsMigrationWorkloadsResponseBody& operator=(DescribeApsMigrationWorkloadsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->migrationWorkloads_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // migrationWorkloads Field Functions 
    bool hasMigrationWorkloads() const { return this->migrationWorkloads_ != nullptr;};
    void deleteMigrationWorkloads() { this->migrationWorkloads_ = nullptr;};
    inline const vector<DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads> & migrationWorkloads() const { DARABONBA_PTR_GET_CONST(migrationWorkloads_, vector<DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads>) };
    inline vector<DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads> migrationWorkloads() { DARABONBA_PTR_GET(migrationWorkloads_, vector<DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads>) };
    inline DescribeApsMigrationWorkloadsResponseBody& setMigrationWorkloads(const vector<DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads> & migrationWorkloads) { DARABONBA_PTR_SET_VALUE(migrationWorkloads_, migrationWorkloads) };
    inline DescribeApsMigrationWorkloadsResponseBody& setMigrationWorkloads(vector<DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads> && migrationWorkloads) { DARABONBA_PTR_SET_RVALUE(migrationWorkloads_, migrationWorkloads) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApsMigrationWorkloadsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApsMigrationWorkloadsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsMigrationWorkloadsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApsMigrationWorkloadsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried migration workloads.
    std::shared_ptr<vector<DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads>> migrationWorkloads_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
