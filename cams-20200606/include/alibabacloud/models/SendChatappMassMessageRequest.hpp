// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATAPPMASSMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATAPPMASSMESSAGEREQUEST_HPP_
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
  class SendChatappMassMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatappMassMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_TO_JSON(FallBackContent, fallBackContent_);
      DARABONBA_PTR_TO_JSON(FallBackDuration, fallBackDuration_);
      DARABONBA_PTR_TO_JSON(FallBackId, fallBackId_);
      DARABONBA_PTR_TO_JSON(FallBackRule, fallBackRule_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SenderList, senderList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatappMassMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_FROM_JSON(FallBackContent, fallBackContent_);
      DARABONBA_PTR_FROM_JSON(FallBackDuration, fallBackDuration_);
      DARABONBA_PTR_FROM_JSON(FallBackId, fallBackId_);
      DARABONBA_PTR_FROM_JSON(FallBackRule, fallBackRule_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SenderList, senderList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    SendChatappMassMessageRequest() = default ;
    SendChatappMassMessageRequest(const SendChatappMassMessageRequest &) = default ;
    SendChatappMassMessageRequest(SendChatappMassMessageRequest &&) = default ;
    SendChatappMassMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatappMassMessageRequest() = default ;
    SendChatappMassMessageRequest& operator=(const SendChatappMassMessageRequest &) = default ;
    SendChatappMassMessageRequest& operator=(SendChatappMassMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SenderList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SenderList& obj) { 
        DARABONBA_PTR_TO_JSON(FlowAction, flowAction_);
        DARABONBA_PTR_TO_JSON(Payload, payload_);
        DARABONBA_PTR_TO_JSON(ProductAction, productAction_);
        DARABONBA_PTR_TO_JSON(TemplateParams, templateParams_);
        DARABONBA_PTR_TO_JSON(To, to_);
      };
      friend void from_json(const Darabonba::Json& j, SenderList& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowAction, flowAction_);
        DARABONBA_PTR_FROM_JSON(Payload, payload_);
        DARABONBA_PTR_FROM_JSON(ProductAction, productAction_);
        DARABONBA_PTR_FROM_JSON(TemplateParams, templateParams_);
        DARABONBA_PTR_FROM_JSON(To, to_);
      };
      SenderList() = default ;
      SenderList(const SenderList &) = default ;
      SenderList(SenderList &&) = default ;
      SenderList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SenderList() = default ;
      SenderList& operator=(const SenderList &) = default ;
      SenderList& operator=(SenderList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProductAction : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProductAction& obj) { 
          DARABONBA_PTR_TO_JSON(Sections, sections_);
          DARABONBA_PTR_TO_JSON(ThumbnailProductRetailerId, thumbnailProductRetailerId_);
        };
        friend void from_json(const Darabonba::Json& j, ProductAction& obj) { 
          DARABONBA_PTR_FROM_JSON(Sections, sections_);
          DARABONBA_PTR_FROM_JSON(ThumbnailProductRetailerId, thumbnailProductRetailerId_);
        };
        ProductAction() = default ;
        ProductAction(const ProductAction &) = default ;
        ProductAction(ProductAction &&) = default ;
        ProductAction(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProductAction() = default ;
        ProductAction& operator=(const ProductAction &) = default ;
        ProductAction& operator=(ProductAction &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Sections : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Sections& obj) { 
            DARABONBA_PTR_TO_JSON(ProductItems, productItems_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Sections& obj) { 
            DARABONBA_PTR_FROM_JSON(ProductItems, productItems_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          Sections() = default ;
          Sections(const Sections &) = default ;
          Sections(Sections &&) = default ;
          Sections(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Sections() = default ;
          Sections& operator=(const Sections &) = default ;
          Sections& operator=(Sections &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ProductItems : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ProductItems& obj) { 
              DARABONBA_PTR_TO_JSON(ProductRetailerId, productRetailerId_);
            };
            friend void from_json(const Darabonba::Json& j, ProductItems& obj) { 
              DARABONBA_PTR_FROM_JSON(ProductRetailerId, productRetailerId_);
            };
            ProductItems() = default ;
            ProductItems(const ProductItems &) = default ;
            ProductItems(ProductItems &&) = default ;
            ProductItems(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ProductItems() = default ;
            ProductItems& operator=(const ProductItems &) = default ;
            ProductItems& operator=(ProductItems &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->productRetailerId_ == nullptr; };
            // productRetailerId Field Functions 
            bool hasProductRetailerId() const { return this->productRetailerId_ != nullptr;};
            void deleteProductRetailerId() { this->productRetailerId_ = nullptr;};
            inline string getProductRetailerId() const { DARABONBA_PTR_GET_DEFAULT(productRetailerId_, "") };
            inline ProductItems& setProductRetailerId(string productRetailerId) { DARABONBA_PTR_SET_VALUE(productRetailerId_, productRetailerId) };


          protected:
            // The retailer ID of the product.
            shared_ptr<string> productRetailerId_ {};
          };

          virtual bool empty() const override { return this->productItems_ == nullptr
        && this->title_ == nullptr; };
          // productItems Field Functions 
          bool hasProductItems() const { return this->productItems_ != nullptr;};
          void deleteProductItems() { this->productItems_ = nullptr;};
          inline const vector<Sections::ProductItems> & getProductItems() const { DARABONBA_PTR_GET_CONST(productItems_, vector<Sections::ProductItems>) };
          inline vector<Sections::ProductItems> getProductItems() { DARABONBA_PTR_GET(productItems_, vector<Sections::ProductItems>) };
          inline Sections& setProductItems(const vector<Sections::ProductItems> & productItems) { DARABONBA_PTR_SET_VALUE(productItems_, productItems) };
          inline Sections& setProductItems(vector<Sections::ProductItems> && productItems) { DARABONBA_PTR_SET_RVALUE(productItems_, productItems) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Sections& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          // The products.
          shared_ptr<vector<Sections::ProductItems>> productItems_ {};
          // The name of the category.
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->sections_ == nullptr
        && this->thumbnailProductRetailerId_ == nullptr; };
        // sections Field Functions 
        bool hasSections() const { return this->sections_ != nullptr;};
        void deleteSections() { this->sections_ = nullptr;};
        inline const vector<ProductAction::Sections> & getSections() const { DARABONBA_PTR_GET_CONST(sections_, vector<ProductAction::Sections>) };
        inline vector<ProductAction::Sections> getSections() { DARABONBA_PTR_GET(sections_, vector<ProductAction::Sections>) };
        inline ProductAction& setSections(const vector<ProductAction::Sections> & sections) { DARABONBA_PTR_SET_VALUE(sections_, sections) };
        inline ProductAction& setSections(vector<ProductAction::Sections> && sections) { DARABONBA_PTR_SET_RVALUE(sections_, sections) };


        // thumbnailProductRetailerId Field Functions 
        bool hasThumbnailProductRetailerId() const { return this->thumbnailProductRetailerId_ != nullptr;};
        void deleteThumbnailProductRetailerId() { this->thumbnailProductRetailerId_ = nullptr;};
        inline string getThumbnailProductRetailerId() const { DARABONBA_PTR_GET_DEFAULT(thumbnailProductRetailerId_, "") };
        inline ProductAction& setThumbnailProductRetailerId(string thumbnailProductRetailerId) { DARABONBA_PTR_SET_VALUE(thumbnailProductRetailerId_, thumbnailProductRetailerId) };


      protected:
        // The products. Up to 30 products and 10 categories can be added.
        shared_ptr<vector<ProductAction::Sections>> sections_ {};
        // The retailer ID of the product.
        shared_ptr<string> thumbnailProductRetailerId_ {};
      };

      class FlowAction : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowAction& obj) { 
          DARABONBA_ANY_TO_JSON(FlowActionData, flowActionData_);
          DARABONBA_PTR_TO_JSON(FlowToken, flowToken_);
        };
        friend void from_json(const Darabonba::Json& j, FlowAction& obj) { 
          DARABONBA_ANY_FROM_JSON(FlowActionData, flowActionData_);
          DARABONBA_PTR_FROM_JSON(FlowToken, flowToken_);
        };
        FlowAction() = default ;
        FlowAction(const FlowAction &) = default ;
        FlowAction(FlowAction &&) = default ;
        FlowAction(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowAction() = default ;
        FlowAction& operator=(const FlowAction &) = default ;
        FlowAction& operator=(FlowAction &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flowActionData_ == nullptr
        && this->flowToken_ == nullptr; };
        // flowActionData Field Functions 
        bool hasFlowActionData() const { return this->flowActionData_ != nullptr;};
        void deleteFlowActionData() { this->flowActionData_ = nullptr;};
        inline         const Darabonba::Json & getFlowActionData() const { DARABONBA_GET(flowActionData_) };
        Darabonba::Json & getFlowActionData() { DARABONBA_GET(flowActionData_) };
        inline FlowAction& setFlowActionData(const Darabonba::Json & flowActionData) { DARABONBA_SET_VALUE(flowActionData_, flowActionData) };
        inline FlowAction& setFlowActionData(Darabonba::Json && flowActionData) { DARABONBA_SET_RVALUE(flowActionData_, flowActionData) };


        // flowToken Field Functions 
        bool hasFlowToken() const { return this->flowToken_ != nullptr;};
        void deleteFlowToken() { this->flowToken_ = nullptr;};
        inline string getFlowToken() const { DARABONBA_PTR_GET_DEFAULT(flowToken_, "") };
        inline FlowAction& setFlowToken(string flowToken) { DARABONBA_PTR_SET_VALUE(flowToken_, flowToken) };


      protected:
        // The default parameter of the Flow.
        Darabonba::Json flowActionData_ {};
        // The information about the Flow token.
        shared_ptr<string> flowToken_ {};
      };

      virtual bool empty() const override { return this->flowAction_ == nullptr
        && this->payload_ == nullptr && this->productAction_ == nullptr && this->templateParams_ == nullptr && this->to_ == nullptr; };
      // flowAction Field Functions 
      bool hasFlowAction() const { return this->flowAction_ != nullptr;};
      void deleteFlowAction() { this->flowAction_ = nullptr;};
      inline const SenderList::FlowAction & getFlowAction() const { DARABONBA_PTR_GET_CONST(flowAction_, SenderList::FlowAction) };
      inline SenderList::FlowAction getFlowAction() { DARABONBA_PTR_GET(flowAction_, SenderList::FlowAction) };
      inline SenderList& setFlowAction(const SenderList::FlowAction & flowAction) { DARABONBA_PTR_SET_VALUE(flowAction_, flowAction) };
      inline SenderList& setFlowAction(SenderList::FlowAction && flowAction) { DARABONBA_PTR_SET_RVALUE(flowAction_, flowAction) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline const vector<string> & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, vector<string>) };
      inline vector<string> getPayload() { DARABONBA_PTR_GET(payload_, vector<string>) };
      inline SenderList& setPayload(const vector<string> & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
      inline SenderList& setPayload(vector<string> && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


      // productAction Field Functions 
      bool hasProductAction() const { return this->productAction_ != nullptr;};
      void deleteProductAction() { this->productAction_ = nullptr;};
      inline const SenderList::ProductAction & getProductAction() const { DARABONBA_PTR_GET_CONST(productAction_, SenderList::ProductAction) };
      inline SenderList::ProductAction getProductAction() { DARABONBA_PTR_GET(productAction_, SenderList::ProductAction) };
      inline SenderList& setProductAction(const SenderList::ProductAction & productAction) { DARABONBA_PTR_SET_VALUE(productAction_, productAction) };
      inline SenderList& setProductAction(SenderList::ProductAction && productAction) { DARABONBA_PTR_SET_RVALUE(productAction_, productAction) };


      // templateParams Field Functions 
      bool hasTemplateParams() const { return this->templateParams_ != nullptr;};
      void deleteTemplateParams() { this->templateParams_ = nullptr;};
      inline const map<string, string> & getTemplateParams() const { DARABONBA_PTR_GET_CONST(templateParams_, map<string, string>) };
      inline map<string, string> getTemplateParams() { DARABONBA_PTR_GET(templateParams_, map<string, string>) };
      inline SenderList& setTemplateParams(const map<string, string> & templateParams) { DARABONBA_PTR_SET_VALUE(templateParams_, templateParams) };
      inline SenderList& setTemplateParams(map<string, string> && templateParams) { DARABONBA_PTR_SET_RVALUE(templateParams_, templateParams) };


      // to Field Functions 
      bool hasTo() const { return this->to_ != nullptr;};
      void deleteTo() { this->to_ = nullptr;};
      inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
      inline SenderList& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    protected:
      // The Flow action.
      shared_ptr<SenderList::FlowAction> flowAction_ {};
      // The payload of the button.
      shared_ptr<vector<string>> payload_ {};
      // The information about the product.
      shared_ptr<SenderList::ProductAction> productAction_ {};
      // The parameters of the template.
      shared_ptr<map<string, string>> templateParams_ {};
      // The mobile phone number of the message receiver.
      shared_ptr<string> to_ {};
    };

    virtual bool empty() const override { return this->channelType_ == nullptr
        && this->custSpaceId_ == nullptr && this->custWabaId_ == nullptr && this->fallBackContent_ == nullptr && this->fallBackDuration_ == nullptr && this->fallBackId_ == nullptr
        && this->fallBackRule_ == nullptr && this->from_ == nullptr && this->isvCode_ == nullptr && this->label_ == nullptr && this->language_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->senderList_ == nullptr && this->tag_ == nullptr
        && this->taskId_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr && this->ttl_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline SendChatappMassMessageRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline SendChatappMassMessageRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // custWabaId Field Functions 
    bool hasCustWabaId() const { return this->custWabaId_ != nullptr;};
    void deleteCustWabaId() { this->custWabaId_ = nullptr;};
    inline string getCustWabaId() const { DARABONBA_PTR_GET_DEFAULT(custWabaId_, "") };
    inline SendChatappMassMessageRequest& setCustWabaId(string custWabaId) { DARABONBA_PTR_SET_VALUE(custWabaId_, custWabaId) };


    // fallBackContent Field Functions 
    bool hasFallBackContent() const { return this->fallBackContent_ != nullptr;};
    void deleteFallBackContent() { this->fallBackContent_ = nullptr;};
    inline string getFallBackContent() const { DARABONBA_PTR_GET_DEFAULT(fallBackContent_, "") };
    inline SendChatappMassMessageRequest& setFallBackContent(string fallBackContent) { DARABONBA_PTR_SET_VALUE(fallBackContent_, fallBackContent) };


    // fallBackDuration Field Functions 
    bool hasFallBackDuration() const { return this->fallBackDuration_ != nullptr;};
    void deleteFallBackDuration() { this->fallBackDuration_ = nullptr;};
    inline int32_t getFallBackDuration() const { DARABONBA_PTR_GET_DEFAULT(fallBackDuration_, 0) };
    inline SendChatappMassMessageRequest& setFallBackDuration(int32_t fallBackDuration) { DARABONBA_PTR_SET_VALUE(fallBackDuration_, fallBackDuration) };


    // fallBackId Field Functions 
    bool hasFallBackId() const { return this->fallBackId_ != nullptr;};
    void deleteFallBackId() { this->fallBackId_ = nullptr;};
    inline string getFallBackId() const { DARABONBA_PTR_GET_DEFAULT(fallBackId_, "") };
    inline SendChatappMassMessageRequest& setFallBackId(string fallBackId) { DARABONBA_PTR_SET_VALUE(fallBackId_, fallBackId) };


    // fallBackRule Field Functions 
    bool hasFallBackRule() const { return this->fallBackRule_ != nullptr;};
    void deleteFallBackRule() { this->fallBackRule_ = nullptr;};
    inline string getFallBackRule() const { DARABONBA_PTR_GET_DEFAULT(fallBackRule_, "") };
    inline SendChatappMassMessageRequest& setFallBackRule(string fallBackRule) { DARABONBA_PTR_SET_VALUE(fallBackRule_, fallBackRule) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline SendChatappMassMessageRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // isvCode Field Functions 
    bool hasIsvCode() const { return this->isvCode_ != nullptr;};
    void deleteIsvCode() { this->isvCode_ = nullptr;};
    inline string getIsvCode() const { DARABONBA_PTR_GET_DEFAULT(isvCode_, "") };
    inline SendChatappMassMessageRequest& setIsvCode(string isvCode) { DARABONBA_PTR_SET_VALUE(isvCode_, isvCode) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline SendChatappMassMessageRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SendChatappMassMessageRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendChatappMassMessageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendChatappMassMessageRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendChatappMassMessageRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // senderList Field Functions 
    bool hasSenderList() const { return this->senderList_ != nullptr;};
    void deleteSenderList() { this->senderList_ = nullptr;};
    inline const vector<SendChatappMassMessageRequest::SenderList> & getSenderList() const { DARABONBA_PTR_GET_CONST(senderList_, vector<SendChatappMassMessageRequest::SenderList>) };
    inline vector<SendChatappMassMessageRequest::SenderList> getSenderList() { DARABONBA_PTR_GET(senderList_, vector<SendChatappMassMessageRequest::SenderList>) };
    inline SendChatappMassMessageRequest& setSenderList(const vector<SendChatappMassMessageRequest::SenderList> & senderList) { DARABONBA_PTR_SET_VALUE(senderList_, senderList) };
    inline SendChatappMassMessageRequest& setSenderList(vector<SendChatappMassMessageRequest::SenderList> && senderList) { DARABONBA_PTR_SET_RVALUE(senderList_, senderList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline SendChatappMassMessageRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SendChatappMassMessageRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendChatappMassMessageRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline SendChatappMassMessageRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline SendChatappMassMessageRequest& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The type of the channel. Valid values:
    // 
    // *   **whatsapp**
    // *   **viber**
    // *   **line** (under development)
    // 
    // This parameter is required.
    shared_ptr<string> channelType_ {};
    // The space ID of the user.
    shared_ptr<string> custSpaceId_ {};
    // The WhatsApp Business Account (WABA) ID of the RAM user within the independent software vendor (ISV) account.
    // 
    // >  CustWabaId is an obsolete parameter. Use CustSpaceId instead.
    shared_ptr<string> custWabaId_ {};
    // The content of the fallback message.
    shared_ptr<string> fallBackContent_ {};
    // Specifies the period of time after which the fallback message is sent if the message receipt that indicates the message is delivered to clients is not received. If this parameter is left empty, the fallback message is sent only when the message fails to be sent or the message receipt that indicates the message is not delivered to clients is received. Unit: seconds. Valid values: 60 to 43200.
    shared_ptr<int32_t> fallBackDuration_ {};
    // The ID of the fallback policy.
    shared_ptr<string> fallBackId_ {};
    // The fallback rule. Valid values:
    // 
    // *   **undelivered**: A fallback is triggered if the message is not delivered to clients. When the message is being sent, the template parameters are verified. If the parameters fail to pass the verification, the message fails to be sent. Whether the template and phone number are prohibited is not verified. By default, this value is used when FallBackRule is left empty.
    // *   **sentFailed**: A fallback is triggered even if the template parameters including variables fail to pass the verification. If the channelType, type, messageType, to, and from parameters fail to pass the verification, a fallback is not triggered.
    shared_ptr<string> fallBackRule_ {};
    // The mobile phone number of the message sender.
    // 
    // This parameter is required.
    shared_ptr<string> from_ {};
    // The ISV verification code. This parameter is used to verify whether the RAM user is authorized by the ISV account.
    shared_ptr<string> isvCode_ {};
    // The type of the Viber message. Valid values:
    // 
    // *   **promotion**
    // *   **transaction**
    shared_ptr<string> label_ {};
    // The language. For more information about language codes, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
    // 
    // This parameter is required.
    shared_ptr<string> language_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The mobile phone numbers of the message receivers.
    shared_ptr<vector<SendChatappMassMessageRequest::SenderList>> senderList_ {};
    // The tag information when the ChannelType parameter is set to viber.
    shared_ptr<string> tag_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The template code.
    shared_ptr<string> templateCode_ {};
    // The name of the message template.
    shared_ptr<string> templateName_ {};
    // The timeout period for sending messages when the ChannelType parameter is set to viber. Valid values: 30 to 1209600. Unit: seconds.
    shared_ptr<int64_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
