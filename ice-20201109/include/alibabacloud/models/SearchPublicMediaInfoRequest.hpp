// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchPublicMediaInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPublicMediaInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Authorized, authorized_);
      DARABONBA_PTR_TO_JSON(DynamicMetaDataMatchFields, dynamicMetaDataMatchFields_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Favorite, favorite_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPublicMediaInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
      DARABONBA_PTR_FROM_JSON(DynamicMetaDataMatchFields, dynamicMetaDataMatchFields_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(Favorite, favorite_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    SearchPublicMediaInfoRequest() = default ;
    SearchPublicMediaInfoRequest(const SearchPublicMediaInfoRequest &) = default ;
    SearchPublicMediaInfoRequest(SearchPublicMediaInfoRequest &&) = default ;
    SearchPublicMediaInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPublicMediaInfoRequest() = default ;
    SearchPublicMediaInfoRequest& operator=(const SearchPublicMediaInfoRequest &) = default ;
    SearchPublicMediaInfoRequest& operator=(SearchPublicMediaInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorized_ == nullptr
        && this->dynamicMetaDataMatchFields_ == nullptr && this->entityId_ == nullptr && this->favorite_ == nullptr && this->mediaIds_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->sortBy_ == nullptr; };
    // authorized Field Functions 
    bool hasAuthorized() const { return this->authorized_ != nullptr;};
    void deleteAuthorized() { this->authorized_ = nullptr;};
    inline bool getAuthorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, false) };
    inline SearchPublicMediaInfoRequest& setAuthorized(bool authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


    // dynamicMetaDataMatchFields Field Functions 
    bool hasDynamicMetaDataMatchFields() const { return this->dynamicMetaDataMatchFields_ != nullptr;};
    void deleteDynamicMetaDataMatchFields() { this->dynamicMetaDataMatchFields_ = nullptr;};
    inline string getDynamicMetaDataMatchFields() const { DARABONBA_PTR_GET_DEFAULT(dynamicMetaDataMatchFields_, "") };
    inline SearchPublicMediaInfoRequest& setDynamicMetaDataMatchFields(string dynamicMetaDataMatchFields) { DARABONBA_PTR_SET_VALUE(dynamicMetaDataMatchFields_, dynamicMetaDataMatchFields) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SearchPublicMediaInfoRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // favorite Field Functions 
    bool hasFavorite() const { return this->favorite_ != nullptr;};
    void deleteFavorite() { this->favorite_ = nullptr;};
    inline bool getFavorite() const { DARABONBA_PTR_GET_DEFAULT(favorite_, false) };
    inline SearchPublicMediaInfoRequest& setFavorite(bool favorite) { DARABONBA_PTR_SET_VALUE(favorite_, favorite) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline SearchPublicMediaInfoRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline SearchPublicMediaInfoRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchPublicMediaInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchPublicMediaInfoRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    shared_ptr<bool> authorized_ {};
    shared_ptr<string> dynamicMetaDataMatchFields_ {};
    shared_ptr<string> entityId_ {};
    shared_ptr<bool> favorite_ {};
    shared_ptr<string> mediaIds_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
