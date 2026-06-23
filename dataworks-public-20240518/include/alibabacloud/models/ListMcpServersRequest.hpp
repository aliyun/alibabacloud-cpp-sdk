// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListMcpServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Q, q_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Q, q_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    ListMcpServersRequest() = default ;
    ListMcpServersRequest(const ListMcpServersRequest &) = default ;
    ListMcpServersRequest(ListMcpServersRequest &&) = default ;
    ListMcpServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpServersRequest() = default ;
    ListMcpServersRequest& operator=(const ListMcpServersRequest &) = default ;
    ListMcpServersRequest& operator=(ListMcpServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->q_ == nullptr && this->visibility_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMcpServersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMcpServersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // q Field Functions 
    bool hasQ() const { return this->q_ != nullptr;};
    void deleteQ() { this->q_ = nullptr;};
    inline string getQ() const { DARABONBA_PTR_GET_DEFAULT(q_, "") };
    inline ListMcpServersRequest& setQ(string q) { DARABONBA_PTR_SET_VALUE(q_, q) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline const vector<string> & getVisibility() const { DARABONBA_PTR_GET_CONST(visibility_, vector<string>) };
    inline vector<string> getVisibility() { DARABONBA_PTR_GET(visibility_, vector<string>) };
    inline ListMcpServersRequest& setVisibility(const vector<string> & visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };
    inline ListMcpServersRequest& setVisibility(vector<string> && visibility) { DARABONBA_PTR_SET_RVALUE(visibility_, visibility) };


  protected:
    // The maximum number of results to return per page.
    shared_ptr<int32_t> maxResults_ {};
    // The next page token from a previous response. Use this token to retrieve the next page of results. Leave this parameter empty for the first request.
    shared_ptr<string> nextToken_ {};
    // The search keyword for a fuzzy search on MCP Server names.
    shared_ptr<string> q_ {};
    // The visibility level for filtering the results.
    shared_ptr<vector<string>> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
