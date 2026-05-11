// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSILENCETIMEOUTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSILENCETIMEOUTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ModifySilenceTimeoutConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySilenceTimeoutConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FinalAction, finalAction_);
      DARABONBA_PTR_TO_JSON(FinalActionParams, finalActionParams_);
      DARABONBA_PTR_TO_JSON(FinalPrompt, finalPrompt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentTrigger, intentTrigger_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySilenceTimeoutConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FinalAction, finalAction_);
      DARABONBA_PTR_FROM_JSON(FinalActionParams, finalActionParams_);
      DARABONBA_PTR_FROM_JSON(FinalPrompt, finalPrompt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentTrigger, intentTrigger_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    ModifySilenceTimeoutConfigRequest() = default ;
    ModifySilenceTimeoutConfigRequest(const ModifySilenceTimeoutConfigRequest &) = default ;
    ModifySilenceTimeoutConfigRequest(ModifySilenceTimeoutConfigRequest &&) = default ;
    ModifySilenceTimeoutConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySilenceTimeoutConfigRequest() = default ;
    ModifySilenceTimeoutConfigRequest& operator=(const ModifySilenceTimeoutConfigRequest &) = default ;
    ModifySilenceTimeoutConfigRequest& operator=(ModifySilenceTimeoutConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finalAction_ == nullptr
        && this->finalActionParams_ == nullptr && this->finalPrompt_ == nullptr && this->instanceId_ == nullptr && this->intentTrigger_ == nullptr && this->prompt_ == nullptr
        && this->sourceType_ == nullptr && this->threshold_ == nullptr && this->timeout_ == nullptr; };
    // finalAction Field Functions 
    bool hasFinalAction() const { return this->finalAction_ != nullptr;};
    void deleteFinalAction() { this->finalAction_ = nullptr;};
    inline string getFinalAction() const { DARABONBA_PTR_GET_DEFAULT(finalAction_, "") };
    inline ModifySilenceTimeoutConfigRequest& setFinalAction(string finalAction) { DARABONBA_PTR_SET_VALUE(finalAction_, finalAction) };


    // finalActionParams Field Functions 
    bool hasFinalActionParams() const { return this->finalActionParams_ != nullptr;};
    void deleteFinalActionParams() { this->finalActionParams_ = nullptr;};
    inline string getFinalActionParams() const { DARABONBA_PTR_GET_DEFAULT(finalActionParams_, "") };
    inline ModifySilenceTimeoutConfigRequest& setFinalActionParams(string finalActionParams) { DARABONBA_PTR_SET_VALUE(finalActionParams_, finalActionParams) };


    // finalPrompt Field Functions 
    bool hasFinalPrompt() const { return this->finalPrompt_ != nullptr;};
    void deleteFinalPrompt() { this->finalPrompt_ = nullptr;};
    inline string getFinalPrompt() const { DARABONBA_PTR_GET_DEFAULT(finalPrompt_, "") };
    inline ModifySilenceTimeoutConfigRequest& setFinalPrompt(string finalPrompt) { DARABONBA_PTR_SET_VALUE(finalPrompt_, finalPrompt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifySilenceTimeoutConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentTrigger Field Functions 
    bool hasIntentTrigger() const { return this->intentTrigger_ != nullptr;};
    void deleteIntentTrigger() { this->intentTrigger_ = nullptr;};
    inline string getIntentTrigger() const { DARABONBA_PTR_GET_DEFAULT(intentTrigger_, "") };
    inline ModifySilenceTimeoutConfigRequest& setIntentTrigger(string intentTrigger) { DARABONBA_PTR_SET_VALUE(intentTrigger_, intentTrigger) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ModifySilenceTimeoutConfigRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModifySilenceTimeoutConfigRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline ModifySilenceTimeoutConfigRequest& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline ModifySilenceTimeoutConfigRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // This parameter is required.
    shared_ptr<string> finalAction_ {};
    shared_ptr<string> finalActionParams_ {};
    // This parameter is required.
    shared_ptr<string> finalPrompt_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> intentTrigger_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // This parameter is required.
    shared_ptr<int32_t> threshold_ {};
    // This parameter is required.
    shared_ptr<int64_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
