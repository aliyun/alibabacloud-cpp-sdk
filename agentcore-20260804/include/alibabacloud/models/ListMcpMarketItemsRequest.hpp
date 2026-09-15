// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPMARKETITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPMARKETITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListMcpMarketItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpMarketItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(mcpType, mcpType_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(officialTag, officialTag_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpMarketItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(mcpType, mcpType_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(officialTag, officialTag_);
    };
    ListMcpMarketItemsRequest() = default ;
    ListMcpMarketItemsRequest(const ListMcpMarketItemsRequest &) = default ;
    ListMcpMarketItemsRequest(ListMcpMarketItemsRequest &&) = default ;
    ListMcpMarketItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpMarketItemsRequest() = default ;
    ListMcpMarketItemsRequest& operator=(const ListMcpMarketItemsRequest &) = default ;
    ListMcpMarketItemsRequest& operator=(ListMcpMarketItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->maxResults_ == nullptr && this->mcpType_ == nullptr && this->nextToken_ == nullptr && this->officialTag_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListMcpMarketItemsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMcpMarketItemsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mcpType Field Functions 
    bool hasMcpType() const { return this->mcpType_ != nullptr;};
    void deleteMcpType() { this->mcpType_ = nullptr;};
    inline string getMcpType() const { DARABONBA_PTR_GET_DEFAULT(mcpType_, "") };
    inline ListMcpMarketItemsRequest& setMcpType(string mcpType) { DARABONBA_PTR_SET_VALUE(mcpType_, mcpType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMcpMarketItemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officialTag Field Functions 
    bool hasOfficialTag() const { return this->officialTag_ != nullptr;};
    void deleteOfficialTag() { this->officialTag_ = nullptr;};
    inline string getOfficialTag() const { DARABONBA_PTR_GET_DEFAULT(officialTag_, "") };
    inline ListMcpMarketItemsRequest& setOfficialTag(string officialTag) { DARABONBA_PTR_SET_VALUE(officialTag_, officialTag) };


  protected:
    // The keyword used to filter MCP marketplace templates.
    shared_ptr<string> keyword_ {};
    // The maximum number of records to return in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The MCP type.
    shared_ptr<string> mcpType_ {};
    // The pagination token used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The official usage tag.
    shared_ptr<string> officialTag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
