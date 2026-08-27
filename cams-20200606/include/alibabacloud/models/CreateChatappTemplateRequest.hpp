// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATAPPTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATAPPTEMPLATEREQUEST_HPP_
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
  class CreateChatappTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatappTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCategoryChange, allowCategoryChange_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CategoryChangePaused, categoryChangePaused_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_TO_JSON(Example, example_);
      DARABONBA_PTR_TO_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MessageSendTtlSeconds, messageSendTtlSeconds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductSetId, productSetId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatappTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCategoryChange, allowCategoryChange_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CategoryChangePaused, categoryChangePaused_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_FROM_JSON(Example, example_);
      DARABONBA_PTR_FROM_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MessageSendTtlSeconds, messageSendTtlSeconds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductSetId, productSetId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateChatappTemplateRequest() = default ;
    CreateChatappTemplateRequest(const CreateChatappTemplateRequest &) = default ;
    CreateChatappTemplateRequest(CreateChatappTemplateRequest &&) = default ;
    CreateChatappTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatappTemplateRequest() = default ;
    CreateChatappTemplateRequest& operator=(const CreateChatappTemplateRequest &) = default ;
    CreateChatappTemplateRequest& operator=(CreateChatappTemplateRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(HasExpiration, hasExpiration_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(ThumbUrl, thumbUrl_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
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
        DARABONBA_PTR_FROM_JSON(HasExpiration, hasExpiration_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(ThumbUrl, thumbUrl_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
            // The button text.
            shared_ptr<string> text_ {};
            // The button type.
            // 
            // - **PHONE_NUMBER**: dial phone button
            // 
            // - **URL**: web button
            // 
            // - **QUICK_REPLY**: quick reply button
            // 
            // This parameter is required.
            shared_ptr<string> type_ {};
            // The URL that is accessed when the button is clicked.
            shared_ptr<string> url_ {};
            // The URL type. 
            // 
            // - **static**: Static.
            // 
            // - **dynamic**: Dynamic.
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
          // The button list. Applicable only to BUTTONS components. Each Carousel card can have a maximum of two buttons.
          shared_ptr<vector<CardComponents::Buttons>> buttons_ {};
          // The media resource type. Valid when Type = HEADER.
          // 
          // - **IMAGE**: image 
          // 
          // - **VIDEO**: video
          shared_ptr<string> format_ {};
          // The BODY content in the Carousel card.
          shared_ptr<string> text_ {};
          // The component type. Valid values:
          // 
          // - **BODY**
          // 
          // - **HEADER**
          // 
          // - **BUTTONS**
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
          // The material path.
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
        // The list of components in the Carousel card.
        shared_ptr<vector<Cards::CardComponents>> cardComponents_ {};
      };

      class Buttons : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Buttons& obj) { 
          DARABONBA_PTR_TO_JSON(AutofillText, autofillText_);
          DARABONBA_PTR_TO_JSON(CouponCode, couponCode_);
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
          // Required for WhatsApp templates when Category is AUTHENTICATION and Button Type is ONE_TAP/ZERO_TAP. The package name of the application invoked by WhatsApp.
          shared_ptr<string> packageName_ {};
          // Required for WhatsApp templates when Category is AUTHENTICATION and Button Type is ONE_TAP/ZERO_TAP. The signature hash value for the application invoked by WhatsApp.
          shared_ptr<string> signatureHash_ {};
        };

        virtual bool empty() const override { return this->autofillText_ == nullptr
        && this->couponCode_ == nullptr && this->flowAction_ == nullptr && this->flowId_ == nullptr && this->isOptOut_ == nullptr && this->navigateScreen_ == nullptr
        && this->packageName_ == nullptr && this->phoneNumber_ == nullptr && this->signatureHash_ == nullptr && this->supportedApps_ == nullptr && this->text_ == nullptr
        && this->type_ == nullptr && this->url_ == nullptr && this->urlType_ == nullptr; };
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
        // Required for WhatsApp templates when Category is AUTHENTICATION and Button Type is ONE_TAP/ZERO_TAP. The button text for the WhatsApp Autofill operation.
        shared_ptr<string> autofillText_ {};
        // The coupon code value. Only letters and numbers are supported. You can pass in a variable such as $(couponCode) and provide the actual coupon code when sending.
        shared_ptr<string> couponCode_ {};
        // The Flow data event type. Valid values:
        // 
        // - DATA_EXCHANGE: data exchange.
        // 
        // - NAVIGATE: navigation.
        shared_ptr<string> flowAction_ {};
        // Flow ID。
        shared_ptr<string> flowId_ {};
        // Valid for WhatsApp templates when Category is Marketing and Button type is QUICK_REPLY. Indicates the button is a marketing opt-out button. If the customer clicks this button and send control is configured on ChatApp, subsequent Marketing messages will not be sent to the customer.
        shared_ptr<bool> isOptOut_ {};
        // The navigate screen. Required when FlowAction=NAVIGATE.
        shared_ptr<string> navigateScreen_ {};
        // Use the properties under SupportedApps instead.
        shared_ptr<string> packageName_ {};
        // The phone number. Valid only when the button type is **PHONE_NUMBER**.
        shared_ptr<string> phoneNumber_ {};
        // Use the properties under SupportedApps instead.
        shared_ptr<string> signatureHash_ {};
        // The list of supported applications.
        shared_ptr<vector<Buttons::SupportedApps>> supportedApps_ {};
        // The display name of the button.
        shared_ptr<string> text_ {};
        // The button type.
        // 
        // - **PHONE_NUMBER**: dial phone button
        // 
        // - **URL**: web button
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
        // > - For WhatsApp templates with Category AUTHENTICATION, only one button is allowed, and the type can only be COPY_CODE/ONE_TAP. When COPY_CODE is selected, Text is required. When ONE_TAP is selected, Text (displayed when the target application is not installed on the device, representing the copy verification code button name), SignatureHash, PackageName, and AutofillText are required.
        // > - Viber templates allow only one Button, and it must be URL type.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
        // The URL to visit when the link button is clicked.
        shared_ptr<string> url_ {};
        // The URL type.
        // 
        // - **static**: static
        // 
        // - **dynamic**: dynamic
        shared_ptr<string> urlType_ {};
      };

      virtual bool empty() const override { return this->addSecretRecommendation_ == nullptr
        && this->buttons_ == nullptr && this->caption_ == nullptr && this->cards_ == nullptr && this->codeExpirationMinutes_ == nullptr && this->duration_ == nullptr
        && this->fileName_ == nullptr && this->fileType_ == nullptr && this->format_ == nullptr && this->hasExpiration_ == nullptr && this->text_ == nullptr
        && this->thumbUrl_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
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


      // hasExpiration Field Functions 
      bool hasHasExpiration() const { return this->hasExpiration_ != nullptr;};
      void deleteHasExpiration() { this->hasExpiration_ = nullptr;};
      inline bool getHasExpiration() const { DARABONBA_PTR_GET_DEFAULT(hasExpiration_, false) };
      inline Components& setHasExpiration(bool hasExpiration) { DARABONBA_PTR_SET_VALUE(hasExpiration_, hasExpiration) };


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


    protected:
      // Valid for WhatsApp templates when Category is AUTHENTICATION and Component Type is Body. Displays a prompt above the Body advising not to share the verification code with others.
      shared_ptr<bool> addSecretRecommendation_ {};
      // The button list. Applicable only to **BUTTONS** components.
      // 
      // > WhatsApp button quantity rules:
      // > - For WhatsApp templates with Category MARKETING/UTILITY, a maximum of 10 buttons are allowed.
      // > - Only 1 PHONE_NUMBER button is allowed.
      // > - A maximum of 2 URL buttons are allowed.
      // > - QUICK_REPLY buttons cannot appear in mixed order with PHONE_NUMBER/URL buttons.
      // 
      // > Viber button quantity rules:
      // > - Only URL type is supported, and only one button is allowed.
      // > - When the HEADER contains a VIDEO, the button type is URL, but you cannot set a URL address.
      shared_ptr<vector<Components::Buttons>> buttons_ {};
      // The description of the file.
      shared_ptr<string> caption_ {};
      // The Carousel template card list.
      shared_ptr<vector<Components::Cards>> cards_ {};
      // The validity period (in minutes) of the verification code for WhatsApp AUTHENTICATION templates. Valid only for WhatsApp messages when Category is AUTHENTICATION and Component Type is Footer (displayed in the Footer position).
      shared_ptr<int32_t> codeExpirationMinutes_ {};
      // The duration (in seconds) of Viber video messages. Valid values: 0 to 600.
      shared_ptr<int32_t> duration_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The file type for Viber file messages.
      shared_ptr<string> fileType_ {};
      // The media resource type.
      // 
      // - **TEXT**: text
      //  
      // - **IMAGE**: image
      // 
      // - **DOCUMENT**: document
      // 
      // - **VIDEO**: video
      shared_ptr<string> format_ {};
      // Specifies whether the coupon code has an expiration time. This parameter is used when type = LIMITED_TIME_OFFER.
      shared_ptr<bool> hasExpiration_ {};
      // The text of the message to be sent.
      // 
      // > For WHATSAPP type, this property value is empty when Category=AUTHENTICATION.
      shared_ptr<string> text_ {};
      // The thumbnail for Viber video messages.
      shared_ptr<string> thumbUrl_ {};
      // The component type. Valid values:
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
      // > - For WhatsApp templates, the **BODY** component cannot exceed 1024 characters. The **HEADER** and **FOOTER** components cannot exceed 60 characters.
      // > - For Viber templates, the **FOOTER**, **CAROUSEL**, and **LIMITED_TIME_OFFER** types are invalid.
      // > - For Viber templates, images, videos, and files are placed in the **HEADER** (the device displays images below the text). Text is placed in the **BODY**.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The media resource path.
      // 
      // > For Viber type, the recommended image size is 800 px × 800 px.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->allowCategoryChange_ == nullptr
        && this->category_ == nullptr && this->categoryChangePaused_ == nullptr && this->components_ == nullptr && this->custSpaceId_ == nullptr && this->custWabaId_ == nullptr
        && this->example_ == nullptr && this->isvCode_ == nullptr && this->language_ == nullptr && this->messageSendTtlSeconds_ == nullptr && this->name_ == nullptr
        && this->productSetId_ == nullptr && this->templateType_ == nullptr; };
    // allowCategoryChange Field Functions 
    bool hasAllowCategoryChange() const { return this->allowCategoryChange_ != nullptr;};
    void deleteAllowCategoryChange() { this->allowCategoryChange_ = nullptr;};
    inline bool getAllowCategoryChange() const { DARABONBA_PTR_GET_DEFAULT(allowCategoryChange_, false) };
    inline CreateChatappTemplateRequest& setAllowCategoryChange(bool allowCategoryChange) { DARABONBA_PTR_SET_VALUE(allowCategoryChange_, allowCategoryChange) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateChatappTemplateRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // categoryChangePaused Field Functions 
    bool hasCategoryChangePaused() const { return this->categoryChangePaused_ != nullptr;};
    void deleteCategoryChangePaused() { this->categoryChangePaused_ = nullptr;};
    inline bool getCategoryChangePaused() const { DARABONBA_PTR_GET_DEFAULT(categoryChangePaused_, false) };
    inline CreateChatappTemplateRequest& setCategoryChangePaused(bool categoryChangePaused) { DARABONBA_PTR_SET_VALUE(categoryChangePaused_, categoryChangePaused) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<CreateChatappTemplateRequest::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<CreateChatappTemplateRequest::Components>) };
    inline vector<CreateChatappTemplateRequest::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<CreateChatappTemplateRequest::Components>) };
    inline CreateChatappTemplateRequest& setComponents(const vector<CreateChatappTemplateRequest::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateChatappTemplateRequest& setComponents(vector<CreateChatappTemplateRequest::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline CreateChatappTemplateRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // custWabaId Field Functions 
    bool hasCustWabaId() const { return this->custWabaId_ != nullptr;};
    void deleteCustWabaId() { this->custWabaId_ = nullptr;};
    inline string getCustWabaId() const { DARABONBA_PTR_GET_DEFAULT(custWabaId_, "") };
    inline CreateChatappTemplateRequest& setCustWabaId(string custWabaId) { DARABONBA_PTR_SET_VALUE(custWabaId_, custWabaId) };


    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline const map<string, string> & getExample() const { DARABONBA_PTR_GET_CONST(example_, map<string, string>) };
    inline map<string, string> getExample() { DARABONBA_PTR_GET(example_, map<string, string>) };
    inline CreateChatappTemplateRequest& setExample(const map<string, string> & example) { DARABONBA_PTR_SET_VALUE(example_, example) };
    inline CreateChatappTemplateRequest& setExample(map<string, string> && example) { DARABONBA_PTR_SET_RVALUE(example_, example) };


    // isvCode Field Functions 
    bool hasIsvCode() const { return this->isvCode_ != nullptr;};
    void deleteIsvCode() { this->isvCode_ = nullptr;};
    inline string getIsvCode() const { DARABONBA_PTR_GET_DEFAULT(isvCode_, "") };
    inline CreateChatappTemplateRequest& setIsvCode(string isvCode) { DARABONBA_PTR_SET_VALUE(isvCode_, isvCode) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateChatappTemplateRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // messageSendTtlSeconds Field Functions 
    bool hasMessageSendTtlSeconds() const { return this->messageSendTtlSeconds_ != nullptr;};
    void deleteMessageSendTtlSeconds() { this->messageSendTtlSeconds_ = nullptr;};
    inline int32_t getMessageSendTtlSeconds() const { DARABONBA_PTR_GET_DEFAULT(messageSendTtlSeconds_, 0) };
    inline CreateChatappTemplateRequest& setMessageSendTtlSeconds(int32_t messageSendTtlSeconds) { DARABONBA_PTR_SET_VALUE(messageSendTtlSeconds_, messageSendTtlSeconds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateChatappTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productSetId Field Functions 
    bool hasProductSetId() const { return this->productSetId_ != nullptr;};
    void deleteProductSetId() { this->productSetId_ = nullptr;};
    inline string getProductSetId() const { DARABONBA_PTR_GET_DEFAULT(productSetId_, "") };
    inline CreateChatappTemplateRequest& setProductSetId(string productSetId) { DARABONBA_PTR_SET_VALUE(productSetId_, productSetId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateChatappTemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // Specifies whether to allow Facebook to automatically change the template category (to improve the template approval rate). This property is valid only when TemplateType is set to WHATSAPP.
    // >Notice: This property has been deprecated. WhatsApp no longer supports this property.</notice>
    shared_ptr<bool> allowCategoryChange_ {};
    // WhatsApp template category. Valid values:
    // 
    // - **UTILITY**: transaction-related.
    // 
    // - **MARKETING**: marketing.
    // 
    // - **AUTHENTICATION**: identity verification.
    // 
    // Viber template category. Valid values:
    // 
    // - **UTILITY**: transaction-related.
    // 
    // - **MARKETING**: marketing.
    // 
    // - **AUTHENTICATION**: identity verification.
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    // Specifies whether to pause template sending when a Utility template is changed to Marketing type. This property is valid only for WhatsApp templates.
    shared_ptr<bool> categoryChangePaused_ {};
    // The list of message template components.
    // 
    // > When Category=AUTHENTICATION, Components cannot contain nodes with Type=HEADER. When Type=BODY or FOOTER, the Text content must be empty.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateChatappTemplateRequest::Components>> components_ {};
    // The SpaceId of the ISV sub-customer or the direct customer instance ID.
    shared_ptr<string> custSpaceId_ {};
    // The ISV customer WabaId.
    // 
    // > Deprecated parameter. Use CustSpaceId instead.
    shared_ptr<string> custWabaId_ {};
    // The example for creating the template.
    shared_ptr<map<string, string>> example_ {};
    // The ISV verification code, used to verify whether the sub-account is authorized by the ISV.
    shared_ptr<string> isvCode_ {};
    // The template language. For detailed language codes, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
    // 
    // This parameter is required.
    shared_ptr<string> language_ {};
    // The time-to-live (TTL) for template messages in WhatsApp.
    // - AUTHENTICATION: valid values range from 30 to 900. 
    // - UTILITY: valid values range from 30 to 43200.
    shared_ptr<int32_t> messageSendTtlSeconds_ {};
    // The template name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // productSetId
    shared_ptr<string> productSetId_ {};
    // The templatetype. Valid values:
    // 
    // - **WHATSAPP**
    // 
    // - **VIBER**
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
