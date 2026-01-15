// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODY_HPP_
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
  class DescribeDBClusterParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ParameterNumbers, parameterNumbers_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ParameterNumbers, parameterNumbers_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
    };
    DescribeDBClusterParametersResponseBody() = default ;
    DescribeDBClusterParametersResponseBody(const DescribeDBClusterParametersResponseBody &) = default ;
    DescribeDBClusterParametersResponseBody(DescribeDBClusterParametersResponseBody &&) = default ;
    DescribeDBClusterParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterParametersResponseBody() = default ;
    DescribeDBClusterParametersResponseBody& operator=(const DescribeDBClusterParametersResponseBody &) = default ;
    DescribeDBClusterParametersResponseBody& operator=(DescribeDBClusterParametersResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(IsNodeAvailable, isNodeAvailable_);
          DARABONBA_PTR_TO_JSON(ParamRelyRule, paramRelyRule_);
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
          DARABONBA_PTR_FROM_JSON(IsNodeAvailable, isNodeAvailable_);
          DARABONBA_PTR_FROM_JSON(ParamRelyRule, paramRelyRule_);
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
        && this->isNodeAvailable_ == nullptr && this->paramRelyRule_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterStatus_ == nullptr
        && this->parameterValue_ == nullptr; };
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


        // isNodeAvailable Field Functions 
        bool hasIsNodeAvailable() const { return this->isNodeAvailable_ != nullptr;};
        void deleteIsNodeAvailable() { this->isNodeAvailable_ = nullptr;};
        inline string getIsNodeAvailable() const { DARABONBA_PTR_GET_DEFAULT(isNodeAvailable_, "") };
        inline Parameter& setIsNodeAvailable(string isNodeAvailable) { DARABONBA_PTR_SET_VALUE(isNodeAvailable_, isNodeAvailable) };


        // paramRelyRule Field Functions 
        bool hasParamRelyRule() const { return this->paramRelyRule_ != nullptr;};
        void deleteParamRelyRule() { this->paramRelyRule_ = nullptr;};
        inline string getParamRelyRule() const { DARABONBA_PTR_GET_DEFAULT(paramRelyRule_, "") };
        inline Parameter& setParamRelyRule(string paramRelyRule) { DARABONBA_PTR_SET_VALUE(paramRelyRule_, paramRelyRule) };


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
        // The valid values of the parameter.
        shared_ptr<string> checkingCode_ {};
        // The data type of the parameter value. Valid values:
        // 
        // *   **INT**
        // *   **STRING**
        // *   **B**
        shared_ptr<string> dataType_ {};
        // The default value of the parameter.
        shared_ptr<string> defaultParameterValue_ {};
        // A divisor of the parameter. For a parameter of the integer or byte type, the valid values must be a multiple of Factor unless you set Factor to 0.
        shared_ptr<string> factor_ {};
        // Indicates whether a cluster restart is required for the parameter modification to take effect. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<bool> forceRestart_ {};
        // Indicates whether the parameter can be modified. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<bool> isModifiable_ {};
        // Indicates whether the parameter is a global parameter. Valid values:
        // 
        // *   **0**: The parameter is a global parameter. The modified parameter value is synchronized to other nodes.
        // *   **1**: The parameter is not a global parameter. You can specify the nodes to which the modified parameter value can be synchronized.
        shared_ptr<string> isNodeAvailable_ {};
        // The dependencies of the parameter.
        shared_ptr<string> paramRelyRule_ {};
        // The description of the parameter.
        shared_ptr<string> parameterDescription_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The status of the parameter. Valid values:
        // 
        // *   **Normal**
        // *   **Modifying**
        shared_ptr<string> parameterStatus_ {};
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

    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParametersItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParametersItem& obj) { 
          DARABONBA_PTR_TO_JSON(IsEqual, isEqual_);
          DARABONBA_PTR_TO_JSON(IsInstancePolarDBKey, isInstancePolarDBKey_);
          DARABONBA_PTR_TO_JSON(IsInstanceRdsKey, isInstanceRdsKey_);
          DARABONBA_PTR_TO_JSON(IsPolarDBKey, isPolarDBKey_);
          DARABONBA_PTR_TO_JSON(IsRdsKey, isRdsKey_);
          DARABONBA_PTR_TO_JSON(distParameterDescription, distParameterDescription_);
          DARABONBA_PTR_TO_JSON(distParameterName, distParameterName_);
          DARABONBA_PTR_TO_JSON(distParameterOptional, distParameterOptional_);
          DARABONBA_PTR_TO_JSON(distParameterValue, distParameterValue_);
          DARABONBA_PTR_TO_JSON(rdsParameterDescription, rdsParameterDescription_);
          DARABONBA_PTR_TO_JSON(rdsParameterName, rdsParameterName_);
          DARABONBA_PTR_TO_JSON(rdsParameterOptional, rdsParameterOptional_);
          DARABONBA_PTR_TO_JSON(rdsParameterValue, rdsParameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, ParametersItem& obj) { 
          DARABONBA_PTR_FROM_JSON(IsEqual, isEqual_);
          DARABONBA_PTR_FROM_JSON(IsInstancePolarDBKey, isInstancePolarDBKey_);
          DARABONBA_PTR_FROM_JSON(IsInstanceRdsKey, isInstanceRdsKey_);
          DARABONBA_PTR_FROM_JSON(IsPolarDBKey, isPolarDBKey_);
          DARABONBA_PTR_FROM_JSON(IsRdsKey, isRdsKey_);
          DARABONBA_PTR_FROM_JSON(distParameterDescription, distParameterDescription_);
          DARABONBA_PTR_FROM_JSON(distParameterName, distParameterName_);
          DARABONBA_PTR_FROM_JSON(distParameterOptional, distParameterOptional_);
          DARABONBA_PTR_FROM_JSON(distParameterValue, distParameterValue_);
          DARABONBA_PTR_FROM_JSON(rdsParameterDescription, rdsParameterDescription_);
          DARABONBA_PTR_FROM_JSON(rdsParameterName, rdsParameterName_);
          DARABONBA_PTR_FROM_JSON(rdsParameterOptional, rdsParameterOptional_);
          DARABONBA_PTR_FROM_JSON(rdsParameterValue, rdsParameterValue_);
        };
        ParametersItem() = default ;
        ParametersItem(const ParametersItem &) = default ;
        ParametersItem(ParametersItem &&) = default ;
        ParametersItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParametersItem() = default ;
        ParametersItem& operator=(const ParametersItem &) = default ;
        ParametersItem& operator=(ParametersItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isEqual_ == nullptr
        && this->isInstancePolarDBKey_ == nullptr && this->isInstanceRdsKey_ == nullptr && this->isPolarDBKey_ == nullptr && this->isRdsKey_ == nullptr && this->distParameterDescription_ == nullptr
        && this->distParameterName_ == nullptr && this->distParameterOptional_ == nullptr && this->distParameterValue_ == nullptr && this->rdsParameterDescription_ == nullptr && this->rdsParameterName_ == nullptr
        && this->rdsParameterOptional_ == nullptr && this->rdsParameterValue_ == nullptr; };
        // isEqual Field Functions 
        bool hasIsEqual() const { return this->isEqual_ != nullptr;};
        void deleteIsEqual() { this->isEqual_ = nullptr;};
        inline string getIsEqual() const { DARABONBA_PTR_GET_DEFAULT(isEqual_, "") };
        inline ParametersItem& setIsEqual(string isEqual) { DARABONBA_PTR_SET_VALUE(isEqual_, isEqual) };


        // isInstancePolarDBKey Field Functions 
        bool hasIsInstancePolarDBKey() const { return this->isInstancePolarDBKey_ != nullptr;};
        void deleteIsInstancePolarDBKey() { this->isInstancePolarDBKey_ = nullptr;};
        inline string getIsInstancePolarDBKey() const { DARABONBA_PTR_GET_DEFAULT(isInstancePolarDBKey_, "") };
        inline ParametersItem& setIsInstancePolarDBKey(string isInstancePolarDBKey) { DARABONBA_PTR_SET_VALUE(isInstancePolarDBKey_, isInstancePolarDBKey) };


        // isInstanceRdsKey Field Functions 
        bool hasIsInstanceRdsKey() const { return this->isInstanceRdsKey_ != nullptr;};
        void deleteIsInstanceRdsKey() { this->isInstanceRdsKey_ = nullptr;};
        inline string getIsInstanceRdsKey() const { DARABONBA_PTR_GET_DEFAULT(isInstanceRdsKey_, "") };
        inline ParametersItem& setIsInstanceRdsKey(string isInstanceRdsKey) { DARABONBA_PTR_SET_VALUE(isInstanceRdsKey_, isInstanceRdsKey) };


        // isPolarDBKey Field Functions 
        bool hasIsPolarDBKey() const { return this->isPolarDBKey_ != nullptr;};
        void deleteIsPolarDBKey() { this->isPolarDBKey_ = nullptr;};
        inline string getIsPolarDBKey() const { DARABONBA_PTR_GET_DEFAULT(isPolarDBKey_, "") };
        inline ParametersItem& setIsPolarDBKey(string isPolarDBKey) { DARABONBA_PTR_SET_VALUE(isPolarDBKey_, isPolarDBKey) };


        // isRdsKey Field Functions 
        bool hasIsRdsKey() const { return this->isRdsKey_ != nullptr;};
        void deleteIsRdsKey() { this->isRdsKey_ = nullptr;};
        inline string getIsRdsKey() const { DARABONBA_PTR_GET_DEFAULT(isRdsKey_, "") };
        inline ParametersItem& setIsRdsKey(string isRdsKey) { DARABONBA_PTR_SET_VALUE(isRdsKey_, isRdsKey) };


        // distParameterDescription Field Functions 
        bool hasDistParameterDescription() const { return this->distParameterDescription_ != nullptr;};
        void deleteDistParameterDescription() { this->distParameterDescription_ = nullptr;};
        inline string getDistParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(distParameterDescription_, "") };
        inline ParametersItem& setDistParameterDescription(string distParameterDescription) { DARABONBA_PTR_SET_VALUE(distParameterDescription_, distParameterDescription) };


        // distParameterName Field Functions 
        bool hasDistParameterName() const { return this->distParameterName_ != nullptr;};
        void deleteDistParameterName() { this->distParameterName_ = nullptr;};
        inline string getDistParameterName() const { DARABONBA_PTR_GET_DEFAULT(distParameterName_, "") };
        inline ParametersItem& setDistParameterName(string distParameterName) { DARABONBA_PTR_SET_VALUE(distParameterName_, distParameterName) };


        // distParameterOptional Field Functions 
        bool hasDistParameterOptional() const { return this->distParameterOptional_ != nullptr;};
        void deleteDistParameterOptional() { this->distParameterOptional_ = nullptr;};
        inline string getDistParameterOptional() const { DARABONBA_PTR_GET_DEFAULT(distParameterOptional_, "") };
        inline ParametersItem& setDistParameterOptional(string distParameterOptional) { DARABONBA_PTR_SET_VALUE(distParameterOptional_, distParameterOptional) };


        // distParameterValue Field Functions 
        bool hasDistParameterValue() const { return this->distParameterValue_ != nullptr;};
        void deleteDistParameterValue() { this->distParameterValue_ = nullptr;};
        inline string getDistParameterValue() const { DARABONBA_PTR_GET_DEFAULT(distParameterValue_, "") };
        inline ParametersItem& setDistParameterValue(string distParameterValue) { DARABONBA_PTR_SET_VALUE(distParameterValue_, distParameterValue) };


        // rdsParameterDescription Field Functions 
        bool hasRdsParameterDescription() const { return this->rdsParameterDescription_ != nullptr;};
        void deleteRdsParameterDescription() { this->rdsParameterDescription_ = nullptr;};
        inline string getRdsParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(rdsParameterDescription_, "") };
        inline ParametersItem& setRdsParameterDescription(string rdsParameterDescription) { DARABONBA_PTR_SET_VALUE(rdsParameterDescription_, rdsParameterDescription) };


        // rdsParameterName Field Functions 
        bool hasRdsParameterName() const { return this->rdsParameterName_ != nullptr;};
        void deleteRdsParameterName() { this->rdsParameterName_ = nullptr;};
        inline string getRdsParameterName() const { DARABONBA_PTR_GET_DEFAULT(rdsParameterName_, "") };
        inline ParametersItem& setRdsParameterName(string rdsParameterName) { DARABONBA_PTR_SET_VALUE(rdsParameterName_, rdsParameterName) };


        // rdsParameterOptional Field Functions 
        bool hasRdsParameterOptional() const { return this->rdsParameterOptional_ != nullptr;};
        void deleteRdsParameterOptional() { this->rdsParameterOptional_ = nullptr;};
        inline string getRdsParameterOptional() const { DARABONBA_PTR_GET_DEFAULT(rdsParameterOptional_, "") };
        inline ParametersItem& setRdsParameterOptional(string rdsParameterOptional) { DARABONBA_PTR_SET_VALUE(rdsParameterOptional_, rdsParameterOptional) };


        // rdsParameterValue Field Functions 
        bool hasRdsParameterValue() const { return this->rdsParameterValue_ != nullptr;};
        void deleteRdsParameterValue() { this->rdsParameterValue_ = nullptr;};
        inline string getRdsParameterValue() const { DARABONBA_PTR_GET_DEFAULT(rdsParameterValue_, "") };
        inline ParametersItem& setRdsParameterValue(string rdsParameterValue) { DARABONBA_PTR_SET_VALUE(rdsParameterValue_, rdsParameterValue) };


      protected:
        // Indicates whether the source and current parameters have the same value.
        shared_ptr<string> isEqual_ {};
        // Indicate whether the parameter is a primary parameter of the destination cluster. Valid values:
        // 
        // *   **1**: The parameter is a primary parameter of the destination cluster.
        // *   **0**: The parameter is not a primary parameter of the destination cluster.
        shared_ptr<string> isInstancePolarDBKey_ {};
        // Indicate whether the parameter is a primary parameter of the source instance. Valid values:
        // 
        // *   **1**: The parameter is a primary parameter of the source instance.
        // *   **0**: The parameter is not a primary parameter of the source instance.
        shared_ptr<string> isInstanceRdsKey_ {};
        // Indicate whether the parameter is a primary parameter of the destination cluster. Valid values:
        // 
        // *   **1**: The parameter is a primary parameter of the destination cluster.
        // *   **0**: The parameter is not a primary parameter of the destination cluster.
        shared_ptr<string> isPolarDBKey_ {};
        // Indicate whether the parameter is a primary parameter of the source instance. Valid values:
        // 
        // *   **1**: The parameter is a primary parameter of the source instance.
        // *   **0**: The parameter is not a primary parameter of the source instance.
        shared_ptr<string> isRdsKey_ {};
        // The description of the parameter of the destination cluster.
        shared_ptr<string> distParameterDescription_ {};
        // The name of the parameter of the destination cluster.
        shared_ptr<string> distParameterName_ {};
        // The valid values of the parameter of the destination cluster.
        shared_ptr<string> distParameterOptional_ {};
        // The value of the parameter of the destination cluster.
        shared_ptr<string> distParameterValue_ {};
        // The description of the parameter of the source instance.
        shared_ptr<string> rdsParameterDescription_ {};
        // The name of the parameter of the source instance.
        shared_ptr<string> rdsParameterName_ {};
        // The valid values of the parameter of the source instance.
        shared_ptr<string> rdsParameterOptional_ {};
        // The value of the parameter of the source instance.
        shared_ptr<string> rdsParameterValue_ {};
      };

      virtual bool empty() const override { return this->parameters_ == nullptr; };
      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<Parameters::ParametersItem> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Parameters::ParametersItem>) };
      inline vector<Parameters::ParametersItem> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Parameters::ParametersItem>) };
      inline Parameters& setParameters(const vector<Parameters::ParametersItem> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Parameters& setParameters(vector<Parameters::ParametersItem> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      shared_ptr<vector<Parameters::ParametersItem>> parameters_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->engine_ == nullptr && this->parameterNumbers_ == nullptr && this->parameters_ == nullptr
        && this->requestId_ == nullptr && this->runningParameters_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterParametersResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBClusterParametersResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClusterParametersResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClusterParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // parameterNumbers Field Functions 
    bool hasParameterNumbers() const { return this->parameterNumbers_ != nullptr;};
    void deleteParameterNumbers() { this->parameterNumbers_ = nullptr;};
    inline string getParameterNumbers() const { DARABONBA_PTR_GET_DEFAULT(parameterNumbers_, "") };
    inline DescribeDBClusterParametersResponseBody& setParameterNumbers(string parameterNumbers) { DARABONBA_PTR_SET_VALUE(parameterNumbers_, parameterNumbers) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const DescribeDBClusterParametersResponseBody::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, DescribeDBClusterParametersResponseBody::Parameters) };
    inline DescribeDBClusterParametersResponseBody::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, DescribeDBClusterParametersResponseBody::Parameters) };
    inline DescribeDBClusterParametersResponseBody& setParameters(const DescribeDBClusterParametersResponseBody::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeDBClusterParametersResponseBody& setParameters(DescribeDBClusterParametersResponseBody::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const DescribeDBClusterParametersResponseBody::RunningParameters & getRunningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, DescribeDBClusterParametersResponseBody::RunningParameters) };
    inline DescribeDBClusterParametersResponseBody::RunningParameters getRunningParameters() { DARABONBA_PTR_GET(runningParameters_, DescribeDBClusterParametersResponseBody::RunningParameters) };
    inline DescribeDBClusterParametersResponseBody& setRunningParameters(const DescribeDBClusterParametersResponseBody::RunningParameters & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeDBClusterParametersResponseBody& setRunningParameters(DescribeDBClusterParametersResponseBody::RunningParameters && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    // The ID of the cluster.
    shared_ptr<string> DBClusterId_ {};
    // The database engine that the clusters runs. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **Oracle**
    shared_ptr<string> DBType_ {};
    // The version of the database engine. 
    // 
    // - Valid values for the MySQL database engine:   
    //   - **5.6**
    //   - **5.7**
    //   - **8.0**
    // - Valid value for the PostgreSQL database engine:    
    //   - **11**
    //   - **14**
    // - Valid value for the Oracle database engine:  **11**
    shared_ptr<string> DBVersion_ {};
    // The cluster engine.
    shared_ptr<string> engine_ {};
    // The number of parameters.
    shared_ptr<string> parameterNumbers_ {};
    // A comparison of parameters between the source RDS instance and the destination PolarDB cluster.
    shared_ptr<DescribeDBClusterParametersResponseBody::Parameters> parameters_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The parameters of the PolarDB cluster.
    shared_ptr<DescribeDBClusterParametersResponseBody::RunningParameters> runningParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
