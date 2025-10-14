// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENT_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentCardCallback.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentDingCard.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentDingNormalCard.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentMarkdown.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentStructView.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentText.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContent& obj) { 
      DARABONBA_PTR_TO_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_TO_JSON(dingCard, dingCard_);
      DARABONBA_PTR_TO_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(structView, structView_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContent& obj) { 
      DARABONBA_PTR_FROM_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_FROM_JSON(dingCard, dingCard_);
      DARABONBA_PTR_FROM_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(structView, structView_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    InvokeAssistantRequestMessagesContent() = default ;
    InvokeAssistantRequestMessagesContent(const InvokeAssistantRequestMessagesContent &) = default ;
    InvokeAssistantRequestMessagesContent(InvokeAssistantRequestMessagesContent &&) = default ;
    InvokeAssistantRequestMessagesContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContent() = default ;
    InvokeAssistantRequestMessagesContent& operator=(const InvokeAssistantRequestMessagesContent &) = default ;
    InvokeAssistantRequestMessagesContent& operator=(InvokeAssistantRequestMessagesContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardCallback_ == nullptr
        && return this->dingCard_ == nullptr && return this->dingNormalCard_ == nullptr && return this->markdown_ == nullptr && return this->structView_ == nullptr && return this->text_ == nullptr
        && return this->type_ == nullptr; };
    // cardCallback Field Functions 
    bool hasCardCallback() const { return this->cardCallback_ != nullptr;};
    void deleteCardCallback() { this->cardCallback_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContentCardCallback & cardCallback() const { DARABONBA_PTR_GET_CONST(cardCallback_, Models::InvokeAssistantRequestMessagesContentCardCallback) };
    inline Models::InvokeAssistantRequestMessagesContentCardCallback cardCallback() { DARABONBA_PTR_GET(cardCallback_, Models::InvokeAssistantRequestMessagesContentCardCallback) };
    inline InvokeAssistantRequestMessagesContent& setCardCallback(const Models::InvokeAssistantRequestMessagesContentCardCallback & cardCallback) { DARABONBA_PTR_SET_VALUE(cardCallback_, cardCallback) };
    inline InvokeAssistantRequestMessagesContent& setCardCallback(Models::InvokeAssistantRequestMessagesContentCardCallback && cardCallback) { DARABONBA_PTR_SET_RVALUE(cardCallback_, cardCallback) };


    // dingCard Field Functions 
    bool hasDingCard() const { return this->dingCard_ != nullptr;};
    void deleteDingCard() { this->dingCard_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContentDingCard & dingCard() const { DARABONBA_PTR_GET_CONST(dingCard_, Models::InvokeAssistantRequestMessagesContentDingCard) };
    inline Models::InvokeAssistantRequestMessagesContentDingCard dingCard() { DARABONBA_PTR_GET(dingCard_, Models::InvokeAssistantRequestMessagesContentDingCard) };
    inline InvokeAssistantRequestMessagesContent& setDingCard(const Models::InvokeAssistantRequestMessagesContentDingCard & dingCard) { DARABONBA_PTR_SET_VALUE(dingCard_, dingCard) };
    inline InvokeAssistantRequestMessagesContent& setDingCard(Models::InvokeAssistantRequestMessagesContentDingCard && dingCard) { DARABONBA_PTR_SET_RVALUE(dingCard_, dingCard) };


    // dingNormalCard Field Functions 
    bool hasDingNormalCard() const { return this->dingNormalCard_ != nullptr;};
    void deleteDingNormalCard() { this->dingNormalCard_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContentDingNormalCard & dingNormalCard() const { DARABONBA_PTR_GET_CONST(dingNormalCard_, Models::InvokeAssistantRequestMessagesContentDingNormalCard) };
    inline Models::InvokeAssistantRequestMessagesContentDingNormalCard dingNormalCard() { DARABONBA_PTR_GET(dingNormalCard_, Models::InvokeAssistantRequestMessagesContentDingNormalCard) };
    inline InvokeAssistantRequestMessagesContent& setDingNormalCard(const Models::InvokeAssistantRequestMessagesContentDingNormalCard & dingNormalCard) { DARABONBA_PTR_SET_VALUE(dingNormalCard_, dingNormalCard) };
    inline InvokeAssistantRequestMessagesContent& setDingNormalCard(Models::InvokeAssistantRequestMessagesContentDingNormalCard && dingNormalCard) { DARABONBA_PTR_SET_RVALUE(dingNormalCard_, dingNormalCard) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContentMarkdown & markdown() const { DARABONBA_PTR_GET_CONST(markdown_, Models::InvokeAssistantRequestMessagesContentMarkdown) };
    inline Models::InvokeAssistantRequestMessagesContentMarkdown markdown() { DARABONBA_PTR_GET(markdown_, Models::InvokeAssistantRequestMessagesContentMarkdown) };
    inline InvokeAssistantRequestMessagesContent& setMarkdown(const Models::InvokeAssistantRequestMessagesContentMarkdown & markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };
    inline InvokeAssistantRequestMessagesContent& setMarkdown(Models::InvokeAssistantRequestMessagesContentMarkdown && markdown) { DARABONBA_PTR_SET_RVALUE(markdown_, markdown) };


    // structView Field Functions 
    bool hasStructView() const { return this->structView_ != nullptr;};
    void deleteStructView() { this->structView_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContentStructView & structView() const { DARABONBA_PTR_GET_CONST(structView_, Models::InvokeAssistantRequestMessagesContentStructView) };
    inline Models::InvokeAssistantRequestMessagesContentStructView structView() { DARABONBA_PTR_GET(structView_, Models::InvokeAssistantRequestMessagesContentStructView) };
    inline InvokeAssistantRequestMessagesContent& setStructView(const Models::InvokeAssistantRequestMessagesContentStructView & structView) { DARABONBA_PTR_SET_VALUE(structView_, structView) };
    inline InvokeAssistantRequestMessagesContent& setStructView(Models::InvokeAssistantRequestMessagesContentStructView && structView) { DARABONBA_PTR_SET_RVALUE(structView_, structView) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContentText & text() const { DARABONBA_PTR_GET_CONST(text_, Models::InvokeAssistantRequestMessagesContentText) };
    inline Models::InvokeAssistantRequestMessagesContentText text() { DARABONBA_PTR_GET(text_, Models::InvokeAssistantRequestMessagesContentText) };
    inline InvokeAssistantRequestMessagesContent& setText(const Models::InvokeAssistantRequestMessagesContentText & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline InvokeAssistantRequestMessagesContent& setText(Models::InvokeAssistantRequestMessagesContentText && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InvokeAssistantRequestMessagesContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContentCardCallback> cardCallback_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContentDingCard> dingCard_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContentDingNormalCard> dingNormalCard_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContentMarkdown> markdown_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContentStructView> structView_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContentText> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
