// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUESTPREFERENCEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUESTPREFERENCEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateTemplateScratchRequestPreferenceParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateScratchRequestPreferenceParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateScratchRequestPreferenceParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    CreateTemplateScratchRequestPreferenceParameters() = default ;
    CreateTemplateScratchRequestPreferenceParameters(const CreateTemplateScratchRequestPreferenceParameters &) = default ;
    CreateTemplateScratchRequestPreferenceParameters(CreateTemplateScratchRequestPreferenceParameters &&) = default ;
    CreateTemplateScratchRequestPreferenceParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateScratchRequestPreferenceParameters() = default ;
    CreateTemplateScratchRequestPreferenceParameters& operator=(const CreateTemplateScratchRequestPreferenceParameters &) = default ;
    CreateTemplateScratchRequestPreferenceParameters& operator=(CreateTemplateScratchRequestPreferenceParameters &&) = default ;
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
    inline CreateTemplateScratchRequestPreferenceParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline CreateTemplateScratchRequestPreferenceParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The parameter name.
    // 
    // For more information about the valid values of ParameterKey, see the "**Additional information about request parameters**" section of this topic.
    // 
    // > 
    // 
    // *   PreferenceParameters is optional. If you specify PreferenceParameters, you must specify ParameterKey and ParameterValue.
    // 
    // *   You must set ParameterKey to DeletionPolicy when TemplateScratchType is set to ResourceImport.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The parameter value. The value is an assignment to the parameter key.
    // 
    // For more information about the valid values of ParameterValue, see the "**Additional information about request parameters**" section of this topic.
    // 
    // >  PreferenceParameters is optional. If you specify PreferenceParameters, you must specify ParameterKey and ParameterValue.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
