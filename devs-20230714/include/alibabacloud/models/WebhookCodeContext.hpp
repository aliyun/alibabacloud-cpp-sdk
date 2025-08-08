// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBHOOKCODECONTEXT_HPP_
#define ALIBABACLOUD_MODELS_WEBHOOKCODECONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class WebhookCodeContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebhookCodeContext& obj) { 
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(commitID, commitID_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(prType, prType_);
      DARABONBA_PTR_TO_JSON(repoUrl, repoUrl_);
      DARABONBA_PTR_TO_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, WebhookCodeContext& obj) { 
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(commitID, commitID_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(prType, prType_);
      DARABONBA_PTR_FROM_JSON(repoUrl, repoUrl_);
      DARABONBA_PTR_FROM_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    WebhookCodeContext() = default ;
    WebhookCodeContext(const WebhookCodeContext &) = default ;
    WebhookCodeContext(WebhookCodeContext &&) = default ;
    WebhookCodeContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebhookCodeContext() = default ;
    WebhookCodeContext& operator=(const WebhookCodeContext &) = default ;
    WebhookCodeContext& operator=(WebhookCodeContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->branch_ != nullptr
        && this->commitID_ != nullptr && this->description_ != nullptr && this->eventType_ != nullptr && this->message_ != nullptr && this->prType_ != nullptr
        && this->repoUrl_ != nullptr && this->sourceBranch_ != nullptr && this->tag_ != nullptr && this->targetBranch_ != nullptr && this->title_ != nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline WebhookCodeContext& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // commitID Field Functions 
    bool hasCommitID() const { return this->commitID_ != nullptr;};
    void deleteCommitID() { this->commitID_ = nullptr;};
    inline string commitID() const { DARABONBA_PTR_GET_DEFAULT(commitID_, "") };
    inline WebhookCodeContext& setCommitID(string commitID) { DARABONBA_PTR_SET_VALUE(commitID_, commitID) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline WebhookCodeContext& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline WebhookCodeContext& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline WebhookCodeContext& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // prType Field Functions 
    bool hasPrType() const { return this->prType_ != nullptr;};
    void deletePrType() { this->prType_ = nullptr;};
    inline string prType() const { DARABONBA_PTR_GET_DEFAULT(prType_, "") };
    inline WebhookCodeContext& setPrType(string prType) { DARABONBA_PTR_SET_VALUE(prType_, prType) };


    // repoUrl Field Functions 
    bool hasRepoUrl() const { return this->repoUrl_ != nullptr;};
    void deleteRepoUrl() { this->repoUrl_ = nullptr;};
    inline string repoUrl() const { DARABONBA_PTR_GET_DEFAULT(repoUrl_, "") };
    inline WebhookCodeContext& setRepoUrl(string repoUrl) { DARABONBA_PTR_SET_VALUE(repoUrl_, repoUrl) };


    // sourceBranch Field Functions 
    bool hasSourceBranch() const { return this->sourceBranch_ != nullptr;};
    void deleteSourceBranch() { this->sourceBranch_ = nullptr;};
    inline string sourceBranch() const { DARABONBA_PTR_GET_DEFAULT(sourceBranch_, "") };
    inline WebhookCodeContext& setSourceBranch(string sourceBranch) { DARABONBA_PTR_SET_VALUE(sourceBranch_, sourceBranch) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline WebhookCodeContext& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // targetBranch Field Functions 
    bool hasTargetBranch() const { return this->targetBranch_ != nullptr;};
    void deleteTargetBranch() { this->targetBranch_ = nullptr;};
    inline string targetBranch() const { DARABONBA_PTR_GET_DEFAULT(targetBranch_, "") };
    inline WebhookCodeContext& setTargetBranch(string targetBranch) { DARABONBA_PTR_SET_VALUE(targetBranch_, targetBranch) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline WebhookCodeContext& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> commitID_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> prType_ = nullptr;
    std::shared_ptr<string> repoUrl_ = nullptr;
    std::shared_ptr<string> sourceBranch_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> targetBranch_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
