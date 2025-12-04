// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYSLOWLOGTRENDDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYSLOWLOGTRENDDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogTrendResponseBodySlowLogTrendData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBodySlowLogTrendData& obj) { 
      DARABONBA_PTR_TO_JSON(ResultSet, resultSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBodySlowLogTrendData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultSet, resultSet_);
    };
    DescribeSlowLogTrendResponseBodySlowLogTrendData() = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendData(const DescribeSlowLogTrendResponseBodySlowLogTrendData &) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendData(DescribeSlowLogTrendResponseBodySlowLogTrendData &&) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogTrendResponseBodySlowLogTrendData() = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendData& operator=(const DescribeSlowLogTrendResponseBodySlowLogTrendData &) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendData& operator=(DescribeSlowLogTrendResponseBodySlowLogTrendData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resultSet_ == nullptr; };
    // resultSet Field Functions 
    bool hasResultSet() const { return this->resultSet_ != nullptr;};
    void deleteResultSet() { this->resultSet_ = nullptr;};
    inline const vector<Models::DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet> & resultSet() const { DARABONBA_PTR_GET_CONST(resultSet_, vector<Models::DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet>) };
    inline vector<Models::DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet> resultSet() { DARABONBA_PTR_GET(resultSet_, vector<Models::DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet>) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrendData& setResultSet(const vector<Models::DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet> & resultSet) { DARABONBA_PTR_SET_VALUE(resultSet_, resultSet) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrendData& setResultSet(vector<Models::DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet> && resultSet) { DARABONBA_PTR_SET_RVALUE(resultSet_, resultSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet>> resultSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
