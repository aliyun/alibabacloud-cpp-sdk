// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGCHANGELOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGCHANGELOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceConfigChangeLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConfigChangeLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ParamChangeLogs, paramChangeLogs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConfigChangeLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ParamChangeLogs, paramChangeLogs_);
    };
    DescribeDBInstanceConfigChangeLogResponseBodyData() = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyData(const DescribeDBInstanceConfigChangeLogResponseBodyData &) = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyData(DescribeDBInstanceConfigChangeLogResponseBodyData &&) = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConfigChangeLogResponseBodyData() = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyData& operator=(const DescribeDBInstanceConfigChangeLogResponseBodyData &) = default ;
    DescribeDBInstanceConfigChangeLogResponseBodyData& operator=(DescribeDBInstanceConfigChangeLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->paramChangeLogs_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceConfigChangeLogResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // paramChangeLogs Field Functions 
    bool hasParamChangeLogs() const { return this->paramChangeLogs_ != nullptr;};
    void deleteParamChangeLogs() { this->paramChangeLogs_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs> & paramChangeLogs() const { DARABONBA_PTR_GET_CONST(paramChangeLogs_, vector<Models::DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs>) };
    inline vector<Models::DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs> paramChangeLogs() { DARABONBA_PTR_GET(paramChangeLogs_, vector<Models::DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs>) };
    inline DescribeDBInstanceConfigChangeLogResponseBodyData& setParamChangeLogs(const vector<Models::DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs> & paramChangeLogs) { DARABONBA_PTR_SET_VALUE(paramChangeLogs_, paramChangeLogs) };
    inline DescribeDBInstanceConfigChangeLogResponseBodyData& setParamChangeLogs(vector<Models::DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs> && paramChangeLogs) { DARABONBA_PTR_SET_RVALUE(paramChangeLogs_, paramChangeLogs) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceConfigChangeLogResponseBodyDataParamChangeLogs>> paramChangeLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
