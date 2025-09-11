// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProcessListResponseBodyDataResultSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeProcessListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(ResultSet, resultSet_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResultSet, resultSet_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeProcessListResponseBodyData() = default ;
    DescribeProcessListResponseBodyData(const DescribeProcessListResponseBodyData &) = default ;
    DescribeProcessListResponseBodyData(DescribeProcessListResponseBodyData &&) = default ;
    DescribeProcessListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListResponseBodyData() = default ;
    DescribeProcessListResponseBodyData& operator=(const DescribeProcessListResponseBodyData &) = default ;
    DescribeProcessListResponseBodyData& operator=(DescribeProcessListResponseBodyData &&) = default ;
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
    inline DescribeProcessListResponseBodyData& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeProcessListResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // resultSet Field Functions 
    bool hasResultSet() const { return this->resultSet_ != nullptr;};
    void deleteResultSet() { this->resultSet_ = nullptr;};
    inline const vector<Models::DescribeProcessListResponseBodyDataResultSet> & resultSet() const { DARABONBA_PTR_GET_CONST(resultSet_, vector<Models::DescribeProcessListResponseBodyDataResultSet>) };
    inline vector<Models::DescribeProcessListResponseBodyDataResultSet> resultSet() { DARABONBA_PTR_GET(resultSet_, vector<Models::DescribeProcessListResponseBodyDataResultSet>) };
    inline DescribeProcessListResponseBodyData& setResultSet(const vector<Models::DescribeProcessListResponseBodyDataResultSet> & resultSet) { DARABONBA_PTR_SET_VALUE(resultSet_, resultSet) };
    inline DescribeProcessListResponseBodyData& setResultSet(vector<Models::DescribeProcessListResponseBodyDataResultSet> && resultSet) { DARABONBA_PTR_SET_RVALUE(resultSet_, resultSet) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeProcessListResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    std::shared_ptr<int32_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The result sets.
    std::shared_ptr<vector<Models::DescribeProcessListResponseBodyDataResultSet>> resultSet_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
