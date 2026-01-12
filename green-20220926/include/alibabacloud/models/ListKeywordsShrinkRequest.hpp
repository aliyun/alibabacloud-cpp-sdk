// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYWORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYWORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListKeywordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeywordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sortShrink_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeywordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sortShrink_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    ListKeywordsShrinkRequest() = default ;
    ListKeywordsShrinkRequest(const ListKeywordsShrinkRequest &) = default ;
    ListKeywordsShrinkRequest(ListKeywordsShrinkRequest &&) = default ;
    ListKeywordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeywordsShrinkRequest() = default ;
    ListKeywordsShrinkRequest& operator=(const ListKeywordsShrinkRequest &) = default ;
    ListKeywordsShrinkRequest& operator=(ListKeywordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->libId_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->sortShrink_ == nullptr && this->word_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListKeywordsShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ListKeywordsShrinkRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKeywordsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListKeywordsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortShrink Field Functions 
    bool hasSortShrink() const { return this->sortShrink_ != nullptr;};
    void deleteSortShrink() { this->sortShrink_ = nullptr;};
    inline string getSortShrink() const { DARABONBA_PTR_GET_DEFAULT(sortShrink_, "") };
    inline ListKeywordsShrinkRequest& setSortShrink(string sortShrink) { DARABONBA_PTR_SET_VALUE(sortShrink_, sortShrink) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline ListKeywordsShrinkRequest& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Library ID.
    shared_ptr<string> libId_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Sort field.
    shared_ptr<string> sortShrink_ {};
    // Keyword.
    shared_ptr<string> word_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
