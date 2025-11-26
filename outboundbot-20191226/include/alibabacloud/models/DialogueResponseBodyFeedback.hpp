// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIALOGUERESPONSEBODYFEEDBACK_HPP_
#define ALIBABACLOUD_MODELS_DIALOGUERESPONSEBODYFEEDBACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DialogueResponseBodyFeedback : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DialogueResponseBodyFeedback& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentParams, contentParams_);
      DARABONBA_PTR_TO_JSON(Interruptible, interruptible_);
    };
    friend void from_json(const Darabonba::Json& j, DialogueResponseBodyFeedback& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentParams, contentParams_);
      DARABONBA_PTR_FROM_JSON(Interruptible, interruptible_);
    };
    DialogueResponseBodyFeedback() = default ;
    DialogueResponseBodyFeedback(const DialogueResponseBodyFeedback &) = default ;
    DialogueResponseBodyFeedback(DialogueResponseBodyFeedback &&) = default ;
    DialogueResponseBodyFeedback(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DialogueResponseBodyFeedback() = default ;
    DialogueResponseBodyFeedback& operator=(const DialogueResponseBodyFeedback &) = default ;
    DialogueResponseBodyFeedback& operator=(DialogueResponseBodyFeedback &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->actionParams_ == nullptr && return this->content_ == nullptr && return this->contentParams_ == nullptr && return this->interruptible_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DialogueResponseBodyFeedback& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionParams Field Functions 
    bool hasActionParams() const { return this->actionParams_ != nullptr;};
    void deleteActionParams() { this->actionParams_ = nullptr;};
    inline string actionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
    inline DialogueResponseBodyFeedback& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DialogueResponseBodyFeedback& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentParams Field Functions 
    bool hasContentParams() const { return this->contentParams_ != nullptr;};
    void deleteContentParams() { this->contentParams_ = nullptr;};
    inline string contentParams() const { DARABONBA_PTR_GET_DEFAULT(contentParams_, "") };
    inline DialogueResponseBodyFeedback& setContentParams(string contentParams) { DARABONBA_PTR_SET_VALUE(contentParams_, contentParams) };


    // interruptible Field Functions 
    bool hasInterruptible() const { return this->interruptible_ != nullptr;};
    void deleteInterruptible() { this->interruptible_ = nullptr;};
    inline bool interruptible() const { DARABONBA_PTR_GET_DEFAULT(interruptible_, false) };
    inline DialogueResponseBodyFeedback& setInterruptible(bool interruptible) { DARABONBA_PTR_SET_VALUE(interruptible_, interruptible) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> actionParams_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    // 已废弃
    std::shared_ptr<string> contentParams_ = nullptr;
    std::shared_ptr<bool> interruptible_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
