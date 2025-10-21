// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogTrendResponseBodyDataResultSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSlowLogTrendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(ResultSet, resultSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResultSet, resultSet_);
    };
    DescribeSlowLogTrendResponseBodyData() = default ;
    DescribeSlowLogTrendResponseBodyData(const DescribeSlowLogTrendResponseBodyData &) = default ;
    DescribeSlowLogTrendResponseBodyData(DescribeSlowLogTrendResponseBodyData &&) = default ;
    DescribeSlowLogTrendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogTrendResponseBodyData() = default ;
    DescribeSlowLogTrendResponseBodyData& operator=(const DescribeSlowLogTrendResponseBodyData &) = default ;
    DescribeSlowLogTrendResponseBodyData& operator=(DescribeSlowLogTrendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && return this->DBInstanceName_ == nullptr && return this->resultSet_ == nullptr; };
    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int32_t DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
    inline DescribeSlowLogTrendResponseBodyData& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeSlowLogTrendResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // resultSet Field Functions 
    bool hasResultSet() const { return this->resultSet_ != nullptr;};
    void deleteResultSet() { this->resultSet_ = nullptr;};
    inline const vector<Models::DescribeSlowLogTrendResponseBodyDataResultSet> & resultSet() const { DARABONBA_PTR_GET_CONST(resultSet_, vector<Models::DescribeSlowLogTrendResponseBodyDataResultSet>) };
    inline vector<Models::DescribeSlowLogTrendResponseBodyDataResultSet> resultSet() { DARABONBA_PTR_GET(resultSet_, vector<Models::DescribeSlowLogTrendResponseBodyDataResultSet>) };
    inline DescribeSlowLogTrendResponseBodyData& setResultSet(const vector<Models::DescribeSlowLogTrendResponseBodyDataResultSet> & resultSet) { DARABONBA_PTR_SET_VALUE(resultSet_, resultSet) };
    inline DescribeSlowLogTrendResponseBodyData& setResultSet(vector<Models::DescribeSlowLogTrendResponseBodyDataResultSet> && resultSet) { DARABONBA_PTR_SET_RVALUE(resultSet_, resultSet) };


  protected:
    // The cluster ID.
    std::shared_ptr<int32_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The result sets.
    std::shared_ptr<vector<Models::DescribeSlowLogTrendResponseBodyDataResultSet>> resultSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
