// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTCARDCALLBACK_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTCARDCALLBACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantResponseBodyMessagesContentCardCallback : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantResponseBodyMessagesContentCardCallback& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(relatedMessageId, relatedMessageId_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantResponseBodyMessagesContentCardCallback& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(relatedMessageId, relatedMessageId_);
    };
    InvokeAssistantResponseBodyMessagesContentCardCallback() = default ;
    InvokeAssistantResponseBodyMessagesContentCardCallback(const InvokeAssistantResponseBodyMessagesContentCardCallback &) = default ;
    InvokeAssistantResponseBodyMessagesContentCardCallback(InvokeAssistantResponseBodyMessagesContentCardCallback &&) = default ;
    InvokeAssistantResponseBodyMessagesContentCardCallback(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantResponseBodyMessagesContentCardCallback() = default ;
    InvokeAssistantResponseBodyMessagesContentCardCallback& operator=(const InvokeAssistantResponseBodyMessagesContentCardCallback &) = default ;
    InvokeAssistantResponseBodyMessagesContentCardCallback& operator=(InvokeAssistantResponseBodyMessagesContentCardCallback &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->relatedMessageId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline InvokeAssistantResponseBodyMessagesContentCardCallback& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // relatedMessageId Field Functions 
    bool hasRelatedMessageId() const { return this->relatedMessageId_ != nullptr;};
    void deleteRelatedMessageId() { this->relatedMessageId_ = nullptr;};
    inline string relatedMessageId() const { DARABONBA_PTR_GET_DEFAULT(relatedMessageId_, "") };
    inline InvokeAssistantResponseBodyMessagesContentCardCallback& setRelatedMessageId(string relatedMessageId) { DARABONBA_PTR_SET_VALUE(relatedMessageId_, relatedMessageId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> relatedMessageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
