// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKRESPONSEBODY_HPP_
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
  class UpdateStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    UpdateStackResponseBody() = default ;
    UpdateStackResponseBody(const UpdateStackResponseBody &) = default ;
    UpdateStackResponseBody(UpdateStackResponseBody &&) = default ;
    UpdateStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackResponseBody() = default ;
    UpdateStackResponseBody& operator=(const UpdateStackResponseBody &) = default ;
    UpdateStackResponseBody& operator=(UpdateStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DryRunResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DryRunResult& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DryRunResult& obj) { 
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
      DryRunResult() = default ;
      DryRunResult(const DryRunResult &) = default ;
      DryRunResult(DryRunResult &&) = default ;
      DryRunResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DryRunResult() = default ;
      DryRunResult& operator=(const DryRunResult &) = default ;
      DryRunResult& operator=(DryRunResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parametersAllowedToBeModified_ == nullptr
        && this->parametersCauseInterruptionIfModified_ == nullptr && this->parametersCauseReplacementIfModified_ == nullptr && this->parametersConditionallyAllowedToBeModified_ == nullptr && this->parametersConditionallyCauseInterruptionIfModified_ == nullptr && this->parametersConditionallyCauseReplacementIfModified_ == nullptr
        && this->parametersNotAllowedToBeModified_ == nullptr && this->parametersUncertainlyAllowedToBeModified_ == nullptr && this->parametersUncertainlyCauseInterruptionIfModified_ == nullptr && this->parametersUncertainlyCauseReplacementIfModified_ == nullptr; };
      // parametersAllowedToBeModified Field Functions 
      bool hasParametersAllowedToBeModified() const { return this->parametersAllowedToBeModified_ != nullptr;};
      void deleteParametersAllowedToBeModified() { this->parametersAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersAllowedToBeModified() { DARABONBA_PTR_GET(parametersAllowedToBeModified_, vector<string>) };
      inline DryRunResult& setParametersAllowedToBeModified(const vector<string> & parametersAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };
      inline DryRunResult& setParametersAllowedToBeModified(vector<string> && parametersAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };


      // parametersCauseInterruptionIfModified Field Functions 
      bool hasParametersCauseInterruptionIfModified() const { return this->parametersCauseInterruptionIfModified_ != nullptr;};
      void deleteParametersCauseInterruptionIfModified() { this->parametersCauseInterruptionIfModified_ = nullptr;};
      inline const vector<string> & getParametersCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersCauseInterruptionIfModified_, vector<string>) };
      inline vector<string> getParametersCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersCauseInterruptionIfModified_, vector<string>) };
      inline DryRunResult& setParametersCauseInterruptionIfModified(const vector<string> & parametersCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersCauseInterruptionIfModified_, parametersCauseInterruptionIfModified) };
      inline DryRunResult& setParametersCauseInterruptionIfModified(vector<string> && parametersCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersCauseInterruptionIfModified_, parametersCauseInterruptionIfModified) };


      // parametersCauseReplacementIfModified Field Functions 
      bool hasParametersCauseReplacementIfModified() const { return this->parametersCauseReplacementIfModified_ != nullptr;};
      void deleteParametersCauseReplacementIfModified() { this->parametersCauseReplacementIfModified_ = nullptr;};
      inline const vector<string> & getParametersCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersCauseReplacementIfModified_, vector<string>) };
      inline vector<string> getParametersCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersCauseReplacementIfModified_, vector<string>) };
      inline DryRunResult& setParametersCauseReplacementIfModified(const vector<string> & parametersCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersCauseReplacementIfModified_, parametersCauseReplacementIfModified) };
      inline DryRunResult& setParametersCauseReplacementIfModified(vector<string> && parametersCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersCauseReplacementIfModified_, parametersCauseReplacementIfModified) };


      // parametersConditionallyAllowedToBeModified Field Functions 
      bool hasParametersConditionallyAllowedToBeModified() const { return this->parametersConditionallyAllowedToBeModified_ != nullptr;};
      void deleteParametersConditionallyAllowedToBeModified() { this->parametersConditionallyAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersConditionallyAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersConditionallyAllowedToBeModified() { DARABONBA_PTR_GET(parametersConditionallyAllowedToBeModified_, vector<string>) };
      inline DryRunResult& setParametersConditionallyAllowedToBeModified(const vector<string> & parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };
      inline DryRunResult& setParametersConditionallyAllowedToBeModified(vector<string> && parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };


      // parametersConditionallyCauseInterruptionIfModified Field Functions 
      bool hasParametersConditionallyCauseInterruptionIfModified() const { return this->parametersConditionallyCauseInterruptionIfModified_ != nullptr;};
      void deleteParametersConditionallyCauseInterruptionIfModified() { this->parametersConditionallyCauseInterruptionIfModified_ = nullptr;};
      inline const vector<string> & getParametersConditionallyCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyCauseInterruptionIfModified_, vector<string>) };
      inline vector<string> getParametersConditionallyCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersConditionallyCauseInterruptionIfModified_, vector<string>) };
      inline DryRunResult& setParametersConditionallyCauseInterruptionIfModified(const vector<string> & parametersConditionallyCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyCauseInterruptionIfModified_, parametersConditionallyCauseInterruptionIfModified) };
      inline DryRunResult& setParametersConditionallyCauseInterruptionIfModified(vector<string> && parametersConditionallyCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyCauseInterruptionIfModified_, parametersConditionallyCauseInterruptionIfModified) };


      // parametersConditionallyCauseReplacementIfModified Field Functions 
      bool hasParametersConditionallyCauseReplacementIfModified() const { return this->parametersConditionallyCauseReplacementIfModified_ != nullptr;};
      void deleteParametersConditionallyCauseReplacementIfModified() { this->parametersConditionallyCauseReplacementIfModified_ = nullptr;};
      inline const vector<string> & getParametersConditionallyCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyCauseReplacementIfModified_, vector<string>) };
      inline vector<string> getParametersConditionallyCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersConditionallyCauseReplacementIfModified_, vector<string>) };
      inline DryRunResult& setParametersConditionallyCauseReplacementIfModified(const vector<string> & parametersConditionallyCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyCauseReplacementIfModified_, parametersConditionallyCauseReplacementIfModified) };
      inline DryRunResult& setParametersConditionallyCauseReplacementIfModified(vector<string> && parametersConditionallyCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyCauseReplacementIfModified_, parametersConditionallyCauseReplacementIfModified) };


      // parametersNotAllowedToBeModified Field Functions 
      bool hasParametersNotAllowedToBeModified() const { return this->parametersNotAllowedToBeModified_ != nullptr;};
      void deleteParametersNotAllowedToBeModified() { this->parametersNotAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersNotAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersNotAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersNotAllowedToBeModified() { DARABONBA_PTR_GET(parametersNotAllowedToBeModified_, vector<string>) };
      inline DryRunResult& setParametersNotAllowedToBeModified(const vector<string> & parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };
      inline DryRunResult& setParametersNotAllowedToBeModified(vector<string> && parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };


      // parametersUncertainlyAllowedToBeModified Field Functions 
      bool hasParametersUncertainlyAllowedToBeModified() const { return this->parametersUncertainlyAllowedToBeModified_ != nullptr;};
      void deleteParametersUncertainlyAllowedToBeModified() { this->parametersUncertainlyAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersUncertainlyAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersUncertainlyAllowedToBeModified() { DARABONBA_PTR_GET(parametersUncertainlyAllowedToBeModified_, vector<string>) };
      inline DryRunResult& setParametersUncertainlyAllowedToBeModified(const vector<string> & parametersUncertainlyAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyAllowedToBeModified_, parametersUncertainlyAllowedToBeModified) };
      inline DryRunResult& setParametersUncertainlyAllowedToBeModified(vector<string> && parametersUncertainlyAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyAllowedToBeModified_, parametersUncertainlyAllowedToBeModified) };


      // parametersUncertainlyCauseInterruptionIfModified Field Functions 
      bool hasParametersUncertainlyCauseInterruptionIfModified() const { return this->parametersUncertainlyCauseInterruptionIfModified_ != nullptr;};
      void deleteParametersUncertainlyCauseInterruptionIfModified() { this->parametersUncertainlyCauseInterruptionIfModified_ = nullptr;};
      inline const vector<string> & getParametersUncertainlyCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyCauseInterruptionIfModified_, vector<string>) };
      inline vector<string> getParametersUncertainlyCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersUncertainlyCauseInterruptionIfModified_, vector<string>) };
      inline DryRunResult& setParametersUncertainlyCauseInterruptionIfModified(const vector<string> & parametersUncertainlyCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyCauseInterruptionIfModified_, parametersUncertainlyCauseInterruptionIfModified) };
      inline DryRunResult& setParametersUncertainlyCauseInterruptionIfModified(vector<string> && parametersUncertainlyCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyCauseInterruptionIfModified_, parametersUncertainlyCauseInterruptionIfModified) };


      // parametersUncertainlyCauseReplacementIfModified Field Functions 
      bool hasParametersUncertainlyCauseReplacementIfModified() const { return this->parametersUncertainlyCauseReplacementIfModified_ != nullptr;};
      void deleteParametersUncertainlyCauseReplacementIfModified() { this->parametersUncertainlyCauseReplacementIfModified_ = nullptr;};
      inline const vector<string> & getParametersUncertainlyCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyCauseReplacementIfModified_, vector<string>) };
      inline vector<string> getParametersUncertainlyCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersUncertainlyCauseReplacementIfModified_, vector<string>) };
      inline DryRunResult& setParametersUncertainlyCauseReplacementIfModified(const vector<string> & parametersUncertainlyCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyCauseReplacementIfModified_, parametersUncertainlyCauseReplacementIfModified) };
      inline DryRunResult& setParametersUncertainlyCauseReplacementIfModified(vector<string> && parametersUncertainlyCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyCauseReplacementIfModified_, parametersUncertainlyCauseReplacementIfModified) };


    protected:
      // The parameters that can be modified. If you change only values of the parameters in a stack template and use the template to update the stack, no validation errors are caused.
      shared_ptr<vector<string>> parametersAllowedToBeModified_ {};
      // The parameters whose changes cause service interruptions.
      // > - This parameter is supported only for a small number of resource types.
      // > - This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersCauseInterruptionIfModified_ {};
      // The parameters whose changes trigger replacement updates for resources.
      // 
      // > -  This parameter can be returned only if ReplacementOption is set to Enabled.
      // > -  This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersCauseReplacementIfModified_ {};
      // The parameters that can be modified under specific conditions. If you change only values of the parameters in a stack template and use the template to update the stack, the new values of the parameters determine whether validation errors are caused.
      shared_ptr<vector<string>> parametersConditionallyAllowedToBeModified_ {};
      // The parameters whose changes cause service interruptions under specific conditions.
      // 
      // > - This parameter is supported only for a small number of resource types.
      // > -  This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersConditionallyCauseInterruptionIfModified_ {};
      // The parameters whose changes trigger replacement updates for resources under specific conditions.
      // 
      // > - This parameter can be returned only if ReplacementOption is set to Enabled.
      // > - This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersConditionallyCauseReplacementIfModified_ {};
      // The parameters that cannot be modified. If you change only values of the parameters in a stack template and use the template to update the stack, validation errors are caused.
      shared_ptr<vector<string>> parametersNotAllowedToBeModified_ {};
      // The parameters that can be modified under uncertain conditions. If you change only values of the parameters in a stack template and use the template to update the stack, the actual running environment determines whether validation errors are caused.
      shared_ptr<vector<string>> parametersUncertainlyAllowedToBeModified_ {};
      // The parameters whose changes cause service interruptions under uncertain conditions.
      // 
      // > - This parameter is supported only for a small number of resource types.
      // > - This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersUncertainlyCauseInterruptionIfModified_ {};
      // The parameters whose changes trigger replacement updates for resources under uncertain conditions.
      // 
      // > - This parameter can be returned only if ReplacementOption is set to Enabled.
      // > - This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersUncertainlyCauseReplacementIfModified_ {};
    };

    virtual bool empty() const override { return this->dryRunResult_ == nullptr
        && this->requestId_ == nullptr && this->stackId_ == nullptr; };
    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline const UpdateStackResponseBody::DryRunResult & getDryRunResult() const { DARABONBA_PTR_GET_CONST(dryRunResult_, UpdateStackResponseBody::DryRunResult) };
    inline UpdateStackResponseBody::DryRunResult getDryRunResult() { DARABONBA_PTR_GET(dryRunResult_, UpdateStackResponseBody::DryRunResult) };
    inline UpdateStackResponseBody& setDryRunResult(const UpdateStackResponseBody::DryRunResult & dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };
    inline UpdateStackResponseBody& setDryRunResult(UpdateStackResponseBody::DryRunResult && dryRunResult) { DARABONBA_PTR_SET_RVALUE(dryRunResult_, dryRunResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline UpdateStackResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The dry run result. This parameter is returned only if DryRun is set to true.
    shared_ptr<UpdateStackResponseBody::DryRunResult> dryRunResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the stack.
    shared_ptr<string> stackId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
