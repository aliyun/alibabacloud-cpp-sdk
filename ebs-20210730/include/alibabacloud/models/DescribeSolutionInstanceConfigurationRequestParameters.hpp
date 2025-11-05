// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOLUTIONINSTANCECONFIGURATIONREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOLUTIONINSTANCECONFIGURATIONREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeSolutionInstanceConfigurationRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSolutionInstanceConfigurationRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSolutionInstanceConfigurationRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    DescribeSolutionInstanceConfigurationRequestParameters() = default ;
    DescribeSolutionInstanceConfigurationRequestParameters(const DescribeSolutionInstanceConfigurationRequestParameters &) = default ;
    DescribeSolutionInstanceConfigurationRequestParameters(DescribeSolutionInstanceConfigurationRequestParameters &&) = default ;
    DescribeSolutionInstanceConfigurationRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSolutionInstanceConfigurationRequestParameters() = default ;
    DescribeSolutionInstanceConfigurationRequestParameters& operator=(const DescribeSolutionInstanceConfigurationRequestParameters &) = default ;
    DescribeSolutionInstanceConfigurationRequestParameters& operator=(DescribeSolutionInstanceConfigurationRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterKey_ == nullptr
        && return this->parameterValue_ == nullptr; };
    // parameterKey Field Functions 
    bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
    void deleteParameterKey() { this->parameterKey_ = nullptr;};
    inline string parameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
    inline DescribeSolutionInstanceConfigurationRequestParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline DescribeSolutionInstanceConfigurationRequestParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The key of the parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The value of the parameter.
    // 
    // > The Parameters parameter is optional. If you specify Parameters, you must specify ParameterValue.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
