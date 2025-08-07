// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYPARAMETERSTEMPLATERECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYPARAMETERSTEMPLATERECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeParameterTemplatesResponseBodyParametersTemplateRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTemplatesResponseBodyParametersTemplateRecord& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
      DARABONBA_PTR_TO_JSON(ForceModify, forceModify_);
      DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_TO_JSON(IsNodeAvailable, isNodeAvailable_);
      DARABONBA_PTR_TO_JSON(ParamRelyRule, paramRelyRule_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTemplatesResponseBodyParametersTemplateRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
      DARABONBA_PTR_FROM_JSON(ForceModify, forceModify_);
      DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
      DARABONBA_PTR_FROM_JSON(IsNodeAvailable, isNodeAvailable_);
      DARABONBA_PTR_FROM_JSON(ParamRelyRule, paramRelyRule_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord() = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord(const DescribeParameterTemplatesResponseBodyParametersTemplateRecord &) = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord(DescribeParameterTemplatesResponseBodyParametersTemplateRecord &&) = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTemplatesResponseBodyParametersTemplateRecord() = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord& operator=(const DescribeParameterTemplatesResponseBodyParametersTemplateRecord &) = default ;
    DescribeParameterTemplatesResponseBodyParametersTemplateRecord& operator=(DescribeParameterTemplatesResponseBodyParametersTemplateRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingCode_ != nullptr
        && this->forceModify_ != nullptr && this->forceRestart_ != nullptr && this->isNodeAvailable_ != nullptr && this->paramRelyRule_ != nullptr && this->parameterDescription_ != nullptr
        && this->parameterName_ != nullptr && this->parameterValue_ != nullptr; };
    // checkingCode Field Functions 
    bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
    void deleteCheckingCode() { this->checkingCode_ = nullptr;};
    inline string checkingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


    // forceModify Field Functions 
    bool hasForceModify() const { return this->forceModify_ != nullptr;};
    void deleteForceModify() { this->forceModify_ = nullptr;};
    inline string forceModify() const { DARABONBA_PTR_GET_DEFAULT(forceModify_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setForceModify(string forceModify) { DARABONBA_PTR_SET_VALUE(forceModify_, forceModify) };


    // forceRestart Field Functions 
    bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
    void deleteForceRestart() { this->forceRestart_ = nullptr;};
    inline string forceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


    // isNodeAvailable Field Functions 
    bool hasIsNodeAvailable() const { return this->isNodeAvailable_ != nullptr;};
    void deleteIsNodeAvailable() { this->isNodeAvailable_ = nullptr;};
    inline string isNodeAvailable() const { DARABONBA_PTR_GET_DEFAULT(isNodeAvailable_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setIsNodeAvailable(string isNodeAvailable) { DARABONBA_PTR_SET_VALUE(isNodeAvailable_, isNodeAvailable) };


    // paramRelyRule Field Functions 
    bool hasParamRelyRule() const { return this->paramRelyRule_ != nullptr;};
    void deleteParamRelyRule() { this->paramRelyRule_ = nullptr;};
    inline string paramRelyRule() const { DARABONBA_PTR_GET_DEFAULT(paramRelyRule_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setParamRelyRule(string paramRelyRule) { DARABONBA_PTR_SET_VALUE(paramRelyRule_, paramRelyRule) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline DescribeParameterTemplatesResponseBodyParametersTemplateRecord& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The valid values of the parameter.
    std::shared_ptr<string> checkingCode_ = nullptr;
    // Indicates whether the parameter setting can be modified. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> forceModify_ = nullptr;
    // Indicates whether a cluster restart is required to make the parameter modification take effect. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> forceRestart_ = nullptr;
    // Indicates whether the parameter is a global parameter. Valid values:
    // 
    // *   **0**: yes. The modified parameter value is synchronized to other nodes by default.
    // *   **1**: no. You can customize the nodes to which the modified parameter value can be synchronized.
    std::shared_ptr<string> isNodeAvailable_ = nullptr;
    // The parameter dependencies.
    std::shared_ptr<string> paramRelyRule_ = nullptr;
    // The description of the parameter.
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The default value of the parameter.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
