// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPMARKETITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPMARKETITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ItemsI18nValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListMcpMarketItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpMarketItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpMarketItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMcpMarketItemsResponseBody() = default ;
    ListMcpMarketItemsResponseBody(const ListMcpMarketItemsResponseBody &) = default ;
    ListMcpMarketItemsResponseBody(ListMcpMarketItemsResponseBody &&) = default ;
    ListMcpMarketItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpMarketItemsResponseBody() = default ;
    ListMcpMarketItemsResponseBody& operator=(const ListMcpMarketItemsResponseBody &) = default ;
    ListMcpMarketItemsResponseBody& operator=(ListMcpMarketItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_ANY_TO_JSON(displayMetadata, displayMetadata_);
        DARABONBA_PTR_TO_JSON(i18n, i18n_);
        DARABONBA_PTR_TO_JSON(iconUrl, iconUrl_);
        DARABONBA_PTR_TO_JSON(installCount, installCount_);
        DARABONBA_PTR_TO_JSON(marketItemId, marketItemId_);
        DARABONBA_PTR_TO_JSON(mcpType, mcpType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(officialTag, officialTag_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(readme, readme_);
        DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
        DARABONBA_PTR_TO_JSON(templateInputSchema, templateInputSchema_);
        DARABONBA_PTR_TO_JSON(templateVersion, templateVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_ANY_FROM_JSON(displayMetadata, displayMetadata_);
        DARABONBA_PTR_FROM_JSON(i18n, i18n_);
        DARABONBA_PTR_FROM_JSON(iconUrl, iconUrl_);
        DARABONBA_PTR_FROM_JSON(installCount, installCount_);
        DARABONBA_PTR_FROM_JSON(marketItemId, marketItemId_);
        DARABONBA_PTR_FROM_JSON(mcpType, mcpType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(officialTag, officialTag_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(readme, readme_);
        DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
        DARABONBA_PTR_FROM_JSON(templateInputSchema, templateInputSchema_);
        DARABONBA_PTR_FROM_JSON(templateVersion, templateVersion_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->displayMetadata_ == nullptr && this->i18n_ == nullptr && this->iconUrl_ == nullptr && this->installCount_ == nullptr
        && this->marketItemId_ == nullptr && this->mcpType_ == nullptr && this->name_ == nullptr && this->officialTag_ == nullptr && this->protocol_ == nullptr
        && this->readme_ == nullptr && this->schemaVersion_ == nullptr && this->templateInputSchema_ == nullptr && this->templateVersion_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Items& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayMetadata Field Functions 
      bool hasDisplayMetadata() const { return this->displayMetadata_ != nullptr;};
      void deleteDisplayMetadata() { this->displayMetadata_ = nullptr;};
      inline       const Darabonba::Json & getDisplayMetadata() const { DARABONBA_GET(displayMetadata_) };
      Darabonba::Json & getDisplayMetadata() { DARABONBA_GET(displayMetadata_) };
      inline Items& setDisplayMetadata(const Darabonba::Json & displayMetadata) { DARABONBA_SET_VALUE(displayMetadata_, displayMetadata) };
      inline Items& setDisplayMetadata(Darabonba::Json && displayMetadata) { DARABONBA_SET_RVALUE(displayMetadata_, displayMetadata) };


      // i18n Field Functions 
      bool hasI18n() const { return this->i18n_ != nullptr;};
      void deleteI18n() { this->i18n_ = nullptr;};
      inline const map<string, ItemsI18nValue> & getI18n() const { DARABONBA_PTR_GET_CONST(i18n_, map<string, ItemsI18nValue>) };
      inline map<string, ItemsI18nValue> getI18n() { DARABONBA_PTR_GET(i18n_, map<string, ItemsI18nValue>) };
      inline Items& setI18n(const map<string, ItemsI18nValue> & i18n) { DARABONBA_PTR_SET_VALUE(i18n_, i18n) };
      inline Items& setI18n(map<string, ItemsI18nValue> && i18n) { DARABONBA_PTR_SET_RVALUE(i18n_, i18n) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline Items& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // installCount Field Functions 
      bool hasInstallCount() const { return this->installCount_ != nullptr;};
      void deleteInstallCount() { this->installCount_ = nullptr;};
      inline int64_t getInstallCount() const { DARABONBA_PTR_GET_DEFAULT(installCount_, 0L) };
      inline Items& setInstallCount(int64_t installCount) { DARABONBA_PTR_SET_VALUE(installCount_, installCount) };


      // marketItemId Field Functions 
      bool hasMarketItemId() const { return this->marketItemId_ != nullptr;};
      void deleteMarketItemId() { this->marketItemId_ = nullptr;};
      inline string getMarketItemId() const { DARABONBA_PTR_GET_DEFAULT(marketItemId_, "") };
      inline Items& setMarketItemId(string marketItemId) { DARABONBA_PTR_SET_VALUE(marketItemId_, marketItemId) };


      // mcpType Field Functions 
      bool hasMcpType() const { return this->mcpType_ != nullptr;};
      void deleteMcpType() { this->mcpType_ = nullptr;};
      inline string getMcpType() const { DARABONBA_PTR_GET_DEFAULT(mcpType_, "") };
      inline Items& setMcpType(string mcpType) { DARABONBA_PTR_SET_VALUE(mcpType_, mcpType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // officialTag Field Functions 
      bool hasOfficialTag() const { return this->officialTag_ != nullptr;};
      void deleteOfficialTag() { this->officialTag_ = nullptr;};
      inline string getOfficialTag() const { DARABONBA_PTR_GET_DEFAULT(officialTag_, "") };
      inline Items& setOfficialTag(string officialTag) { DARABONBA_PTR_SET_VALUE(officialTag_, officialTag) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Items& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // readme Field Functions 
      bool hasReadme() const { return this->readme_ != nullptr;};
      void deleteReadme() { this->readme_ = nullptr;};
      inline string getReadme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
      inline Items& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


      // schemaVersion Field Functions 
      bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
      void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
      inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
      inline Items& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


      // templateInputSchema Field Functions 
      bool hasTemplateInputSchema() const { return this->templateInputSchema_ != nullptr;};
      void deleteTemplateInputSchema() { this->templateInputSchema_ = nullptr;};
      inline string getTemplateInputSchema() const { DARABONBA_PTR_GET_DEFAULT(templateInputSchema_, "") };
      inline Items& setTemplateInputSchema(string templateInputSchema) { DARABONBA_PTR_SET_VALUE(templateInputSchema_, templateInputSchema) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Items& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    protected:
      // The category of the MCP marketplace template.
      shared_ptr<string> category_ {};
      // The description of the MCP service.
      shared_ptr<string> description_ {};
      // The display metadata of the template.
      Darabonba::Json displayMetadata_ {};
      // The multilingual display content organized by BCP-47 language tags. Falls back to default fields if the specified language is not matched.
      shared_ptr<map<string, ItemsI18nValue>> i18n_ {};
      // The icon URL of the MCP marketplace template.
      shared_ptr<string> iconUrl_ {};
      // The number of times the template has been installed.
      shared_ptr<int64_t> installCount_ {};
      // The ID of the MCP marketplace template.
      shared_ptr<string> marketItemId_ {};
      // The MCP type.
      shared_ptr<string> mcpType_ {};
      // The name of the MCP marketplace template.
      shared_ptr<string> name_ {};
      // The official usage tag.
      shared_ptr<string> officialTag_ {};
      // The MCP protocol.
      shared_ptr<string> protocol_ {};
      // The usage instructions of the MCP marketplace template.
      shared_ptr<string> readme_ {};
      // The schema version of the template.
      shared_ptr<string> schemaVersion_ {};
      // The template input schema, represented as a JSON Schema string.
      shared_ptr<string> templateInputSchema_ {};
      // The version of the MCP marketplace template.
      shared_ptr<string> templateVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMcpMarketItemsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListMcpMarketItemsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListMcpMarketItemsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListMcpMarketItemsResponseBody::Items>) };
    inline vector<ListMcpMarketItemsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListMcpMarketItemsResponseBody::Items>) };
    inline ListMcpMarketItemsResponseBody& setItems(const vector<ListMcpMarketItemsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListMcpMarketItemsResponseBody& setItems(vector<ListMcpMarketItemsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMcpMarketItemsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMcpMarketItemsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMcpMarketItemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcpMarketItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcpMarketItemsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMcpMarketItemsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of query results.
    shared_ptr<vector<ListMcpMarketItemsResponseBody::Items>> items_ {};
    // The maximum number of records to return in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pagination token used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of records that match the specified conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
