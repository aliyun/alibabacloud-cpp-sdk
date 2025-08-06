// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentCardCallback.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentDingCard.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentDingNormalCard.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentMarkdown.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentStructView.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentText.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityRequestMessagesContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityRequestMessagesContent& obj) { 
      DARABONBA_PTR_TO_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_TO_JSON(dingCard, dingCard_);
      DARABONBA_PTR_TO_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(structView, structView_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityRequestMessagesContent& obj) { 
      DARABONBA_PTR_FROM_JSON(cardCallback, cardCallback_);
      DARABONBA_PTR_FROM_JSON(dingCard, dingCard_);
      DARABONBA_PTR_FROM_JSON(dingNormalCard, dingNormalCard_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(structView, structView_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetAssistantCapabilityRequestMessagesContent() = default ;
    GetAssistantCapabilityRequestMessagesContent(const GetAssistantCapabilityRequestMessagesContent &) = default ;
    GetAssistantCapabilityRequestMessagesContent(GetAssistantCapabilityRequestMessagesContent &&) = default ;
    GetAssistantCapabilityRequestMessagesContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityRequestMessagesContent() = default ;
    GetAssistantCapabilityRequestMessagesContent& operator=(const GetAssistantCapabilityRequestMessagesContent &) = default ;
    GetAssistantCapabilityRequestMessagesContent& operator=(GetAssistantCapabilityRequestMessagesContent &&) = default ;
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
    inline const Models::GetAssistantCapabilityRequestMessagesContentCardCallback & cardCallback() const { DARABONBA_PTR_GET_CONST(cardCallback_, Models::GetAssistantCapabilityRequestMessagesContentCardCallback) };
    inline Models::GetAssistantCapabilityRequestMessagesContentCardCallback cardCallback() { DARABONBA_PTR_GET(cardCallback_, Models::GetAssistantCapabilityRequestMessagesContentCardCallback) };
    inline GetAssistantCapabilityRequestMessagesContent& setCardCallback(const Models::GetAssistantCapabilityRequestMessagesContentCardCallback & cardCallback) { DARABONBA_PTR_SET_VALUE(cardCallback_, cardCallback) };
    inline GetAssistantCapabilityRequestMessagesContent& setCardCallback(Models::GetAssistantCapabilityRequestMessagesContentCardCallback && cardCallback) { DARABONBA_PTR_SET_RVALUE(cardCallback_, cardCallback) };


    // dingCard Field Functions 
    bool hasDingCard() const { return this->dingCard_ != nullptr;};
    void deleteDingCard() { this->dingCard_ = nullptr;};
    inline const Models::GetAssistantCapabilityRequestMessagesContentDingCard & dingCard() const { DARABONBA_PTR_GET_CONST(dingCard_, Models::GetAssistantCapabilityRequestMessagesContentDingCard) };
    inline Models::GetAssistantCapabilityRequestMessagesContentDingCard dingCard() { DARABONBA_PTR_GET(dingCard_, Models::GetAssistantCapabilityRequestMessagesContentDingCard) };
    inline GetAssistantCapabilityRequestMessagesContent& setDingCard(const Models::GetAssistantCapabilityRequestMessagesContentDingCard & dingCard) { DARABONBA_PTR_SET_VALUE(dingCard_, dingCard) };
    inline GetAssistantCapabilityRequestMessagesContent& setDingCard(Models::GetAssistantCapabilityRequestMessagesContentDingCard && dingCard) { DARABONBA_PTR_SET_RVALUE(dingCard_, dingCard) };


    // dingNormalCard Field Functions 
    bool hasDingNormalCard() const { return this->dingNormalCard_ != nullptr;};
    void deleteDingNormalCard() { this->dingNormalCard_ = nullptr;};
    inline const Models::GetAssistantCapabilityRequestMessagesContentDingNormalCard & dingNormalCard() const { DARABONBA_PTR_GET_CONST(dingNormalCard_, Models::GetAssistantCapabilityRequestMessagesContentDingNormalCard) };
    inline Models::GetAssistantCapabilityRequestMessagesContentDingNormalCard dingNormalCard() { DARABONBA_PTR_GET(dingNormalCard_, Models::GetAssistantCapabilityRequestMessagesContentDingNormalCard) };
    inline GetAssistantCapabilityRequestMessagesContent& setDingNormalCard(const Models::GetAssistantCapabilityRequestMessagesContentDingNormalCard & dingNormalCard) { DARABONBA_PTR_SET_VALUE(dingNormalCard_, dingNormalCard) };
    inline GetAssistantCapabilityRequestMessagesContent& setDingNormalCard(Models::GetAssistantCapabilityRequestMessagesContentDingNormalCard && dingNormalCard) { DARABONBA_PTR_SET_RVALUE(dingNormalCard_, dingNormalCard) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline const Models::GetAssistantCapabilityRequestMessagesContentMarkdown & markdown() const { DARABONBA_PTR_GET_CONST(markdown_, Models::GetAssistantCapabilityRequestMessagesContentMarkdown) };
    inline Models::GetAssistantCapabilityRequestMessagesContentMarkdown markdown() { DARABONBA_PTR_GET(markdown_, Models::GetAssistantCapabilityRequestMessagesContentMarkdown) };
    inline GetAssistantCapabilityRequestMessagesContent& setMarkdown(const Models::GetAssistantCapabilityRequestMessagesContentMarkdown & markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };
    inline GetAssistantCapabilityRequestMessagesContent& setMarkdown(Models::GetAssistantCapabilityRequestMessagesContentMarkdown && markdown) { DARABONBA_PTR_SET_RVALUE(markdown_, markdown) };


    // structView Field Functions 
    bool hasStructView() const { return this->structView_ != nullptr;};
    void deleteStructView() { this->structView_ = nullptr;};
    inline const Models::GetAssistantCapabilityRequestMessagesContentStructView & structView() const { DARABONBA_PTR_GET_CONST(structView_, Models::GetAssistantCapabilityRequestMessagesContentStructView) };
    inline Models::GetAssistantCapabilityRequestMessagesContentStructView structView() { DARABONBA_PTR_GET(structView_, Models::GetAssistantCapabilityRequestMessagesContentStructView) };
    inline GetAssistantCapabilityRequestMessagesContent& setStructView(const Models::GetAssistantCapabilityRequestMessagesContentStructView & structView) { DARABONBA_PTR_SET_VALUE(structView_, structView) };
    inline GetAssistantCapabilityRequestMessagesContent& setStructView(Models::GetAssistantCapabilityRequestMessagesContentStructView && structView) { DARABONBA_PTR_SET_RVALUE(structView_, structView) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Models::GetAssistantCapabilityRequestMessagesContentText & text() const { DARABONBA_PTR_GET_CONST(text_, Models::GetAssistantCapabilityRequestMessagesContentText) };
    inline Models::GetAssistantCapabilityRequestMessagesContentText text() { DARABONBA_PTR_GET(text_, Models::GetAssistantCapabilityRequestMessagesContentText) };
    inline GetAssistantCapabilityRequestMessagesContent& setText(const Models::GetAssistantCapabilityRequestMessagesContentText & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline GetAssistantCapabilityRequestMessagesContent& setText(Models::GetAssistantCapabilityRequestMessagesContentText && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAssistantCapabilityRequestMessagesContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentCardCallback> cardCallback_ = nullptr;
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentDingCard> dingCard_ = nullptr;
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCard> dingNormalCard_ = nullptr;
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentMarkdown> markdown_ = nullptr;
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentStructView> structView_ = nullptr;
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentText> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
