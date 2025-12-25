// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCENERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCENERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class ListSubSceneResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubSceneResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(BaseImageUrl, baseImageUrl_);
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(CubemapPath, cubemapPath_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LayoutData, layoutData_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OriginUrl, originUrl_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubSceneResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseImageUrl, baseImageUrl_);
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(CubemapPath, cubemapPath_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LayoutData, layoutData_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OriginUrl, originUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListSubSceneResponseBodyList() = default ;
    ListSubSceneResponseBodyList(const ListSubSceneResponseBodyList &) = default ;
    ListSubSceneResponseBodyList(ListSubSceneResponseBodyList &&) = default ;
    ListSubSceneResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubSceneResponseBodyList() = default ;
    ListSubSceneResponseBodyList& operator=(const ListSubSceneResponseBodyList &) = default ;
    ListSubSceneResponseBodyList& operator=(ListSubSceneResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseImageUrl_ == nullptr
        && return this->coverUrl_ == nullptr && return this->cubemapPath_ == nullptr && return this->deleted_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->id_ == nullptr && return this->layoutData_ == nullptr && return this->name_ == nullptr && return this->originUrl_ == nullptr && return this->resourceId_ == nullptr
        && return this->resourceName_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->url_ == nullptr; };
    // baseImageUrl Field Functions 
    bool hasBaseImageUrl() const { return this->baseImageUrl_ != nullptr;};
    void deleteBaseImageUrl() { this->baseImageUrl_ = nullptr;};
    inline string baseImageUrl() const { DARABONBA_PTR_GET_DEFAULT(baseImageUrl_, "") };
    inline ListSubSceneResponseBodyList& setBaseImageUrl(string baseImageUrl) { DARABONBA_PTR_SET_VALUE(baseImageUrl_, baseImageUrl) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline ListSubSceneResponseBodyList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // cubemapPath Field Functions 
    bool hasCubemapPath() const { return this->cubemapPath_ != nullptr;};
    void deleteCubemapPath() { this->cubemapPath_ = nullptr;};
    inline string cubemapPath() const { DARABONBA_PTR_GET_DEFAULT(cubemapPath_, "") };
    inline ListSubSceneResponseBodyList& setCubemapPath(string cubemapPath) { DARABONBA_PTR_SET_VALUE(cubemapPath_, cubemapPath) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline ListSubSceneResponseBodyList& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListSubSceneResponseBodyList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListSubSceneResponseBodyList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListSubSceneResponseBodyList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // layoutData Field Functions 
    bool hasLayoutData() const { return this->layoutData_ != nullptr;};
    void deleteLayoutData() { this->layoutData_ = nullptr;};
    inline string layoutData() const { DARABONBA_PTR_GET_DEFAULT(layoutData_, "") };
    inline ListSubSceneResponseBodyList& setLayoutData(string layoutData) { DARABONBA_PTR_SET_VALUE(layoutData_, layoutData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSubSceneResponseBodyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // originUrl Field Functions 
    bool hasOriginUrl() const { return this->originUrl_ != nullptr;};
    void deleteOriginUrl() { this->originUrl_ = nullptr;};
    inline string originUrl() const { DARABONBA_PTR_GET_DEFAULT(originUrl_, "") };
    inline ListSubSceneResponseBodyList& setOriginUrl(string originUrl) { DARABONBA_PTR_SET_VALUE(originUrl_, originUrl) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListSubSceneResponseBodyList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListSubSceneResponseBodyList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline ListSubSceneResponseBodyList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSubSceneResponseBodyList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListSubSceneResponseBodyList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> baseImageUrl_ = nullptr;
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<string> cubemapPath_ = nullptr;
    std::shared_ptr<bool> deleted_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> layoutData_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> originUrl_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
