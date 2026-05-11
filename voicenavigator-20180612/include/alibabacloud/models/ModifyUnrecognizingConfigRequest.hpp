// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUNRECOGNIZINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUNRECOGNIZINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ModifyUnrecognizingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUnrecognizingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FinalAction, finalAction_);
      DARABONBA_PTR_TO_JSON(FinalActionParams, finalActionParams_);
      DARABONBA_PTR_TO_JSON(FinalPrompt, finalPrompt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUnrecognizingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FinalAction, finalAction_);
      DARABONBA_PTR_FROM_JSON(FinalActionParams, finalActionParams_);
      DARABONBA_PTR_FROM_JSON(FinalPrompt, finalPrompt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ModifyUnrecognizingConfigRequest() = default ;
    ModifyUnrecognizingConfigRequest(const ModifyUnrecognizingConfigRequest &) = default ;
    ModifyUnrecognizingConfigRequest(ModifyUnrecognizingConfigRequest &&) = default ;
    ModifyUnrecognizingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUnrecognizingConfigRequest() = default ;
    ModifyUnrecognizingConfigRequest& operator=(const ModifyUnrecognizingConfigRequest &) = default ;
    ModifyUnrecognizingConfigRequest& operator=(ModifyUnrecognizingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finalAction_ == nullptr
        && this->finalActionParams_ == nullptr && this->finalPrompt_ == nullptr && this->instanceId_ == nullptr && this->prompt_ == nullptr && this->threshold_ == nullptr; };
    // finalAction Field Functions 
    bool hasFinalAction() const { return this->finalAction_ != nullptr;};
    void deleteFinalAction() { this->finalAction_ = nullptr;};
    inline string getFinalAction() const { DARABONBA_PTR_GET_DEFAULT(finalAction_, "") };
    inline ModifyUnrecognizingConfigRequest& setFinalAction(string finalAction) { DARABONBA_PTR_SET_VALUE(finalAction_, finalAction) };


    // finalActionParams Field Functions 
    bool hasFinalActionParams() const { return this->finalActionParams_ != nullptr;};
    void deleteFinalActionParams() { this->finalActionParams_ = nullptr;};
    inline string getFinalActionParams() const { DARABONBA_PTR_GET_DEFAULT(finalActionParams_, "") };
    inline ModifyUnrecognizingConfigRequest& setFinalActionParams(string finalActionParams) { DARABONBA_PTR_SET_VALUE(finalActionParams_, finalActionParams) };


    // finalPrompt Field Functions 
    bool hasFinalPrompt() const { return this->finalPrompt_ != nullptr;};
    void deleteFinalPrompt() { this->finalPrompt_ = nullptr;};
    inline string getFinalPrompt() const { DARABONBA_PTR_GET_DEFAULT(finalPrompt_, "") };
    inline ModifyUnrecognizingConfigRequest& setFinalPrompt(string finalPrompt) { DARABONBA_PTR_SET_VALUE(finalPrompt_, finalPrompt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUnrecognizingConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ModifyUnrecognizingConfigRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline ModifyUnrecognizingConfigRequest& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // This parameter is required.
    shared_ptr<string> finalAction_ {};
    shared_ptr<string> finalActionParams_ {};
    // This parameter is required.
    shared_ptr<string> finalPrompt_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    // This parameter is required.
    shared_ptr<int32_t> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
