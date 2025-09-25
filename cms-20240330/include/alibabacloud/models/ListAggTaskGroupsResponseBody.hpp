// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggTaskGroupsResponseBodyAggTaskGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAggTaskGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggTaskGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aggTaskGroups, aggTaskGroups_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggTaskGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aggTaskGroups, aggTaskGroups_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListAggTaskGroupsResponseBody() = default ;
    ListAggTaskGroupsResponseBody(const ListAggTaskGroupsResponseBody &) = default ;
    ListAggTaskGroupsResponseBody(ListAggTaskGroupsResponseBody &&) = default ;
    ListAggTaskGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggTaskGroupsResponseBody() = default ;
    ListAggTaskGroupsResponseBody& operator=(const ListAggTaskGroupsResponseBody &) = default ;
    ListAggTaskGroupsResponseBody& operator=(ListAggTaskGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggTaskGroups_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // aggTaskGroups Field Functions 
    bool hasAggTaskGroups() const { return this->aggTaskGroups_ != nullptr;};
    void deleteAggTaskGroups() { this->aggTaskGroups_ = nullptr;};
    inline const vector<ListAggTaskGroupsResponseBodyAggTaskGroups> & aggTaskGroups() const { DARABONBA_PTR_GET_CONST(aggTaskGroups_, vector<ListAggTaskGroupsResponseBodyAggTaskGroups>) };
    inline vector<ListAggTaskGroupsResponseBodyAggTaskGroups> aggTaskGroups() { DARABONBA_PTR_GET(aggTaskGroups_, vector<ListAggTaskGroupsResponseBodyAggTaskGroups>) };
    inline ListAggTaskGroupsResponseBody& setAggTaskGroups(const vector<ListAggTaskGroupsResponseBodyAggTaskGroups> & aggTaskGroups) { DARABONBA_PTR_SET_VALUE(aggTaskGroups_, aggTaskGroups) };
    inline ListAggTaskGroupsResponseBody& setAggTaskGroups(vector<ListAggTaskGroupsResponseBodyAggTaskGroups> && aggTaskGroups) { DARABONBA_PTR_SET_RVALUE(aggTaskGroups_, aggTaskGroups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggTaskGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggTaskGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggTaskGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAggTaskGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListAggTaskGroupsResponseBodyAggTaskGroups>> aggTaskGroups_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
