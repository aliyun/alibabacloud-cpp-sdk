// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUECREATESTACKREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CONTINUECREATESTACKREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ContinueCreateStackRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueCreateStackRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueCreateStackRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    ContinueCreateStackRequestParameters() = default ;
    ContinueCreateStackRequestParameters(const ContinueCreateStackRequestParameters &) = default ;
    ContinueCreateStackRequestParameters(ContinueCreateStackRequestParameters &&) = default ;
    ContinueCreateStackRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueCreateStackRequestParameters() = default ;
    ContinueCreateStackRequestParameters& operator=(const ContinueCreateStackRequestParameters &) = default ;
    ContinueCreateStackRequestParameters& operator=(ContinueCreateStackRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterKey_ != nullptr
        && this->parameterValue_ != nullptr; };
    // parameterKey Field Functions 
    bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
    void deleteParameterKey() { this->parameterKey_ = nullptr;};
    inline string parameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
    inline ContinueCreateStackRequestParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline ContinueCreateStackRequestParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The name of template parameter N that you want to use to override a specific parameter. If you do not specify the name and value of a template parameter, ROS uses the name and value specified in the previous operation that was performed to create the stack. Maximum value of N: 200.
    // 
    // > This parameter takes effect only when Mode is set to Recreate.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The value of template parameter N that you want to use to override a specific parameter. Maximum value of N: 200.
    // 
    // For ROS stacks, the template parameters that you use to override specific parameters are subject to the following limits:
    // 
    // *   You cannot change the condition values in the Conditions section of a template from true to false or from false to true.
    // *   The template parameters can be referenced only by resources that ROS continues to create.
    // 
    // > This parameter takes effect only when Mode is set to Recreate.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
