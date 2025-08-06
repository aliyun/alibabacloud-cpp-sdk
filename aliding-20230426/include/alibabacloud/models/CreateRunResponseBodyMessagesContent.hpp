// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentCardCallback.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentDingCard.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentDingNormalCard.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentMarkdown.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructView.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentText.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContent& obj) { 
      DARABONBA_PTR_TO_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_TO_JSON(dingCard, dingCard_);
      DARABONBA_PTR_TO_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(structView, structView_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContent& obj) { 
      DARABONBA_PTR_FROM_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_FROM_JSON(dingCard, dingCard_);
      DARABONBA_PTR_FROM_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(structView, structView_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateRunResponseBodyMessagesContent() = default ;
    CreateRunResponseBodyMessagesContent(const CreateRunResponseBodyMessagesContent &) = default ;
    CreateRunResponseBodyMessagesContent(CreateRunResponseBodyMessagesContent &&) = default ;
    CreateRunResponseBodyMessagesContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContent() = default ;
    CreateRunResponseBodyMessagesContent& operator=(const CreateRunResponseBodyMessagesContent &) = default ;
    CreateRunResponseBodyMessagesContent& operator=(CreateRunResponseBodyMessagesContent &&) = default ;
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
    inline const Models::CreateRunResponseBodyMessagesContentCardCallback & cardCallback() const { DARABONBA_PTR_GET_CONST(cardCallback_, Models::CreateRunResponseBodyMessagesContentCardCallback) };
    inline Models::CreateRunResponseBodyMessagesContentCardCallback cardCallback() { DARABONBA_PTR_GET(cardCallback_, Models::CreateRunResponseBodyMessagesContentCardCallback) };
    inline CreateRunResponseBodyMessagesContent& setCardCallback(const Models::CreateRunResponseBodyMessagesContentCardCallback & cardCallback) { DARABONBA_PTR_SET_VALUE(cardCallback_, cardCallback) };
    inline CreateRunResponseBodyMessagesContent& setCardCallback(Models::CreateRunResponseBodyMessagesContentCardCallback && cardCallback) { DARABONBA_PTR_SET_RVALUE(cardCallback_, cardCallback) };


    // dingCard Field Functions 
    bool hasDingCard() const { return this->dingCard_ != nullptr;};
    void deleteDingCard() { this->dingCard_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentDingCard & dingCard() const { DARABONBA_PTR_GET_CONST(dingCard_, Models::CreateRunResponseBodyMessagesContentDingCard) };
    inline Models::CreateRunResponseBodyMessagesContentDingCard dingCard() { DARABONBA_PTR_GET(dingCard_, Models::CreateRunResponseBodyMessagesContentDingCard) };
    inline CreateRunResponseBodyMessagesContent& setDingCard(const Models::CreateRunResponseBodyMessagesContentDingCard & dingCard) { DARABONBA_PTR_SET_VALUE(dingCard_, dingCard) };
    inline CreateRunResponseBodyMessagesContent& setDingCard(Models::CreateRunResponseBodyMessagesContentDingCard && dingCard) { DARABONBA_PTR_SET_RVALUE(dingCard_, dingCard) };


    // dingNormalCard Field Functions 
    bool hasDingNormalCard() const { return this->dingNormalCard_ != nullptr;};
    void deleteDingNormalCard() { this->dingNormalCard_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentDingNormalCard & dingNormalCard() const { DARABONBA_PTR_GET_CONST(dingNormalCard_, Models::CreateRunResponseBodyMessagesContentDingNormalCard) };
    inline Models::CreateRunResponseBodyMessagesContentDingNormalCard dingNormalCard() { DARABONBA_PTR_GET(dingNormalCard_, Models::CreateRunResponseBodyMessagesContentDingNormalCard) };
    inline CreateRunResponseBodyMessagesContent& setDingNormalCard(const Models::CreateRunResponseBodyMessagesContentDingNormalCard & dingNormalCard) { DARABONBA_PTR_SET_VALUE(dingNormalCard_, dingNormalCard) };
    inline CreateRunResponseBodyMessagesContent& setDingNormalCard(Models::CreateRunResponseBodyMessagesContentDingNormalCard && dingNormalCard) { DARABONBA_PTR_SET_RVALUE(dingNormalCard_, dingNormalCard) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentMarkdown & markdown() const { DARABONBA_PTR_GET_CONST(markdown_, Models::CreateRunResponseBodyMessagesContentMarkdown) };
    inline Models::CreateRunResponseBodyMessagesContentMarkdown markdown() { DARABONBA_PTR_GET(markdown_, Models::CreateRunResponseBodyMessagesContentMarkdown) };
    inline CreateRunResponseBodyMessagesContent& setMarkdown(const Models::CreateRunResponseBodyMessagesContentMarkdown & markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };
    inline CreateRunResponseBodyMessagesContent& setMarkdown(Models::CreateRunResponseBodyMessagesContentMarkdown && markdown) { DARABONBA_PTR_SET_RVALUE(markdown_, markdown) };


    // structView Field Functions 
    bool hasStructView() const { return this->structView_ != nullptr;};
    void deleteStructView() { this->structView_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStructView & structView() const { DARABONBA_PTR_GET_CONST(structView_, Models::CreateRunResponseBodyMessagesContentStructView) };
    inline Models::CreateRunResponseBodyMessagesContentStructView structView() { DARABONBA_PTR_GET(structView_, Models::CreateRunResponseBodyMessagesContentStructView) };
    inline CreateRunResponseBodyMessagesContent& setStructView(const Models::CreateRunResponseBodyMessagesContentStructView & structView) { DARABONBA_PTR_SET_VALUE(structView_, structView) };
    inline CreateRunResponseBodyMessagesContent& setStructView(Models::CreateRunResponseBodyMessagesContentStructView && structView) { DARABONBA_PTR_SET_RVALUE(structView_, structView) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentText & text() const { DARABONBA_PTR_GET_CONST(text_, Models::CreateRunResponseBodyMessagesContentText) };
    inline Models::CreateRunResponseBodyMessagesContentText text() { DARABONBA_PTR_GET(text_, Models::CreateRunResponseBodyMessagesContentText) };
    inline CreateRunResponseBodyMessagesContent& setText(const Models::CreateRunResponseBodyMessagesContentText & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline CreateRunResponseBodyMessagesContent& setText(Models::CreateRunResponseBodyMessagesContentText && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRunResponseBodyMessagesContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentCardCallback> cardCallback_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentDingCard> dingCard_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentDingNormalCard> dingNormalCard_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentMarkdown> markdown_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStructView> structView_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentText> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
