// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERICSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_GENERICSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScorePageItem.hpp>
#include <alibabacloud/models/QueryContext.hpp>
#include <alibabacloud/models/SceneItem.hpp>
#include <alibabacloud/models/SearchInformation.hpp>
#include <alibabacloud/models/WeiboItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GenericSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenericSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(pageItems, pageItems_);
      DARABONBA_PTR_TO_JSON(queryContext, queryContext_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sceneItems, sceneItems_);
      DARABONBA_PTR_TO_JSON(searchInformation, searchInformation_);
      DARABONBA_PTR_TO_JSON(weiboItems, weiboItems_);
    };
    friend void from_json(const Darabonba::Json& j, GenericSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(pageItems, pageItems_);
      DARABONBA_PTR_FROM_JSON(queryContext, queryContext_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sceneItems, sceneItems_);
      DARABONBA_PTR_FROM_JSON(searchInformation, searchInformation_);
      DARABONBA_PTR_FROM_JSON(weiboItems, weiboItems_);
    };
    GenericSearchResult() = default ;
    GenericSearchResult(const GenericSearchResult &) = default ;
    GenericSearchResult(GenericSearchResult &&) = default ;
    GenericSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenericSearchResult() = default ;
    GenericSearchResult& operator=(const GenericSearchResult &) = default ;
    GenericSearchResult& operator=(GenericSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageItems_ != nullptr
        && this->queryContext_ != nullptr && this->requestId_ != nullptr && this->sceneItems_ != nullptr && this->searchInformation_ != nullptr && this->weiboItems_ != nullptr; };
    // pageItems Field Functions 
    bool hasPageItems() const { return this->pageItems_ != nullptr;};
    void deletePageItems() { this->pageItems_ = nullptr;};
    inline const vector<ScorePageItem> & pageItems() const { DARABONBA_PTR_GET_CONST(pageItems_, vector<ScorePageItem>) };
    inline vector<ScorePageItem> pageItems() { DARABONBA_PTR_GET(pageItems_, vector<ScorePageItem>) };
    inline GenericSearchResult& setPageItems(const vector<ScorePageItem> & pageItems) { DARABONBA_PTR_SET_VALUE(pageItems_, pageItems) };
    inline GenericSearchResult& setPageItems(vector<ScorePageItem> && pageItems) { DARABONBA_PTR_SET_RVALUE(pageItems_, pageItems) };


    // queryContext Field Functions 
    bool hasQueryContext() const { return this->queryContext_ != nullptr;};
    void deleteQueryContext() { this->queryContext_ = nullptr;};
    inline const QueryContext & queryContext() const { DARABONBA_PTR_GET_CONST(queryContext_, QueryContext) };
    inline QueryContext queryContext() { DARABONBA_PTR_GET(queryContext_, QueryContext) };
    inline GenericSearchResult& setQueryContext(const QueryContext & queryContext) { DARABONBA_PTR_SET_VALUE(queryContext_, queryContext) };
    inline GenericSearchResult& setQueryContext(QueryContext && queryContext) { DARABONBA_PTR_SET_RVALUE(queryContext_, queryContext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenericSearchResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneItems Field Functions 
    bool hasSceneItems() const { return this->sceneItems_ != nullptr;};
    void deleteSceneItems() { this->sceneItems_ = nullptr;};
    inline const vector<SceneItem> & sceneItems() const { DARABONBA_PTR_GET_CONST(sceneItems_, vector<SceneItem>) };
    inline vector<SceneItem> sceneItems() { DARABONBA_PTR_GET(sceneItems_, vector<SceneItem>) };
    inline GenericSearchResult& setSceneItems(const vector<SceneItem> & sceneItems) { DARABONBA_PTR_SET_VALUE(sceneItems_, sceneItems) };
    inline GenericSearchResult& setSceneItems(vector<SceneItem> && sceneItems) { DARABONBA_PTR_SET_RVALUE(sceneItems_, sceneItems) };


    // searchInformation Field Functions 
    bool hasSearchInformation() const { return this->searchInformation_ != nullptr;};
    void deleteSearchInformation() { this->searchInformation_ = nullptr;};
    inline const SearchInformation & searchInformation() const { DARABONBA_PTR_GET_CONST(searchInformation_, SearchInformation) };
    inline SearchInformation searchInformation() { DARABONBA_PTR_GET(searchInformation_, SearchInformation) };
    inline GenericSearchResult& setSearchInformation(const SearchInformation & searchInformation) { DARABONBA_PTR_SET_VALUE(searchInformation_, searchInformation) };
    inline GenericSearchResult& setSearchInformation(SearchInformation && searchInformation) { DARABONBA_PTR_SET_RVALUE(searchInformation_, searchInformation) };


    // weiboItems Field Functions 
    bool hasWeiboItems() const { return this->weiboItems_ != nullptr;};
    void deleteWeiboItems() { this->weiboItems_ = nullptr;};
    inline const vector<WeiboItem> & weiboItems() const { DARABONBA_PTR_GET_CONST(weiboItems_, vector<WeiboItem>) };
    inline vector<WeiboItem> weiboItems() { DARABONBA_PTR_GET(weiboItems_, vector<WeiboItem>) };
    inline GenericSearchResult& setWeiboItems(const vector<WeiboItem> & weiboItems) { DARABONBA_PTR_SET_VALUE(weiboItems_, weiboItems) };
    inline GenericSearchResult& setWeiboItems(vector<WeiboItem> && weiboItems) { DARABONBA_PTR_SET_RVALUE(weiboItems_, weiboItems) };


  protected:
    std::shared_ptr<vector<ScorePageItem>> pageItems_ = nullptr;
    std::shared_ptr<QueryContext> queryContext_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<SceneItem>> sceneItems_ = nullptr;
    std::shared_ptr<SearchInformation> searchInformation_ = nullptr;
    std::shared_ptr<vector<WeiboItem>> weiboItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
