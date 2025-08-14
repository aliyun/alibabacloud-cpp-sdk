// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGVCRCONFIGSTILLFRAMEMOTION_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGVCRCONFIGSTILLFRAMEMOTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigVcrConfigStillFrameMotion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigVcrConfigStillFrameMotion& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackDelay, callbackDelay_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigVcrConfigStillFrameMotion& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackDelay, callbackDelay_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    AIAgentConfigVcrConfigStillFrameMotion() = default ;
    AIAgentConfigVcrConfigStillFrameMotion(const AIAgentConfigVcrConfigStillFrameMotion &) = default ;
    AIAgentConfigVcrConfigStillFrameMotion(AIAgentConfigVcrConfigStillFrameMotion &&) = default ;
    AIAgentConfigVcrConfigStillFrameMotion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigVcrConfigStillFrameMotion() = default ;
    AIAgentConfigVcrConfigStillFrameMotion& operator=(const AIAgentConfigVcrConfigStillFrameMotion &) = default ;
    AIAgentConfigVcrConfigStillFrameMotion& operator=(AIAgentConfigVcrConfigStillFrameMotion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callbackDelay_ != nullptr
        && this->enabled_ != nullptr; };
    // callbackDelay Field Functions 
    bool hasCallbackDelay() const { return this->callbackDelay_ != nullptr;};
    void deleteCallbackDelay() { this->callbackDelay_ = nullptr;};
    inline int32_t callbackDelay() const { DARABONBA_PTR_GET_DEFAULT(callbackDelay_, 0) };
    inline AIAgentConfigVcrConfigStillFrameMotion& setCallbackDelay(int32_t callbackDelay) { DARABONBA_PTR_SET_VALUE(callbackDelay_, callbackDelay) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline AIAgentConfigVcrConfigStillFrameMotion& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<int32_t> callbackDelay_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
