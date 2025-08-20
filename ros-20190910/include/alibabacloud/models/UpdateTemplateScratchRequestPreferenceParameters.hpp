// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHREQUESTPREFERENCEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHREQUESTPREFERENCEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateTemplateScratchRequestPreferenceParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateScratchRequestPreferenceParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateScratchRequestPreferenceParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    UpdateTemplateScratchRequestPreferenceParameters() = default ;
    UpdateTemplateScratchRequestPreferenceParameters(const UpdateTemplateScratchRequestPreferenceParameters &) = default ;
    UpdateTemplateScratchRequestPreferenceParameters(UpdateTemplateScratchRequestPreferenceParameters &&) = default ;
    UpdateTemplateScratchRequestPreferenceParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateScratchRequestPreferenceParameters() = default ;
    UpdateTemplateScratchRequestPreferenceParameters& operator=(const UpdateTemplateScratchRequestPreferenceParameters &) = default ;
    UpdateTemplateScratchRequestPreferenceParameters& operator=(UpdateTemplateScratchRequestPreferenceParameters &&) = default ;
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
    inline UpdateTemplateScratchRequestPreferenceParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline UpdateTemplateScratchRequestPreferenceParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The parameter name.
    // 
    // For more information about the valid values of ParameterKey, see the "**Additional information about request parameters**" section of this topic.
    // 
    // >- PreferenceParameters is optional. If you specify PreferenceParameters, you must specify both ParameterKey and ParameterValue.
    // > - If you set TemplateScratchType to ResourceImport, you must set ParameterKey to DeletionPolicy.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The parameter value. The value of ParameterValue varies based on the value of ParameterKey.
    // 
    // For more information about the valid values of ParameterKey, see the "**Additional information about request parameters**" section of this topic.
    // 
    // >  PreferenceParameters is optional. If you specify PreferenceParameters, you must specify both ParameterKey and ParameterValue.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
