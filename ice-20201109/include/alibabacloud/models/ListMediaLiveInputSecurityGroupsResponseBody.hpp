// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSECURITYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSECURITYGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaLiveInputSecurityGroupsResponseBodySecurityGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveInputSecurityGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveInputSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveInputSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMediaLiveInputSecurityGroupsResponseBody() = default ;
    ListMediaLiveInputSecurityGroupsResponseBody(const ListMediaLiveInputSecurityGroupsResponseBody &) = default ;
    ListMediaLiveInputSecurityGroupsResponseBody(ListMediaLiveInputSecurityGroupsResponseBody &&) = default ;
    ListMediaLiveInputSecurityGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveInputSecurityGroupsResponseBody() = default ;
    ListMediaLiveInputSecurityGroupsResponseBody& operator=(const ListMediaLiveInputSecurityGroupsResponseBody &) = default ;
    ListMediaLiveInputSecurityGroupsResponseBody& operator=(ListMediaLiveInputSecurityGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->securityGroups_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<ListMediaLiveInputSecurityGroupsResponseBodySecurityGroups> & securityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<ListMediaLiveInputSecurityGroupsResponseBodySecurityGroups>) };
    inline vector<ListMediaLiveInputSecurityGroupsResponseBodySecurityGroups> securityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<ListMediaLiveInputSecurityGroupsResponseBodySecurityGroups>) };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setSecurityGroups(const vector<ListMediaLiveInputSecurityGroupsResponseBodySecurityGroups> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setSecurityGroups(vector<ListMediaLiveInputSecurityGroupsResponseBodySecurityGroups> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMediaLiveInputSecurityGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The security groups.
    std::shared_ptr<vector<ListMediaLiveInputSecurityGroupsResponseBodySecurityGroups>> securityGroups_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
