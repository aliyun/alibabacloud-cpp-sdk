// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYVIEWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYVIEWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListQueryViewsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryViewsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QueryViewScene, queryViewScene_);
      DARABONBA_PTR_TO_JSON(QueryViewType, queryViewType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryViewsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QueryViewScene, queryViewScene_);
      DARABONBA_PTR_FROM_JSON(QueryViewType, queryViewType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    ListQueryViewsRequest() = default ;
    ListQueryViewsRequest(const ListQueryViewsRequest &) = default ;
    ListQueryViewsRequest(ListQueryViewsRequest &&) = default ;
    ListQueryViewsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryViewsRequest() = default ;
    ListQueryViewsRequest& operator=(const ListQueryViewsRequest &) = default ;
    ListQueryViewsRequest& operator=(ListQueryViewsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->queryViewScene_ == nullptr && this->queryViewType_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListQueryViewsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQueryViewsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQueryViewsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queryViewScene Field Functions 
    bool hasQueryViewScene() const { return this->queryViewScene_ != nullptr;};
    void deleteQueryViewScene() { this->queryViewScene_ = nullptr;};
    inline string getQueryViewScene() const { DARABONBA_PTR_GET_DEFAULT(queryViewScene_, "") };
    inline ListQueryViewsRequest& setQueryViewScene(string queryViewScene) { DARABONBA_PTR_SET_VALUE(queryViewScene_, queryViewScene) };


    // queryViewType Field Functions 
    bool hasQueryViewType() const { return this->queryViewType_ != nullptr;};
    void deleteQueryViewType() { this->queryViewType_ = nullptr;};
    inline string getQueryViewType() const { DARABONBA_PTR_GET_DEFAULT(queryViewType_, "") };
    inline ListQueryViewsRequest& setQueryViewType(string queryViewType) { DARABONBA_PTR_SET_VALUE(queryViewType_, queryViewType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListQueryViewsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListQueryViewsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListQueryViewsRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of results to return per request when using the NextToken-based pagination. Valid values: 1 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. You do not need to specify this parameter for the first query or if no more results exist. If more results exist, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The scene to which the query view belongs.
    shared_ptr<string> queryViewScene_ {};
    // The view type. If this parameter is left empty, all views are returned.
    shared_ptr<string> queryViewType_ {};
    // The region where the threat analysis data management center is located. Specify the management center based on the region of your assets. Valid values:
    // 
    // - cn-hangzhou: Your assets belong to the Chinese mainland or Hong Kong (China).
    // - ap-southeast-1: Your assets belong to regions outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // The view type.
    // 
    // - 0: the view of the current Alibaba Cloud account.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
