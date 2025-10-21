// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceConfigResponseBodyDataParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    DescribeDBInstanceConfigResponseBodyData() = default ;
    DescribeDBInstanceConfigResponseBodyData(const DescribeDBInstanceConfigResponseBodyData &) = default ;
    DescribeDBInstanceConfigResponseBodyData(DescribeDBInstanceConfigResponseBodyData &&) = default ;
    DescribeDBInstanceConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConfigResponseBodyData() = default ;
    DescribeDBInstanceConfigResponseBodyData& operator=(const DescribeDBInstanceConfigResponseBodyData &) = default ;
    DescribeDBInstanceConfigResponseBodyData& operator=(DescribeDBInstanceConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->params_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceConfigResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceConfigResponseBodyDataParams> & params() const { DARABONBA_PTR_GET_CONST(params_, vector<Models::DescribeDBInstanceConfigResponseBodyDataParams>) };
    inline vector<Models::DescribeDBInstanceConfigResponseBodyDataParams> params() { DARABONBA_PTR_GET(params_, vector<Models::DescribeDBInstanceConfigResponseBodyDataParams>) };
    inline DescribeDBInstanceConfigResponseBodyData& setParams(const vector<Models::DescribeDBInstanceConfigResponseBodyDataParams> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline DescribeDBInstanceConfigResponseBodyData& setParams(vector<Models::DescribeDBInstanceConfigResponseBodyDataParams> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceConfigResponseBodyDataParams>> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
