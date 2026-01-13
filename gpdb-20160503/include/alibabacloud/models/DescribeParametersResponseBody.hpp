// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentValue, currentValue_);
        DARABONBA_PTR_TO_JSON(ForceRestartInstance, forceRestartInstance_);
        DARABONBA_PTR_TO_JSON(IsChangeableConfig, isChangeableConfig_);
        DARABONBA_PTR_TO_JSON(OptionalRange, optionalRange_);
        DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentValue, currentValue_);
        DARABONBA_PTR_FROM_JSON(ForceRestartInstance, forceRestartInstance_);
        DARABONBA_PTR_FROM_JSON(IsChangeableConfig, isChangeableConfig_);
        DARABONBA_PTR_FROM_JSON(OptionalRange, optionalRange_);
        DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
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
      virtual bool empty() const override { return this->currentValue_ == nullptr
        && this->forceRestartInstance_ == nullptr && this->isChangeableConfig_ == nullptr && this->optionalRange_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr
        && this->parameterValue_ == nullptr; };
      // currentValue Field Functions 
      bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
      void deleteCurrentValue() { this->currentValue_ = nullptr;};
      inline string getCurrentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, "") };
      inline Parameters& setCurrentValue(string currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


      // forceRestartInstance Field Functions 
      bool hasForceRestartInstance() const { return this->forceRestartInstance_ != nullptr;};
      void deleteForceRestartInstance() { this->forceRestartInstance_ = nullptr;};
      inline string getForceRestartInstance() const { DARABONBA_PTR_GET_DEFAULT(forceRestartInstance_, "") };
      inline Parameters& setForceRestartInstance(string forceRestartInstance) { DARABONBA_PTR_SET_VALUE(forceRestartInstance_, forceRestartInstance) };


      // isChangeableConfig Field Functions 
      bool hasIsChangeableConfig() const { return this->isChangeableConfig_ != nullptr;};
      void deleteIsChangeableConfig() { this->isChangeableConfig_ = nullptr;};
      inline string getIsChangeableConfig() const { DARABONBA_PTR_GET_DEFAULT(isChangeableConfig_, "") };
      inline Parameters& setIsChangeableConfig(string isChangeableConfig) { DARABONBA_PTR_SET_VALUE(isChangeableConfig_, isChangeableConfig) };


      // optionalRange Field Functions 
      bool hasOptionalRange() const { return this->optionalRange_ != nullptr;};
      void deleteOptionalRange() { this->optionalRange_ = nullptr;};
      inline string getOptionalRange() const { DARABONBA_PTR_GET_DEFAULT(optionalRange_, "") };
      inline Parameters& setOptionalRange(string optionalRange) { DARABONBA_PTR_SET_VALUE(optionalRange_, optionalRange) };


      // parameterDescription Field Functions 
      bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
      void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
      inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
      inline Parameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline Parameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The current value of the configuration parameter.
      shared_ptr<string> currentValue_ {};
      // Indicates whether a restart is required for parameter modifications to take effect. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> forceRestartInstance_ {};
      // Indicates whether the configuration parameter can be modified. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> isChangeableConfig_ {};
      // The valid values of the configuration parameter.
      shared_ptr<string> optionalRange_ {};
      // The description of the configuration parameter.
      shared_ptr<string> parameterDescription_ {};
      // The name of the configuration parameter.
      shared_ptr<string> parameterName_ {};
      // The default value of the configuration parameter.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->parameters_ == nullptr
        && this->requestId_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<DescribeParametersResponseBody::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DescribeParametersResponseBody::Parameters>) };
    inline vector<DescribeParametersResponseBody::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DescribeParametersResponseBody::Parameters>) };
    inline DescribeParametersResponseBody& setParameters(const vector<DescribeParametersResponseBody::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeParametersResponseBody& setParameters(vector<DescribeParametersResponseBody::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried configuration parameters.
    shared_ptr<vector<DescribeParametersResponseBody::Parameters>> parameters_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
