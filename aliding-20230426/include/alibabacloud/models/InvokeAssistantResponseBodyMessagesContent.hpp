// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENT_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentCardCallback.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentDingCard.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentDingNormalCard.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentMarkdown.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentStructView.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentText.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantResponseBodyMessagesContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantResponseBodyMessagesContent& obj) { 
      DARABONBA_PTR_TO_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_TO_JSON(dingCard, dingCard_);
      DARABONBA_PTR_TO_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(structView, structView_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantResponseBodyMessagesContent& obj) { 
      DARABONBA_PTR_FROM_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_FROM_JSON(dingCard, dingCard_);
      DARABONBA_PTR_FROM_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(structView, structView_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    InvokeAssistantResponseBodyMessagesContent() = default ;
    InvokeAssistantResponseBodyMessagesContent(const InvokeAssistantResponseBodyMessagesContent &) = default ;
    InvokeAssistantResponseBodyMessagesContent(InvokeAssistantResponseBodyMessagesContent &&) = default ;
    InvokeAssistantResponseBodyMessagesContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantResponseBodyMessagesContent() = default ;
    InvokeAssistantResponseBodyMessagesContent& operator=(const InvokeAssistantResponseBodyMessagesContent &) = default ;
    InvokeAssistantResponseBodyMessagesContent& operator=(InvokeAssistantResponseBodyMessagesContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardCallback_ != nullptr
        && this->dingCard_ != nullptr && this->dingNormalCard_ != nullptr && this->markdown_ != nullptr && this->structView_ != nullptr && this->text_ != nullptr
        && this->type_ != nullptr; };
    // cardCallback Field Functions 
    bool hasCardCallback() const { return this->cardCallback_ != nullptr;};
    void deleteCardCallback() { this->cardCallback_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentCardCallback & cardCallback() const { DARABONBA_PTR_GET_CONST(cardCallback_, Models::InvokeAssistantResponseBodyMessagesContentCardCallback) };
    inline Models::InvokeAssistantResponseBodyMessagesContentCardCallback cardCallback() { DARABONBA_PTR_GET(cardCallback_, Models::InvokeAssistantResponseBodyMessagesContentCardCallback) };
    inline InvokeAssistantResponseBodyMessagesContent& setCardCallback(const Models::InvokeAssistantResponseBodyMessagesContentCardCallback & cardCallback) { DARABONBA_PTR_SET_VALUE(cardCallback_, cardCallback) };
    inline InvokeAssistantResponseBodyMessagesContent& setCardCallback(Models::InvokeAssistantResponseBodyMessagesContentCardCallback && cardCallback) { DARABONBA_PTR_SET_RVALUE(cardCallback_, cardCallback) };


    // dingCard Field Functions 
    bool hasDingCard() const { return this->dingCard_ != nullptr;};
    void deleteDingCard() { this->dingCard_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentDingCard & dingCard() const { DARABONBA_PTR_GET_CONST(dingCard_, Models::InvokeAssistantResponseBodyMessagesContentDingCard) };
    inline Models::InvokeAssistantResponseBodyMessagesContentDingCard dingCard() { DARABONBA_PTR_GET(dingCard_, Models::InvokeAssistantResponseBodyMessagesContentDingCard) };
    inline InvokeAssistantResponseBodyMessagesContent& setDingCard(const Models::InvokeAssistantResponseBodyMessagesContentDingCard & dingCard) { DARABONBA_PTR_SET_VALUE(dingCard_, dingCard) };
    inline InvokeAssistantResponseBodyMessagesContent& setDingCard(Models::InvokeAssistantResponseBodyMessagesContentDingCard && dingCard) { DARABONBA_PTR_SET_RVALUE(dingCard_, dingCard) };


    // dingNormalCard Field Functions 
    bool hasDingNormalCard() const { return this->dingNormalCard_ != nullptr;};
    void deleteDingNormalCard() { this->dingNormalCard_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentDingNormalCard & dingNormalCard() const { DARABONBA_PTR_GET_CONST(dingNormalCard_, Models::InvokeAssistantResponseBodyMessagesContentDingNormalCard) };
    inline Models::InvokeAssistantResponseBodyMessagesContentDingNormalCard dingNormalCard() { DARABONBA_PTR_GET(dingNormalCard_, Models::InvokeAssistantResponseBodyMessagesContentDingNormalCard) };
    inline InvokeAssistantResponseBodyMessagesContent& setDingNormalCard(const Models::InvokeAssistantResponseBodyMessagesContentDingNormalCard & dingNormalCard) { DARABONBA_PTR_SET_VALUE(dingNormalCard_, dingNormalCard) };
    inline InvokeAssistantResponseBodyMessagesContent& setDingNormalCard(Models::InvokeAssistantResponseBodyMessagesContentDingNormalCard && dingNormalCard) { DARABONBA_PTR_SET_RVALUE(dingNormalCard_, dingNormalCard) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentMarkdown & markdown() const { DARABONBA_PTR_GET_CONST(markdown_, Models::InvokeAssistantResponseBodyMessagesContentMarkdown) };
    inline Models::InvokeAssistantResponseBodyMessagesContentMarkdown markdown() { DARABONBA_PTR_GET(markdown_, Models::InvokeAssistantResponseBodyMessagesContentMarkdown) };
    inline InvokeAssistantResponseBodyMessagesContent& setMarkdown(const Models::InvokeAssistantResponseBodyMessagesContentMarkdown & markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };
    inline InvokeAssistantResponseBodyMessagesContent& setMarkdown(Models::InvokeAssistantResponseBodyMessagesContentMarkdown && markdown) { DARABONBA_PTR_SET_RVALUE(markdown_, markdown) };


    // structView Field Functions 
    bool hasStructView() const { return this->structView_ != nullptr;};
    void deleteStructView() { this->structView_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentStructView & structView() const { DARABONBA_PTR_GET_CONST(structView_, Models::InvokeAssistantResponseBodyMessagesContentStructView) };
    inline Models::InvokeAssistantResponseBodyMessagesContentStructView structView() { DARABONBA_PTR_GET(structView_, Models::InvokeAssistantResponseBodyMessagesContentStructView) };
    inline InvokeAssistantResponseBodyMessagesContent& setStructView(const Models::InvokeAssistantResponseBodyMessagesContentStructView & structView) { DARABONBA_PTR_SET_VALUE(structView_, structView) };
    inline InvokeAssistantResponseBodyMessagesContent& setStructView(Models::InvokeAssistantResponseBodyMessagesContentStructView && structView) { DARABONBA_PTR_SET_RVALUE(structView_, structView) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentText & text() const { DARABONBA_PTR_GET_CONST(text_, Models::InvokeAssistantResponseBodyMessagesContentText) };
    inline Models::InvokeAssistantResponseBodyMessagesContentText text() { DARABONBA_PTR_GET(text_, Models::InvokeAssistantResponseBodyMessagesContentText) };
    inline InvokeAssistantResponseBodyMessagesContent& setText(const Models::InvokeAssistantResponseBodyMessagesContentText & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline InvokeAssistantResponseBodyMessagesContent& setText(Models::InvokeAssistantResponseBodyMessagesContentText && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InvokeAssistantResponseBodyMessagesContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentCardCallback> cardCallback_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentDingCard> dingCard_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentDingNormalCard> dingNormalCard_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentMarkdown> markdown_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentStructView> structView_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentText> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
