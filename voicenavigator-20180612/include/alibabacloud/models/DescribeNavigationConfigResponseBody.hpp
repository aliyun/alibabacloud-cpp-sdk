// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAVIGATIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAVIGATIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DescribeNavigationConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNavigationConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GreetingConfig, greetingConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SilenceTimeoutConfig, silenceTimeoutConfig_);
      DARABONBA_PTR_TO_JSON(UnrecognizingConfig, unrecognizingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNavigationConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GreetingConfig, greetingConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SilenceTimeoutConfig, silenceTimeoutConfig_);
      DARABONBA_PTR_FROM_JSON(UnrecognizingConfig, unrecognizingConfig_);
    };
    DescribeNavigationConfigResponseBody() = default ;
    DescribeNavigationConfigResponseBody(const DescribeNavigationConfigResponseBody &) = default ;
    DescribeNavigationConfigResponseBody(DescribeNavigationConfigResponseBody &&) = default ;
    DescribeNavigationConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNavigationConfigResponseBody() = default ;
    DescribeNavigationConfigResponseBody& operator=(const DescribeNavigationConfigResponseBody &) = default ;
    DescribeNavigationConfigResponseBody& operator=(DescribeNavigationConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnrecognizingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnrecognizingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(FinalAction, finalAction_);
        DARABONBA_PTR_TO_JSON(FinalActionParams, finalActionParams_);
        DARABONBA_PTR_TO_JSON(FinalPrompt, finalPrompt_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, UnrecognizingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(FinalAction, finalAction_);
        DARABONBA_PTR_FROM_JSON(FinalActionParams, finalActionParams_);
        DARABONBA_PTR_FROM_JSON(FinalPrompt, finalPrompt_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      };
      UnrecognizingConfig() = default ;
      UnrecognizingConfig(const UnrecognizingConfig &) = default ;
      UnrecognizingConfig(UnrecognizingConfig &&) = default ;
      UnrecognizingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnrecognizingConfig() = default ;
      UnrecognizingConfig& operator=(const UnrecognizingConfig &) = default ;
      UnrecognizingConfig& operator=(UnrecognizingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->finalAction_ == nullptr
        && this->finalActionParams_ == nullptr && this->finalPrompt_ == nullptr && this->prompt_ == nullptr && this->threshold_ == nullptr; };
      // finalAction Field Functions 
      bool hasFinalAction() const { return this->finalAction_ != nullptr;};
      void deleteFinalAction() { this->finalAction_ = nullptr;};
      inline string getFinalAction() const { DARABONBA_PTR_GET_DEFAULT(finalAction_, "") };
      inline UnrecognizingConfig& setFinalAction(string finalAction) { DARABONBA_PTR_SET_VALUE(finalAction_, finalAction) };


      // finalActionParams Field Functions 
      bool hasFinalActionParams() const { return this->finalActionParams_ != nullptr;};
      void deleteFinalActionParams() { this->finalActionParams_ = nullptr;};
      inline string getFinalActionParams() const { DARABONBA_PTR_GET_DEFAULT(finalActionParams_, "") };
      inline UnrecognizingConfig& setFinalActionParams(string finalActionParams) { DARABONBA_PTR_SET_VALUE(finalActionParams_, finalActionParams) };


      // finalPrompt Field Functions 
      bool hasFinalPrompt() const { return this->finalPrompt_ != nullptr;};
      void deleteFinalPrompt() { this->finalPrompt_ = nullptr;};
      inline string getFinalPrompt() const { DARABONBA_PTR_GET_DEFAULT(finalPrompt_, "") };
      inline UnrecognizingConfig& setFinalPrompt(string finalPrompt) { DARABONBA_PTR_SET_VALUE(finalPrompt_, finalPrompt) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline UnrecognizingConfig& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
      inline UnrecognizingConfig& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      shared_ptr<string> finalAction_ {};
      shared_ptr<string> finalActionParams_ {};
      shared_ptr<string> finalPrompt_ {};
      shared_ptr<string> prompt_ {};
      shared_ptr<int32_t> threshold_ {};
    };

    class SilenceTimeoutConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SilenceTimeoutConfig& obj) { 
        DARABONBA_PTR_TO_JSON(FinalAction, finalAction_);
        DARABONBA_PTR_TO_JSON(FinalActionParams, finalActionParams_);
        DARABONBA_PTR_TO_JSON(FinalPrompt, finalPrompt_);
        DARABONBA_PTR_TO_JSON(IntentTrigger, intentTrigger_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      };
      friend void from_json(const Darabonba::Json& j, SilenceTimeoutConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(FinalAction, finalAction_);
        DARABONBA_PTR_FROM_JSON(FinalActionParams, finalActionParams_);
        DARABONBA_PTR_FROM_JSON(FinalPrompt, finalPrompt_);
        DARABONBA_PTR_FROM_JSON(IntentTrigger, intentTrigger_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      };
      SilenceTimeoutConfig() = default ;
      SilenceTimeoutConfig(const SilenceTimeoutConfig &) = default ;
      SilenceTimeoutConfig(SilenceTimeoutConfig &&) = default ;
      SilenceTimeoutConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SilenceTimeoutConfig() = default ;
      SilenceTimeoutConfig& operator=(const SilenceTimeoutConfig &) = default ;
      SilenceTimeoutConfig& operator=(SilenceTimeoutConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->finalAction_ == nullptr
        && this->finalActionParams_ == nullptr && this->finalPrompt_ == nullptr && this->intentTrigger_ == nullptr && this->prompt_ == nullptr && this->sourceType_ == nullptr
        && this->threshold_ == nullptr && this->timeout_ == nullptr; };
      // finalAction Field Functions 
      bool hasFinalAction() const { return this->finalAction_ != nullptr;};
      void deleteFinalAction() { this->finalAction_ = nullptr;};
      inline string getFinalAction() const { DARABONBA_PTR_GET_DEFAULT(finalAction_, "") };
      inline SilenceTimeoutConfig& setFinalAction(string finalAction) { DARABONBA_PTR_SET_VALUE(finalAction_, finalAction) };


      // finalActionParams Field Functions 
      bool hasFinalActionParams() const { return this->finalActionParams_ != nullptr;};
      void deleteFinalActionParams() { this->finalActionParams_ = nullptr;};
      inline string getFinalActionParams() const { DARABONBA_PTR_GET_DEFAULT(finalActionParams_, "") };
      inline SilenceTimeoutConfig& setFinalActionParams(string finalActionParams) { DARABONBA_PTR_SET_VALUE(finalActionParams_, finalActionParams) };


      // finalPrompt Field Functions 
      bool hasFinalPrompt() const { return this->finalPrompt_ != nullptr;};
      void deleteFinalPrompt() { this->finalPrompt_ = nullptr;};
      inline string getFinalPrompt() const { DARABONBA_PTR_GET_DEFAULT(finalPrompt_, "") };
      inline SilenceTimeoutConfig& setFinalPrompt(string finalPrompt) { DARABONBA_PTR_SET_VALUE(finalPrompt_, finalPrompt) };


      // intentTrigger Field Functions 
      bool hasIntentTrigger() const { return this->intentTrigger_ != nullptr;};
      void deleteIntentTrigger() { this->intentTrigger_ = nullptr;};
      inline string getIntentTrigger() const { DARABONBA_PTR_GET_DEFAULT(intentTrigger_, "") };
      inline SilenceTimeoutConfig& setIntentTrigger(string intentTrigger) { DARABONBA_PTR_SET_VALUE(intentTrigger_, intentTrigger) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline SilenceTimeoutConfig& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline SilenceTimeoutConfig& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
      inline SilenceTimeoutConfig& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
      inline SilenceTimeoutConfig& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    protected:
      shared_ptr<string> finalAction_ {};
      shared_ptr<string> finalActionParams_ {};
      shared_ptr<string> finalPrompt_ {};
      // ""
      shared_ptr<string> intentTrigger_ {};
      shared_ptr<string> prompt_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<int32_t> threshold_ {};
      shared_ptr<int64_t> timeout_ {};
    };

    class GreetingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GreetingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(GreetingWords, greetingWords_);
        DARABONBA_PTR_TO_JSON(IntentTrigger, intentTrigger_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, GreetingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(GreetingWords, greetingWords_);
        DARABONBA_PTR_FROM_JSON(IntentTrigger, intentTrigger_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      };
      GreetingConfig() = default ;
      GreetingConfig(const GreetingConfig &) = default ;
      GreetingConfig(GreetingConfig &&) = default ;
      GreetingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GreetingConfig() = default ;
      GreetingConfig& operator=(const GreetingConfig &) = default ;
      GreetingConfig& operator=(GreetingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->greetingWords_ == nullptr
        && this->intentTrigger_ == nullptr && this->sourceType_ == nullptr; };
      // greetingWords Field Functions 
      bool hasGreetingWords() const { return this->greetingWords_ != nullptr;};
      void deleteGreetingWords() { this->greetingWords_ = nullptr;};
      inline string getGreetingWords() const { DARABONBA_PTR_GET_DEFAULT(greetingWords_, "") };
      inline GreetingConfig& setGreetingWords(string greetingWords) { DARABONBA_PTR_SET_VALUE(greetingWords_, greetingWords) };


      // intentTrigger Field Functions 
      bool hasIntentTrigger() const { return this->intentTrigger_ != nullptr;};
      void deleteIntentTrigger() { this->intentTrigger_ = nullptr;};
      inline string getIntentTrigger() const { DARABONBA_PTR_GET_DEFAULT(intentTrigger_, "") };
      inline GreetingConfig& setIntentTrigger(string intentTrigger) { DARABONBA_PTR_SET_VALUE(intentTrigger_, intentTrigger) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline GreetingConfig& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      shared_ptr<string> greetingWords_ {};
      shared_ptr<string> intentTrigger_ {};
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->greetingConfig_ == nullptr
        && this->requestId_ == nullptr && this->silenceTimeoutConfig_ == nullptr && this->unrecognizingConfig_ == nullptr; };
    // greetingConfig Field Functions 
    bool hasGreetingConfig() const { return this->greetingConfig_ != nullptr;};
    void deleteGreetingConfig() { this->greetingConfig_ = nullptr;};
    inline const DescribeNavigationConfigResponseBody::GreetingConfig & getGreetingConfig() const { DARABONBA_PTR_GET_CONST(greetingConfig_, DescribeNavigationConfigResponseBody::GreetingConfig) };
    inline DescribeNavigationConfigResponseBody::GreetingConfig getGreetingConfig() { DARABONBA_PTR_GET(greetingConfig_, DescribeNavigationConfigResponseBody::GreetingConfig) };
    inline DescribeNavigationConfigResponseBody& setGreetingConfig(const DescribeNavigationConfigResponseBody::GreetingConfig & greetingConfig) { DARABONBA_PTR_SET_VALUE(greetingConfig_, greetingConfig) };
    inline DescribeNavigationConfigResponseBody& setGreetingConfig(DescribeNavigationConfigResponseBody::GreetingConfig && greetingConfig) { DARABONBA_PTR_SET_RVALUE(greetingConfig_, greetingConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNavigationConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // silenceTimeoutConfig Field Functions 
    bool hasSilenceTimeoutConfig() const { return this->silenceTimeoutConfig_ != nullptr;};
    void deleteSilenceTimeoutConfig() { this->silenceTimeoutConfig_ = nullptr;};
    inline const DescribeNavigationConfigResponseBody::SilenceTimeoutConfig & getSilenceTimeoutConfig() const { DARABONBA_PTR_GET_CONST(silenceTimeoutConfig_, DescribeNavigationConfigResponseBody::SilenceTimeoutConfig) };
    inline DescribeNavigationConfigResponseBody::SilenceTimeoutConfig getSilenceTimeoutConfig() { DARABONBA_PTR_GET(silenceTimeoutConfig_, DescribeNavigationConfigResponseBody::SilenceTimeoutConfig) };
    inline DescribeNavigationConfigResponseBody& setSilenceTimeoutConfig(const DescribeNavigationConfigResponseBody::SilenceTimeoutConfig & silenceTimeoutConfig) { DARABONBA_PTR_SET_VALUE(silenceTimeoutConfig_, silenceTimeoutConfig) };
    inline DescribeNavigationConfigResponseBody& setSilenceTimeoutConfig(DescribeNavigationConfigResponseBody::SilenceTimeoutConfig && silenceTimeoutConfig) { DARABONBA_PTR_SET_RVALUE(silenceTimeoutConfig_, silenceTimeoutConfig) };


    // unrecognizingConfig Field Functions 
    bool hasUnrecognizingConfig() const { return this->unrecognizingConfig_ != nullptr;};
    void deleteUnrecognizingConfig() { this->unrecognizingConfig_ = nullptr;};
    inline const DescribeNavigationConfigResponseBody::UnrecognizingConfig & getUnrecognizingConfig() const { DARABONBA_PTR_GET_CONST(unrecognizingConfig_, DescribeNavigationConfigResponseBody::UnrecognizingConfig) };
    inline DescribeNavigationConfigResponseBody::UnrecognizingConfig getUnrecognizingConfig() { DARABONBA_PTR_GET(unrecognizingConfig_, DescribeNavigationConfigResponseBody::UnrecognizingConfig) };
    inline DescribeNavigationConfigResponseBody& setUnrecognizingConfig(const DescribeNavigationConfigResponseBody::UnrecognizingConfig & unrecognizingConfig) { DARABONBA_PTR_SET_VALUE(unrecognizingConfig_, unrecognizingConfig) };
    inline DescribeNavigationConfigResponseBody& setUnrecognizingConfig(DescribeNavigationConfigResponseBody::UnrecognizingConfig && unrecognizingConfig) { DARABONBA_PTR_SET_RVALUE(unrecognizingConfig_, unrecognizingConfig) };


  protected:
    shared_ptr<DescribeNavigationConfigResponseBody::GreetingConfig> greetingConfig_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeNavigationConfigResponseBody::SilenceTimeoutConfig> silenceTimeoutConfig_ {};
    shared_ptr<DescribeNavigationConfigResponseBody::UnrecognizingConfig> unrecognizingConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
