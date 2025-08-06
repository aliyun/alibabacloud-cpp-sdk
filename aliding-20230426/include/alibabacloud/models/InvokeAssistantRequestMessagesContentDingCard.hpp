// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGCARD_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGCARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentDingCard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentDingCard& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(finished, finished_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentDingCard& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(finished, finished_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    InvokeAssistantRequestMessagesContentDingCard() = default ;
    InvokeAssistantRequestMessagesContentDingCard(const InvokeAssistantRequestMessagesContentDingCard &) = default ;
    InvokeAssistantRequestMessagesContentDingCard(InvokeAssistantRequestMessagesContentDingCard &&) = default ;
    InvokeAssistantRequestMessagesContentDingCard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentDingCard() = default ;
    InvokeAssistantRequestMessagesContentDingCard& operator=(const InvokeAssistantRequestMessagesContentDingCard &) = default ;
    InvokeAssistantRequestMessagesContentDingCard& operator=(InvokeAssistantRequestMessagesContentDingCard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentType_ != nullptr && this->finished_ != nullptr && this->templateId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline InvokeAssistantRequestMessagesContentDingCard& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline InvokeAssistantRequestMessagesContentDingCard& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline InvokeAssistantRequestMessagesContentDingCard& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline InvokeAssistantRequestMessagesContentDingCard& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<bool> finished_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
