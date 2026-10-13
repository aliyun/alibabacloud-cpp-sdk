// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HiMarketAgentConfig.hpp>
#include <vector>
#include <alibabacloud/models/HiMarketProductCategory.hpp>
#include <alibabacloud/models/HiMarketProductFeature.hpp>
#include <alibabacloud/models/HiMarketIcon.hpp>
#include <alibabacloud/models/HiMarketMcpConfig.hpp>
#include <alibabacloud/models/HiMarketModelConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListProductsResponseBody() = default ;
    ListProductsResponseBody(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody(ListProductsResponseBody &&) = default ;
    ListProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBody() = default ;
    ListProductsResponseBody& operator=(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody& operator=(ListProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(agentConfig, agentConfig_);
          DARABONBA_PTR_TO_JSON(autoApprove, autoApprove_);
          DARABONBA_PTR_TO_JSON(categories, categories_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(document, document_);
          DARABONBA_PTR_TO_JSON(feature, feature_);
          DARABONBA_PTR_TO_JSON(icon, icon_);
          DARABONBA_PTR_TO_JSON(mcpConfig, mcpConfig_);
          DARABONBA_PTR_TO_JSON(modelConfig, modelConfig_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(productId, productId_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(agentConfig, agentConfig_);
          DARABONBA_PTR_FROM_JSON(autoApprove, autoApprove_);
          DARABONBA_PTR_FROM_JSON(categories, categories_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(document, document_);
          DARABONBA_PTR_FROM_JSON(feature, feature_);
          DARABONBA_PTR_FROM_JSON(icon, icon_);
          DARABONBA_PTR_FROM_JSON(mcpConfig, mcpConfig_);
          DARABONBA_PTR_FROM_JSON(modelConfig, modelConfig_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(productId, productId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentConfig_ == nullptr
        && this->autoApprove_ == nullptr && this->categories_ == nullptr && this->description_ == nullptr && this->document_ == nullptr && this->feature_ == nullptr
        && this->icon_ == nullptr && this->mcpConfig_ == nullptr && this->modelConfig_ == nullptr && this->name_ == nullptr && this->productId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
        // agentConfig Field Functions 
        bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
        void deleteAgentConfig() { this->agentConfig_ = nullptr;};
        inline const HiMarketAgentConfig & getAgentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, HiMarketAgentConfig) };
        inline HiMarketAgentConfig getAgentConfig() { DARABONBA_PTR_GET(agentConfig_, HiMarketAgentConfig) };
        inline Content& setAgentConfig(const HiMarketAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
        inline Content& setAgentConfig(HiMarketAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


        // autoApprove Field Functions 
        bool hasAutoApprove() const { return this->autoApprove_ != nullptr;};
        void deleteAutoApprove() { this->autoApprove_ = nullptr;};
        inline bool getAutoApprove() const { DARABONBA_PTR_GET_DEFAULT(autoApprove_, false) };
        inline Content& setAutoApprove(bool autoApprove) { DARABONBA_PTR_SET_VALUE(autoApprove_, autoApprove) };


        // categories Field Functions 
        bool hasCategories() const { return this->categories_ != nullptr;};
        void deleteCategories() { this->categories_ = nullptr;};
        inline const vector<HiMarketProductCategory> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<HiMarketProductCategory>) };
        inline vector<HiMarketProductCategory> getCategories() { DARABONBA_PTR_GET(categories_, vector<HiMarketProductCategory>) };
        inline Content& setCategories(const vector<HiMarketProductCategory> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
        inline Content& setCategories(vector<HiMarketProductCategory> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Content& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // document Field Functions 
        bool hasDocument() const { return this->document_ != nullptr;};
        void deleteDocument() { this->document_ = nullptr;};
        inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
        inline Content& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


        // feature Field Functions 
        bool hasFeature() const { return this->feature_ != nullptr;};
        void deleteFeature() { this->feature_ = nullptr;};
        inline const HiMarketProductFeature & getFeature() const { DARABONBA_PTR_GET_CONST(feature_, HiMarketProductFeature) };
        inline HiMarketProductFeature getFeature() { DARABONBA_PTR_GET(feature_, HiMarketProductFeature) };
        inline Content& setFeature(const HiMarketProductFeature & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
        inline Content& setFeature(HiMarketProductFeature && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline const HiMarketIcon & getIcon() const { DARABONBA_PTR_GET_CONST(icon_, HiMarketIcon) };
        inline HiMarketIcon getIcon() { DARABONBA_PTR_GET(icon_, HiMarketIcon) };
        inline Content& setIcon(const HiMarketIcon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
        inline Content& setIcon(HiMarketIcon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


        // mcpConfig Field Functions 
        bool hasMcpConfig() const { return this->mcpConfig_ != nullptr;};
        void deleteMcpConfig() { this->mcpConfig_ = nullptr;};
        inline const HiMarketMcpConfig & getMcpConfig() const { DARABONBA_PTR_GET_CONST(mcpConfig_, HiMarketMcpConfig) };
        inline HiMarketMcpConfig getMcpConfig() { DARABONBA_PTR_GET(mcpConfig_, HiMarketMcpConfig) };
        inline Content& setMcpConfig(const HiMarketMcpConfig & mcpConfig) { DARABONBA_PTR_SET_VALUE(mcpConfig_, mcpConfig) };
        inline Content& setMcpConfig(HiMarketMcpConfig && mcpConfig) { DARABONBA_PTR_SET_RVALUE(mcpConfig_, mcpConfig) };


        // modelConfig Field Functions 
        bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
        void deleteModelConfig() { this->modelConfig_ = nullptr;};
        inline const HiMarketModelConfig & getModelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, HiMarketModelConfig) };
        inline HiMarketModelConfig getModelConfig() { DARABONBA_PTR_GET(modelConfig_, HiMarketModelConfig) };
        inline Content& setModelConfig(const HiMarketModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
        inline Content& setModelConfig(HiMarketModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Content& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline Content& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The agent-related configurations of the API product. The agentAPIConfig member includes agentProtocols (the list of protocols supported by the agent) and routes (the list of routes).
        shared_ptr<HiMarketAgentConfig> agentConfig_ {};
        // Specifies whether subscription requests for the API product are automatically approved. This is the AutoApprove property of the API product resource.
        shared_ptr<bool> autoApprove_ {};
        // The list of product categories to which the API product belongs. The list element is named category.
        shared_ptr<vector<HiMarketProductCategory>> categories_ {};
        // The description of the API product, which is the Description property of the API product resource.
        shared_ptr<string> description_ {};
        // The documentation of the API product, which is the Document property of the API product resource.
        shared_ptr<string> document_ {};
        // The capability configurations of the API product. Currently, it includes only the modelFeature (model capabilities) member, which contains model, maxTokens, temperature, streaming, webSearch, enableThinking, and enableMultiModal.
        shared_ptr<HiMarketProductFeature> feature_ {};
        // The icon of the API product, which is the Icon property of the API product resource. It consists of two fields: type (the icon type) and value (the icon information).
        shared_ptr<HiMarketIcon> icon_ {};
        // The MCP-related configurations of the API product. The members include mcpServerName (the MCP server name), tools, mcpServerConfig (path and domains), and meta (protocol).
        shared_ptr<HiMarketMcpConfig> mcpConfig_ {};
        // The model API-related configurations of the API product. The modelAPIConfig member includes modelCategory (the AI model category), aiProtocols (the list of AI API protocols), and routes (the list of routes).
        shared_ptr<HiMarketModelConfig> modelConfig_ {};
        // The name of the API product, which is the Name property of the API product resource.
        shared_ptr<string> name_ {};
        // The ID of the API product, which is the primary ID of the API product resource. You can use it to locate the product in operations such as GetProduct, UpdateProduct, DeleteProduct, PublishProduct, SetProductCategories, and ListProductPublications.
        shared_ptr<string> productId_ {};
        // The status of the API product, which is the Status property of the API product resource. Valid values: Pending, Ready, and Published.
        shared_ptr<string> status_ {};
        // The type of the API product, which is the Type property of the API product resource. The valid values are not declared in the API definition. Refer to the types displayed in the console.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of API products. The list element is named productInfo, and each element contains the information of an API product.
      shared_ptr<vector<Data::Content>> content_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListProductsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListProductsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListProductsResponseBody::Data) };
    inline ListProductsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListProductsResponseBody::Data) };
    inline ListProductsResponseBody& setData(const ListProductsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProductsResponseBody& setData(ListProductsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListProductsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<ListProductsResponseBody::Data> data_ {};
    // The maximum number of entries returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The cursor token for the next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
