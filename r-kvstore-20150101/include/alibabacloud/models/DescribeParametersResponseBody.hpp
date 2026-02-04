// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigParameters, configParameters_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigParameters, configParameters_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
    };
    DescribeParametersResponseBody() = default ;
    DescribeParametersResponseBody(const DescribeParametersResponseBody &) = default ;
    DescribeParametersResponseBody(DescribeParametersResponseBody &&) = default ;
    DescribeParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBody() = default ;
    DescribeParametersResponseBody& operator=(const DescribeParametersResponseBody &) = default ;
    DescribeParametersResponseBody& operator=(DescribeParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunningParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunningParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      };
      friend void from_json(const Darabonba::Json& j, RunningParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
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
      class Parameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
          DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_TO_JSON(ModifiableStatus, modifiableStatus_);
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_FROM_JSON(ModifiableStatus, modifiableStatus_);
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        Parameter() = default ;
        Parameter(const Parameter &) = default ;
        Parameter(Parameter &&) = default ;
        Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameter() = default ;
        Parameter& operator=(const Parameter &) = default ;
        Parameter& operator=(Parameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->forceRestart_ == nullptr && this->modifiableStatus_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterValue_ == nullptr; };
        // checkingCode Field Functions 
        bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
        void deleteCheckingCode() { this->checkingCode_ = nullptr;};
        inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
        inline Parameter& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


        // forceRestart Field Functions 
        bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
        void deleteForceRestart() { this->forceRestart_ = nullptr;};
        inline string getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
        inline Parameter& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


        // modifiableStatus Field Functions 
        bool hasModifiableStatus() const { return this->modifiableStatus_ != nullptr;};
        void deleteModifiableStatus() { this->modifiableStatus_ = nullptr;};
        inline string getModifiableStatus() const { DARABONBA_PTR_GET_DEFAULT(modifiableStatus_, "") };
        inline Parameter& setModifiableStatus(string modifiableStatus) { DARABONBA_PTR_SET_VALUE(modifiableStatus_, modifiableStatus) };


        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline Parameter& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline Parameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline Parameter& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The check code that indicates the valid values of the parameter.
        shared_ptr<string> checkingCode_ {};
        // Indicates whether the instance must be restarted for the modifications to take effect. Valid values:
        // 
        // *   **True**: The instance must be restarted for the modifications to take effect.
        // *   **False**: The instance does not need to be restarted for the modifications to take effect. Modifications immediately take effect.
        shared_ptr<string> forceRestart_ {};
        // Indicates whether the parameter can be reset. Valid values:
        // 
        // *   **False**: The parameter cannot be reset.
        // *   **True**: The parameter can be reset.
        shared_ptr<string> modifiableStatus_ {};
        // The description of the parameter.
        shared_ptr<string> parameterDescription_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The value of the parameter.
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->parameter_ == nullptr; };
      // parameter Field Functions 
      bool hasParameter() const { return this->parameter_ != nullptr;};
      void deleteParameter() { this->parameter_ = nullptr;};
      inline const vector<RunningParameters::Parameter> & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, vector<RunningParameters::Parameter>) };
      inline vector<RunningParameters::Parameter> getParameter() { DARABONBA_PTR_GET(parameter_, vector<RunningParameters::Parameter>) };
      inline RunningParameters& setParameter(const vector<RunningParameters::Parameter> & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
      inline RunningParameters& setParameter(vector<RunningParameters::Parameter> && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    protected:
      shared_ptr<vector<RunningParameters::Parameter>> parameter_ {};
    };

    class ConfigParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
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
      class Parameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
          DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_TO_JSON(ModifiableStatus, modifiableStatus_);
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_FROM_JSON(ModifiableStatus, modifiableStatus_);
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        Parameter() = default ;
        Parameter(const Parameter &) = default ;
        Parameter(Parameter &&) = default ;
        Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameter() = default ;
        Parameter& operator=(const Parameter &) = default ;
        Parameter& operator=(Parameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->forceRestart_ == nullptr && this->modifiableStatus_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterValue_ == nullptr; };
        // checkingCode Field Functions 
        bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
        void deleteCheckingCode() { this->checkingCode_ = nullptr;};
        inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
        inline Parameter& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


        // forceRestart Field Functions 
        bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
        void deleteForceRestart() { this->forceRestart_ = nullptr;};
        inline bool getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, false) };
        inline Parameter& setForceRestart(bool forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


        // modifiableStatus Field Functions 
        bool hasModifiableStatus() const { return this->modifiableStatus_ != nullptr;};
        void deleteModifiableStatus() { this->modifiableStatus_ = nullptr;};
        inline bool getModifiableStatus() const { DARABONBA_PTR_GET_DEFAULT(modifiableStatus_, false) };
        inline Parameter& setModifiableStatus(bool modifiableStatus) { DARABONBA_PTR_SET_VALUE(modifiableStatus_, modifiableStatus) };


        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline Parameter& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline Parameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline Parameter& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The check code that indicates the valid values of the parameter.
        shared_ptr<string> checkingCode_ {};
        // Indicates whether the instance must be restarted for the modifications to take effect. Valid values:
        // 
        // *   **True**: The instance must be restarted for the modifications to take effect.
        // *   **False**: The instance does not need to be restarted for the modifications to take effect. Modifications immediately take effect.
        shared_ptr<bool> forceRestart_ {};
        // Indicates whether the parameter can be reset. Valid values:
        // 
        // *   **False**: The parameter cannot be reset.
        // *   **True**: The parameter can be reset.
        shared_ptr<bool> modifiableStatus_ {};
        // The description of the parameter.
        shared_ptr<string> parameterDescription_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The value of the parameter.
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->parameter_ == nullptr; };
      // parameter Field Functions 
      bool hasParameter() const { return this->parameter_ != nullptr;};
      void deleteParameter() { this->parameter_ = nullptr;};
      inline const vector<ConfigParameters::Parameter> & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, vector<ConfigParameters::Parameter>) };
      inline vector<ConfigParameters::Parameter> getParameter() { DARABONBA_PTR_GET(parameter_, vector<ConfigParameters::Parameter>) };
      inline ConfigParameters& setParameter(const vector<ConfigParameters::Parameter> & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
      inline ConfigParameters& setParameter(vector<ConfigParameters::Parameter> && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    protected:
      shared_ptr<vector<ConfigParameters::Parameter>> parameter_ {};
    };

    virtual bool empty() const override { return this->configParameters_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->requestId_ == nullptr && this->runningParameters_ == nullptr; };
    // configParameters Field Functions 
    bool hasConfigParameters() const { return this->configParameters_ != nullptr;};
    void deleteConfigParameters() { this->configParameters_ = nullptr;};
    inline const DescribeParametersResponseBody::ConfigParameters & getConfigParameters() const { DARABONBA_PTR_GET_CONST(configParameters_, DescribeParametersResponseBody::ConfigParameters) };
    inline DescribeParametersResponseBody::ConfigParameters getConfigParameters() { DARABONBA_PTR_GET(configParameters_, DescribeParametersResponseBody::ConfigParameters) };
    inline DescribeParametersResponseBody& setConfigParameters(const DescribeParametersResponseBody::ConfigParameters & configParameters) { DARABONBA_PTR_SET_VALUE(configParameters_, configParameters) };
    inline DescribeParametersResponseBody& setConfigParameters(DescribeParametersResponseBody::ConfigParameters && configParameters) { DARABONBA_PTR_SET_RVALUE(configParameters_, configParameters) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeParametersResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const DescribeParametersResponseBody::RunningParameters & getRunningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, DescribeParametersResponseBody::RunningParameters) };
    inline DescribeParametersResponseBody::RunningParameters getRunningParameters() { DARABONBA_PTR_GET(runningParameters_, DescribeParametersResponseBody::RunningParameters) };
    inline DescribeParametersResponseBody& setRunningParameters(const DescribeParametersResponseBody::RunningParameters & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeParametersResponseBody& setRunningParameters(DescribeParametersResponseBody::RunningParameters && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    // The configuration parameters that have not taken effect.
    shared_ptr<DescribeParametersResponseBody::ConfigParameters> configParameters_ {};
    // The database engine that the instance runs.
    shared_ptr<string> engine_ {};
    // The database engine version of the instance.
    shared_ptr<string> engineVersion_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The running parameters.
    shared_ptr<DescribeParametersResponseBody::RunningParameters> runningParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
