// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMessageRequestMessagesContentCardCallback.hpp>
#include <alibabacloud/models/CreateMessageRequestMessagesContentDingCard.hpp>
#include <alibabacloud/models/CreateMessageRequestMessagesContentDingNormalCard.hpp>
#include <alibabacloud/models/CreateMessageRequestMessagesContentMarkdown.hpp>
#include <alibabacloud/models/CreateMessageRequestMessagesContentStructView.hpp>
#include <alibabacloud/models/CreateMessageRequestMessagesContentText.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageRequestMessagesContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageRequestMessagesContent& obj) { 
      DARABONBA_PTR_TO_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_TO_JSON(dingCard, dingCard_);
      DARABONBA_PTR_TO_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(structView, structView_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageRequestMessagesContent& obj) { 
      DARABONBA_PTR_FROM_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_FROM_JSON(dingCard, dingCard_);
      DARABONBA_PTR_FROM_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(structView, structView_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateMessageRequestMessagesContent() = default ;
    CreateMessageRequestMessagesContent(const CreateMessageRequestMessagesContent &) = default ;
    CreateMessageRequestMessagesContent(CreateMessageRequestMessagesContent &&) = default ;
    CreateMessageRequestMessagesContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageRequestMessagesContent() = default ;
    CreateMessageRequestMessagesContent& operator=(const CreateMessageRequestMessagesContent &) = default ;
    CreateMessageRequestMessagesContent& operator=(CreateMessageRequestMessagesContent &&) = default ;
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
    inline const Models::CreateMessageRequestMessagesContentCardCallback & cardCallback() const { DARABONBA_PTR_GET_CONST(cardCallback_, Models::CreateMessageRequestMessagesContentCardCallback) };
    inline Models::CreateMessageRequestMessagesContentCardCallback cardCallback() { DARABONBA_PTR_GET(cardCallback_, Models::CreateMessageRequestMessagesContentCardCallback) };
    inline CreateMessageRequestMessagesContent& setCardCallback(const Models::CreateMessageRequestMessagesContentCardCallback & cardCallback) { DARABONBA_PTR_SET_VALUE(cardCallback_, cardCallback) };
    inline CreateMessageRequestMessagesContent& setCardCallback(Models::CreateMessageRequestMessagesContentCardCallback && cardCallback) { DARABONBA_PTR_SET_RVALUE(cardCallback_, cardCallback) };


    // dingCard Field Functions 
    bool hasDingCard() const { return this->dingCard_ != nullptr;};
    void deleteDingCard() { this->dingCard_ = nullptr;};
    inline const Models::CreateMessageRequestMessagesContentDingCard & dingCard() const { DARABONBA_PTR_GET_CONST(dingCard_, Models::CreateMessageRequestMessagesContentDingCard) };
    inline Models::CreateMessageRequestMessagesContentDingCard dingCard() { DARABONBA_PTR_GET(dingCard_, Models::CreateMessageRequestMessagesContentDingCard) };
    inline CreateMessageRequestMessagesContent& setDingCard(const Models::CreateMessageRequestMessagesContentDingCard & dingCard) { DARABONBA_PTR_SET_VALUE(dingCard_, dingCard) };
    inline CreateMessageRequestMessagesContent& setDingCard(Models::CreateMessageRequestMessagesContentDingCard && dingCard) { DARABONBA_PTR_SET_RVALUE(dingCard_, dingCard) };


    // dingNormalCard Field Functions 
    bool hasDingNormalCard() const { return this->dingNormalCard_ != nullptr;};
    void deleteDingNormalCard() { this->dingNormalCard_ = nullptr;};
    inline const Models::CreateMessageRequestMessagesContentDingNormalCard & dingNormalCard() const { DARABONBA_PTR_GET_CONST(dingNormalCard_, Models::CreateMessageRequestMessagesContentDingNormalCard) };
    inline Models::CreateMessageRequestMessagesContentDingNormalCard dingNormalCard() { DARABONBA_PTR_GET(dingNormalCard_, Models::CreateMessageRequestMessagesContentDingNormalCard) };
    inline CreateMessageRequestMessagesContent& setDingNormalCard(const Models::CreateMessageRequestMessagesContentDingNormalCard & dingNormalCard) { DARABONBA_PTR_SET_VALUE(dingNormalCard_, dingNormalCard) };
    inline CreateMessageRequestMessagesContent& setDingNormalCard(Models::CreateMessageRequestMessagesContentDingNormalCard && dingNormalCard) { DARABONBA_PTR_SET_RVALUE(dingNormalCard_, dingNormalCard) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline const Models::CreateMessageRequestMessagesContentMarkdown & markdown() const { DARABONBA_PTR_GET_CONST(markdown_, Models::CreateMessageRequestMessagesContentMarkdown) };
    inline Models::CreateMessageRequestMessagesContentMarkdown markdown() { DARABONBA_PTR_GET(markdown_, Models::CreateMessageRequestMessagesContentMarkdown) };
    inline CreateMessageRequestMessagesContent& setMarkdown(const Models::CreateMessageRequestMessagesContentMarkdown & markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };
    inline CreateMessageRequestMessagesContent& setMarkdown(Models::CreateMessageRequestMessagesContentMarkdown && markdown) { DARABONBA_PTR_SET_RVALUE(markdown_, markdown) };


    // structView Field Functions 
    bool hasStructView() const { return this->structView_ != nullptr;};
    void deleteStructView() { this->structView_ = nullptr;};
    inline const Models::CreateMessageRequestMessagesContentStructView & structView() const { DARABONBA_PTR_GET_CONST(structView_, Models::CreateMessageRequestMessagesContentStructView) };
    inline Models::CreateMessageRequestMessagesContentStructView structView() { DARABONBA_PTR_GET(structView_, Models::CreateMessageRequestMessagesContentStructView) };
    inline CreateMessageRequestMessagesContent& setStructView(const Models::CreateMessageRequestMessagesContentStructView & structView) { DARABONBA_PTR_SET_VALUE(structView_, structView) };
    inline CreateMessageRequestMessagesContent& setStructView(Models::CreateMessageRequestMessagesContentStructView && structView) { DARABONBA_PTR_SET_RVALUE(structView_, structView) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Models::CreateMessageRequestMessagesContentText & text() const { DARABONBA_PTR_GET_CONST(text_, Models::CreateMessageRequestMessagesContentText) };
    inline Models::CreateMessageRequestMessagesContentText text() { DARABONBA_PTR_GET(text_, Models::CreateMessageRequestMessagesContentText) };
    inline CreateMessageRequestMessagesContent& setText(const Models::CreateMessageRequestMessagesContentText & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline CreateMessageRequestMessagesContent& setText(Models::CreateMessageRequestMessagesContentText && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMessageRequestMessagesContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::CreateMessageRequestMessagesContentCardCallback> cardCallback_ = nullptr;
    std::shared_ptr<Models::CreateMessageRequestMessagesContentDingCard> dingCard_ = nullptr;
    std::shared_ptr<Models::CreateMessageRequestMessagesContentDingNormalCard> dingNormalCard_ = nullptr;
    std::shared_ptr<Models::CreateMessageRequestMessagesContentMarkdown> markdown_ = nullptr;
    std::shared_ptr<Models::CreateMessageRequestMessagesContentStructView> structView_ = nullptr;
    std::shared_ptr<Models::CreateMessageRequestMessagesContentText> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
