// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATAPPTEMPLATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATAPPTEMPLATEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetChatappTemplateDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatappTemplateDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatappTemplateDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetChatappTemplateDetailResponseBody() = default ;
    GetChatappTemplateDetailResponseBody(const GetChatappTemplateDetailResponseBody &) = default ;
    GetChatappTemplateDetailResponseBody(GetChatappTemplateDetailResponseBody &&) = default ;
    GetChatappTemplateDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatappTemplateDetailResponseBody() = default ;
    GetChatappTemplateDetailResponseBody& operator=(const GetChatappTemplateDetailResponseBody &) = default ;
    GetChatappTemplateDetailResponseBody& operator=(GetChatappTemplateDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllowSend, allowSend_);
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CategoryChangePaused, categoryChangePaused_);
        DARABONBA_PTR_TO_JSON(Components, components_);
        DARABONBA_PTR_TO_JSON(Example, example_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(MessageSendTtlSeconds, messageSendTtlSeconds_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(QualityScore, qualityScore_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowSend, allowSend_);
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CategoryChangePaused, categoryChangePaused_);
        DARABONBA_PTR_FROM_JSON(Components, components_);
        DARABONBA_PTR_FROM_JSON(Example, example_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(MessageSendTtlSeconds, messageSendTtlSeconds_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(QualityScore, qualityScore_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Components : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Components& obj) { 
          DARABONBA_PTR_TO_JSON(AddSecretRecommendation, addSecretRecommendation_);
          DARABONBA_PTR_TO_JSON(Buttons, buttons_);
          DARABONBA_PTR_TO_JSON(Caption, caption_);
          DARABONBA_PTR_TO_JSON(Cards, cards_);
          DARABONBA_PTR_TO_JSON(CodeExpirationMinutes, codeExpirationMinutes_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(Latitude, latitude_);
          DARABONBA_PTR_TO_JSON(LocationAddress, locationAddress_);
          DARABONBA_PTR_TO_JSON(LocationName, locationName_);
          DARABONBA_PTR_TO_JSON(Longitude, longitude_);
          DARABONBA_PTR_TO_JSON(OfferExpirationTimeMs, offerExpirationTimeMs_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(ThumbUrl, thumbUrl_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(hasExpiration, hasExpiration_);
        };
        friend void from_json(const Darabonba::Json& j, Components& obj) { 
          DARABONBA_PTR_FROM_JSON(AddSecretRecommendation, addSecretRecommendation_);
          DARABONBA_PTR_FROM_JSON(Buttons, buttons_);
          DARABONBA_PTR_FROM_JSON(Caption, caption_);
          DARABONBA_PTR_FROM_JSON(Cards, cards_);
          DARABONBA_PTR_FROM_JSON(CodeExpirationMinutes, codeExpirationMinutes_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
          DARABONBA_PTR_FROM_JSON(LocationAddress, locationAddress_);
          DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
          DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
          DARABONBA_PTR_FROM_JSON(OfferExpirationTimeMs, offerExpirationTimeMs_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(ThumbUrl, thumbUrl_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(hasExpiration, hasExpiration_);
        };
        Components() = default ;
        Components(const Components &) = default ;
        Components(Components &&) = default ;
        Components(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Components() = default ;
        Components& operator=(const Components &) = default ;
        Components& operator=(Components &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Cards : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cards& obj) { 
            DARABONBA_PTR_TO_JSON(CardComponents, cardComponents_);
          };
          friend void from_json(const Darabonba::Json& j, Cards& obj) { 
            DARABONBA_PTR_FROM_JSON(CardComponents, cardComponents_);
          };
          Cards() = default ;
          Cards(const Cards &) = default ;
          Cards(Cards &&) = default ;
          Cards(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cards() = default ;
          Cards& operator=(const Cards &) = default ;
          Cards& operator=(Cards &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CardComponents : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CardComponents& obj) { 
              DARABONBA_PTR_TO_JSON(Buttons, buttons_);
              DARABONBA_PTR_TO_JSON(Format, format_);
              DARABONBA_PTR_TO_JSON(Text, text_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, CardComponents& obj) { 
              DARABONBA_PTR_FROM_JSON(Buttons, buttons_);
              DARABONBA_PTR_FROM_JSON(Format, format_);
              DARABONBA_PTR_FROM_JSON(Text, text_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            CardComponents() = default ;
            CardComponents(const CardComponents &) = default ;
            CardComponents(CardComponents &&) = default ;
            CardComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CardComponents() = default ;
            CardComponents& operator=(const CardComponents &) = default ;
            CardComponents& operator=(CardComponents &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Buttons : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Buttons& obj) { 
                DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
                DARABONBA_PTR_TO_JSON(Text, text_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(Url, url_);
                DARABONBA_PTR_TO_JSON(UrlType, urlType_);
              };
              friend void from_json(const Darabonba::Json& j, Buttons& obj) { 
                DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
                DARABONBA_PTR_FROM_JSON(Text, text_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(Url, url_);
                DARABONBA_PTR_FROM_JSON(UrlType, urlType_);
              };
              Buttons() = default ;
              Buttons(const Buttons &) = default ;
              Buttons(Buttons &&) = default ;
              Buttons(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Buttons() = default ;
              Buttons& operator=(const Buttons &) = default ;
              Buttons& operator=(Buttons &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->phoneNumber_ == nullptr
        && this->text_ == nullptr && this->type_ == nullptr && this->url_ == nullptr && this->urlType_ == nullptr; };
              // phoneNumber Field Functions 
              bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
              void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
              inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
              inline Buttons& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


              // text Field Functions 
              bool hasText() const { return this->text_ != nullptr;};
              void deleteText() { this->text_ = nullptr;};
              inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
              inline Buttons& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Buttons& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // url Field Functions 
              bool hasUrl() const { return this->url_ != nullptr;};
              void deleteUrl() { this->url_ = nullptr;};
              inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
              inline Buttons& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


              // urlType Field Functions 
              bool hasUrlType() const { return this->urlType_ != nullptr;};
              void deleteUrlType() { this->urlType_ = nullptr;};
              inline string getUrlType() const { DARABONBA_PTR_GET_DEFAULT(urlType_, "") };
              inline Buttons& setUrlType(string urlType) { DARABONBA_PTR_SET_VALUE(urlType_, urlType) };


            protected:
              // The phone number.
              shared_ptr<string> phoneNumber_ {};
              // The button content.
              shared_ptr<string> text_ {};
              // The button type for carousel templates. Valid values: URL, PHONE_NUMBER, and QUICK_REPLY.
              shared_ptr<string> type_ {};
              // The URL accessed when the button is clicked.
              shared_ptr<string> url_ {};
              // The URL type. Valid values:
              //  
              // - static: static.
              // 
              // - dynamic: dynamic.
              shared_ptr<string> urlType_ {};
            };

            virtual bool empty() const override { return this->buttons_ == nullptr
        && this->format_ == nullptr && this->text_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
            // buttons Field Functions 
            bool hasButtons() const { return this->buttons_ != nullptr;};
            void deleteButtons() { this->buttons_ = nullptr;};
            inline const vector<CardComponents::Buttons> & getButtons() const { DARABONBA_PTR_GET_CONST(buttons_, vector<CardComponents::Buttons>) };
            inline vector<CardComponents::Buttons> getButtons() { DARABONBA_PTR_GET(buttons_, vector<CardComponents::Buttons>) };
            inline CardComponents& setButtons(const vector<CardComponents::Buttons> & buttons) { DARABONBA_PTR_SET_VALUE(buttons_, buttons) };
            inline CardComponents& setButtons(vector<CardComponents::Buttons> && buttons) { DARABONBA_PTR_SET_RVALUE(buttons_, buttons) };


            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
            inline CardComponents& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline CardComponents& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline CardComponents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline CardComponents& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The list of card buttons.
            shared_ptr<vector<CardComponents::Buttons>> buttons_ {};
            // The header type in carousel templates. Only IMAGE and VIDEO are supported. All cards must have the same header type.
            shared_ptr<string> format_ {};
            // The text content of the card.
            shared_ptr<string> text_ {};
            // The component type.
            shared_ptr<string> type_ {};
            // The web address.
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->cardComponents_ == nullptr; };
          // cardComponents Field Functions 
          bool hasCardComponents() const { return this->cardComponents_ != nullptr;};
          void deleteCardComponents() { this->cardComponents_ = nullptr;};
          inline const vector<Cards::CardComponents> & getCardComponents() const { DARABONBA_PTR_GET_CONST(cardComponents_, vector<Cards::CardComponents>) };
          inline vector<Cards::CardComponents> getCardComponents() { DARABONBA_PTR_GET(cardComponents_, vector<Cards::CardComponents>) };
          inline Cards& setCardComponents(const vector<Cards::CardComponents> & cardComponents) { DARABONBA_PTR_SET_VALUE(cardComponents_, cardComponents) };
          inline Cards& setCardComponents(vector<Cards::CardComponents> && cardComponents) { DARABONBA_PTR_SET_RVALUE(cardComponents_, cardComponents) };


        protected:
          // The list of card components.
          shared_ptr<vector<Cards::CardComponents>> cardComponents_ {};
        };

        class Buttons : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Buttons& obj) { 
            DARABONBA_PTR_TO_JSON(AutofillText, autofillText_);
            DARABONBA_PTR_TO_JSON(CouponCode, couponCode_);
            DARABONBA_PTR_TO_JSON(ExtendAttrs, extendAttrs_);
            DARABONBA_PTR_TO_JSON(FlowAction, flowAction_);
            DARABONBA_PTR_TO_JSON(FlowId, flowId_);
            DARABONBA_PTR_TO_JSON(IsOptOut, isOptOut_);
            DARABONBA_PTR_TO_JSON(NavigateScreen, navigateScreen_);
            DARABONBA_PTR_TO_JSON(PackageName, packageName_);
            DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
            DARABONBA_PTR_TO_JSON(SignatureHash, signatureHash_);
            DARABONBA_PTR_TO_JSON(SupportedApps, supportedApps_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Url, url_);
            DARABONBA_PTR_TO_JSON(UrlType, urlType_);
          };
          friend void from_json(const Darabonba::Json& j, Buttons& obj) { 
            DARABONBA_PTR_FROM_JSON(AutofillText, autofillText_);
            DARABONBA_PTR_FROM_JSON(CouponCode, couponCode_);
            DARABONBA_PTR_FROM_JSON(ExtendAttrs, extendAttrs_);
            DARABONBA_PTR_FROM_JSON(FlowAction, flowAction_);
            DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
            DARABONBA_PTR_FROM_JSON(IsOptOut, isOptOut_);
            DARABONBA_PTR_FROM_JSON(NavigateScreen, navigateScreen_);
            DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
            DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
            DARABONBA_PTR_FROM_JSON(SignatureHash, signatureHash_);
            DARABONBA_PTR_FROM_JSON(SupportedApps, supportedApps_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
            DARABONBA_PTR_FROM_JSON(UrlType, urlType_);
          };
          Buttons() = default ;
          Buttons(const Buttons &) = default ;
          Buttons(Buttons &&) = default ;
          Buttons(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Buttons() = default ;
          Buttons& operator=(const Buttons &) = default ;
          Buttons& operator=(Buttons &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SupportedApps : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SupportedApps& obj) { 
              DARABONBA_PTR_TO_JSON(PackageName, packageName_);
              DARABONBA_PTR_TO_JSON(SignatureHash, signatureHash_);
            };
            friend void from_json(const Darabonba::Json& j, SupportedApps& obj) { 
              DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
              DARABONBA_PTR_FROM_JSON(SignatureHash, signatureHash_);
            };
            SupportedApps() = default ;
            SupportedApps(const SupportedApps &) = default ;
            SupportedApps(SupportedApps &&) = default ;
            SupportedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SupportedApps() = default ;
            SupportedApps& operator=(const SupportedApps &) = default ;
            SupportedApps& operator=(SupportedApps &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->packageName_ == nullptr
        && this->signatureHash_ == nullptr; };
            // packageName Field Functions 
            bool hasPackageName() const { return this->packageName_ != nullptr;};
            void deletePackageName() { this->packageName_ = nullptr;};
            inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
            inline SupportedApps& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


            // signatureHash Field Functions 
            bool hasSignatureHash() const { return this->signatureHash_ != nullptr;};
            void deleteSignatureHash() { this->signatureHash_ = nullptr;};
            inline string getSignatureHash() const { DARABONBA_PTR_GET_DEFAULT(signatureHash_, "") };
            inline SupportedApps& setSignatureHash(string signatureHash) { DARABONBA_PTR_SET_VALUE(signatureHash_, signatureHash) };


          protected:
            // The package name.
            shared_ptr<string> packageName_ {};
            // The package signature hash.
            shared_ptr<string> signatureHash_ {};
          };

          class ExtendAttrs : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ExtendAttrs& obj) { 
              DARABONBA_PTR_TO_JSON(Action, action_);
              DARABONBA_PTR_TO_JSON(IntentCode, intentCode_);
              DARABONBA_PTR_TO_JSON(NextLanguageCode, nextLanguageCode_);
              DARABONBA_PTR_TO_JSON(NextTemplateCode, nextTemplateCode_);
              DARABONBA_PTR_TO_JSON(NextTemplateName, nextTemplateName_);
            };
            friend void from_json(const Darabonba::Json& j, ExtendAttrs& obj) { 
              DARABONBA_PTR_FROM_JSON(Action, action_);
              DARABONBA_PTR_FROM_JSON(IntentCode, intentCode_);
              DARABONBA_PTR_FROM_JSON(NextLanguageCode, nextLanguageCode_);
              DARABONBA_PTR_FROM_JSON(NextTemplateCode, nextTemplateCode_);
              DARABONBA_PTR_FROM_JSON(NextTemplateName, nextTemplateName_);
            };
            ExtendAttrs() = default ;
            ExtendAttrs(const ExtendAttrs &) = default ;
            ExtendAttrs(ExtendAttrs &&) = default ;
            ExtendAttrs(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ExtendAttrs() = default ;
            ExtendAttrs& operator=(const ExtendAttrs &) = default ;
            ExtendAttrs& operator=(ExtendAttrs &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->action_ == nullptr
        && this->intentCode_ == nullptr && this->nextLanguageCode_ == nullptr && this->nextTemplateCode_ == nullptr && this->nextTemplateName_ == nullptr; };
            // action Field Functions 
            bool hasAction() const { return this->action_ != nullptr;};
            void deleteAction() { this->action_ = nullptr;};
            inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
            inline ExtendAttrs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


            // intentCode Field Functions 
            bool hasIntentCode() const { return this->intentCode_ != nullptr;};
            void deleteIntentCode() { this->intentCode_ = nullptr;};
            inline string getIntentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
            inline ExtendAttrs& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


            // nextLanguageCode Field Functions 
            bool hasNextLanguageCode() const { return this->nextLanguageCode_ != nullptr;};
            void deleteNextLanguageCode() { this->nextLanguageCode_ = nullptr;};
            inline string getNextLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(nextLanguageCode_, "") };
            inline ExtendAttrs& setNextLanguageCode(string nextLanguageCode) { DARABONBA_PTR_SET_VALUE(nextLanguageCode_, nextLanguageCode) };


            // nextTemplateCode Field Functions 
            bool hasNextTemplateCode() const { return this->nextTemplateCode_ != nullptr;};
            void deleteNextTemplateCode() { this->nextTemplateCode_ = nullptr;};
            inline string getNextTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(nextTemplateCode_, "") };
            inline ExtendAttrs& setNextTemplateCode(string nextTemplateCode) { DARABONBA_PTR_SET_VALUE(nextTemplateCode_, nextTemplateCode) };


            // nextTemplateName Field Functions 
            bool hasNextTemplateName() const { return this->nextTemplateName_ != nullptr;};
            void deleteNextTemplateName() { this->nextTemplateName_ = nullptr;};
            inline string getNextTemplateName() const { DARABONBA_PTR_GET_DEFAULT(nextTemplateName_, "") };
            inline ExtendAttrs& setNextTemplateName(string nextTemplateName) { DARABONBA_PTR_SET_VALUE(nextTemplateName_, nextTemplateName) };


          protected:
            // The event type.
            shared_ptr<string> action_ {};
            // The intent code.
            shared_ptr<string> intentCode_ {};
            // The next template language.
            shared_ptr<string> nextLanguageCode_ {};
            // The next template code.
            shared_ptr<string> nextTemplateCode_ {};
            // The next template name.
            shared_ptr<string> nextTemplateName_ {};
          };

          virtual bool empty() const override { return this->autofillText_ == nullptr
        && this->couponCode_ == nullptr && this->extendAttrs_ == nullptr && this->flowAction_ == nullptr && this->flowId_ == nullptr && this->isOptOut_ == nullptr
        && this->navigateScreen_ == nullptr && this->packageName_ == nullptr && this->phoneNumber_ == nullptr && this->signatureHash_ == nullptr && this->supportedApps_ == nullptr
        && this->text_ == nullptr && this->type_ == nullptr && this->url_ == nullptr && this->urlType_ == nullptr; };
          // autofillText Field Functions 
          bool hasAutofillText() const { return this->autofillText_ != nullptr;};
          void deleteAutofillText() { this->autofillText_ = nullptr;};
          inline string getAutofillText() const { DARABONBA_PTR_GET_DEFAULT(autofillText_, "") };
          inline Buttons& setAutofillText(string autofillText) { DARABONBA_PTR_SET_VALUE(autofillText_, autofillText) };


          // couponCode Field Functions 
          bool hasCouponCode() const { return this->couponCode_ != nullptr;};
          void deleteCouponCode() { this->couponCode_ = nullptr;};
          inline string getCouponCode() const { DARABONBA_PTR_GET_DEFAULT(couponCode_, "") };
          inline Buttons& setCouponCode(string couponCode) { DARABONBA_PTR_SET_VALUE(couponCode_, couponCode) };


          // extendAttrs Field Functions 
          bool hasExtendAttrs() const { return this->extendAttrs_ != nullptr;};
          void deleteExtendAttrs() { this->extendAttrs_ = nullptr;};
          inline const Buttons::ExtendAttrs & getExtendAttrs() const { DARABONBA_PTR_GET_CONST(extendAttrs_, Buttons::ExtendAttrs) };
          inline Buttons::ExtendAttrs getExtendAttrs() { DARABONBA_PTR_GET(extendAttrs_, Buttons::ExtendAttrs) };
          inline Buttons& setExtendAttrs(const Buttons::ExtendAttrs & extendAttrs) { DARABONBA_PTR_SET_VALUE(extendAttrs_, extendAttrs) };
          inline Buttons& setExtendAttrs(Buttons::ExtendAttrs && extendAttrs) { DARABONBA_PTR_SET_RVALUE(extendAttrs_, extendAttrs) };


          // flowAction Field Functions 
          bool hasFlowAction() const { return this->flowAction_ != nullptr;};
          void deleteFlowAction() { this->flowAction_ = nullptr;};
          inline string getFlowAction() const { DARABONBA_PTR_GET_DEFAULT(flowAction_, "") };
          inline Buttons& setFlowAction(string flowAction) { DARABONBA_PTR_SET_VALUE(flowAction_, flowAction) };


          // flowId Field Functions 
          bool hasFlowId() const { return this->flowId_ != nullptr;};
          void deleteFlowId() { this->flowId_ = nullptr;};
          inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
          inline Buttons& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


          // isOptOut Field Functions 
          bool hasIsOptOut() const { return this->isOptOut_ != nullptr;};
          void deleteIsOptOut() { this->isOptOut_ = nullptr;};
          inline bool getIsOptOut() const { DARABONBA_PTR_GET_DEFAULT(isOptOut_, false) };
          inline Buttons& setIsOptOut(bool isOptOut) { DARABONBA_PTR_SET_VALUE(isOptOut_, isOptOut) };


          // navigateScreen Field Functions 
          bool hasNavigateScreen() const { return this->navigateScreen_ != nullptr;};
          void deleteNavigateScreen() { this->navigateScreen_ = nullptr;};
          inline string getNavigateScreen() const { DARABONBA_PTR_GET_DEFAULT(navigateScreen_, "") };
          inline Buttons& setNavigateScreen(string navigateScreen) { DARABONBA_PTR_SET_VALUE(navigateScreen_, navigateScreen) };


          // packageName Field Functions 
          bool hasPackageName() const { return this->packageName_ != nullptr;};
          void deletePackageName() { this->packageName_ = nullptr;};
          inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
          inline Buttons& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


          // phoneNumber Field Functions 
          bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
          void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
          inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
          inline Buttons& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


          // signatureHash Field Functions 
          bool hasSignatureHash() const { return this->signatureHash_ != nullptr;};
          void deleteSignatureHash() { this->signatureHash_ = nullptr;};
          inline string getSignatureHash() const { DARABONBA_PTR_GET_DEFAULT(signatureHash_, "") };
          inline Buttons& setSignatureHash(string signatureHash) { DARABONBA_PTR_SET_VALUE(signatureHash_, signatureHash) };


          // supportedApps Field Functions 
          bool hasSupportedApps() const { return this->supportedApps_ != nullptr;};
          void deleteSupportedApps() { this->supportedApps_ = nullptr;};
          inline const vector<Buttons::SupportedApps> & getSupportedApps() const { DARABONBA_PTR_GET_CONST(supportedApps_, vector<Buttons::SupportedApps>) };
          inline vector<Buttons::SupportedApps> getSupportedApps() { DARABONBA_PTR_GET(supportedApps_, vector<Buttons::SupportedApps>) };
          inline Buttons& setSupportedApps(const vector<Buttons::SupportedApps> & supportedApps) { DARABONBA_PTR_SET_VALUE(supportedApps_, supportedApps) };
          inline Buttons& setSupportedApps(vector<Buttons::SupportedApps> && supportedApps) { DARABONBA_PTR_SET_RVALUE(supportedApps_, supportedApps) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Buttons& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Buttons& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Buttons& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          // urlType Field Functions 
          bool hasUrlType() const { return this->urlType_ != nullptr;};
          void deleteUrlType() { this->urlType_ = nullptr;};
          inline string getUrlType() const { DARABONBA_PTR_GET_DEFAULT(urlType_, "") };
          inline Buttons& setUrlType(string urlType) { DARABONBA_PTR_SET_VALUE(urlType_, urlType) };


        protected:
          // Required when the WhatsApp template Category is Authentication and Button Type is ONE_TAP. The button text for the WhatsApp autofill operation.
          shared_ptr<string> autofillText_ {};
          // The coupon code.
          shared_ptr<string> couponCode_ {};
          // The extended attributes.
          shared_ptr<Buttons::ExtendAttrs> extendAttrs_ {};
          // The flow data event type. Valid values:
          // 
          // - NAVIGATE: navigation
          // 
          // - DATA_EXCHANGE: data exchange
          shared_ptr<string> flowAction_ {};
          // Flow ID
          shared_ptr<string> flowId_ {};
          // Valid when the WhatsApp template Category is Marketing and Button Type is QUICK_REPLY. Indicates that the button is a marketing opt-out button. If the customer clicks this button and the send control operation is configured on the Chat App platform, subsequent marketing messages will not be sent to the customer.
          shared_ptr<bool> isOptOut_ {};
          // The navigate screen. Required when FlowAction is set to NAVIGATE.
          shared_ptr<string> navigateScreen_ {};
          // Required when the WhatsApp template Category is Authentication and Button Type is ONE_TAP. The package name of the application launched by WhatsApp.
          shared_ptr<string> packageName_ {};
          // The phone number. Valid only when the button type is **PHONE_NUMBER**.
          shared_ptr<string> phoneNumber_ {};
          // Required when the WhatsApp template Category is Authentication and Button Type is ONE_TAP. The signature hash value used by WhatsApp to launch the application.
          shared_ptr<string> signatureHash_ {};
          // The applications supported by ONE_TAP/ZERO_TAP verification code.
          shared_ptr<vector<Buttons::SupportedApps>> supportedApps_ {};
          // The display name of the button.
          shared_ptr<string> text_ {};
          // The button type.
          // 
          // - **PHONE_NUMBER**: call button
          // 
          // - **URL**: web page button
          // 
          // - **QUICK_REPLY**: quick reply button
          // 
          // - **COPY_CODE**: copy verification code or coupon code
          // 
          // - **ONE_TAP**: autofill button for AUTHENTICATION templates
          // 
          // - **ZERO_TAP**: autofill button for AUTHENTICATION templates
          // 
          // - **MPM**: multi-product catalog
          // 
          // - **CATALOG**: catalog
          // 
          // - **FLOW**: open WhatsApp flow
          // 
          // > - For WhatsApp templates with Category set to AUTHENTICATION, only one button is allowed, and the type can only be COPY_CODE or ONE_TAP. If the type is COPY_CODE, Text is required. If the type is ONE_TAP, Text (displayed when the target application is not installed on the device, indicating the name of the copy verification code button), SignatureHash, PackageName, and AutofillText are required.
          // > - Viber templates allow only one button, and it must be of the URL type.
          shared_ptr<string> type_ {};
          // The URL that is accessed when the link button is clicked.
          shared_ptr<string> url_ {};
          // The URL type.
          // 
          // - **static**: static.
          // 
          // - **dynamic**: dynamic.
          shared_ptr<string> urlType_ {};
        };

        virtual bool empty() const override { return this->addSecretRecommendation_ == nullptr
        && this->buttons_ == nullptr && this->caption_ == nullptr && this->cards_ == nullptr && this->codeExpirationMinutes_ == nullptr && this->duration_ == nullptr
        && this->fileName_ == nullptr && this->fileType_ == nullptr && this->format_ == nullptr && this->latitude_ == nullptr && this->locationAddress_ == nullptr
        && this->locationName_ == nullptr && this->longitude_ == nullptr && this->offerExpirationTimeMs_ == nullptr && this->text_ == nullptr && this->thumbUrl_ == nullptr
        && this->type_ == nullptr && this->url_ == nullptr && this->hasExpiration_ == nullptr; };
        // addSecretRecommendation Field Functions 
        bool hasAddSecretRecommendation() const { return this->addSecretRecommendation_ != nullptr;};
        void deleteAddSecretRecommendation() { this->addSecretRecommendation_ = nullptr;};
        inline bool getAddSecretRecommendation() const { DARABONBA_PTR_GET_DEFAULT(addSecretRecommendation_, false) };
        inline Components& setAddSecretRecommendation(bool addSecretRecommendation) { DARABONBA_PTR_SET_VALUE(addSecretRecommendation_, addSecretRecommendation) };


        // buttons Field Functions 
        bool hasButtons() const { return this->buttons_ != nullptr;};
        void deleteButtons() { this->buttons_ = nullptr;};
        inline const vector<Components::Buttons> & getButtons() const { DARABONBA_PTR_GET_CONST(buttons_, vector<Components::Buttons>) };
        inline vector<Components::Buttons> getButtons() { DARABONBA_PTR_GET(buttons_, vector<Components::Buttons>) };
        inline Components& setButtons(const vector<Components::Buttons> & buttons) { DARABONBA_PTR_SET_VALUE(buttons_, buttons) };
        inline Components& setButtons(vector<Components::Buttons> && buttons) { DARABONBA_PTR_SET_RVALUE(buttons_, buttons) };


        // caption Field Functions 
        bool hasCaption() const { return this->caption_ != nullptr;};
        void deleteCaption() { this->caption_ = nullptr;};
        inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
        inline Components& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


        // cards Field Functions 
        bool hasCards() const { return this->cards_ != nullptr;};
        void deleteCards() { this->cards_ = nullptr;};
        inline const vector<Components::Cards> & getCards() const { DARABONBA_PTR_GET_CONST(cards_, vector<Components::Cards>) };
        inline vector<Components::Cards> getCards() { DARABONBA_PTR_GET(cards_, vector<Components::Cards>) };
        inline Components& setCards(const vector<Components::Cards> & cards) { DARABONBA_PTR_SET_VALUE(cards_, cards) };
        inline Components& setCards(vector<Components::Cards> && cards) { DARABONBA_PTR_SET_RVALUE(cards_, cards) };


        // codeExpirationMinutes Field Functions 
        bool hasCodeExpirationMinutes() const { return this->codeExpirationMinutes_ != nullptr;};
        void deleteCodeExpirationMinutes() { this->codeExpirationMinutes_ = nullptr;};
        inline int32_t getCodeExpirationMinutes() const { DARABONBA_PTR_GET_DEFAULT(codeExpirationMinutes_, 0) };
        inline Components& setCodeExpirationMinutes(int32_t codeExpirationMinutes) { DARABONBA_PTR_SET_VALUE(codeExpirationMinutes_, codeExpirationMinutes) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline Components& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Components& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline Components& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Components& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // latitude Field Functions 
        bool hasLatitude() const { return this->latitude_ != nullptr;};
        void deleteLatitude() { this->latitude_ = nullptr;};
        inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
        inline Components& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


        // locationAddress Field Functions 
        bool hasLocationAddress() const { return this->locationAddress_ != nullptr;};
        void deleteLocationAddress() { this->locationAddress_ = nullptr;};
        inline string getLocationAddress() const { DARABONBA_PTR_GET_DEFAULT(locationAddress_, "") };
        inline Components& setLocationAddress(string locationAddress) { DARABONBA_PTR_SET_VALUE(locationAddress_, locationAddress) };


        // locationName Field Functions 
        bool hasLocationName() const { return this->locationName_ != nullptr;};
        void deleteLocationName() { this->locationName_ = nullptr;};
        inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
        inline Components& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


        // longitude Field Functions 
        bool hasLongitude() const { return this->longitude_ != nullptr;};
        void deleteLongitude() { this->longitude_ = nullptr;};
        inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
        inline Components& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


        // offerExpirationTimeMs Field Functions 
        bool hasOfferExpirationTimeMs() const { return this->offerExpirationTimeMs_ != nullptr;};
        void deleteOfferExpirationTimeMs() { this->offerExpirationTimeMs_ = nullptr;};
        inline string getOfferExpirationTimeMs() const { DARABONBA_PTR_GET_DEFAULT(offerExpirationTimeMs_, "") };
        inline Components& setOfferExpirationTimeMs(string offerExpirationTimeMs) { DARABONBA_PTR_SET_VALUE(offerExpirationTimeMs_, offerExpirationTimeMs) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Components& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // thumbUrl Field Functions 
        bool hasThumbUrl() const { return this->thumbUrl_ != nullptr;};
        void deleteThumbUrl() { this->thumbUrl_ = nullptr;};
        inline string getThumbUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbUrl_, "") };
        inline Components& setThumbUrl(string thumbUrl) { DARABONBA_PTR_SET_VALUE(thumbUrl_, thumbUrl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Components& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Components& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // hasExpiration Field Functions 
        bool hasHasExpiration() const { return this->hasExpiration_ != nullptr;};
        void deleteHasExpiration() { this->hasExpiration_ = nullptr;};
        inline bool getHasExpiration() const { DARABONBA_PTR_GET_DEFAULT(hasExpiration_, false) };
        inline Components& setHasExpiration(bool hasExpiration) { DARABONBA_PTR_SET_VALUE(hasExpiration_, hasExpiration) };


      protected:
        // Valid for WhatsApp templates when Category is Authentication and Component Type is Body. Displays a recommendation on the Body not to share the verification code with others.
        shared_ptr<bool> addSecretRecommendation_ {};
        // The list of buttons. Applicable only to the **BUTTONS** component.
        // 
        // > WhatsApp button quantity rules:
        // > - When the WhatsApp category is MARKETING or UTILITY, a maximum of 10 buttons are allowed.
        // > - Only one PHONE_NUMBER button is allowed.
        // > - A maximum of two URL buttons are allowed.
        // > - QUICK_REPLY buttons cannot appear in a mixed order with PHONE_NUMBER or URL buttons.
        shared_ptr<vector<Components::Buttons>> buttons_ {};
        // The description of the file.
        shared_ptr<string> caption_ {};
        // The list of carousel cards.
        shared_ptr<vector<Components::Cards>> cards_ {};
        // The verification code validity period (in minutes) for WhatsApp Authentication templates. Valid only for WhatsApp messages when Category is Authentication and Component Type is Footer. This information is displayed in the Footer.
        shared_ptr<int32_t> codeExpirationMinutes_ {};
        // The video duration for Viber video messages. Valid values: 0 to 600.
        shared_ptr<int32_t> duration_ {};
        // The name of the file.
        shared_ptr<string> fileName_ {};
        // The file type for Viber file messages.
        shared_ptr<string> fileType_ {};
        // The format.
        shared_ptr<string> format_ {};
        // The latitude of the location.
        shared_ptr<string> latitude_ {};
        // The address of the location.
        shared_ptr<string> locationAddress_ {};
        // The name of the location.
        shared_ptr<string> locationName_ {};
        // The longitude of the location.
        shared_ptr<string> longitude_ {};
        // The coupon code expiration variable for LTO templates.
        shared_ptr<string> offerExpirationTimeMs_ {};
        // The text of the message to be sent.
        shared_ptr<string> text_ {};
        // The thumbnail for Viber video messages.
        shared_ptr<string> thumbUrl_ {};
        // The component type.
        // 
        // - **BODY**
        // 
        // - **HEADER**
        // 
        // - **FOOTER**
        // 
        //  - **BUTTONS**
        // 
        // - **CAROUSEL**
        // 
        // - **LIMITED_TIME_OFFER**
        // 
        // > - For WhatsApp templates, the character length of the **BODY** component cannot exceed 1024 characters. The character length of the **HEADER** and **FOOTER** components cannot exceed 60 characters.
        // > - For Viber templates, the **FOOTER**, **CAROUSEL**, and **LIMITED_TIME_OFFER** types are invalid.
        // > - In Viber templates, images, videos, and files are placed in the **HEADER** (the device displays images below the text).
        shared_ptr<string> type_ {};
        // The media URL.
        shared_ptr<string> url_ {};
        // Specifies whether the coupon code has an expiration time in limited-time offer (LTO) templates.
        shared_ptr<bool> hasExpiration_ {};
      };

      virtual bool empty() const override { return this->allowSend_ == nullptr
        && this->auditStatus_ == nullptr && this->category_ == nullptr && this->categoryChangePaused_ == nullptr && this->components_ == nullptr && this->example_ == nullptr
        && this->language_ == nullptr && this->messageSendTtlSeconds_ == nullptr && this->name_ == nullptr && this->qualityScore_ == nullptr && this->reason_ == nullptr
        && this->templateCode_ == nullptr && this->templateType_ == nullptr; };
      // allowSend Field Functions 
      bool hasAllowSend() const { return this->allowSend_ != nullptr;};
      void deleteAllowSend() { this->allowSend_ = nullptr;};
      inline bool getAllowSend() const { DARABONBA_PTR_GET_DEFAULT(allowSend_, false) };
      inline Data& setAllowSend(bool allowSend) { DARABONBA_PTR_SET_VALUE(allowSend_, allowSend) };


      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline Data& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // categoryChangePaused Field Functions 
      bool hasCategoryChangePaused() const { return this->categoryChangePaused_ != nullptr;};
      void deleteCategoryChangePaused() { this->categoryChangePaused_ = nullptr;};
      inline bool getCategoryChangePaused() const { DARABONBA_PTR_GET_DEFAULT(categoryChangePaused_, false) };
      inline Data& setCategoryChangePaused(bool categoryChangePaused) { DARABONBA_PTR_SET_VALUE(categoryChangePaused_, categoryChangePaused) };


      // components Field Functions 
      bool hasComponents() const { return this->components_ != nullptr;};
      void deleteComponents() { this->components_ = nullptr;};
      inline const vector<Data::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<Data::Components>) };
      inline vector<Data::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<Data::Components>) };
      inline Data& setComponents(const vector<Data::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
      inline Data& setComponents(vector<Data::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


      // example Field Functions 
      bool hasExample() const { return this->example_ != nullptr;};
      void deleteExample() { this->example_ = nullptr;};
      inline const map<string, string> & getExample() const { DARABONBA_PTR_GET_CONST(example_, map<string, string>) };
      inline map<string, string> getExample() { DARABONBA_PTR_GET(example_, map<string, string>) };
      inline Data& setExample(const map<string, string> & example) { DARABONBA_PTR_SET_VALUE(example_, example) };
      inline Data& setExample(map<string, string> && example) { DARABONBA_PTR_SET_RVALUE(example_, example) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Data& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // messageSendTtlSeconds Field Functions 
      bool hasMessageSendTtlSeconds() const { return this->messageSendTtlSeconds_ != nullptr;};
      void deleteMessageSendTtlSeconds() { this->messageSendTtlSeconds_ = nullptr;};
      inline int32_t getMessageSendTtlSeconds() const { DARABONBA_PTR_GET_DEFAULT(messageSendTtlSeconds_, 0) };
      inline Data& setMessageSendTtlSeconds(int32_t messageSendTtlSeconds) { DARABONBA_PTR_SET_VALUE(messageSendTtlSeconds_, messageSendTtlSeconds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // qualityScore Field Functions 
      bool hasQualityScore() const { return this->qualityScore_ != nullptr;};
      void deleteQualityScore() { this->qualityScore_ = nullptr;};
      inline string getQualityScore() const { DARABONBA_PTR_GET_DEFAULT(qualityScore_, "") };
      inline Data& setQualityScore(string qualityScore) { DARABONBA_PTR_SET_VALUE(qualityScore_, qualityScore) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Data& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Data& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      shared_ptr<bool> allowSend_ {};
      // The audit status. Valid values:
      // 
      // - **pass**: Approved.
      // 
      // - **fail**: Rejected.
      // 
      // - **auditing**: Under review.
      // 
      // - **unaudit**: Review suspended.
      shared_ptr<string> auditStatus_ {};
      // The WhatsApp template category. Valid values:
      // 
      // - **UTILITY**: transaction-related.
      // 
      // - **MARKETING**: marketing template.
      // 
      // - **AUTHENTICATION**: identity verification.
      // 
      // Viber template category. Valid values:
      // - **text**: text only
      // 
      // - **image**: image only
      // 
      // - **text_image_button**: text + image + button
      // 
      // - **text_button**: text + button
      // 
      // - **document**: file
      // 
      // - **video**: video
      // 
      // - **text_video**: text + video
      // 
      // - **text_video_button**: text + video + button
      // 
      // - **text_image**: text + image
      // 
      // > When the Viber template value is text_video_button, the button does not open a web page. Instead, it opens the video of the current message within the web page. Therefore, you do not need to enter any address information in the URL of the button.
      shared_ptr<string> category_ {};
      shared_ptr<bool> categoryChangePaused_ {};
      // The list of message template components.
      shared_ptr<vector<Data::Components>> components_ {};
      // The variable examples.
      shared_ptr<map<string, string>> example_ {};
      // The language of the template. For detailed language codes, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
      shared_ptr<string> language_ {};
      // The message validity period when sending messages with WhatsApp Authentication templates.
      shared_ptr<int32_t> messageSendTtlSeconds_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The template quality.
      // - RED (low quality)
      // - YELLOW (medium quality)
      // - UNKNOWN (unknown quality)
      // - GREEN (high quality)
      shared_ptr<string> qualityScore_ {};
      // The reason why the template was rejected during review.
      shared_ptr<string> reason_ {};
      // The code of the template.
      shared_ptr<string> templateCode_ {};
      // The templatetype.
      // 
      // - **WHATSAPP**
      // 
      // - **VIBER**
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetChatappTemplateDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChatappTemplateDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetChatappTemplateDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetChatappTemplateDetailResponseBody::Data) };
    inline GetChatappTemplateDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetChatappTemplateDetailResponseBody::Data) };
    inline GetChatappTemplateDetailResponseBody& setData(const GetChatappTemplateDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatappTemplateDetailResponseBody& setData(GetChatappTemplateDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChatappTemplateDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatappTemplateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access denied details.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code.
    // 
    // - OK indicates that the request was successful.
    // 
    // - For other error codes, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetChatappTemplateDetailResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
