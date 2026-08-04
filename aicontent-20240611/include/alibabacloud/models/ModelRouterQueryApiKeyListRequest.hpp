// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYAPIKEYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYAPIKEYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryApiKeyListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryApiKeyListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(includeMemberKeys, includeMemberKeys_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_TO_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryApiKeyListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(includeMemberKeys, includeMemberKeys_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_FROM_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ModelRouterQueryApiKeyListRequest() = default ;
    ModelRouterQueryApiKeyListRequest(const ModelRouterQueryApiKeyListRequest &) = default ;
    ModelRouterQueryApiKeyListRequest(ModelRouterQueryApiKeyListRequest &&) = default ;
    ModelRouterQueryApiKeyListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryApiKeyListRequest() = default ;
    ModelRouterQueryApiKeyListRequest& operator=(const ModelRouterQueryApiKeyListRequest &) = default ;
    ModelRouterQueryApiKeyListRequest& operator=(ModelRouterQueryApiKeyListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->groupBy_ == nullptr && this->includeMemberKeys_ == nullptr && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->memberUserIds_ == nullptr
        && this->needTotalCount_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ModelRouterQueryApiKeyListRequest& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline ModelRouterQueryApiKeyListRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // includeMemberKeys Field Functions 
    bool hasIncludeMemberKeys() const { return this->includeMemberKeys_ != nullptr;};
    void deleteIncludeMemberKeys() { this->includeMemberKeys_ = nullptr;};
    inline bool getIncludeMemberKeys() const { DARABONBA_PTR_GET_DEFAULT(includeMemberKeys_, false) };
    inline ModelRouterQueryApiKeyListRequest& setIncludeMemberKeys(bool includeMemberKeys) { DARABONBA_PTR_SET_VALUE(includeMemberKeys_, includeMemberKeys) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ModelRouterQueryApiKeyListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterQueryApiKeyListRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memberUserIds Field Functions 
    bool hasMemberUserIds() const { return this->memberUserIds_ != nullptr;};
    void deleteMemberUserIds() { this->memberUserIds_ = nullptr;};
    inline string getMemberUserIds() const { DARABONBA_PTR_GET_DEFAULT(memberUserIds_, "") };
    inline ModelRouterQueryApiKeyListRequest& setMemberUserIds(string memberUserIds) { DARABONBA_PTR_SET_VALUE(memberUserIds_, memberUserIds) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool getNeedTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline ModelRouterQueryApiKeyListRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterQueryApiKeyListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ModelRouterQueryApiKeyListRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ModelRouterQueryApiKeyListRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ModelRouterQueryApiKeyListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ModelRouterQueryApiKeyListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModelRouterQueryApiKeyListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The client ID used to filter the results.
    shared_ptr<int64_t> clientId_ {};
    // The field by which to group the results.
    shared_ptr<string> groupBy_ {};
    // Optional. If set to true, the keys of members under the department are also included when filtering by department.
    shared_ptr<bool> includeMemberKeys_ {};
    // The search keyword.
    shared_ptr<string> keyword_ {};
    // The maximum number of results to return.
    shared_ptr<int32_t> maxResults_ {};
    // Optional. Filters by member IDs. Separate multiple member IDs with commas. If this parameter is not specified, the department and all its members are included. If an empty value is specified, only the department is included without members.
    shared_ptr<string> memberUserIds_ {};
    // Specifies whether to return the total count.
    shared_ptr<bool> needTotalCount_ {};
    // The pagination token. An empty value indicates that no more pages are available.
    shared_ptr<string> nextToken_ {};
    // The field by which to sort the results.
    shared_ptr<string> orderBy_ {};
    // The sort direction.
    shared_ptr<string> orderDirection_ {};
    // The page number.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The status used to filter the results.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
