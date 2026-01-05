// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPARAMETERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPARAMETERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationParameterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationParameterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationParameterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
    };
    ModifyApplicationParameterShrinkRequest() = default ;
    ModifyApplicationParameterShrinkRequest(const ModifyApplicationParameterShrinkRequest &) = default ;
    ModifyApplicationParameterShrinkRequest(ModifyApplicationParameterShrinkRequest &&) = default ;
    ModifyApplicationParameterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationParameterShrinkRequest() = default ;
    ModifyApplicationParameterShrinkRequest& operator=(const ModifyApplicationParameterShrinkRequest &) = default ;
    ModifyApplicationParameterShrinkRequest& operator=(ModifyApplicationParameterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->parameterName_ == nullptr && this->parameterValue_ == nullptr && this->parametersShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationParameterShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline ModifyApplicationParameterShrinkRequest& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline ModifyApplicationParameterShrinkRequest& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string getParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline ModifyApplicationParameterShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> parameterName_ {};
    shared_ptr<string> parameterValue_ {};
    shared_ptr<string> parametersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
