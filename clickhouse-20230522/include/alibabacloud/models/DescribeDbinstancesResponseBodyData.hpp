// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyDataDBInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstancesResponseBodyData() = default ;
    DescribeDBInstancesResponseBodyData(const DescribeDBInstancesResponseBodyData &) = default ;
    DescribeDBInstancesResponseBodyData(DescribeDBInstancesResponseBodyData &&) = default ;
    DescribeDBInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyData() = default ;
    DescribeDBInstancesResponseBodyData& operator=(const DescribeDBInstancesResponseBodyData &) = default ;
    DescribeDBInstancesResponseBodyData& operator=(DescribeDBInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstances_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesResponseBodyDataDBInstances> & DBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<Models::DescribeDBInstancesResponseBodyDataDBInstances>) };
    inline vector<Models::DescribeDBInstancesResponseBodyDataDBInstances> DBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<Models::DescribeDBInstancesResponseBodyDataDBInstances>) };
    inline DescribeDBInstancesResponseBodyData& setDBInstances(const vector<Models::DescribeDBInstancesResponseBodyDataDBInstances> & DBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, DBInstances) };
    inline DescribeDBInstancesResponseBodyData& setDBInstances(vector<Models::DescribeDBInstancesResponseBodyDataDBInstances> && DBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, DBInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBInstancesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeDBInstancesResponseBodyData& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The clusters.
    std::shared_ptr<vector<Models::DescribeDBInstancesResponseBodyDataDBInstances>> DBInstances_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
