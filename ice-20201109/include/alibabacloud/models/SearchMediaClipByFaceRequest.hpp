// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaClipByFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaClipByFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(FaceSearchToken, faceSearchToken_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaClipByFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(FaceSearchToken, faceSearchToken_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    SearchMediaClipByFaceRequest() = default ;
    SearchMediaClipByFaceRequest(const SearchMediaClipByFaceRequest &) = default ;
    SearchMediaClipByFaceRequest(SearchMediaClipByFaceRequest &&) = default ;
    SearchMediaClipByFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaClipByFaceRequest() = default ;
    SearchMediaClipByFaceRequest& operator=(const SearchMediaClipByFaceRequest &) = default ;
    SearchMediaClipByFaceRequest& operator=(SearchMediaClipByFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityId_ == nullptr
        && return this->faceSearchToken_ == nullptr && return this->mediaId_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->searchLibName_ == nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SearchMediaClipByFaceRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // faceSearchToken Field Functions 
    bool hasFaceSearchToken() const { return this->faceSearchToken_ != nullptr;};
    void deleteFaceSearchToken() { this->faceSearchToken_ = nullptr;};
    inline string faceSearchToken() const { DARABONBA_PTR_GET_DEFAULT(faceSearchToken_, "") };
    inline SearchMediaClipByFaceRequest& setFaceSearchToken(string faceSearchToken) { DARABONBA_PTR_SET_VALUE(faceSearchToken_, faceSearchToken) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaClipByFaceRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline SearchMediaClipByFaceRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchMediaClipByFaceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline SearchMediaClipByFaceRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The ID of the entity.
    std::shared_ptr<string> entityId_ = nullptr;
    // The value of this parameter is the same as that of the FaceSearchToken parameter in the SearchMediaByFace request. This specifies to return media asset clips that meet the same query conditions.
    // 
    // This parameter is required.
    std::shared_ptr<string> faceSearchToken_ = nullptr;
    // The ID of the media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the search library.
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
