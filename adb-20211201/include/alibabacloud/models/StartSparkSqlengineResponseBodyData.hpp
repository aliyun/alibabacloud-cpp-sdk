// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSPARKSQLENGINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTSPARKSQLENGINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class StartSparkSQLEngineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSparkSQLEngineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, StartSparkSQLEngineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    StartSparkSQLEngineResponseBodyData() = default ;
    StartSparkSQLEngineResponseBodyData(const StartSparkSQLEngineResponseBodyData &) = default ;
    StartSparkSQLEngineResponseBodyData(StartSparkSQLEngineResponseBodyData &&) = default ;
    StartSparkSQLEngineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSparkSQLEngineResponseBodyData() = default ;
    StartSparkSQLEngineResponseBodyData& operator=(const StartSparkSQLEngineResponseBodyData &) = default ;
    StartSparkSQLEngineResponseBodyData& operator=(StartSparkSQLEngineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->state_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartSparkSQLEngineResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline StartSparkSQLEngineResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline StartSparkSQLEngineResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the Spark job.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the Spark application.
    std::shared_ptr<string> appName_ = nullptr;
    // The state of the Spark SQL engine. Valid values:
    // 
    // *   SUBMITTED
    // *   STARTING
    // *   RUNNING
    // *   FAILED
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
