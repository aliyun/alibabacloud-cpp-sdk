// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECOMMENDEVENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECOMMENDEVENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateRecommendEventRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecommendEventRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(recommendRuleIdsStr, recommendRuleIdsStr_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecommendEventRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(recommendRuleIdsStr, recommendRuleIdsStr_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    CreateRecommendEventRuleRequest() = default ;
    CreateRecommendEventRuleRequest(const CreateRecommendEventRuleRequest &) = default ;
    CreateRecommendEventRuleRequest(CreateRecommendEventRuleRequest &&) = default ;
    CreateRecommendEventRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecommendEventRuleRequest() = default ;
    CreateRecommendEventRuleRequest& operator=(const CreateRecommendEventRuleRequest &) = default ;
    CreateRecommendEventRuleRequest& operator=(CreateRecommendEventRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->eventCode_ == nullptr && return this->eventName_ == nullptr && return this->recommendRuleIdsStr_ == nullptr && return this->regId_ == nullptr && return this->taskId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateRecommendEventRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline CreateRecommendEventRuleRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline CreateRecommendEventRuleRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // recommendRuleIdsStr Field Functions 
    bool hasRecommendRuleIdsStr() const { return this->recommendRuleIdsStr_ != nullptr;};
    void deleteRecommendRuleIdsStr() { this->recommendRuleIdsStr_ = nullptr;};
    inline string recommendRuleIdsStr() const { DARABONBA_PTR_GET_DEFAULT(recommendRuleIdsStr_, "") };
    inline CreateRecommendEventRuleRequest& setRecommendRuleIdsStr(string recommendRuleIdsStr) { DARABONBA_PTR_SET_VALUE(recommendRuleIdsStr_, recommendRuleIdsStr) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateRecommendEventRuleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CreateRecommendEventRuleRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Event code.
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Strategy ID.
    std::shared_ptr<string> recommendRuleIdsStr_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
