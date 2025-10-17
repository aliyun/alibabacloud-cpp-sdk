// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKSQLENGINESTATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKSQLENGINESTATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkSQLEngineStateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkSQLEngineStateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Jars, jars_);
      DARABONBA_PTR_TO_JSON(MaxExecutor, maxExecutor_);
      DARABONBA_PTR_TO_JSON(MinExecutor, minExecutor_);
      DARABONBA_PTR_TO_JSON(SlotNum, slotNum_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(SubmittedTimeInMillis, submittedTimeInMillis_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkSQLEngineStateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Jars, jars_);
      DARABONBA_PTR_FROM_JSON(MaxExecutor, maxExecutor_);
      DARABONBA_PTR_FROM_JSON(MinExecutor, minExecutor_);
      DARABONBA_PTR_FROM_JSON(SlotNum, slotNum_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(SubmittedTimeInMillis, submittedTimeInMillis_);
    };
    GetSparkSQLEngineStateResponseBodyData() = default ;
    GetSparkSQLEngineStateResponseBodyData(const GetSparkSQLEngineStateResponseBodyData &) = default ;
    GetSparkSQLEngineStateResponseBodyData(GetSparkSQLEngineStateResponseBodyData &&) = default ;
    GetSparkSQLEngineStateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkSQLEngineStateResponseBodyData() = default ;
    GetSparkSQLEngineStateResponseBodyData& operator=(const GetSparkSQLEngineStateResponseBodyData &) = default ;
    GetSparkSQLEngineStateResponseBodyData& operator=(GetSparkSQLEngineStateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->config_ == nullptr && return this->jars_ == nullptr && return this->maxExecutor_ == nullptr && return this->minExecutor_ == nullptr && return this->slotNum_ == nullptr
        && return this->state_ == nullptr && return this->submittedTimeInMillis_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetSparkSQLEngineStateResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetSparkSQLEngineStateResponseBodyData& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // jars Field Functions 
    bool hasJars() const { return this->jars_ != nullptr;};
    void deleteJars() { this->jars_ = nullptr;};
    inline string jars() const { DARABONBA_PTR_GET_DEFAULT(jars_, "") };
    inline GetSparkSQLEngineStateResponseBodyData& setJars(string jars) { DARABONBA_PTR_SET_VALUE(jars_, jars) };


    // maxExecutor Field Functions 
    bool hasMaxExecutor() const { return this->maxExecutor_ != nullptr;};
    void deleteMaxExecutor() { this->maxExecutor_ = nullptr;};
    inline string maxExecutor() const { DARABONBA_PTR_GET_DEFAULT(maxExecutor_, "") };
    inline GetSparkSQLEngineStateResponseBodyData& setMaxExecutor(string maxExecutor) { DARABONBA_PTR_SET_VALUE(maxExecutor_, maxExecutor) };


    // minExecutor Field Functions 
    bool hasMinExecutor() const { return this->minExecutor_ != nullptr;};
    void deleteMinExecutor() { this->minExecutor_ = nullptr;};
    inline string minExecutor() const { DARABONBA_PTR_GET_DEFAULT(minExecutor_, "") };
    inline GetSparkSQLEngineStateResponseBodyData& setMinExecutor(string minExecutor) { DARABONBA_PTR_SET_VALUE(minExecutor_, minExecutor) };


    // slotNum Field Functions 
    bool hasSlotNum() const { return this->slotNum_ != nullptr;};
    void deleteSlotNum() { this->slotNum_ = nullptr;};
    inline string slotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, "") };
    inline GetSparkSQLEngineStateResponseBodyData& setSlotNum(string slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetSparkSQLEngineStateResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // submittedTimeInMillis Field Functions 
    bool hasSubmittedTimeInMillis() const { return this->submittedTimeInMillis_ != nullptr;};
    void deleteSubmittedTimeInMillis() { this->submittedTimeInMillis_ = nullptr;};
    inline string submittedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(submittedTimeInMillis_, "") };
    inline GetSparkSQLEngineStateResponseBodyData& setSubmittedTimeInMillis(string submittedTimeInMillis) { DARABONBA_PTR_SET_VALUE(submittedTimeInMillis_, submittedTimeInMillis) };


  protected:
    // The ID of the Spark application.
    std::shared_ptr<string> appId_ = nullptr;
    // The configuration of the Spark application.
    std::shared_ptr<string> config_ = nullptr;
    // The third-party JAR package.
    std::shared_ptr<string> jars_ = nullptr;
    // The maximum number of started Spark executors.
    std::shared_ptr<string> maxExecutor_ = nullptr;
    // The minimum number of started Spark executors.
    std::shared_ptr<string> minExecutor_ = nullptr;
    // The slot number of the Spark application.
    std::shared_ptr<string> slotNum_ = nullptr;
    // The execution state of the application. Valid values:
    // 
    // *   SUBMITTED
    // *   STARTING
    // *   RUNNING
    // *   FAILING
    // *   FAILED
    // *   KILLING
    // *   KILLED
    // *   SUCCEEDING
    // *   COMPLETED
    // *   FATAL
    // *   UNKNOWN
    std::shared_ptr<string> state_ = nullptr;
    // The timestamp when the Spark SQL application was submitted. Unit: milliseconds.
    std::shared_ptr<string> submittedTimeInMillis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
