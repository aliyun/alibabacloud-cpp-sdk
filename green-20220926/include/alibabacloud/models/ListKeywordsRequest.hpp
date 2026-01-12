// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYWORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYWORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListKeywordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeywordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeywordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    ListKeywordsRequest() = default ;
    ListKeywordsRequest(const ListKeywordsRequest &) = default ;
    ListKeywordsRequest(ListKeywordsRequest &&) = default ;
    ListKeywordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeywordsRequest() = default ;
    ListKeywordsRequest& operator=(const ListKeywordsRequest &) = default ;
    ListKeywordsRequest& operator=(ListKeywordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->libId_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->sort_ == nullptr && this->word_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListKeywordsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ListKeywordsRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKeywordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListKeywordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline const map<string, string> & getSort() const { DARABONBA_PTR_GET_CONST(sort_, map<string, string>) };
    inline map<string, string> getSort() { DARABONBA_PTR_GET(sort_, map<string, string>) };
    inline ListKeywordsRequest& setSort(const map<string, string> & sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };
    inline ListKeywordsRequest& setSort(map<string, string> && sort) { DARABONBA_PTR_SET_RVALUE(sort_, sort) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline ListKeywordsRequest& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


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
    shared_ptr<map<string, string>> sort_ {};
    // Keyword.
    shared_ptr<string> word_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
