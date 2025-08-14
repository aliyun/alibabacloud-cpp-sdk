// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(States, states_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(States, states_);
    };
    ListMediaLiveChannelsRequest() = default ;
    ListMediaLiveChannelsRequest(const ListMediaLiveChannelsRequest &) = default ;
    ListMediaLiveChannelsRequest(ListMediaLiveChannelsRequest &&) = default ;
    ListMediaLiveChannelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsRequest() = default ;
    ListMediaLiveChannelsRequest& operator=(const ListMediaLiveChannelsRequest &) = default ;
    ListMediaLiveChannelsRequest& operator=(ListMediaLiveChannelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->skip_ != nullptr && this->sortOrder_ != nullptr && this->states_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListMediaLiveChannelsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMediaLiveChannelsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaLiveChannelsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListMediaLiveChannelsRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListMediaLiveChannelsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline string states() const { DARABONBA_PTR_GET_DEFAULT(states_, "") };
    inline ListMediaLiveChannelsRequest& setStates(string states) { DARABONBA_PTR_SET_VALUE(states_, states) };


  protected:
    // The keyword of the query. You can perform a fuzzy search on channel ID or name.
    std::shared_ptr<string> keyword_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value:
    // 
    // *   If you do not specify this parameter or if you set a value smaller than 10, the default value is 10.
    // *   If you set a value greater than 100, the default value is 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries to be skipped in the query. If the number of entries you attempt to skip exceeds the number of entries that meet the condition, an empty list is returned.
    std::shared_ptr<int32_t> skip_ = nullptr;
    // The sorting order of the channels by creation time. Default value: asc. Valid values: desc and asc. asc indicates the ascending order, and desc indicates the descending order.
    std::shared_ptr<string> sortOrder_ = nullptr;
    // The state of channels you want to query. You can separate multiple states with commas (,) in a JSON array.
    std::shared_ptr<string> states_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
