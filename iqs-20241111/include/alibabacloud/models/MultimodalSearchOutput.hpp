// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALSEARCHOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALSEARCHOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UnifiedImageItem.hpp>
#include <alibabacloud/models/MultimodalQueryContext.hpp>
#include <alibabacloud/models/SearchInformation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MultimodalSearchOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultimodalSearchOutput& obj) { 
      DARABONBA_PTR_TO_JSON(imageItems, imageItems_);
      DARABONBA_PTR_TO_JSON(queryContext, queryContext_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(searchInformation, searchInformation_);
    };
    friend void from_json(const Darabonba::Json& j, MultimodalSearchOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(imageItems, imageItems_);
      DARABONBA_PTR_FROM_JSON(queryContext, queryContext_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(searchInformation, searchInformation_);
    };
    MultimodalSearchOutput() = default ;
    MultimodalSearchOutput(const MultimodalSearchOutput &) = default ;
    MultimodalSearchOutput(MultimodalSearchOutput &&) = default ;
    MultimodalSearchOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultimodalSearchOutput() = default ;
    MultimodalSearchOutput& operator=(const MultimodalSearchOutput &) = default ;
    MultimodalSearchOutput& operator=(MultimodalSearchOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageItems_ == nullptr
        && this->queryContext_ == nullptr && this->requestId_ == nullptr && this->searchInformation_ == nullptr; };
    // imageItems Field Functions 
    bool hasImageItems() const { return this->imageItems_ != nullptr;};
    void deleteImageItems() { this->imageItems_ = nullptr;};
    inline const vector<UnifiedImageItem> & getImageItems() const { DARABONBA_PTR_GET_CONST(imageItems_, vector<UnifiedImageItem>) };
    inline vector<UnifiedImageItem> getImageItems() { DARABONBA_PTR_GET(imageItems_, vector<UnifiedImageItem>) };
    inline MultimodalSearchOutput& setImageItems(const vector<UnifiedImageItem> & imageItems) { DARABONBA_PTR_SET_VALUE(imageItems_, imageItems) };
    inline MultimodalSearchOutput& setImageItems(vector<UnifiedImageItem> && imageItems) { DARABONBA_PTR_SET_RVALUE(imageItems_, imageItems) };


    // queryContext Field Functions 
    bool hasQueryContext() const { return this->queryContext_ != nullptr;};
    void deleteQueryContext() { this->queryContext_ = nullptr;};
    inline const MultimodalQueryContext & getQueryContext() const { DARABONBA_PTR_GET_CONST(queryContext_, MultimodalQueryContext) };
    inline MultimodalQueryContext getQueryContext() { DARABONBA_PTR_GET(queryContext_, MultimodalQueryContext) };
    inline MultimodalSearchOutput& setQueryContext(const MultimodalQueryContext & queryContext) { DARABONBA_PTR_SET_VALUE(queryContext_, queryContext) };
    inline MultimodalSearchOutput& setQueryContext(MultimodalQueryContext && queryContext) { DARABONBA_PTR_SET_RVALUE(queryContext_, queryContext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MultimodalSearchOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchInformation Field Functions 
    bool hasSearchInformation() const { return this->searchInformation_ != nullptr;};
    void deleteSearchInformation() { this->searchInformation_ = nullptr;};
    inline const SearchInformation & getSearchInformation() const { DARABONBA_PTR_GET_CONST(searchInformation_, SearchInformation) };
    inline SearchInformation getSearchInformation() { DARABONBA_PTR_GET(searchInformation_, SearchInformation) };
    inline MultimodalSearchOutput& setSearchInformation(const SearchInformation & searchInformation) { DARABONBA_PTR_SET_VALUE(searchInformation_, searchInformation) };
    inline MultimodalSearchOutput& setSearchInformation(SearchInformation && searchInformation) { DARABONBA_PTR_SET_RVALUE(searchInformation_, searchInformation) };


  protected:
    shared_ptr<vector<UnifiedImageItem>> imageItems_ {};
    shared_ptr<MultimodalQueryContext> queryContext_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<SearchInformation> searchInformation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
