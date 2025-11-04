// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYHYBRIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYHYBRIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByHybridRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByHybridRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(UtcCreate, utcCreate_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByHybridRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(UtcCreate, utcCreate_);
    };
    SearchMediaByHybridRequest() = default ;
    SearchMediaByHybridRequest(const SearchMediaByHybridRequest &) = default ;
    SearchMediaByHybridRequest(SearchMediaByHybridRequest &&) = default ;
    SearchMediaByHybridRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByHybridRequest() = default ;
    SearchMediaByHybridRequest& operator=(const SearchMediaByHybridRequest &) = default ;
    SearchMediaByHybridRequest& operator=(SearchMediaByHybridRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customFilters_ == nullptr
        && return this->mediaId_ == nullptr && return this->mediaType_ == nullptr && return this->namespace_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr
        && return this->searchLibName_ == nullptr && return this->text_ == nullptr && return this->utcCreate_ == nullptr; };
    // customFilters Field Functions 
    bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
    void deleteCustomFilters() { this->customFilters_ = nullptr;};
    inline string customFilters() const { DARABONBA_PTR_GET_DEFAULT(customFilters_, "") };
    inline SearchMediaByHybridRequest& setCustomFilters(string customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaByHybridRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline SearchMediaByHybridRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SearchMediaByHybridRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline SearchMediaByHybridRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchMediaByHybridRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline SearchMediaByHybridRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SearchMediaByHybridRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // utcCreate Field Functions 
    bool hasUtcCreate() const { return this->utcCreate_ != nullptr;};
    void deleteUtcCreate() { this->utcCreate_ = nullptr;};
    inline string utcCreate() const { DARABONBA_PTR_GET_DEFAULT(utcCreate_, "") };
    inline SearchMediaByHybridRequest& setUtcCreate(string utcCreate) { DARABONBA_PTR_SET_VALUE(utcCreate_, utcCreate) };


  protected:
    std::shared_ptr<string> customFilters_ = nullptr;
    // The ID of the media asset. If provided, the details of the media asset are returned.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The type of media assets. Valid values:
    // - image
    // - video
    std::shared_ptr<string> mediaType_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Valid values: 1 to 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the search library
    std::shared_ptr<string> searchLibName_ = nullptr;
    // The natural language search query.
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> utcCreate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
