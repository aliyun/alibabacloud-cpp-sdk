// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterConfigResponseBodyDataParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBClusterConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeDBClusterConfigResponseBodyData() = default ;
    DescribeDBClusterConfigResponseBodyData(const DescribeDBClusterConfigResponseBodyData &) = default ;
    DescribeDBClusterConfigResponseBodyData(DescribeDBClusterConfigResponseBodyData &&) = default ;
    DescribeDBClusterConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterConfigResponseBodyData() = default ;
    DescribeDBClusterConfigResponseBodyData& operator=(const DescribeDBClusterConfigResponseBodyData &) = default ;
    DescribeDBClusterConfigResponseBodyData& operator=(DescribeDBClusterConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbClusterId_ != nullptr
        && this->dbInstanceId_ != nullptr && this->dbInstanceName_ != nullptr && this->params_ != nullptr && this->taskId_ != nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline DescribeDBClusterConfigResponseBodyData& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline DescribeDBClusterConfigResponseBodyData& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DescribeDBClusterConfigResponseBodyData& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<Models::DescribeDBClusterConfigResponseBodyDataParams> & params() const { DARABONBA_PTR_GET_CONST(params_, vector<Models::DescribeDBClusterConfigResponseBodyDataParams>) };
    inline vector<Models::DescribeDBClusterConfigResponseBodyDataParams> params() { DARABONBA_PTR_GET(params_, vector<Models::DescribeDBClusterConfigResponseBodyDataParams>) };
    inline DescribeDBClusterConfigResponseBodyData& setParams(const vector<Models::DescribeDBClusterConfigResponseBodyDataParams> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline DescribeDBClusterConfigResponseBodyData& setParams(vector<Models::DescribeDBClusterConfigResponseBodyDataParams> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline DescribeDBClusterConfigResponseBodyData& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> dbClusterId_ = nullptr;
    // The numeric ID of the instance.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    // The details about each parameter returned.
    std::shared_ptr<vector<Models::DescribeDBClusterConfigResponseBodyDataParams>> params_ = nullptr;
    // The task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
