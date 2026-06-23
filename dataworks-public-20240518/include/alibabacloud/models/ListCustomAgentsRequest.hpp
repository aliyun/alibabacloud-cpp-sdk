// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTSREQUEST_HPP_
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
  class ListCustomAgentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Q, q_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Q, q_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    ListCustomAgentsRequest() = default ;
    ListCustomAgentsRequest(const ListCustomAgentsRequest &) = default ;
    ListCustomAgentsRequest(ListCustomAgentsRequest &&) = default ;
    ListCustomAgentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentsRequest() = default ;
    ListCustomAgentsRequest& operator=(const ListCustomAgentsRequest &) = default ;
    ListCustomAgentsRequest& operator=(ListCustomAgentsRequest &&) = default ;
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
    inline ListCustomAgentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomAgentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // q Field Functions 
    bool hasQ() const { return this->q_ != nullptr;};
    void deleteQ() { this->q_ = nullptr;};
    inline string getQ() const { DARABONBA_PTR_GET_DEFAULT(q_, "") };
    inline ListCustomAgentsRequest& setQ(string q) { DARABONBA_PTR_SET_VALUE(q_, q) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline const vector<string> & getVisibility() const { DARABONBA_PTR_GET_CONST(visibility_, vector<string>) };
    inline vector<string> getVisibility() { DARABONBA_PTR_GET(visibility_, vector<string>) };
    inline ListCustomAgentsRequest& setVisibility(const vector<string> & visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };
    inline ListCustomAgentsRequest& setVisibility(vector<string> && visibility) { DARABONBA_PTR_SET_RVALUE(visibility_, visibility) };


  protected:
    // The maximum number of entries to return on a single page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Omit this parameter for the first request. For subsequent requests, use the `NextToken` value from the previous response to retrieve the next page.
    shared_ptr<string> nextToken_ {};
    // The search keyword for a fuzzy match by agent name.
    shared_ptr<string> q_ {};
    // Filters the results by visibility level. You can specify multiple levels.
    shared_ptr<vector<string>> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
