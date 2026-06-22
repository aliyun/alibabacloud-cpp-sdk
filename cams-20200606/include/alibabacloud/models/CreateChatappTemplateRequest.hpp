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
            // - **PHONE_NUMBER**: A call button.
            // 
            // - **URL**: A URL button.
            // 
            // - **QUICK_REPLY**: A quick reply button.
            // 
            // This parameter is required.
            shared_ptr<string> type_ {};
            // The URL that is visited when the button is clicked.
            shared_ptr<string> url_ {};
            // The URL type.
            // 
            // - **static**: Static
            // 
            // - **dynamic**: Dynamic
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
          // The list of buttons. This parameter applies only to the BUTTONS component. Each card in a carousel can have a maximum of two buttons.
          shared_ptr<vector<CardComponents::Buttons>> buttons_ {};
          // The type of the media resource. This parameter is valid when Type is set to HEADER.
          // 
          // - **IMAGE**: image
          // 
          // - **VIDEO**: video
          shared_ptr<string> format_ {};
          // The content of the BODY component in the carousel card.
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
          // The path of the media resource.
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
        // The list of controls in the carousel card.
        // 
        // This parameter is required.
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
          // This parameter is required for WhatsApp templates when Category is set to AUTHENTICATION and the button type is ONE_TAP or ZERO_TAP. It specifies the package name of the app that WhatsApp will launch.
          shared_ptr<string> packageName_ {};
          // This parameter is required for WhatsApp templates when Category is set to AUTHENTICATION and the button type is ONE_TAP or ZERO_TAP. It specifies the signature hash of the app that WhatsApp will launch.
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
        // This parameter is required for WhatsApp templates when Category is set to AUTHENTICATION and the button type is ONE_TAP or ZERO_TAP. It specifies the button text for the WhatsApp autofill action.
        shared_ptr<string> autofillText_ {};
        // The value of the coupon code. It supports only letters and digits. You can pass a variable such as $(couponCode) and then pass the actual coupon code when sending the message.
        shared_ptr<string> couponCode_ {};
        // The flow data event type. Valid values:
        // 
        // - DATA_EXCHANGE: Data exchange.
        // 
        // - NAVIGATE: Navigation.
        shared_ptr<string> flowAction_ {};
        // The flow ID.
        shared_ptr<string> flowId_ {};
        // This parameter is valid for WhatsApp templates when Category is set to Marketing and the button type is QUICK_REPLY. It indicates that the button is a marketing opt-out button. If a customer clicks this button and you have configured sending control operations in ChatApp, subsequent marketing messages will not be sent to the customer.
        shared_ptr<bool> isOptOut_ {};
        // The screen to navigate to. This parameter is required when FlowAction is set to NAVIGATE.
        shared_ptr<string> navigateScreen_ {};
        // Use the properties under SupportedApps.
        shared_ptr<string> packageName_ {};
        // The phone number. This parameter is valid only when the button type is **PHONE_NUMBER**.
        shared_ptr<string> phoneNumber_ {};
        // Use the properties under SupportedApps.
        shared_ptr<string> signatureHash_ {};
        // The list of supported apps.
        shared_ptr<vector<Buttons::SupportedApps>> supportedApps_ {};
        // The name displayed on the button.
        shared_ptr<string> text_ {};
        // The button type.
        // 
        // - **PHONE_NUMBER**: A call button.
        // 
        // - **URL**: A URL button.
        // 
        // - **QUICK_REPLY**: A quick reply button.
        // 
        // - **COPY_CODE**: A button to copy a verification code or coupon code.
        // 
        // - **ONE_TAP**: An autofill button for AUTHENTICATION templates.
        // 
        // - **ZERO_TAP**: An autofill button for AUTHENTICATION templates.
        // 
        // - **MPM**: A multi-product message.
        // 
        // - **CATALOG**: A catalog.
        // 
        // - **FLOW**: Opens a WhatsApp flow.
        // 
        // > * For WhatsApp templates, if Category is set to AUTHENTICATION, only one button is allowed. The button type must be COPY_CODE or ONE_TAP. If you set the button type to COPY_CODE, the Text parameter is required. If you set the button type to ONE_TAP, the Text (the name of the copy code button displayed on the client if the destination app is not installed), SignatureHash, PackageName, and AutofillText parameters are required.
        // >
        // > * For Viber templates, only one button is allowed, and it must be of the URL type.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
        // The URL that is visited when the URL button is clicked.
        shared_ptr<string> url_ {};
        // The URL type.
        // 
        // - **static**: Static
        // 
        // - **dynamic**: Dynamic
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
      // This parameter is valid for WhatsApp templates when Category is set to AUTHENTICATION and the component type is Body. It indicates that a security recommendation is displayed above the body, advising the user not to share the verification code.
      shared_ptr<bool> addSecretRecommendation_ {};
      // The list of buttons. This parameter applies only to the **BUTTONS** component.
      // 
      // > Number of buttons for WhatsApp
      // >
      // > - For MARKETING or UTILITY templates, you can add up to 10 buttons.
      // >
      // > - You can add only one button of the PHONE_NUMBER type.
      // >
      // > - You can add up to two buttons of the URL type.
      // >
      // > - Buttons of the QUICK_REPLY type cannot be mixed with buttons of the PHONE_NUMBER or URL type.
      // 
      // > Number of buttons for Viber
      // >
      // > - Only one button of the URL type is allowed.
      // >
      // > - If the HEADER component contains a video, the button type is URL, but you cannot set a URL.
      shared_ptr<vector<Components::Buttons>> buttons_ {};
      // The description of the file.
      shared_ptr<string> caption_ {};
      // The list of cards for a carousel template.
      shared_ptr<vector<Components::Cards>> cards_ {};
      // The validity period of the verification code for a WhatsApp AUTHENTICATION template, in minutes. This parameter is valid only for WhatsApp messages when Category is set to AUTHENTICATION and the component type is Footer. This information is displayed in the footer.
      shared_ptr<int32_t> codeExpirationMinutes_ {};
      // The duration of the video in a Viber video message, in seconds. The value ranges from 0 to 600.
      shared_ptr<int32_t> duration_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The file type of a Viber file message.
      shared_ptr<string> fileType_ {};
      // The type of the media resource.
      // 
      // - **TEXT**: text
      // 
      // - **IMAGE**: image
      // 
      // - **DOCUMENT**: document
      // 
      // - **VIDEO**: video
      shared_ptr<string> format_ {};
      // Indicates whether the coupon code has an expiration time. This parameter is used when type is set to LIMITED_TIME_OFFER.
      shared_ptr<bool> hasExpiration_ {};
      // The text of the message to send.
      // 
      // > For WhatsApp templates, if Category is set to AUTHENTICATION, this parameter is empty.
      shared_ptr<string> text_ {};
      // The thumbnail of a Viber message that contains a video.
      shared_ptr<string> thumbUrl_ {};
      // The component type. Valid values:
      // 
      // - **BODY**
      // 
      // - **HEADER**
      // 
      // - **FOOTER**
      // 
      // - **BUTTONS**
      // 
      // - **CAROUSEL**
      // 
      // - **LIMITED_TIME_OFFER**
      // 
      // > * For WhatsApp templates, the BODY component can contain up to 1,024 characters. The HEADER and FOOTER components can contain up to 60 characters.
      // >
      // > * For Viber templates, the FOOTER, CAROUSEL, and LIMITED_TIME_OFFER types are invalid.
      // >
      // > * For Viber templates, images, videos, and files are placed in the HEADER component. The client displays the image below the text. The text is placed in the BODY component.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The path of the media resource.
      // 
      // > For Viber templates, the recommended image size is 800 × 800 pixels.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->allowCategoryChange_ == nullptr
        && this->category_ == nullptr && this->categoryChangePaused_ == nullptr && this->components_ == nullptr && this->custSpaceId_ == nullptr && this->custWabaId_ == nullptr
        && this->example_ == nullptr && this->isvCode_ == nullptr && this->language_ == nullptr && this->messageSendTtlSeconds_ == nullptr && this->name_ == nullptr
        && this->templateType_ == nullptr; };
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


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateChatappTemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // Indicates whether to allow Facebook to automatically change the category of the template. This can increase the approval rate of the template. This parameter is valid only when TemplateType is set to WHATSAPP.
    // >Notice: This property is deprecated. WhatsApp no longer supports this property.
    shared_ptr<bool> allowCategoryChange_ {};
    // WhatsApp template categories:
    // 
    // - **UTILITY**: Transactional.
    // 
    // - **MARKETING**: Marketing.
    // 
    // - **AUTHENTICATION**: Authentication.
    // 
    // Viber template categories:
    // 
    // - **UTILITY**: Transactional.
    // 
    // - **MARKETING**: Marketing.
    // 
    // - **AUTHENTICATION**: Authentication.
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    shared_ptr<bool> categoryChangePaused_ {};
    // The list of message template components.
    // 
    // > When Category is set to AUTHENTICATION, the Components array cannot contain a component of the HEADER type. If the component type is BODY or FOOTER, the Text parameter must be empty.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateChatappTemplateRequest::Components>> components_ {};
    // The Space ID of the ISV sub-customer or the instance ID of the direct customer.
    shared_ptr<string> custSpaceId_ {};
    // The WhatsApp Business Account (WABA) ID of the independent software vendor (ISV) customer.
    // 
    // > This parameter is deprecated. Use CustSpaceId instead.
    shared_ptr<string> custWabaId_ {};
    // An example of how to create a template.
    shared_ptr<map<string, string>> example_ {};
    // The ISV verification code, used to verify whether the RAM user is authorized by the ISV.
    shared_ptr<string> isvCode_ {};
    // The template language. For more information about language codes, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
    // 
    // This parameter is required.
    shared_ptr<string> language_ {};
    // The time-to-live (TTL) of the template message in WhatsApp.
    // 
    // - For AUTHENTICATION templates, the value ranges from 30 to 900.
    // 
    // - For UTILITY templates, the value ranges from 30 to 43200.
    shared_ptr<int32_t> messageSendTtlSeconds_ {};
    // The template name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The template type.
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
