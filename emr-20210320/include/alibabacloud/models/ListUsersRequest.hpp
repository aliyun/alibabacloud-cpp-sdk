// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserNames, userNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserNames, userNames_);
    };
    ListUsersRequest() = default ;
    ListUsersRequest(const ListUsersRequest &) = default ;
    ListUsersRequest(ListUsersRequest &&) = default ;
    ListUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersRequest() = default ;
    ListUsersRequest& operator=(const ListUsersRequest &) = default ;
    ListUsersRequest& operator=(ListUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->userName_ == nullptr && this->userNames_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListUsersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUsersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUsersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListUsersRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userNames Field Functions 
    bool hasUserNames() const { return this->userNames_ != nullptr;};
    void deleteUserNames() { this->userNames_ = nullptr;};
    inline const vector<string> & getUserNames() const { DARABONBA_PTR_GET_CONST(userNames_, vector<string>) };
    inline vector<string> getUserNames() { DARABONBA_PTR_GET(userNames_, vector<string>) };
    inline ListUsersRequest& setUserNames(const vector<string> & userNames) { DARABONBA_PTR_SET_VALUE(userNames_, userNames) };
    inline ListUsersRequest& setUserNames(vector<string> && userNames) { DARABONBA_PTR_SET_RVALUE(userNames_, userNames) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The username. Fuzzy match is supported.
    shared_ptr<string> userName_ {};
    // The usernames. Number of elements in the array: 0 to 20.
    shared_ptr<vector<string>> userNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
