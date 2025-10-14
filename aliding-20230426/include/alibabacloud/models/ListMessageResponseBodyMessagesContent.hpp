// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentCardCallback.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentDingCard.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentDingNormalCard.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentMarkdown.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructView.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentText.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBodyMessagesContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyMessagesContent& obj) { 
      DARABONBA_PTR_TO_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_TO_JSON(dingCard, dingCard_);
      DARABONBA_PTR_TO_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(structView, structView_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyMessagesContent& obj) { 
      DARABONBA_PTR_FROM_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_FROM_JSON(dingCard, dingCard_);
      DARABONBA_PTR_FROM_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(structView, structView_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMessageResponseBodyMessagesContent() = default ;
    ListMessageResponseBodyMessagesContent(const ListMessageResponseBodyMessagesContent &) = default ;
    ListMessageResponseBodyMessagesContent(ListMessageResponseBodyMessagesContent &&) = default ;
    ListMessageResponseBodyMessagesContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyMessagesContent() = default ;
    ListMessageResponseBodyMessagesContent& operator=(const ListMessageResponseBodyMessagesContent &) = default ;
    ListMessageResponseBodyMessagesContent& operator=(ListMessageResponseBodyMessagesContent &&) = default ;
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
    inline const Models::ListMessageResponseBodyMessagesContentCardCallback & cardCallback() const { DARABONBA_PTR_GET_CONST(cardCallback_, Models::ListMessageResponseBodyMessagesContentCardCallback) };
    inline Models::ListMessageResponseBodyMessagesContentCardCallback cardCallback() { DARABONBA_PTR_GET(cardCallback_, Models::ListMessageResponseBodyMessagesContentCardCallback) };
    inline ListMessageResponseBodyMessagesContent& setCardCallback(const Models::ListMessageResponseBodyMessagesContentCardCallback & cardCallback) { DARABONBA_PTR_SET_VALUE(cardCallback_, cardCallback) };
    inline ListMessageResponseBodyMessagesContent& setCardCallback(Models::ListMessageResponseBodyMessagesContentCardCallback && cardCallback) { DARABONBA_PTR_SET_RVALUE(cardCallback_, cardCallback) };


    // dingCard Field Functions 
    bool hasDingCard() const { return this->dingCard_ != nullptr;};
    void deleteDingCard() { this->dingCard_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentDingCard & dingCard() const { DARABONBA_PTR_GET_CONST(dingCard_, Models::ListMessageResponseBodyMessagesContentDingCard) };
    inline Models::ListMessageResponseBodyMessagesContentDingCard dingCard() { DARABONBA_PTR_GET(dingCard_, Models::ListMessageResponseBodyMessagesContentDingCard) };
    inline ListMessageResponseBodyMessagesContent& setDingCard(const Models::ListMessageResponseBodyMessagesContentDingCard & dingCard) { DARABONBA_PTR_SET_VALUE(dingCard_, dingCard) };
    inline ListMessageResponseBodyMessagesContent& setDingCard(Models::ListMessageResponseBodyMessagesContentDingCard && dingCard) { DARABONBA_PTR_SET_RVALUE(dingCard_, dingCard) };


    // dingNormalCard Field Functions 
    bool hasDingNormalCard() const { return this->dingNormalCard_ != nullptr;};
    void deleteDingNormalCard() { this->dingNormalCard_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentDingNormalCard & dingNormalCard() const { DARABONBA_PTR_GET_CONST(dingNormalCard_, Models::ListMessageResponseBodyMessagesContentDingNormalCard) };
    inline Models::ListMessageResponseBodyMessagesContentDingNormalCard dingNormalCard() { DARABONBA_PTR_GET(dingNormalCard_, Models::ListMessageResponseBodyMessagesContentDingNormalCard) };
    inline ListMessageResponseBodyMessagesContent& setDingNormalCard(const Models::ListMessageResponseBodyMessagesContentDingNormalCard & dingNormalCard) { DARABONBA_PTR_SET_VALUE(dingNormalCard_, dingNormalCard) };
    inline ListMessageResponseBodyMessagesContent& setDingNormalCard(Models::ListMessageResponseBodyMessagesContentDingNormalCard && dingNormalCard) { DARABONBA_PTR_SET_RVALUE(dingNormalCard_, dingNormalCard) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentMarkdown & markdown() const { DARABONBA_PTR_GET_CONST(markdown_, Models::ListMessageResponseBodyMessagesContentMarkdown) };
    inline Models::ListMessageResponseBodyMessagesContentMarkdown markdown() { DARABONBA_PTR_GET(markdown_, Models::ListMessageResponseBodyMessagesContentMarkdown) };
    inline ListMessageResponseBodyMessagesContent& setMarkdown(const Models::ListMessageResponseBodyMessagesContentMarkdown & markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };
    inline ListMessageResponseBodyMessagesContent& setMarkdown(Models::ListMessageResponseBodyMessagesContentMarkdown && markdown) { DARABONBA_PTR_SET_RVALUE(markdown_, markdown) };


    // structView Field Functions 
    bool hasStructView() const { return this->structView_ != nullptr;};
    void deleteStructView() { this->structView_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentStructView & structView() const { DARABONBA_PTR_GET_CONST(structView_, Models::ListMessageResponseBodyMessagesContentStructView) };
    inline Models::ListMessageResponseBodyMessagesContentStructView structView() { DARABONBA_PTR_GET(structView_, Models::ListMessageResponseBodyMessagesContentStructView) };
    inline ListMessageResponseBodyMessagesContent& setStructView(const Models::ListMessageResponseBodyMessagesContentStructView & structView) { DARABONBA_PTR_SET_VALUE(structView_, structView) };
    inline ListMessageResponseBodyMessagesContent& setStructView(Models::ListMessageResponseBodyMessagesContentStructView && structView) { DARABONBA_PTR_SET_RVALUE(structView_, structView) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentText & text() const { DARABONBA_PTR_GET_CONST(text_, Models::ListMessageResponseBodyMessagesContentText) };
    inline Models::ListMessageResponseBodyMessagesContentText text() { DARABONBA_PTR_GET(text_, Models::ListMessageResponseBodyMessagesContentText) };
    inline ListMessageResponseBodyMessagesContent& setText(const Models::ListMessageResponseBodyMessagesContentText & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline ListMessageResponseBodyMessagesContent& setText(Models::ListMessageResponseBodyMessagesContentText && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMessageResponseBodyMessagesContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentCardCallback> cardCallback_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentDingCard> dingCard_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentDingNormalCard> dingNormalCard_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentMarkdown> markdown_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentStructView> structView_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentText> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
