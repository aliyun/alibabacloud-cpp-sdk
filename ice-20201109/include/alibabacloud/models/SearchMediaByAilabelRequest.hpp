// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByAILabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByAILabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MatchingMode, matchingMode_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(MultimodalSearchType, multimodalSearchType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SpecificSearch, specificSearch_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByAILabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchingMode, matchingMode_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(MultimodalSearchType, multimodalSearchType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SpecificSearch, specificSearch_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    SearchMediaByAILabelRequest() = default ;
    SearchMediaByAILabelRequest(const SearchMediaByAILabelRequest &) = default ;
    SearchMediaByAILabelRequest(SearchMediaByAILabelRequest &&) = default ;
    SearchMediaByAILabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByAILabelRequest() = default ;
    SearchMediaByAILabelRequest& operator=(const SearchMediaByAILabelRequest &) = default ;
    SearchMediaByAILabelRequest& operator=(SearchMediaByAILabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchingMode_ != nullptr
        && this->mediaId_ != nullptr && this->mediaType_ != nullptr && this->multimodalSearchType_ != nullptr && this->namespace_ != nullptr && this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->searchLibName_ != nullptr && this->sortBy_ != nullptr && this->specificSearch_ != nullptr && this->text_ != nullptr; };
    // matchingMode Field Functions 
    bool hasMatchingMode() const { return this->matchingMode_ != nullptr;};
    void deleteMatchingMode() { this->matchingMode_ = nullptr;};
    inline string matchingMode() const { DARABONBA_PTR_GET_DEFAULT(matchingMode_, "") };
    inline SearchMediaByAILabelRequest& setMatchingMode(string matchingMode) { DARABONBA_PTR_SET_VALUE(matchingMode_, matchingMode) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaByAILabelRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline SearchMediaByAILabelRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // multimodalSearchType Field Functions 
    bool hasMultimodalSearchType() const { return this->multimodalSearchType_ != nullptr;};
    void deleteMultimodalSearchType() { this->multimodalSearchType_ = nullptr;};
    inline string multimodalSearchType() const { DARABONBA_PTR_GET_DEFAULT(multimodalSearchType_, "") };
    inline SearchMediaByAILabelRequest& setMultimodalSearchType(string multimodalSearchType) { DARABONBA_PTR_SET_VALUE(multimodalSearchType_, multimodalSearchType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SearchMediaByAILabelRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline SearchMediaByAILabelRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchMediaByAILabelRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline SearchMediaByAILabelRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchMediaByAILabelRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // specificSearch Field Functions 
    bool hasSpecificSearch() const { return this->specificSearch_ != nullptr;};
    void deleteSpecificSearch() { this->specificSearch_ = nullptr;};
    inline bool specificSearch() const { DARABONBA_PTR_GET_DEFAULT(specificSearch_, false) };
    inline SearchMediaByAILabelRequest& setSpecificSearch(bool specificSearch) { DARABONBA_PTR_SET_VALUE(specificSearch_, specificSearch) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SearchMediaByAILabelRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> matchingMode_ = nullptr;
    // The ID of the media asset. This parameter is required if you want to query media asset clips.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The type of the media assets. Valid values:
    // 
    // *   image
    // *   video
    // *   audio
    std::shared_ptr<string> mediaType_ = nullptr;
    // The type of query. Valid values:
    // 
    // *   PersonName: queries media assets based on character names.
    // *   Ocr: queries media assets based on subtitles.
    // *   AiCategory: queries media assets based on AI categories.
    // *   FullSearch (default): queries all media assets.
    std::shared_ptr<string> multimodalSearchType_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the search library.
    std::shared_ptr<string> searchLibName_ = nullptr;
    // The sorting method of the results. Valid values:
    // 
    // *   CreationTime:Desc (default): sorts results in reverse chronological order.
    // *   CreationTime:Asc: sorts results in chronological order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // Specifies whether to query media asset clips. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> specificSearch_ = nullptr;
    // The content that you want to query.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
