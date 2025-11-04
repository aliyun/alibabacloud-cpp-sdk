// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(FaceSearchToken, faceSearchToken_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PersonImageUrl, personImageUrl_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(UtcCreate, utcCreate_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(FaceSearchToken, faceSearchToken_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PersonImageUrl, personImageUrl_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_FROM_JSON(UtcCreate, utcCreate_);
    };
    SearchMediaByFaceRequest() = default ;
    SearchMediaByFaceRequest(const SearchMediaByFaceRequest &) = default ;
    SearchMediaByFaceRequest(SearchMediaByFaceRequest &&) = default ;
    SearchMediaByFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByFaceRequest() = default ;
    SearchMediaByFaceRequest& operator=(const SearchMediaByFaceRequest &) = default ;
    SearchMediaByFaceRequest& operator=(SearchMediaByFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customFilters_ == nullptr
        && return this->entityId_ == nullptr && return this->faceSearchToken_ == nullptr && return this->mediaType_ == nullptr && return this->namespace_ == nullptr && return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->personImageUrl_ == nullptr && return this->searchLibName_ == nullptr && return this->utcCreate_ == nullptr; };
    // customFilters Field Functions 
    bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
    void deleteCustomFilters() { this->customFilters_ = nullptr;};
    inline string customFilters() const { DARABONBA_PTR_GET_DEFAULT(customFilters_, "") };
    inline SearchMediaByFaceRequest& setCustomFilters(string customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SearchMediaByFaceRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // faceSearchToken Field Functions 
    bool hasFaceSearchToken() const { return this->faceSearchToken_ != nullptr;};
    void deleteFaceSearchToken() { this->faceSearchToken_ = nullptr;};
    inline string faceSearchToken() const { DARABONBA_PTR_GET_DEFAULT(faceSearchToken_, "") };
    inline SearchMediaByFaceRequest& setFaceSearchToken(string faceSearchToken) { DARABONBA_PTR_SET_VALUE(faceSearchToken_, faceSearchToken) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline SearchMediaByFaceRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SearchMediaByFaceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline SearchMediaByFaceRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchMediaByFaceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // personImageUrl Field Functions 
    bool hasPersonImageUrl() const { return this->personImageUrl_ != nullptr;};
    void deletePersonImageUrl() { this->personImageUrl_ = nullptr;};
    inline string personImageUrl() const { DARABONBA_PTR_GET_DEFAULT(personImageUrl_, "") };
    inline SearchMediaByFaceRequest& setPersonImageUrl(string personImageUrl) { DARABONBA_PTR_SET_VALUE(personImageUrl_, personImageUrl) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline SearchMediaByFaceRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // utcCreate Field Functions 
    bool hasUtcCreate() const { return this->utcCreate_ != nullptr;};
    void deleteUtcCreate() { this->utcCreate_ = nullptr;};
    inline string utcCreate() const { DARABONBA_PTR_GET_DEFAULT(utcCreate_, "") };
    inline SearchMediaByFaceRequest& setUtcCreate(string utcCreate) { DARABONBA_PTR_SET_VALUE(utcCreate_, utcCreate) };


  protected:
    std::shared_ptr<string> customFilters_ = nullptr;
    // The ID of the entity.
    std::shared_ptr<string> entityId_ = nullptr;
    // The token that is used to identify the query. You can use this parameter in the SearchMediaClipByFace operation to specify the same query conditions.
    // 
    // This parameter is required.
    std::shared_ptr<string> faceSearchToken_ = nullptr;
    // The type of the media asset. Valid values:
    // 
    // *   image
    // *   video
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The URL of the face image.
    // 
    // This parameter is required.
    std::shared_ptr<string> personImageUrl_ = nullptr;
    // The name of the search library.
    std::shared_ptr<string> searchLibName_ = nullptr;
    std::shared_ptr<string> utcCreate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
