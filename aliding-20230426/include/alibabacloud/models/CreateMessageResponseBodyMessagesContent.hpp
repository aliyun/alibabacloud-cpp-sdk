// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentCardCallback.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentDingCard.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentDingNormalCard.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentMarkdown.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentStructView.hpp>
#include <alibabacloud/models/CreateMessageResponseBodyMessagesContentText.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageResponseBodyMessagesContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageResponseBodyMessagesContent& obj) { 
      DARABONBA_PTR_TO_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_TO_JSON(dingCard, dingCard_);
      DARABONBA_PTR_TO_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(structView, structView_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageResponseBodyMessagesContent& obj) { 
      DARABONBA_PTR_FROM_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_FROM_JSON(dingCard, dingCard_);
      DARABONBA_PTR_FROM_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(structView, structView_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateMessageResponseBodyMessagesContent() = default ;
    CreateMessageResponseBodyMessagesContent(const CreateMessageResponseBodyMessagesContent &) = default ;
    CreateMessageResponseBodyMessagesContent(CreateMessageResponseBodyMessagesContent &&) = default ;
    CreateMessageResponseBodyMessagesContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageResponseBodyMessagesContent() = default ;
    CreateMessageResponseBodyMessagesContent& operator=(const CreateMessageResponseBodyMessagesContent &) = default ;
    CreateMessageResponseBodyMessagesContent& operator=(CreateMessageResponseBodyMessagesContent &&) = default ;
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
    inline const Models::CreateMessageResponseBodyMessagesContentCardCallback & cardCallback() const { DARABONBA_PTR_GET_CONST(cardCallback_, Models::CreateMessageResponseBodyMessagesContentCardCallback) };
    inline Models::CreateMessageResponseBodyMessagesContentCardCallback cardCallback() { DARABONBA_PTR_GET(cardCallback_, Models::CreateMessageResponseBodyMessagesContentCardCallback) };
    inline CreateMessageResponseBodyMessagesContent& setCardCallback(const Models::CreateMessageResponseBodyMessagesContentCardCallback & cardCallback) { DARABONBA_PTR_SET_VALUE(cardCallback_, cardCallback) };
    inline CreateMessageResponseBodyMessagesContent& setCardCallback(Models::CreateMessageResponseBodyMessagesContentCardCallback && cardCallback) { DARABONBA_PTR_SET_RVALUE(cardCallback_, cardCallback) };


    // dingCard Field Functions 
    bool hasDingCard() const { return this->dingCard_ != nullptr;};
    void deleteDingCard() { this->dingCard_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentDingCard & dingCard() const { DARABONBA_PTR_GET_CONST(dingCard_, Models::CreateMessageResponseBodyMessagesContentDingCard) };
    inline Models::CreateMessageResponseBodyMessagesContentDingCard dingCard() { DARABONBA_PTR_GET(dingCard_, Models::CreateMessageResponseBodyMessagesContentDingCard) };
    inline CreateMessageResponseBodyMessagesContent& setDingCard(const Models::CreateMessageResponseBodyMessagesContentDingCard & dingCard) { DARABONBA_PTR_SET_VALUE(dingCard_, dingCard) };
    inline CreateMessageResponseBodyMessagesContent& setDingCard(Models::CreateMessageResponseBodyMessagesContentDingCard && dingCard) { DARABONBA_PTR_SET_RVALUE(dingCard_, dingCard) };


    // dingNormalCard Field Functions 
    bool hasDingNormalCard() const { return this->dingNormalCard_ != nullptr;};
    void deleteDingNormalCard() { this->dingNormalCard_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentDingNormalCard & dingNormalCard() const { DARABONBA_PTR_GET_CONST(dingNormalCard_, Models::CreateMessageResponseBodyMessagesContentDingNormalCard) };
    inline Models::CreateMessageResponseBodyMessagesContentDingNormalCard dingNormalCard() { DARABONBA_PTR_GET(dingNormalCard_, Models::CreateMessageResponseBodyMessagesContentDingNormalCard) };
    inline CreateMessageResponseBodyMessagesContent& setDingNormalCard(const Models::CreateMessageResponseBodyMessagesContentDingNormalCard & dingNormalCard) { DARABONBA_PTR_SET_VALUE(dingNormalCard_, dingNormalCard) };
    inline CreateMessageResponseBodyMessagesContent& setDingNormalCard(Models::CreateMessageResponseBodyMessagesContentDingNormalCard && dingNormalCard) { DARABONBA_PTR_SET_RVALUE(dingNormalCard_, dingNormalCard) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentMarkdown & markdown() const { DARABONBA_PTR_GET_CONST(markdown_, Models::CreateMessageResponseBodyMessagesContentMarkdown) };
    inline Models::CreateMessageResponseBodyMessagesContentMarkdown markdown() { DARABONBA_PTR_GET(markdown_, Models::CreateMessageResponseBodyMessagesContentMarkdown) };
    inline CreateMessageResponseBodyMessagesContent& setMarkdown(const Models::CreateMessageResponseBodyMessagesContentMarkdown & markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };
    inline CreateMessageResponseBodyMessagesContent& setMarkdown(Models::CreateMessageResponseBodyMessagesContentMarkdown && markdown) { DARABONBA_PTR_SET_RVALUE(markdown_, markdown) };


    // structView Field Functions 
    bool hasStructView() const { return this->structView_ != nullptr;};
    void deleteStructView() { this->structView_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentStructView & structView() const { DARABONBA_PTR_GET_CONST(structView_, Models::CreateMessageResponseBodyMessagesContentStructView) };
    inline Models::CreateMessageResponseBodyMessagesContentStructView structView() { DARABONBA_PTR_GET(structView_, Models::CreateMessageResponseBodyMessagesContentStructView) };
    inline CreateMessageResponseBodyMessagesContent& setStructView(const Models::CreateMessageResponseBodyMessagesContentStructView & structView) { DARABONBA_PTR_SET_VALUE(structView_, structView) };
    inline CreateMessageResponseBodyMessagesContent& setStructView(Models::CreateMessageResponseBodyMessagesContentStructView && structView) { DARABONBA_PTR_SET_RVALUE(structView_, structView) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Models::CreateMessageResponseBodyMessagesContentText & text() const { DARABONBA_PTR_GET_CONST(text_, Models::CreateMessageResponseBodyMessagesContentText) };
    inline Models::CreateMessageResponseBodyMessagesContentText text() { DARABONBA_PTR_GET(text_, Models::CreateMessageResponseBodyMessagesContentText) };
    inline CreateMessageResponseBodyMessagesContent& setText(const Models::CreateMessageResponseBodyMessagesContentText & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline CreateMessageResponseBodyMessagesContent& setText(Models::CreateMessageResponseBodyMessagesContentText && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMessageResponseBodyMessagesContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentCardCallback> cardCallback_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentDingCard> dingCard_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentDingNormalCard> dingNormalCard_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentMarkdown> markdown_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentStructView> structView_ = nullptr;
    std::shared_ptr<Models::CreateMessageResponseBodyMessagesContentText> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
