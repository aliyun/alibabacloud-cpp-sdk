// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESEARCHPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESEARCHPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSearchParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSearchParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSearchParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
    };
    DescribeSearchParametersResponseBody() = default ;
    DescribeSearchParametersResponseBody(const DescribeSearchParametersResponseBody &) = default ;
    DescribeSearchParametersResponseBody(DescribeSearchParametersResponseBody &&) = default ;
    DescribeSearchParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSearchParametersResponseBody() = default ;
    DescribeSearchParametersResponseBody& operator=(const DescribeSearchParametersResponseBody &) = default ;
    DescribeSearchParametersResponseBody& operator=(DescribeSearchParametersResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(DefaultParameterValue, defaultParameterValue_);
          DARABONBA_PTR_TO_JSON(Factor, factor_);
          DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_TO_JSON(IsModifiable, isModifiable_);
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterStatus, parameterStatus_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(DefaultParameterValue, defaultParameterValue_);
          DARABONBA_PTR_FROM_JSON(Factor, factor_);
          DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_FROM_JSON(IsModifiable, isModifiable_);
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterStatus, parameterStatus_);
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
        && this->dataType_ == nullptr && this->defaultParameterValue_ == nullptr && this->factor_ == nullptr && this->forceRestart_ == nullptr && this->isModifiable_ == nullptr
        && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterStatus_ == nullptr && this->parameterValue_ == nullptr; };
        // checkingCode Field Functions 
        bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
        void deleteCheckingCode() { this->checkingCode_ = nullptr;};
        inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
        inline Parameter& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline Parameter& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // defaultParameterValue Field Functions 
        bool hasDefaultParameterValue() const { return this->defaultParameterValue_ != nullptr;};
        void deleteDefaultParameterValue() { this->defaultParameterValue_ = nullptr;};
        inline string getDefaultParameterValue() const { DARABONBA_PTR_GET_DEFAULT(defaultParameterValue_, "") };
        inline Parameter& setDefaultParameterValue(string defaultParameterValue) { DARABONBA_PTR_SET_VALUE(defaultParameterValue_, defaultParameterValue) };


        // factor Field Functions 
        bool hasFactor() const { return this->factor_ != nullptr;};
        void deleteFactor() { this->factor_ = nullptr;};
        inline string getFactor() const { DARABONBA_PTR_GET_DEFAULT(factor_, "") };
        inline Parameter& setFactor(string factor) { DARABONBA_PTR_SET_VALUE(factor_, factor) };


        // forceRestart Field Functions 
        bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
        void deleteForceRestart() { this->forceRestart_ = nullptr;};
        inline bool getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, false) };
        inline Parameter& setForceRestart(bool forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


        // isModifiable Field Functions 
        bool hasIsModifiable() const { return this->isModifiable_ != nullptr;};
        void deleteIsModifiable() { this->isModifiable_ = nullptr;};
        inline bool getIsModifiable() const { DARABONBA_PTR_GET_DEFAULT(isModifiable_, false) };
        inline Parameter& setIsModifiable(bool isModifiable) { DARABONBA_PTR_SET_VALUE(isModifiable_, isModifiable) };


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


        // parameterStatus Field Functions 
        bool hasParameterStatus() const { return this->parameterStatus_ != nullptr;};
        void deleteParameterStatus() { this->parameterStatus_ = nullptr;};
        inline string getParameterStatus() const { DARABONBA_PTR_GET_DEFAULT(parameterStatus_, "") };
        inline Parameter& setParameterStatus(string parameterStatus) { DARABONBA_PTR_SET_VALUE(parameterStatus_, parameterStatus) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline Parameter& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The value validation rule of the template. The rule can be a numeric range, an enumeration, or a regular expression, and must be interpreted in combination with the data type.
        shared_ptr<string> checkingCode_ {};
        // The data type of the parameter value. Valid values: INT, DOUBLE, B/BYTE, MEMORY, PERCENT, TIME, BOOLEAN, and STRING. The MEMORY type supports percentages or capacities with units.
        shared_ptr<string> dataType_ {};
        // The default value of the current active template. This value is independent of the value modified by the user.
        shared_ptr<string> defaultParameterValue_ {};
        // The divisibility factor. If the value is not zero, the numeric value parsed based on the template type must be a multiple of this factor.
        shared_ptr<string> factor_ {};
        // Specifies whether a restart is required for the parameter to take effect. The value is true for static parameters and false for dynamic parameters.
        shared_ptr<bool> forceRestart_ {};
        // Specifies whether the parameter is modifiable.
        shared_ptr<bool> isModifiable_ {};
        // The parameter description.
        shared_ptr<string> parameterDescription_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The modification status of the parameter. A value of Normal indicates that no modifications are pending. A value of Modifying indicates that the modification task is not completed.
        shared_ptr<string> parameterStatus_ {};
        // The configuration value on the control plane. If a modification is in progress, the value to be applied is displayed. This value is not read from the kernel in real time.
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
      // The list of parameters.
      shared_ptr<vector<RunningParameters::Parameter>> parameter_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBVersion_ == nullptr && this->engine_ == nullptr && this->requestId_ == nullptr && this->runningParameters_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSearchParametersResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeSearchParametersResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeSearchParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSearchParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const DescribeSearchParametersResponseBody::RunningParameters & getRunningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, DescribeSearchParametersResponseBody::RunningParameters) };
    inline DescribeSearchParametersResponseBody::RunningParameters getRunningParameters() { DARABONBA_PTR_GET(runningParameters_, DescribeSearchParametersResponseBody::RunningParameters) };
    inline DescribeSearchParametersResponseBody& setRunningParameters(const DescribeSearchParametersResponseBody::RunningParameters & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeSearchParametersResponseBody& setRunningParameters(DescribeSearchParametersResponseBody::RunningParameters && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    // The ID of the PolarDB primary cluster.
    shared_ptr<string> DBClusterId_ {};
    // The Search engine version. This is not the MySQL version of the primary cluster.
    shared_ptr<string> DBVersion_ {};
    // The type of the Search engine.
    shared_ptr<string> engine_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The visible parameters and their modification status.
    shared_ptr<DescribeSearchParametersResponseBody::RunningParameters> runningParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
