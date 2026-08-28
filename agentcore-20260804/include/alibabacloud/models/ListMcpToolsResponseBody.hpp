// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListMcpToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpToolsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListMcpToolsResponseBody& obj) { 
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
    ListMcpToolsResponseBody() = default ;
    ListMcpToolsResponseBody(const ListMcpToolsResponseBody &) = default ;
    ListMcpToolsResponseBody(ListMcpToolsResponseBody &&) = default ;
    ListMcpToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpToolsResponseBody() = default ;
    ListMcpToolsResponseBody& operator=(const ListMcpToolsResponseBody &) = default ;
    ListMcpToolsResponseBody& operator=(ListMcpToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(inputSchema, inputSchema_);
        DARABONBA_PTR_TO_JSON(outputSchema, outputSchema_);
        DARABONBA_PTR_TO_JSON(toolDescription, toolDescription_);
        DARABONBA_PTR_TO_JSON(toolName, toolName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(inputSchema, inputSchema_);
        DARABONBA_PTR_FROM_JSON(outputSchema, outputSchema_);
        DARABONBA_PTR_FROM_JSON(toolDescription, toolDescription_);
        DARABONBA_PTR_FROM_JSON(toolName, toolName_);
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
      virtual bool empty() const override { return this->inputSchema_ == nullptr
        && this->outputSchema_ == nullptr && this->toolDescription_ == nullptr && this->toolName_ == nullptr; };
      // inputSchema Field Functions 
      bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
      void deleteInputSchema() { this->inputSchema_ = nullptr;};
      inline string getInputSchema() const { DARABONBA_PTR_GET_DEFAULT(inputSchema_, "") };
      inline Items& setInputSchema(string inputSchema) { DARABONBA_PTR_SET_VALUE(inputSchema_, inputSchema) };


      // outputSchema Field Functions 
      bool hasOutputSchema() const { return this->outputSchema_ != nullptr;};
      void deleteOutputSchema() { this->outputSchema_ = nullptr;};
      inline string getOutputSchema() const { DARABONBA_PTR_GET_DEFAULT(outputSchema_, "") };
      inline Items& setOutputSchema(string outputSchema) { DARABONBA_PTR_SET_VALUE(outputSchema_, outputSchema) };


      // toolDescription Field Functions 
      bool hasToolDescription() const { return this->toolDescription_ != nullptr;};
      void deleteToolDescription() { this->toolDescription_ = nullptr;};
      inline string getToolDescription() const { DARABONBA_PTR_GET_DEFAULT(toolDescription_, "") };
      inline Items& setToolDescription(string toolDescription) { DARABONBA_PTR_SET_VALUE(toolDescription_, toolDescription) };


      // toolName Field Functions 
      bool hasToolName() const { return this->toolName_ != nullptr;};
      void deleteToolName() { this->toolName_ = nullptr;};
      inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
      inline Items& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    protected:
      // The input parameter schema of the tool.
      shared_ptr<string> inputSchema_ {};
      // The output parameter schema of the tool.
      shared_ptr<string> outputSchema_ {};
      // The MCP tool description.
      shared_ptr<string> toolDescription_ {};
      // The MCP tool name.
      shared_ptr<string> toolName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMcpToolsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListMcpToolsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListMcpToolsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListMcpToolsResponseBody::Items>) };
    inline vector<ListMcpToolsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListMcpToolsResponseBody::Items>) };
    inline ListMcpToolsResponseBody& setItems(const vector<ListMcpToolsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListMcpToolsResponseBody& setItems(vector<ListMcpToolsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMcpToolsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMcpToolsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMcpToolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcpToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcpToolsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMcpToolsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list data.
    shared_ptr<vector<ListMcpToolsResponseBody::Items>> items_ {};
    // The maximum number of results per page.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The token for the next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
