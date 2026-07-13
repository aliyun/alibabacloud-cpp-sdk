// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHATIAGENTREGISTERINFOMARKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHATIAGENTREGISTERINFOMARKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchAtiAgentRegisterInfoMarketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAtiAgentRegisterInfoMarketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrustLevel, trustLevel_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAtiAgentRegisterInfoMarketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrustLevel, trustLevel_);
    };
    SearchAtiAgentRegisterInfoMarketRequest() = default ;
    SearchAtiAgentRegisterInfoMarketRequest(const SearchAtiAgentRegisterInfoMarketRequest &) = default ;
    SearchAtiAgentRegisterInfoMarketRequest(SearchAtiAgentRegisterInfoMarketRequest &&) = default ;
    SearchAtiAgentRegisterInfoMarketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAtiAgentRegisterInfoMarketRequest() = default ;
    SearchAtiAgentRegisterInfoMarketRequest& operator=(const SearchAtiAgentRegisterInfoMarketRequest &) = default ;
    SearchAtiAgentRegisterInfoMarketRequest& operator=(SearchAtiAgentRegisterInfoMarketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->protocol_ == nullptr && this->status_ == nullptr && this->trustLevel_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SearchAtiAgentRegisterInfoMarketRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline SearchAtiAgentRegisterInfoMarketRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchAtiAgentRegisterInfoMarketRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchAtiAgentRegisterInfoMarketRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchAtiAgentRegisterInfoMarketRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAtiAgentRegisterInfoMarketRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline SearchAtiAgentRegisterInfoMarketRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchAtiAgentRegisterInfoMarketRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trustLevel Field Functions 
    bool hasTrustLevel() const { return this->trustLevel_ != nullptr;};
    void deleteTrustLevel() { this->trustLevel_ = nullptr;};
    inline string getTrustLevel() const { DARABONBA_PTR_GET_DEFAULT(trustLevel_, "") };
    inline SearchAtiAgentRegisterInfoMarketRequest& setTrustLevel(string trustLevel) { DARABONBA_PTR_SET_VALUE(trustLevel_, trustLevel) };


  protected:
    // Ensures the idempotency of the request. Generate a unique parameter value from your client to ensure uniqueness across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters in length.
    // 
    // If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The keyword for searching. Matches against agent name, domain name, and description.
    shared_ptr<string> keyword_ {};
    // The number of entries per batch query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query.
    shared_ptr<string> nextToken_ {};
    // The current page number. Minimum value: **1**. Default value: **1**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for the paged query. Settings: maximum value: 100. Default value: 20. This parameter controls paging behavior.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The communication protocol that the agent endpoint follows, which determines how callers interact with the agent.
    // 
    // Valid values:
    // - MCP: Model Context Protocol, an agent tool calling protocol developed by Anthropic.
    // - A2A: Agent-to-Agent Protocol, a cross-agent communication protocol developed by Google.
    // - OpenAPI: Standard RESTful API specification (Swagger/OpenAPI).
    // 
    // Other agents or clients use this protocol identifier to determine how to communicate with the agent. For example, MCP uses the MCP SDK, A2A uses the A2A SDK, and OpenAPI uses standard HTTP requests.
    shared_ptr<string> protocol_ {};
    // Queries agents based on the agent status.
    shared_ptr<string> status_ {};
    // Queries agents based on the trust level.
    shared_ptr<string> trustLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
