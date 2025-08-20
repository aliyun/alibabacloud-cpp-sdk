// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKRESPONSEBODYDRYRUNRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKRESPONSEBODYDRYRUNRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackResponseBodyDryRunResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackResponseBodyDryRunResult& obj) { 
      DARABONBA_PTR_TO_JSON(ParametersAllowedToBeModified, parametersAllowedToBeModified_);
      DARABONBA_PTR_TO_JSON(ParametersCauseInterruptionIfModified, parametersCauseInterruptionIfModified_);
      DARABONBA_PTR_TO_JSON(ParametersCauseReplacementIfModified, parametersCauseReplacementIfModified_);
      DARABONBA_PTR_TO_JSON(ParametersConditionallyAllowedToBeModified, parametersConditionallyAllowedToBeModified_);
      DARABONBA_PTR_TO_JSON(ParametersConditionallyCauseInterruptionIfModified, parametersConditionallyCauseInterruptionIfModified_);
      DARABONBA_PTR_TO_JSON(ParametersConditionallyCauseReplacementIfModified, parametersConditionallyCauseReplacementIfModified_);
      DARABONBA_PTR_TO_JSON(ParametersNotAllowedToBeModified, parametersNotAllowedToBeModified_);
      DARABONBA_PTR_TO_JSON(ParametersUncertainlyAllowedToBeModified, parametersUncertainlyAllowedToBeModified_);
      DARABONBA_PTR_TO_JSON(ParametersUncertainlyCauseInterruptionIfModified, parametersUncertainlyCauseInterruptionIfModified_);
      DARABONBA_PTR_TO_JSON(ParametersUncertainlyCauseReplacementIfModified, parametersUncertainlyCauseReplacementIfModified_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackResponseBodyDryRunResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ParametersAllowedToBeModified, parametersAllowedToBeModified_);
      DARABONBA_PTR_FROM_JSON(ParametersCauseInterruptionIfModified, parametersCauseInterruptionIfModified_);
      DARABONBA_PTR_FROM_JSON(ParametersCauseReplacementIfModified, parametersCauseReplacementIfModified_);
      DARABONBA_PTR_FROM_JSON(ParametersConditionallyAllowedToBeModified, parametersConditionallyAllowedToBeModified_);
      DARABONBA_PTR_FROM_JSON(ParametersConditionallyCauseInterruptionIfModified, parametersConditionallyCauseInterruptionIfModified_);
      DARABONBA_PTR_FROM_JSON(ParametersConditionallyCauseReplacementIfModified, parametersConditionallyCauseReplacementIfModified_);
      DARABONBA_PTR_FROM_JSON(ParametersNotAllowedToBeModified, parametersNotAllowedToBeModified_);
      DARABONBA_PTR_FROM_JSON(ParametersUncertainlyAllowedToBeModified, parametersUncertainlyAllowedToBeModified_);
      DARABONBA_PTR_FROM_JSON(ParametersUncertainlyCauseInterruptionIfModified, parametersUncertainlyCauseInterruptionIfModified_);
      DARABONBA_PTR_FROM_JSON(ParametersUncertainlyCauseReplacementIfModified, parametersUncertainlyCauseReplacementIfModified_);
    };
    UpdateStackResponseBodyDryRunResult() = default ;
    UpdateStackResponseBodyDryRunResult(const UpdateStackResponseBodyDryRunResult &) = default ;
    UpdateStackResponseBodyDryRunResult(UpdateStackResponseBodyDryRunResult &&) = default ;
    UpdateStackResponseBodyDryRunResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackResponseBodyDryRunResult() = default ;
    UpdateStackResponseBodyDryRunResult& operator=(const UpdateStackResponseBodyDryRunResult &) = default ;
    UpdateStackResponseBodyDryRunResult& operator=(UpdateStackResponseBodyDryRunResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parametersAllowedToBeModified_ != nullptr
        && this->parametersCauseInterruptionIfModified_ != nullptr && this->parametersCauseReplacementIfModified_ != nullptr && this->parametersConditionallyAllowedToBeModified_ != nullptr && this->parametersConditionallyCauseInterruptionIfModified_ != nullptr && this->parametersConditionallyCauseReplacementIfModified_ != nullptr
        && this->parametersNotAllowedToBeModified_ != nullptr && this->parametersUncertainlyAllowedToBeModified_ != nullptr && this->parametersUncertainlyCauseInterruptionIfModified_ != nullptr && this->parametersUncertainlyCauseReplacementIfModified_ != nullptr; };
    // parametersAllowedToBeModified Field Functions 
    bool hasParametersAllowedToBeModified() const { return this->parametersAllowedToBeModified_ != nullptr;};
    void deleteParametersAllowedToBeModified() { this->parametersAllowedToBeModified_ = nullptr;};
    inline const vector<string> & parametersAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersAllowedToBeModified_, vector<string>) };
    inline vector<string> parametersAllowedToBeModified() { DARABONBA_PTR_GET(parametersAllowedToBeModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersAllowedToBeModified(const vector<string> & parametersAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersAllowedToBeModified(vector<string> && parametersAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };


    // parametersCauseInterruptionIfModified Field Functions 
    bool hasParametersCauseInterruptionIfModified() const { return this->parametersCauseInterruptionIfModified_ != nullptr;};
    void deleteParametersCauseInterruptionIfModified() { this->parametersCauseInterruptionIfModified_ = nullptr;};
    inline const vector<string> & parametersCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersCauseInterruptionIfModified_, vector<string>) };
    inline vector<string> parametersCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersCauseInterruptionIfModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersCauseInterruptionIfModified(const vector<string> & parametersCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersCauseInterruptionIfModified_, parametersCauseInterruptionIfModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersCauseInterruptionIfModified(vector<string> && parametersCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersCauseInterruptionIfModified_, parametersCauseInterruptionIfModified) };


    // parametersCauseReplacementIfModified Field Functions 
    bool hasParametersCauseReplacementIfModified() const { return this->parametersCauseReplacementIfModified_ != nullptr;};
    void deleteParametersCauseReplacementIfModified() { this->parametersCauseReplacementIfModified_ = nullptr;};
    inline const vector<string> & parametersCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersCauseReplacementIfModified_, vector<string>) };
    inline vector<string> parametersCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersCauseReplacementIfModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersCauseReplacementIfModified(const vector<string> & parametersCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersCauseReplacementIfModified_, parametersCauseReplacementIfModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersCauseReplacementIfModified(vector<string> && parametersCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersCauseReplacementIfModified_, parametersCauseReplacementIfModified) };


    // parametersConditionallyAllowedToBeModified Field Functions 
    bool hasParametersConditionallyAllowedToBeModified() const { return this->parametersConditionallyAllowedToBeModified_ != nullptr;};
    void deleteParametersConditionallyAllowedToBeModified() { this->parametersConditionallyAllowedToBeModified_ = nullptr;};
    inline const vector<string> & parametersConditionallyAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyAllowedToBeModified_, vector<string>) };
    inline vector<string> parametersConditionallyAllowedToBeModified() { DARABONBA_PTR_GET(parametersConditionallyAllowedToBeModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersConditionallyAllowedToBeModified(const vector<string> & parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersConditionallyAllowedToBeModified(vector<string> && parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };


    // parametersConditionallyCauseInterruptionIfModified Field Functions 
    bool hasParametersConditionallyCauseInterruptionIfModified() const { return this->parametersConditionallyCauseInterruptionIfModified_ != nullptr;};
    void deleteParametersConditionallyCauseInterruptionIfModified() { this->parametersConditionallyCauseInterruptionIfModified_ = nullptr;};
    inline const vector<string> & parametersConditionallyCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyCauseInterruptionIfModified_, vector<string>) };
    inline vector<string> parametersConditionallyCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersConditionallyCauseInterruptionIfModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersConditionallyCauseInterruptionIfModified(const vector<string> & parametersConditionallyCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyCauseInterruptionIfModified_, parametersConditionallyCauseInterruptionIfModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersConditionallyCauseInterruptionIfModified(vector<string> && parametersConditionallyCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyCauseInterruptionIfModified_, parametersConditionallyCauseInterruptionIfModified) };


    // parametersConditionallyCauseReplacementIfModified Field Functions 
    bool hasParametersConditionallyCauseReplacementIfModified() const { return this->parametersConditionallyCauseReplacementIfModified_ != nullptr;};
    void deleteParametersConditionallyCauseReplacementIfModified() { this->parametersConditionallyCauseReplacementIfModified_ = nullptr;};
    inline const vector<string> & parametersConditionallyCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyCauseReplacementIfModified_, vector<string>) };
    inline vector<string> parametersConditionallyCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersConditionallyCauseReplacementIfModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersConditionallyCauseReplacementIfModified(const vector<string> & parametersConditionallyCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyCauseReplacementIfModified_, parametersConditionallyCauseReplacementIfModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersConditionallyCauseReplacementIfModified(vector<string> && parametersConditionallyCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyCauseReplacementIfModified_, parametersConditionallyCauseReplacementIfModified) };


    // parametersNotAllowedToBeModified Field Functions 
    bool hasParametersNotAllowedToBeModified() const { return this->parametersNotAllowedToBeModified_ != nullptr;};
    void deleteParametersNotAllowedToBeModified() { this->parametersNotAllowedToBeModified_ = nullptr;};
    inline const vector<string> & parametersNotAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersNotAllowedToBeModified_, vector<string>) };
    inline vector<string> parametersNotAllowedToBeModified() { DARABONBA_PTR_GET(parametersNotAllowedToBeModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersNotAllowedToBeModified(const vector<string> & parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersNotAllowedToBeModified(vector<string> && parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };


    // parametersUncertainlyAllowedToBeModified Field Functions 
    bool hasParametersUncertainlyAllowedToBeModified() const { return this->parametersUncertainlyAllowedToBeModified_ != nullptr;};
    void deleteParametersUncertainlyAllowedToBeModified() { this->parametersUncertainlyAllowedToBeModified_ = nullptr;};
    inline const vector<string> & parametersUncertainlyAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyAllowedToBeModified_, vector<string>) };
    inline vector<string> parametersUncertainlyAllowedToBeModified() { DARABONBA_PTR_GET(parametersUncertainlyAllowedToBeModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersUncertainlyAllowedToBeModified(const vector<string> & parametersUncertainlyAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyAllowedToBeModified_, parametersUncertainlyAllowedToBeModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersUncertainlyAllowedToBeModified(vector<string> && parametersUncertainlyAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyAllowedToBeModified_, parametersUncertainlyAllowedToBeModified) };


    // parametersUncertainlyCauseInterruptionIfModified Field Functions 
    bool hasParametersUncertainlyCauseInterruptionIfModified() const { return this->parametersUncertainlyCauseInterruptionIfModified_ != nullptr;};
    void deleteParametersUncertainlyCauseInterruptionIfModified() { this->parametersUncertainlyCauseInterruptionIfModified_ = nullptr;};
    inline const vector<string> & parametersUncertainlyCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyCauseInterruptionIfModified_, vector<string>) };
    inline vector<string> parametersUncertainlyCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersUncertainlyCauseInterruptionIfModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersUncertainlyCauseInterruptionIfModified(const vector<string> & parametersUncertainlyCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyCauseInterruptionIfModified_, parametersUncertainlyCauseInterruptionIfModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersUncertainlyCauseInterruptionIfModified(vector<string> && parametersUncertainlyCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyCauseInterruptionIfModified_, parametersUncertainlyCauseInterruptionIfModified) };


    // parametersUncertainlyCauseReplacementIfModified Field Functions 
    bool hasParametersUncertainlyCauseReplacementIfModified() const { return this->parametersUncertainlyCauseReplacementIfModified_ != nullptr;};
    void deleteParametersUncertainlyCauseReplacementIfModified() { this->parametersUncertainlyCauseReplacementIfModified_ = nullptr;};
    inline const vector<string> & parametersUncertainlyCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyCauseReplacementIfModified_, vector<string>) };
    inline vector<string> parametersUncertainlyCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersUncertainlyCauseReplacementIfModified_, vector<string>) };
    inline UpdateStackResponseBodyDryRunResult& setParametersUncertainlyCauseReplacementIfModified(const vector<string> & parametersUncertainlyCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyCauseReplacementIfModified_, parametersUncertainlyCauseReplacementIfModified) };
    inline UpdateStackResponseBodyDryRunResult& setParametersUncertainlyCauseReplacementIfModified(vector<string> && parametersUncertainlyCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyCauseReplacementIfModified_, parametersUncertainlyCauseReplacementIfModified) };


  protected:
    // The parameters that can be modified. If you change only values of the parameters in a stack template and use the template to update the stack, no validation errors are caused.
    std::shared_ptr<vector<string>> parametersAllowedToBeModified_ = nullptr;
    // The parameters whose changes cause service interruptions.
    // > - This parameter is supported only for a small number of resource types.
    // > - This parameter is valid only for updates on ROS stacks.
    std::shared_ptr<vector<string>> parametersCauseInterruptionIfModified_ = nullptr;
    // The parameters whose changes trigger replacement updates for resources.
    // 
    // > -  This parameter can be returned only if ReplacementOption is set to Enabled.
    // > -  This parameter is valid only for updates on ROS stacks.
    std::shared_ptr<vector<string>> parametersCauseReplacementIfModified_ = nullptr;
    // The parameters that can be modified under specific conditions. If you change only values of the parameters in a stack template and use the template to update the stack, the new values of the parameters determine whether validation errors are caused.
    std::shared_ptr<vector<string>> parametersConditionallyAllowedToBeModified_ = nullptr;
    // The parameters whose changes cause service interruptions under specific conditions.
    // 
    // > - This parameter is supported only for a small number of resource types.
    // > -  This parameter is valid only for updates on ROS stacks.
    std::shared_ptr<vector<string>> parametersConditionallyCauseInterruptionIfModified_ = nullptr;
    // The parameters whose changes trigger replacement updates for resources under specific conditions.
    // 
    // > - This parameter can be returned only if ReplacementOption is set to Enabled.
    // > - This parameter is valid only for updates on ROS stacks.
    std::shared_ptr<vector<string>> parametersConditionallyCauseReplacementIfModified_ = nullptr;
    // The parameters that cannot be modified. If you change only values of the parameters in a stack template and use the template to update the stack, validation errors are caused.
    std::shared_ptr<vector<string>> parametersNotAllowedToBeModified_ = nullptr;
    // The parameters that can be modified under uncertain conditions. If you change only values of the parameters in a stack template and use the template to update the stack, the actual running environment determines whether validation errors are caused.
    std::shared_ptr<vector<string>> parametersUncertainlyAllowedToBeModified_ = nullptr;
    // The parameters whose changes cause service interruptions under uncertain conditions.
    // 
    // > - This parameter is supported only for a small number of resource types.
    // > - This parameter is valid only for updates on ROS stacks.
    std::shared_ptr<vector<string>> parametersUncertainlyCauseInterruptionIfModified_ = nullptr;
    // The parameters whose changes trigger replacement updates for resources under uncertain conditions.
    // 
    // > - This parameter can be returned only if ReplacementOption is set to Enabled.
    // > - This parameter is valid only for updates on ROS stacks.
    std::shared_ptr<vector<string>> parametersUncertainlyCauseReplacementIfModified_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
