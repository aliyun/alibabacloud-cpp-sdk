// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYAPPLICATIONPROMPTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYAPPLICATIONPROMPTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ApplyApplicationPromptsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyApplicationPromptsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(DisabledPromptIds, disabledPromptIdsShrink_);
      DARABONBA_PTR_TO_JSON(EnabledPromptIds, enabledPromptIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyApplicationPromptsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(DisabledPromptIds, disabledPromptIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EnabledPromptIds, enabledPromptIdsShrink_);
    };
    ApplyApplicationPromptsShrinkRequest() = default ;
    ApplyApplicationPromptsShrinkRequest(const ApplyApplicationPromptsShrinkRequest &) = default ;
    ApplyApplicationPromptsShrinkRequest(ApplyApplicationPromptsShrinkRequest &&) = default ;
    ApplyApplicationPromptsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyApplicationPromptsShrinkRequest() = default ;
    ApplyApplicationPromptsShrinkRequest& operator=(const ApplyApplicationPromptsShrinkRequest &) = default ;
    ApplyApplicationPromptsShrinkRequest& operator=(ApplyApplicationPromptsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->disabledPromptIdsShrink_ == nullptr && this->enabledPromptIdsShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ApplyApplicationPromptsShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // disabledPromptIdsShrink Field Functions 
    bool hasDisabledPromptIdsShrink() const { return this->disabledPromptIdsShrink_ != nullptr;};
    void deleteDisabledPromptIdsShrink() { this->disabledPromptIdsShrink_ = nullptr;};
    inline string getDisabledPromptIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(disabledPromptIdsShrink_, "") };
    inline ApplyApplicationPromptsShrinkRequest& setDisabledPromptIdsShrink(string disabledPromptIdsShrink) { DARABONBA_PTR_SET_VALUE(disabledPromptIdsShrink_, disabledPromptIdsShrink) };


    // enabledPromptIdsShrink Field Functions 
    bool hasEnabledPromptIdsShrink() const { return this->enabledPromptIdsShrink_ != nullptr;};
    void deleteEnabledPromptIdsShrink() { this->enabledPromptIdsShrink_ = nullptr;};
    inline string getEnabledPromptIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(enabledPromptIdsShrink_, "") };
    inline ApplyApplicationPromptsShrinkRequest& setEnabledPromptIdsShrink(string enabledPromptIdsShrink) { DARABONBA_PTR_SET_VALUE(enabledPromptIdsShrink_, enabledPromptIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> disabledPromptIdsShrink_ {};
    shared_ptr<string> enabledPromptIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
