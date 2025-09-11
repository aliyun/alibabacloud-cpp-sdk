// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBClusterConfigChangeLogsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterConfigChangeLogsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(ParamChangeLogs, paramChangeLogs_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterConfigChangeLogsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(ParamChangeLogs, paramChangeLogs_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeDBClusterConfigChangeLogsResponseBodyData() = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyData(const DescribeDBClusterConfigChangeLogsResponseBodyData &) = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyData(DescribeDBClusterConfigChangeLogsResponseBodyData &&) = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterConfigChangeLogsResponseBodyData() = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyData& operator=(const DescribeDBClusterConfigChangeLogsResponseBodyData &) = default ;
    DescribeDBClusterConfigChangeLogsResponseBodyData& operator=(DescribeDBClusterConfigChangeLogsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbClusterId_ != nullptr
        && this->dbInstanceId_ != nullptr && this->dbInstanceName_ != nullptr && this->paramChangeLogs_ != nullptr && this->taskId_ != nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBodyData& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBodyData& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBodyData& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // paramChangeLogs Field Functions 
    bool hasParamChangeLogs() const { return this->paramChangeLogs_ != nullptr;};
    void deleteParamChangeLogs() { this->paramChangeLogs_ = nullptr;};
    inline const vector<Models::DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs> & paramChangeLogs() const { DARABONBA_PTR_GET_CONST(paramChangeLogs_, vector<Models::DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs>) };
    inline vector<Models::DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs> paramChangeLogs() { DARABONBA_PTR_GET(paramChangeLogs_, vector<Models::DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs>) };
    inline DescribeDBClusterConfigChangeLogsResponseBodyData& setParamChangeLogs(const vector<Models::DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs> & paramChangeLogs) { DARABONBA_PTR_SET_VALUE(paramChangeLogs_, paramChangeLogs) };
    inline DescribeDBClusterConfigChangeLogsResponseBodyData& setParamChangeLogs(vector<Models::DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs> && paramChangeLogs) { DARABONBA_PTR_SET_RVALUE(paramChangeLogs_, paramChangeLogs) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline DescribeDBClusterConfigChangeLogsResponseBodyData& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> dbClusterId_ = nullptr;
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    // The parameter change logs.
    std::shared_ptr<vector<Models::DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs>> paramChangeLogs_ = nullptr;
    // The task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
