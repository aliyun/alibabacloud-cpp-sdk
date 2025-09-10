// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParametersResponseBodyDataConfigParameters.hpp>
#include <alibabacloud/models/DescribeParametersResponseBodyDataRunningParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeParametersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigParameters, configParameters_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigParameters, configParameters_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
    };
    DescribeParametersResponseBodyData() = default ;
    DescribeParametersResponseBodyData(const DescribeParametersResponseBodyData &) = default ;
    DescribeParametersResponseBodyData(DescribeParametersResponseBodyData &&) = default ;
    DescribeParametersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBodyData() = default ;
    DescribeParametersResponseBodyData& operator=(const DescribeParametersResponseBodyData &) = default ;
    DescribeParametersResponseBodyData& operator=(DescribeParametersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configParameters_ != nullptr
        && this->DBInstanceId_ != nullptr && this->engine_ != nullptr && this->engineVersion_ != nullptr && this->runningParameters_ != nullptr; };
    // configParameters Field Functions 
    bool hasConfigParameters() const { return this->configParameters_ != nullptr;};
    void deleteConfigParameters() { this->configParameters_ = nullptr;};
    inline const vector<Models::DescribeParametersResponseBodyDataConfigParameters> & configParameters() const { DARABONBA_PTR_GET_CONST(configParameters_, vector<Models::DescribeParametersResponseBodyDataConfigParameters>) };
    inline vector<Models::DescribeParametersResponseBodyDataConfigParameters> configParameters() { DARABONBA_PTR_GET(configParameters_, vector<Models::DescribeParametersResponseBodyDataConfigParameters>) };
    inline DescribeParametersResponseBodyData& setConfigParameters(const vector<Models::DescribeParametersResponseBodyDataConfigParameters> & configParameters) { DARABONBA_PTR_SET_VALUE(configParameters_, configParameters) };
    inline DescribeParametersResponseBodyData& setConfigParameters(vector<Models::DescribeParametersResponseBodyDataConfigParameters> && configParameters) { DARABONBA_PTR_SET_RVALUE(configParameters_, configParameters) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeParametersResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeParametersResponseBodyData& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeParametersResponseBodyData& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const vector<Models::DescribeParametersResponseBodyDataRunningParameters> & runningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, vector<Models::DescribeParametersResponseBodyDataRunningParameters>) };
    inline vector<Models::DescribeParametersResponseBodyDataRunningParameters> runningParameters() { DARABONBA_PTR_GET(runningParameters_, vector<Models::DescribeParametersResponseBodyDataRunningParameters>) };
    inline DescribeParametersResponseBodyData& setRunningParameters(const vector<Models::DescribeParametersResponseBodyDataRunningParameters> & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeParametersResponseBodyData& setRunningParameters(vector<Models::DescribeParametersResponseBodyDataRunningParameters> && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    std::shared_ptr<vector<Models::DescribeParametersResponseBodyDataConfigParameters>> configParameters_ = nullptr;
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<vector<Models::DescribeParametersResponseBodyDataRunningParameters>> runningParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
