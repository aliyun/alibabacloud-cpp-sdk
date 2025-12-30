// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETRANSCODETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETRANSCODETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveTranscodeTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTranscodeTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTranscodeTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
    };
    ListLiveTranscodeTemplatesRequest() = default ;
    ListLiveTranscodeTemplatesRequest(const ListLiveTranscodeTemplatesRequest &) = default ;
    ListLiveTranscodeTemplatesRequest(ListLiveTranscodeTemplatesRequest &&) = default ;
    ListLiveTranscodeTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTranscodeTemplatesRequest() = default ;
    ListLiveTranscodeTemplatesRequest& operator=(const ListLiveTranscodeTemplatesRequest &) = default ;
    ListLiveTranscodeTemplatesRequest& operator=(ListLiveTranscodeTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->keyWord_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->type_ == nullptr
        && this->videoCodec_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListLiveTranscodeTemplatesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline ListLiveTranscodeTemplatesRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListLiveTranscodeTemplatesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveTranscodeTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveTranscodeTemplatesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLiveTranscodeTemplatesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // videoCodec Field Functions 
    bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
    void deleteVideoCodec() { this->videoCodec_ = nullptr;};
    inline string getVideoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
    inline ListLiveTranscodeTemplatesRequest& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


  protected:
    // The category of the template. Valid values:
    // 
    // *   system
    // *   customized
    shared_ptr<string> category_ {};
    // The search keyword. You can use the template ID or name as the keyword to search for templates. If you search for templates by name, fuzzy match is supported.
    shared_ptr<string> keyWord_ {};
    // The page number of the page to return. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The sorting order. By default, the query results are sorted by creation time in descending order. Valid values:
    // 
    // *   asc
    // *   desc
    shared_ptr<string> sortBy_ {};
    // The type of the template. Valid values:
    // 
    // *   normal
    // *   narrow-band
    // *   audio-only
    // *   origin
    shared_ptr<string> type_ {};
    // The video codec. Valid values:
    // 
    // *   H.264
    // *   H.265
    shared_ptr<string> videoCodec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
