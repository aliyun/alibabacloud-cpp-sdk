// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYMULTIMODALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYMULTIMODALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByMultimodalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByMultimodalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(UtcCreate, utcCreate_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByMultimodalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(UtcCreate, utcCreate_);
    };
    SearchMediaByMultimodalRequest() = default ;
    SearchMediaByMultimodalRequest(const SearchMediaByMultimodalRequest &) = default ;
    SearchMediaByMultimodalRequest(SearchMediaByMultimodalRequest &&) = default ;
    SearchMediaByMultimodalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByMultimodalRequest() = default ;
    SearchMediaByMultimodalRequest& operator=(const SearchMediaByMultimodalRequest &) = default ;
    SearchMediaByMultimodalRequest& operator=(SearchMediaByMultimodalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customFilters_ == nullptr
        && return this->mediaType_ == nullptr && return this->namespace_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->searchLibName_ == nullptr
        && return this->text_ == nullptr && return this->utcCreate_ == nullptr; };
    // customFilters Field Functions 
    bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
    void deleteCustomFilters() { this->customFilters_ = nullptr;};
    inline string customFilters() const { DARABONBA_PTR_GET_DEFAULT(customFilters_, "") };
    inline SearchMediaByMultimodalRequest& setCustomFilters(string customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline SearchMediaByMultimodalRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SearchMediaByMultimodalRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline SearchMediaByMultimodalRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchMediaByMultimodalRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline SearchMediaByMultimodalRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SearchMediaByMultimodalRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // utcCreate Field Functions 
    bool hasUtcCreate() const { return this->utcCreate_ != nullptr;};
    void deleteUtcCreate() { this->utcCreate_ = nullptr;};
    inline string utcCreate() const { DARABONBA_PTR_GET_DEFAULT(utcCreate_, "") };
    inline SearchMediaByMultimodalRequest& setUtcCreate(string utcCreate) { DARABONBA_PTR_SET_VALUE(utcCreate_, utcCreate) };


  protected:
    std::shared_ptr<string> customFilters_ = nullptr;
    // The type of the media assets.
    // 
    // Valid values:
    // 
    // *   image
    // *   video (default)
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The search library.
    std::shared_ptr<string> searchLibName_ = nullptr;
    // The content that you want to query. You can describe the content in natural language.
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> utcCreate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
