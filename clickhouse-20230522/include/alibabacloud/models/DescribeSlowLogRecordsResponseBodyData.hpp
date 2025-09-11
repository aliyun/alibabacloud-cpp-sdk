// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogRecordsResponseBodyDataResultSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(ResultSet, resultSet_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResultSet, resultSet_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSlowLogRecordsResponseBodyData() = default ;
    DescribeSlowLogRecordsResponseBodyData(const DescribeSlowLogRecordsResponseBodyData &) = default ;
    DescribeSlowLogRecordsResponseBodyData(DescribeSlowLogRecordsResponseBodyData &&) = default ;
    DescribeSlowLogRecordsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodyData() = default ;
    DescribeSlowLogRecordsResponseBodyData& operator=(const DescribeSlowLogRecordsResponseBodyData &) = default ;
    DescribeSlowLogRecordsResponseBodyData& operator=(DescribeSlowLogRecordsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceID_ != nullptr
        && this->DBInstanceName_ != nullptr && this->resultSet_ != nullptr && this->totalCount_ != nullptr; };
    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int32_t DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
    inline DescribeSlowLogRecordsResponseBodyData& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeSlowLogRecordsResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // resultSet Field Functions 
    bool hasResultSet() const { return this->resultSet_ != nullptr;};
    void deleteResultSet() { this->resultSet_ = nullptr;};
    inline const vector<Models::DescribeSlowLogRecordsResponseBodyDataResultSet> & resultSet() const { DARABONBA_PTR_GET_CONST(resultSet_, vector<Models::DescribeSlowLogRecordsResponseBodyDataResultSet>) };
    inline vector<Models::DescribeSlowLogRecordsResponseBodyDataResultSet> resultSet() { DARABONBA_PTR_GET(resultSet_, vector<Models::DescribeSlowLogRecordsResponseBodyDataResultSet>) };
    inline DescribeSlowLogRecordsResponseBodyData& setResultSet(const vector<Models::DescribeSlowLogRecordsResponseBodyDataResultSet> & resultSet) { DARABONBA_PTR_SET_VALUE(resultSet_, resultSet) };
    inline DescribeSlowLogRecordsResponseBodyData& setResultSet(vector<Models::DescribeSlowLogRecordsResponseBodyDataResultSet> && resultSet) { DARABONBA_PTR_SET_RVALUE(resultSet_, resultSet) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSlowLogRecordsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    std::shared_ptr<int32_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The result sets.
    std::shared_ptr<vector<Models::DescribeSlowLogRecordsResponseBodyDataResultSet>> resultSet_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
