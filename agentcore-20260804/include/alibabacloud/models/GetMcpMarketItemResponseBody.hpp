// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPMARKETITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCPMARKETITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetMcpMarketItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpMarketItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpMarketItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMcpMarketItemResponseBody() = default ;
    GetMcpMarketItemResponseBody(const GetMcpMarketItemResponseBody &) = default ;
    GetMcpMarketItemResponseBody(GetMcpMarketItemResponseBody &&) = default ;
    GetMcpMarketItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpMarketItemResponseBody() = default ;
    GetMcpMarketItemResponseBody& operator=(const GetMcpMarketItemResponseBody &) = default ;
    GetMcpMarketItemResponseBody& operator=(GetMcpMarketItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_ANY_TO_JSON(displayMetadata, displayMetadata_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_ANY_FROM_JSON(displayMetadata, displayMetadata_);
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
      virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->displayMetadata_ == nullptr && this->iconUrl_ == nullptr && this->installCount_ == nullptr && this->marketItemId_ == nullptr
        && this->mcpType_ == nullptr && this->name_ == nullptr && this->officialTag_ == nullptr && this->protocol_ == nullptr && this->readme_ == nullptr
        && this->schemaVersion_ == nullptr && this->templateInputSchema_ == nullptr && this->templateVersion_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayMetadata Field Functions 
      bool hasDisplayMetadata() const { return this->displayMetadata_ != nullptr;};
      void deleteDisplayMetadata() { this->displayMetadata_ = nullptr;};
      inline       const Darabonba::Json & getDisplayMetadata() const { DARABONBA_GET(displayMetadata_) };
      Darabonba::Json & getDisplayMetadata() { DARABONBA_GET(displayMetadata_) };
      inline Data& setDisplayMetadata(const Darabonba::Json & displayMetadata) { DARABONBA_SET_VALUE(displayMetadata_, displayMetadata) };
      inline Data& setDisplayMetadata(Darabonba::Json && displayMetadata) { DARABONBA_SET_RVALUE(displayMetadata_, displayMetadata) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline Data& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // installCount Field Functions 
      bool hasInstallCount() const { return this->installCount_ != nullptr;};
      void deleteInstallCount() { this->installCount_ = nullptr;};
      inline int64_t getInstallCount() const { DARABONBA_PTR_GET_DEFAULT(installCount_, 0L) };
      inline Data& setInstallCount(int64_t installCount) { DARABONBA_PTR_SET_VALUE(installCount_, installCount) };


      // marketItemId Field Functions 
      bool hasMarketItemId() const { return this->marketItemId_ != nullptr;};
      void deleteMarketItemId() { this->marketItemId_ = nullptr;};
      inline string getMarketItemId() const { DARABONBA_PTR_GET_DEFAULT(marketItemId_, "") };
      inline Data& setMarketItemId(string marketItemId) { DARABONBA_PTR_SET_VALUE(marketItemId_, marketItemId) };


      // mcpType Field Functions 
      bool hasMcpType() const { return this->mcpType_ != nullptr;};
      void deleteMcpType() { this->mcpType_ = nullptr;};
      inline string getMcpType() const { DARABONBA_PTR_GET_DEFAULT(mcpType_, "") };
      inline Data& setMcpType(string mcpType) { DARABONBA_PTR_SET_VALUE(mcpType_, mcpType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // officialTag Field Functions 
      bool hasOfficialTag() const { return this->officialTag_ != nullptr;};
      void deleteOfficialTag() { this->officialTag_ = nullptr;};
      inline string getOfficialTag() const { DARABONBA_PTR_GET_DEFAULT(officialTag_, "") };
      inline Data& setOfficialTag(string officialTag) { DARABONBA_PTR_SET_VALUE(officialTag_, officialTag) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // readme Field Functions 
      bool hasReadme() const { return this->readme_ != nullptr;};
      void deleteReadme() { this->readme_ = nullptr;};
      inline string getReadme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
      inline Data& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


      // schemaVersion Field Functions 
      bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
      void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
      inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
      inline Data& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


      // templateInputSchema Field Functions 
      bool hasTemplateInputSchema() const { return this->templateInputSchema_ != nullptr;};
      void deleteTemplateInputSchema() { this->templateInputSchema_ = nullptr;};
      inline string getTemplateInputSchema() const { DARABONBA_PTR_GET_DEFAULT(templateInputSchema_, "") };
      inline Data& setTemplateInputSchema(string templateInputSchema) { DARABONBA_PTR_SET_VALUE(templateInputSchema_, templateInputSchema) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Data& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    protected:
      // The category of the MCP marketplace template.
      shared_ptr<string> category_ {};
      // The description of the MCP service.
      shared_ptr<string> description_ {};
      // The display metadata of the template.
      Darabonba::Json displayMetadata_ {};
      // The icon URL of the MCP marketplace template.
      shared_ptr<string> iconUrl_ {};
      // The number of times the template has been installed.
      shared_ptr<int64_t> installCount_ {};
      // The MCP marketplace template ID.
      shared_ptr<string> marketItemId_ {};
      // The MCP type.
      shared_ptr<string> mcpType_ {};
      // The name of the MCP marketplace template.
      shared_ptr<string> name_ {};
      // The official usage tag.
      shared_ptr<string> officialTag_ {};
      // The MCP protocol.
      shared_ptr<string> protocol_ {};
      // The usage instructions for the MCP marketplace template.
      shared_ptr<string> readme_ {};
      // The template schema version.
      shared_ptr<string> schemaVersion_ {};
      // The template input schema, represented as a JSON Schema string.
      shared_ptr<string> templateInputSchema_ {};
      // The version of the MCP marketplace template.
      shared_ptr<string> templateVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMcpMarketItemResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMcpMarketItemResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMcpMarketItemResponseBody::Data) };
    inline GetMcpMarketItemResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMcpMarketItemResponseBody::Data) };
    inline GetMcpMarketItemResponseBody& setData(const GetMcpMarketItemResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMcpMarketItemResponseBody& setData(GetMcpMarketItemResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMcpMarketItemResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMcpMarketItemResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcpMarketItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMcpMarketItemResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetMcpMarketItemResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
