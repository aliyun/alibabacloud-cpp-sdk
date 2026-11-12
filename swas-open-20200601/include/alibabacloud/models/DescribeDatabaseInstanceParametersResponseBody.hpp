// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCEPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCEPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeDatabaseInstanceParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseInstanceParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigParameters, configParameters_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseInstanceParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigParameters, configParameters_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
    };
    DescribeDatabaseInstanceParametersResponseBody() = default ;
    DescribeDatabaseInstanceParametersResponseBody(const DescribeDatabaseInstanceParametersResponseBody &) = default ;
    DescribeDatabaseInstanceParametersResponseBody(DescribeDatabaseInstanceParametersResponseBody &&) = default ;
    DescribeDatabaseInstanceParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseInstanceParametersResponseBody() = default ;
    DescribeDatabaseInstanceParametersResponseBody& operator=(const DescribeDatabaseInstanceParametersResponseBody &) = default ;
    DescribeDatabaseInstanceParametersResponseBody& operator=(DescribeDatabaseInstanceParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunningParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunningParameters& obj) { 
        DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
        DARABONBA_PTR_TO_JSON(ForceModify, forceModify_);
        DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
        DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, RunningParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
        DARABONBA_PTR_FROM_JSON(ForceModify, forceModify_);
        DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
        DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      RunningParameters() = default ;
      RunningParameters(const RunningParameters &) = default ;
      RunningParameters(RunningParameters &&) = default ;
      RunningParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunningParameters() = default ;
      RunningParameters& operator=(const RunningParameters &) = default ;
      RunningParameters& operator=(RunningParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->forceModify_ == nullptr && this->forceRestart_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterValue_ == nullptr; };
      // checkingCode Field Functions 
      bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
      void deleteCheckingCode() { this->checkingCode_ = nullptr;};
      inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
      inline RunningParameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


      // forceModify Field Functions 
      bool hasForceModify() const { return this->forceModify_ != nullptr;};
      void deleteForceModify() { this->forceModify_ = nullptr;};
      inline string getForceModify() const { DARABONBA_PTR_GET_DEFAULT(forceModify_, "") };
      inline RunningParameters& setForceModify(string forceModify) { DARABONBA_PTR_SET_VALUE(forceModify_, forceModify) };


      // forceRestart Field Functions 
      bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
      void deleteForceRestart() { this->forceRestart_ = nullptr;};
      inline string getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
      inline RunningParameters& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


      // parameterDescription Field Functions 
      bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
      void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
      inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
      inline RunningParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline RunningParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline RunningParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The value range of the parameter.
      // 
      // > The value range varies by parameter.
      shared_ptr<string> checkingCode_ {};
      // Indicates whether you can modify the parameter value. Valid values:
      // 
      // - `true`: You can modify the parameter value.
      // 
      // - `false`: You cannot modify the parameter value.
      shared_ptr<string> forceModify_ {};
      // Indicates if the database must be restarted for a parameter modification to take effect. Valid values:
      // 
      // - `true`: A restart is required. To apply changes for a parameter that requires a restart, you must set the `ForceRestart` parameter to `true`.
      // 
      // - `false`: A restart is not required.
      // 
      // Default value: `false`.
      shared_ptr<string> forceRestart_ {};
      // The description of the running parameter.
      shared_ptr<string> parameterDescription_ {};
      // The name of the parameter.
      shared_ptr<string> parameterName_ {};
      // The value of the running parameter.
      shared_ptr<string> parameterValue_ {};
    };

    class ConfigParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigParameters& obj) { 
        DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
        DARABONBA_PTR_TO_JSON(ForceModify, forceModify_);
        DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
        DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
        DARABONBA_PTR_FROM_JSON(ForceModify, forceModify_);
        DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
        DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      ConfigParameters() = default ;
      ConfigParameters(const ConfigParameters &) = default ;
      ConfigParameters(ConfigParameters &&) = default ;
      ConfigParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigParameters() = default ;
      ConfigParameters& operator=(const ConfigParameters &) = default ;
      ConfigParameters& operator=(ConfigParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->forceModify_ == nullptr && this->forceRestart_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterValue_ == nullptr; };
      // checkingCode Field Functions 
      bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
      void deleteCheckingCode() { this->checkingCode_ = nullptr;};
      inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
      inline ConfigParameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


      // forceModify Field Functions 
      bool hasForceModify() const { return this->forceModify_ != nullptr;};
      void deleteForceModify() { this->forceModify_ = nullptr;};
      inline string getForceModify() const { DARABONBA_PTR_GET_DEFAULT(forceModify_, "") };
      inline ConfigParameters& setForceModify(string forceModify) { DARABONBA_PTR_SET_VALUE(forceModify_, forceModify) };


      // forceRestart Field Functions 
      bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
      void deleteForceRestart() { this->forceRestart_ = nullptr;};
      inline string getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
      inline ConfigParameters& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


      // parameterDescription Field Functions 
      bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
      void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
      inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
      inline ConfigParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline ConfigParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline ConfigParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The value range of the parameter.
      // 
      // > The value range varies by parameter.
      shared_ptr<string> checkingCode_ {};
      // Indicates whether you can modify the parameter value. Valid values:
      // 
      // - `true`: You can modify the parameter value.
      // 
      // - `false`: You cannot modify the parameter value.
      shared_ptr<string> forceModify_ {};
      // Indicates if the database must be restarted for a parameter modification to take effect. Valid values:
      // 
      // - `true`: A restart is required. To apply changes for a parameter that requires a restart, you must set the `ForceRestart` parameter to `true`.
      // 
      // - `false`: A restart is not required.
      // 
      // Default value: `false`.
      shared_ptr<string> forceRestart_ {};
      // The description of the parameter.
      shared_ptr<string> parameterDescription_ {};
      // The name of the parameter.
      shared_ptr<string> parameterName_ {};
      // The value of the parameter.
      // 
      // > The value varies by parameter.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->configParameters_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->requestId_ == nullptr && this->runningParameters_ == nullptr; };
    // configParameters Field Functions 
    bool hasConfigParameters() const { return this->configParameters_ != nullptr;};
    void deleteConfigParameters() { this->configParameters_ = nullptr;};
    inline const vector<DescribeDatabaseInstanceParametersResponseBody::ConfigParameters> & getConfigParameters() const { DARABONBA_PTR_GET_CONST(configParameters_, vector<DescribeDatabaseInstanceParametersResponseBody::ConfigParameters>) };
    inline vector<DescribeDatabaseInstanceParametersResponseBody::ConfigParameters> getConfigParameters() { DARABONBA_PTR_GET(configParameters_, vector<DescribeDatabaseInstanceParametersResponseBody::ConfigParameters>) };
    inline DescribeDatabaseInstanceParametersResponseBody& setConfigParameters(const vector<DescribeDatabaseInstanceParametersResponseBody::ConfigParameters> & configParameters) { DARABONBA_PTR_SET_VALUE(configParameters_, configParameters) };
    inline DescribeDatabaseInstanceParametersResponseBody& setConfigParameters(vector<DescribeDatabaseInstanceParametersResponseBody::ConfigParameters> && configParameters) { DARABONBA_PTR_SET_RVALUE(configParameters_, configParameters) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDatabaseInstanceParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDatabaseInstanceParametersResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabaseInstanceParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const vector<DescribeDatabaseInstanceParametersResponseBody::RunningParameters> & getRunningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, vector<DescribeDatabaseInstanceParametersResponseBody::RunningParameters>) };
    inline vector<DescribeDatabaseInstanceParametersResponseBody::RunningParameters> getRunningParameters() { DARABONBA_PTR_GET(runningParameters_, vector<DescribeDatabaseInstanceParametersResponseBody::RunningParameters>) };
    inline DescribeDatabaseInstanceParametersResponseBody& setRunningParameters(const vector<DescribeDatabaseInstanceParametersResponseBody::RunningParameters> & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeDatabaseInstanceParametersResponseBody& setRunningParameters(vector<DescribeDatabaseInstanceParametersResponseBody::RunningParameters> && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    // A list of configuration parameters being synchronized. After you modify and submit parameters, the instance starts to synchronize them. Once synchronization is complete, these parameters are removed from this list.
    shared_ptr<vector<DescribeDatabaseInstanceParametersResponseBody::ConfigParameters>> configParameters_ {};
    // The database engine. Currently, only `MySQL` is supported.
    shared_ptr<string> engine_ {};
    // The engine version. Valid values:
    // 
    // - `5.7`: MySQL 5.7.
    // 
    // - `8.0`: MySQL 8.0.
    shared_ptr<string> engineVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A list of running parameters.
    shared_ptr<vector<DescribeDatabaseInstanceParametersResponseBody::RunningParameters>> runningParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
