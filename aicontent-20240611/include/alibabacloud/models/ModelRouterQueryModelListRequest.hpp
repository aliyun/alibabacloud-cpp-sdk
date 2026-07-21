// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYMODELLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYMODELLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryModelListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryModelListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryModelListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ModelRouterQueryModelListRequest() = default ;
    ModelRouterQueryModelListRequest(const ModelRouterQueryModelListRequest &) = default ;
    ModelRouterQueryModelListRequest(ModelRouterQueryModelListRequest &&) = default ;
    ModelRouterQueryModelListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryModelListRequest() = default ;
    ModelRouterQueryModelListRequest& operator=(const ModelRouterQueryModelListRequest &) = default ;
    ModelRouterQueryModelListRequest& operator=(ModelRouterQueryModelListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupBy_ == nullptr
        && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->modelType_ == nullptr && this->needTotalCount_ == nullptr && this->nextToken_ == nullptr
        && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline ModelRouterQueryModelListRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ModelRouterQueryModelListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterQueryModelListRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelRouterQueryModelListRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool getNeedTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline ModelRouterQueryModelListRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterQueryModelListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ModelRouterQueryModelListRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ModelRouterQueryModelListRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ModelRouterQueryModelListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ModelRouterQueryModelListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModelRouterQueryModelListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The field to use for grouping the results.
    shared_ptr<string> groupBy_ {};
    // The keyword for a fuzzy search on model information.
    shared_ptr<string> keyword_ {};
    // The maximum number of results to return.
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> modelType_ {};
    // Specifies whether to include the total count of matching models in the response.
    shared_ptr<bool> needTotalCount_ {};
    // The pagination token for retrieving the next page of results. If this parameter is not specified, the first page is retrieved. To retrieve a subsequent page, set this to the `nextToken` value from the previous response.
    shared_ptr<string> nextToken_ {};
    // The field to use for sorting the results.
    shared_ptr<string> orderBy_ {};
    // The sort order. Valid values include `ASC` for ascending order and `DESC` for descending order.
    shared_ptr<string> orderDirection_ {};
    // The page number to retrieve. Pages are numbered starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of models to return per page.
    shared_ptr<int32_t> pageSize_ {};
    // The model status to use as a filter.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
