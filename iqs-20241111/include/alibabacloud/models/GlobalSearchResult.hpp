// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_GLOBALSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GlobalPageItem.hpp>
#include <alibabacloud/models/GlobalQueryContext.hpp>
#include <alibabacloud/models/GlobalSceneItem.hpp>
#include <alibabacloud/models/GlobalSearchInformation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GlobalSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(pageItems, pageItems_);
      DARABONBA_PTR_TO_JSON(queryContext, queryContext_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sceneItems, sceneItems_);
      DARABONBA_PTR_TO_JSON(searchInformation, searchInformation_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(pageItems, pageItems_);
      DARABONBA_PTR_FROM_JSON(queryContext, queryContext_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sceneItems, sceneItems_);
      DARABONBA_PTR_FROM_JSON(searchInformation, searchInformation_);
    };
    GlobalSearchResult() = default ;
    GlobalSearchResult(const GlobalSearchResult &) = default ;
    GlobalSearchResult(GlobalSearchResult &&) = default ;
    GlobalSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalSearchResult() = default ;
    GlobalSearchResult& operator=(const GlobalSearchResult &) = default ;
    GlobalSearchResult& operator=(GlobalSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageItems_ == nullptr
        && return this->queryContext_ == nullptr && return this->requestId_ == nullptr && return this->sceneItems_ == nullptr && return this->searchInformation_ == nullptr; };
    // pageItems Field Functions 
    bool hasPageItems() const { return this->pageItems_ != nullptr;};
    void deletePageItems() { this->pageItems_ = nullptr;};
    inline const vector<GlobalPageItem> & pageItems() const { DARABONBA_PTR_GET_CONST(pageItems_, vector<GlobalPageItem>) };
    inline vector<GlobalPageItem> pageItems() { DARABONBA_PTR_GET(pageItems_, vector<GlobalPageItem>) };
    inline GlobalSearchResult& setPageItems(const vector<GlobalPageItem> & pageItems) { DARABONBA_PTR_SET_VALUE(pageItems_, pageItems) };
    inline GlobalSearchResult& setPageItems(vector<GlobalPageItem> && pageItems) { DARABONBA_PTR_SET_RVALUE(pageItems_, pageItems) };


    // queryContext Field Functions 
    bool hasQueryContext() const { return this->queryContext_ != nullptr;};
    void deleteQueryContext() { this->queryContext_ = nullptr;};
    inline const GlobalQueryContext & queryContext() const { DARABONBA_PTR_GET_CONST(queryContext_, GlobalQueryContext) };
    inline GlobalQueryContext queryContext() { DARABONBA_PTR_GET(queryContext_, GlobalQueryContext) };
    inline GlobalSearchResult& setQueryContext(const GlobalQueryContext & queryContext) { DARABONBA_PTR_SET_VALUE(queryContext_, queryContext) };
    inline GlobalSearchResult& setQueryContext(GlobalQueryContext && queryContext) { DARABONBA_PTR_SET_RVALUE(queryContext_, queryContext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GlobalSearchResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneItems Field Functions 
    bool hasSceneItems() const { return this->sceneItems_ != nullptr;};
    void deleteSceneItems() { this->sceneItems_ = nullptr;};
    inline const vector<GlobalSceneItem> & sceneItems() const { DARABONBA_PTR_GET_CONST(sceneItems_, vector<GlobalSceneItem>) };
    inline vector<GlobalSceneItem> sceneItems() { DARABONBA_PTR_GET(sceneItems_, vector<GlobalSceneItem>) };
    inline GlobalSearchResult& setSceneItems(const vector<GlobalSceneItem> & sceneItems) { DARABONBA_PTR_SET_VALUE(sceneItems_, sceneItems) };
    inline GlobalSearchResult& setSceneItems(vector<GlobalSceneItem> && sceneItems) { DARABONBA_PTR_SET_RVALUE(sceneItems_, sceneItems) };


    // searchInformation Field Functions 
    bool hasSearchInformation() const { return this->searchInformation_ != nullptr;};
    void deleteSearchInformation() { this->searchInformation_ = nullptr;};
    inline const GlobalSearchInformation & searchInformation() const { DARABONBA_PTR_GET_CONST(searchInformation_, GlobalSearchInformation) };
    inline GlobalSearchInformation searchInformation() { DARABONBA_PTR_GET(searchInformation_, GlobalSearchInformation) };
    inline GlobalSearchResult& setSearchInformation(const GlobalSearchInformation & searchInformation) { DARABONBA_PTR_SET_VALUE(searchInformation_, searchInformation) };
    inline GlobalSearchResult& setSearchInformation(GlobalSearchInformation && searchInformation) { DARABONBA_PTR_SET_RVALUE(searchInformation_, searchInformation) };


  protected:
    std::shared_ptr<vector<GlobalPageItem>> pageItems_ = nullptr;
    std::shared_ptr<GlobalQueryContext> queryContext_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GlobalSceneItem>> sceneItems_ = nullptr;
    std::shared_ptr<GlobalSearchInformation> searchInformation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
