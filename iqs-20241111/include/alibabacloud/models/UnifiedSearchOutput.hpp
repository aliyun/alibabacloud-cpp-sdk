// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDSEARCHOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDSEARCHOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnifiedCostCredits.hpp>
#include <vector>
#include <alibabacloud/models/UnifiedPageItem.hpp>
#include <alibabacloud/models/UnifiedQueryContext.hpp>
#include <alibabacloud/models/UnifiedSceneItem.hpp>
#include <alibabacloud/models/UnifiedSearchInformation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedSearchOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedSearchOutput& obj) { 
      DARABONBA_PTR_TO_JSON(costCredits, costCredits_);
      DARABONBA_PTR_TO_JSON(pageItems, pageItems_);
      DARABONBA_PTR_TO_JSON(queryContext, queryContext_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sceneItems, sceneItems_);
      DARABONBA_PTR_TO_JSON(searchInformation, searchInformation_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedSearchOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(costCredits, costCredits_);
      DARABONBA_PTR_FROM_JSON(pageItems, pageItems_);
      DARABONBA_PTR_FROM_JSON(queryContext, queryContext_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sceneItems, sceneItems_);
      DARABONBA_PTR_FROM_JSON(searchInformation, searchInformation_);
    };
    UnifiedSearchOutput() = default ;
    UnifiedSearchOutput(const UnifiedSearchOutput &) = default ;
    UnifiedSearchOutput(UnifiedSearchOutput &&) = default ;
    UnifiedSearchOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedSearchOutput() = default ;
    UnifiedSearchOutput& operator=(const UnifiedSearchOutput &) = default ;
    UnifiedSearchOutput& operator=(UnifiedSearchOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCredits_ != nullptr
        && this->pageItems_ != nullptr && this->queryContext_ != nullptr && this->requestId_ != nullptr && this->sceneItems_ != nullptr && this->searchInformation_ != nullptr; };
    // costCredits Field Functions 
    bool hasCostCredits() const { return this->costCredits_ != nullptr;};
    void deleteCostCredits() { this->costCredits_ = nullptr;};
    inline const UnifiedCostCredits & costCredits() const { DARABONBA_PTR_GET_CONST(costCredits_, UnifiedCostCredits) };
    inline UnifiedCostCredits costCredits() { DARABONBA_PTR_GET(costCredits_, UnifiedCostCredits) };
    inline UnifiedSearchOutput& setCostCredits(const UnifiedCostCredits & costCredits) { DARABONBA_PTR_SET_VALUE(costCredits_, costCredits) };
    inline UnifiedSearchOutput& setCostCredits(UnifiedCostCredits && costCredits) { DARABONBA_PTR_SET_RVALUE(costCredits_, costCredits) };


    // pageItems Field Functions 
    bool hasPageItems() const { return this->pageItems_ != nullptr;};
    void deletePageItems() { this->pageItems_ = nullptr;};
    inline const vector<UnifiedPageItem> & pageItems() const { DARABONBA_PTR_GET_CONST(pageItems_, vector<UnifiedPageItem>) };
    inline vector<UnifiedPageItem> pageItems() { DARABONBA_PTR_GET(pageItems_, vector<UnifiedPageItem>) };
    inline UnifiedSearchOutput& setPageItems(const vector<UnifiedPageItem> & pageItems) { DARABONBA_PTR_SET_VALUE(pageItems_, pageItems) };
    inline UnifiedSearchOutput& setPageItems(vector<UnifiedPageItem> && pageItems) { DARABONBA_PTR_SET_RVALUE(pageItems_, pageItems) };


    // queryContext Field Functions 
    bool hasQueryContext() const { return this->queryContext_ != nullptr;};
    void deleteQueryContext() { this->queryContext_ = nullptr;};
    inline const UnifiedQueryContext & queryContext() const { DARABONBA_PTR_GET_CONST(queryContext_, UnifiedQueryContext) };
    inline UnifiedQueryContext queryContext() { DARABONBA_PTR_GET(queryContext_, UnifiedQueryContext) };
    inline UnifiedSearchOutput& setQueryContext(const UnifiedQueryContext & queryContext) { DARABONBA_PTR_SET_VALUE(queryContext_, queryContext) };
    inline UnifiedSearchOutput& setQueryContext(UnifiedQueryContext && queryContext) { DARABONBA_PTR_SET_RVALUE(queryContext_, queryContext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnifiedSearchOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneItems Field Functions 
    bool hasSceneItems() const { return this->sceneItems_ != nullptr;};
    void deleteSceneItems() { this->sceneItems_ = nullptr;};
    inline const vector<UnifiedSceneItem> & sceneItems() const { DARABONBA_PTR_GET_CONST(sceneItems_, vector<UnifiedSceneItem>) };
    inline vector<UnifiedSceneItem> sceneItems() { DARABONBA_PTR_GET(sceneItems_, vector<UnifiedSceneItem>) };
    inline UnifiedSearchOutput& setSceneItems(const vector<UnifiedSceneItem> & sceneItems) { DARABONBA_PTR_SET_VALUE(sceneItems_, sceneItems) };
    inline UnifiedSearchOutput& setSceneItems(vector<UnifiedSceneItem> && sceneItems) { DARABONBA_PTR_SET_RVALUE(sceneItems_, sceneItems) };


    // searchInformation Field Functions 
    bool hasSearchInformation() const { return this->searchInformation_ != nullptr;};
    void deleteSearchInformation() { this->searchInformation_ = nullptr;};
    inline const UnifiedSearchInformation & searchInformation() const { DARABONBA_PTR_GET_CONST(searchInformation_, UnifiedSearchInformation) };
    inline UnifiedSearchInformation searchInformation() { DARABONBA_PTR_GET(searchInformation_, UnifiedSearchInformation) };
    inline UnifiedSearchOutput& setSearchInformation(const UnifiedSearchInformation & searchInformation) { DARABONBA_PTR_SET_VALUE(searchInformation_, searchInformation) };
    inline UnifiedSearchOutput& setSearchInformation(UnifiedSearchInformation && searchInformation) { DARABONBA_PTR_SET_RVALUE(searchInformation_, searchInformation) };


  protected:
    std::shared_ptr<UnifiedCostCredits> costCredits_ = nullptr;
    std::shared_ptr<vector<UnifiedPageItem>> pageItems_ = nullptr;
    std::shared_ptr<UnifiedQueryContext> queryContext_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<UnifiedSceneItem>> sceneItems_ = nullptr;
    std::shared_ptr<UnifiedSearchInformation> searchInformation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
