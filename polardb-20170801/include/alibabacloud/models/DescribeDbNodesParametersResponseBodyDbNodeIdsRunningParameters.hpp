// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBNODESPARAMETERSRESPONSEBODYDBNODEIDSRUNNINGPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBNODESPARAMETERSRESPONSEBODYDBNODEIDSRUNNINGPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& obj) { 
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
    DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters() = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters(const DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters &) = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters(DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters &&) = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters() = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& operator=(const DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters &) = default ;
    DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& operator=(DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingCode_ == nullptr
        && return this->dataType_ == nullptr && return this->defaultParameterValue_ == nullptr && return this->factor_ == nullptr && return this->forceRestart_ == nullptr && return this->isModifiable_ == nullptr
        && return this->isNodeAvailable_ == nullptr && return this->paramRelyRule_ == nullptr && return this->parameterDescription_ == nullptr && return this->parameterName_ == nullptr && return this->parameterStatus_ == nullptr
        && return this->parameterValue_ == nullptr; };
    // checkingCode Field Functions 
    bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
    void deleteCheckingCode() { this->checkingCode_ = nullptr;};
    inline string checkingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // defaultParameterValue Field Functions 
    bool hasDefaultParameterValue() const { return this->defaultParameterValue_ != nullptr;};
    void deleteDefaultParameterValue() { this->defaultParameterValue_ = nullptr;};
    inline string defaultParameterValue() const { DARABONBA_PTR_GET_DEFAULT(defaultParameterValue_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setDefaultParameterValue(string defaultParameterValue) { DARABONBA_PTR_SET_VALUE(defaultParameterValue_, defaultParameterValue) };


    // factor Field Functions 
    bool hasFactor() const { return this->factor_ != nullptr;};
    void deleteFactor() { this->factor_ = nullptr;};
    inline string factor() const { DARABONBA_PTR_GET_DEFAULT(factor_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setFactor(string factor) { DARABONBA_PTR_SET_VALUE(factor_, factor) };


    // forceRestart Field Functions 
    bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
    void deleteForceRestart() { this->forceRestart_ = nullptr;};
    inline bool forceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, false) };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setForceRestart(bool forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


    // isModifiable Field Functions 
    bool hasIsModifiable() const { return this->isModifiable_ != nullptr;};
    void deleteIsModifiable() { this->isModifiable_ = nullptr;};
    inline bool isModifiable() const { DARABONBA_PTR_GET_DEFAULT(isModifiable_, false) };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setIsModifiable(bool isModifiable) { DARABONBA_PTR_SET_VALUE(isModifiable_, isModifiable) };


    // isNodeAvailable Field Functions 
    bool hasIsNodeAvailable() const { return this->isNodeAvailable_ != nullptr;};
    void deleteIsNodeAvailable() { this->isNodeAvailable_ = nullptr;};
    inline string isNodeAvailable() const { DARABONBA_PTR_GET_DEFAULT(isNodeAvailable_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setIsNodeAvailable(string isNodeAvailable) { DARABONBA_PTR_SET_VALUE(isNodeAvailable_, isNodeAvailable) };


    // paramRelyRule Field Functions 
    bool hasParamRelyRule() const { return this->paramRelyRule_ != nullptr;};
    void deleteParamRelyRule() { this->paramRelyRule_ = nullptr;};
    inline string paramRelyRule() const { DARABONBA_PTR_GET_DEFAULT(paramRelyRule_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setParamRelyRule(string paramRelyRule) { DARABONBA_PTR_SET_VALUE(paramRelyRule_, paramRelyRule) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterStatus Field Functions 
    bool hasParameterStatus() const { return this->parameterStatus_ != nullptr;};
    void deleteParameterStatus() { this->parameterStatus_ = nullptr;};
    inline string parameterStatus() const { DARABONBA_PTR_GET_DEFAULT(parameterStatus_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setParameterStatus(string parameterStatus) { DARABONBA_PTR_SET_VALUE(parameterStatus_, parameterStatus) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline DescribeDBNodesParametersResponseBodyDBNodeIdsRunningParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The valid values of the parameter.
    std::shared_ptr<string> checkingCode_ = nullptr;
    // The data type of the parameter value. Valid values:
    // 
    // *   **INT**
    // *   **STRING**
    // *   **B**
    std::shared_ptr<string> dataType_ = nullptr;
    // The default value of the parameter.
    std::shared_ptr<string> defaultParameterValue_ = nullptr;
    // A divisor of the parameter. For a parameter of the integer or byte type, the valid values must be a multiple of Factor unless you set Factor to 0.
    std::shared_ptr<string> factor_ = nullptr;
    // Indicates whether a cluster restart is required to allow the parameter modification to take effect. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> forceRestart_ = nullptr;
    // Indicates whether the parameter can be modified. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> isModifiable_ = nullptr;
    // Indicates whether the parameter is a global parameter. Valid values:
    // 
    // *   **0**: yes. The modified parameter value is synchronized to other nodes.
    // *   **1**: no. You can customize the nodes to which the modified parameter value can be synchronized to.
    std::shared_ptr<string> isNodeAvailable_ = nullptr;
    // The dependencies of the parameter.
    std::shared_ptr<string> paramRelyRule_ = nullptr;
    // The description of the parameter.
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The status of the parameter. Valid values:
    // 
    // *   **normal**
    // *   **modifying**
    std::shared_ptr<string> parameterStatus_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
