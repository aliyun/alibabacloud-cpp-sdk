// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKSQLENGINESTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKSQLENGINESTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkSQLEngineStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkSQLEngineStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkSQLEngineStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkSQLEngineStateResponseBody() = default ;
    GetSparkSQLEngineStateResponseBody(const GetSparkSQLEngineStateResponseBody &) = default ;
    GetSparkSQLEngineStateResponseBody(GetSparkSQLEngineStateResponseBody &&) = default ;
    GetSparkSQLEngineStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkSQLEngineStateResponseBody() = default ;
    GetSparkSQLEngineStateResponseBody& operator=(const GetSparkSQLEngineStateResponseBody &) = default ;
    GetSparkSQLEngineStateResponseBody& operator=(GetSparkSQLEngineStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Jars, jars_);
        DARABONBA_PTR_TO_JSON(MaxExecutor, maxExecutor_);
        DARABONBA_PTR_TO_JSON(MinExecutor, minExecutor_);
        DARABONBA_PTR_TO_JSON(SlotNum, slotNum_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(SubmittedTimeInMillis, submittedTimeInMillis_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Jars, jars_);
        DARABONBA_PTR_FROM_JSON(MaxExecutor, maxExecutor_);
        DARABONBA_PTR_FROM_JSON(MinExecutor, minExecutor_);
        DARABONBA_PTR_FROM_JSON(SlotNum, slotNum_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(SubmittedTimeInMillis, submittedTimeInMillis_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->config_ == nullptr && this->jars_ == nullptr && this->maxExecutor_ == nullptr && this->minExecutor_ == nullptr && this->slotNum_ == nullptr
        && this->state_ == nullptr && this->submittedTimeInMillis_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // jars Field Functions 
      bool hasJars() const { return this->jars_ != nullptr;};
      void deleteJars() { this->jars_ = nullptr;};
      inline string getJars() const { DARABONBA_PTR_GET_DEFAULT(jars_, "") };
      inline Data& setJars(string jars) { DARABONBA_PTR_SET_VALUE(jars_, jars) };


      // maxExecutor Field Functions 
      bool hasMaxExecutor() const { return this->maxExecutor_ != nullptr;};
      void deleteMaxExecutor() { this->maxExecutor_ = nullptr;};
      inline string getMaxExecutor() const { DARABONBA_PTR_GET_DEFAULT(maxExecutor_, "") };
      inline Data& setMaxExecutor(string maxExecutor) { DARABONBA_PTR_SET_VALUE(maxExecutor_, maxExecutor) };


      // minExecutor Field Functions 
      bool hasMinExecutor() const { return this->minExecutor_ != nullptr;};
      void deleteMinExecutor() { this->minExecutor_ = nullptr;};
      inline string getMinExecutor() const { DARABONBA_PTR_GET_DEFAULT(minExecutor_, "") };
      inline Data& setMinExecutor(string minExecutor) { DARABONBA_PTR_SET_VALUE(minExecutor_, minExecutor) };


      // slotNum Field Functions 
      bool hasSlotNum() const { return this->slotNum_ != nullptr;};
      void deleteSlotNum() { this->slotNum_ = nullptr;};
      inline string getSlotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, "") };
      inline Data& setSlotNum(string slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // submittedTimeInMillis Field Functions 
      bool hasSubmittedTimeInMillis() const { return this->submittedTimeInMillis_ != nullptr;};
      void deleteSubmittedTimeInMillis() { this->submittedTimeInMillis_ = nullptr;};
      inline string getSubmittedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(submittedTimeInMillis_, "") };
      inline Data& setSubmittedTimeInMillis(string submittedTimeInMillis) { DARABONBA_PTR_SET_VALUE(submittedTimeInMillis_, submittedTimeInMillis) };


    protected:
      // The ID of the Spark application.
      shared_ptr<string> appId_ {};
      // The configuration of the Spark application.
      shared_ptr<string> config_ {};
      // The third-party JAR package.
      shared_ptr<string> jars_ {};
      // The maximum number of started Spark executors.
      shared_ptr<string> maxExecutor_ {};
      // The minimum number of started Spark executors.
      shared_ptr<string> minExecutor_ {};
      // The slot number of the Spark application.
      shared_ptr<string> slotNum_ {};
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
      shared_ptr<string> state_ {};
      // The timestamp when the Spark SQL application was submitted. Unit: milliseconds.
      shared_ptr<string> submittedTimeInMillis_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkSQLEngineStateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSparkSQLEngineStateResponseBody::Data) };
    inline GetSparkSQLEngineStateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSparkSQLEngineStateResponseBody::Data) };
    inline GetSparkSQLEngineStateResponseBody& setData(const GetSparkSQLEngineStateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkSQLEngineStateResponseBody& setData(GetSparkSQLEngineStateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkSQLEngineStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The state information about the Spark SQL engine.
    shared_ptr<GetSparkSQLEngineStateResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
