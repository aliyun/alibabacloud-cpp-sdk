// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMITFILERESPONSEBODYDENTRY_HPP_
#define ALIBABACLOUD_MODELS_COMMITFILERESPONSEBODYDENTRY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/Aliding20230426.hpp>
#include <alibabacloud/models/CommitFileResponseBodyDentryProperties.hpp>
#include <alibabacloud/models/CommitFileResponseBodyDentryThumbnail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CommitFileResponseBodyDentry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommitFileResponseBodyDentry& obj) { 
      DARABONBA_PTR_TO_JSON(AppProperties, appProperties_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PartitionType, partitionType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageDriver, storageDriver_);
      DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CommitFileResponseBodyDentry& obj) { 
      DARABONBA_PTR_FROM_JSON(AppProperties, appProperties_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PartitionType, partitionType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageDriver, storageDriver_);
      DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CommitFileResponseBodyDentry() = default ;
    CommitFileResponseBodyDentry(const CommitFileResponseBodyDentry &) = default ;
    CommitFileResponseBodyDentry(CommitFileResponseBodyDentry &&) = default ;
    CommitFileResponseBodyDentry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommitFileResponseBodyDentry() = default ;
    CommitFileResponseBodyDentry& operator=(const CommitFileResponseBodyDentry &) = default ;
    CommitFileResponseBodyDentry& operator=(CommitFileResponseBodyDentry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appProperties_ != nullptr
        && this->category_ != nullptr && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->extension_ != nullptr && this->id_ != nullptr
        && this->modifiedTime_ != nullptr && this->modifierId_ != nullptr && this->name_ != nullptr && this->parentId_ != nullptr && this->partitionType_ != nullptr
        && this->path_ != nullptr && this->properties_ != nullptr && this->size_ != nullptr && this->spaceId_ != nullptr && this->status_ != nullptr
        && this->storageDriver_ != nullptr && this->thumbnail_ != nullptr && this->type_ != nullptr && this->uuid_ != nullptr && this->version_ != nullptr; };
    // appProperties Field Functions 
    bool hasAppProperties() const { return this->appProperties_ != nullptr;};
    void deleteAppProperties() { this->appProperties_ = nullptr;};
    inline const map<string, vector<Models::DentryAppPropertiesValue>> & appProperties() const { DARABONBA_PTR_GET_CONST(appProperties_, map<string, vector<Models::DentryAppPropertiesValue>>) };
    inline map<string, vector<Models::DentryAppPropertiesValue>> appProperties() { DARABONBA_PTR_GET(appProperties_, map<string, vector<Models::DentryAppPropertiesValue>>) };
    inline CommitFileResponseBodyDentry& setAppProperties(const map<string, vector<Models::DentryAppPropertiesValue>> & appProperties) { DARABONBA_PTR_SET_VALUE(appProperties_, appProperties) };
    inline CommitFileResponseBodyDentry& setAppProperties(map<string, vector<Models::DentryAppPropertiesValue>> && appProperties) { DARABONBA_PTR_SET_RVALUE(appProperties_, appProperties) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CommitFileResponseBodyDentry& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CommitFileResponseBodyDentry& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CommitFileResponseBodyDentry& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline CommitFileResponseBodyDentry& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CommitFileResponseBodyDentry& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline CommitFileResponseBodyDentry& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline string modifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
    inline CommitFileResponseBodyDentry& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CommitFileResponseBodyDentry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline CommitFileResponseBodyDentry& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // partitionType Field Functions 
    bool hasPartitionType() const { return this->partitionType_ != nullptr;};
    void deletePartitionType() { this->partitionType_ = nullptr;};
    inline string partitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
    inline CommitFileResponseBodyDentry& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CommitFileResponseBodyDentry& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::CommitFileResponseBodyDentryProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::CommitFileResponseBodyDentryProperties) };
    inline Models::CommitFileResponseBodyDentryProperties properties() { DARABONBA_PTR_GET(properties_, Models::CommitFileResponseBodyDentryProperties) };
    inline CommitFileResponseBodyDentry& setProperties(const Models::CommitFileResponseBodyDentryProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline CommitFileResponseBodyDentry& setProperties(Models::CommitFileResponseBodyDentryProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline CommitFileResponseBodyDentry& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline CommitFileResponseBodyDentry& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CommitFileResponseBodyDentry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageDriver Field Functions 
    bool hasStorageDriver() const { return this->storageDriver_ != nullptr;};
    void deleteStorageDriver() { this->storageDriver_ = nullptr;};
    inline string storageDriver() const { DARABONBA_PTR_GET_DEFAULT(storageDriver_, "") };
    inline CommitFileResponseBodyDentry& setStorageDriver(string storageDriver) { DARABONBA_PTR_SET_VALUE(storageDriver_, storageDriver) };


    // thumbnail Field Functions 
    bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
    void deleteThumbnail() { this->thumbnail_ = nullptr;};
    inline const Models::CommitFileResponseBodyDentryThumbnail & thumbnail() const { DARABONBA_PTR_GET_CONST(thumbnail_, Models::CommitFileResponseBodyDentryThumbnail) };
    inline Models::CommitFileResponseBodyDentryThumbnail thumbnail() { DARABONBA_PTR_GET(thumbnail_, Models::CommitFileResponseBodyDentryThumbnail) };
    inline CommitFileResponseBodyDentry& setThumbnail(const Models::CommitFileResponseBodyDentryThumbnail & thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };
    inline CommitFileResponseBodyDentry& setThumbnail(Models::CommitFileResponseBodyDentryThumbnail && thumbnail) { DARABONBA_PTR_SET_RVALUE(thumbnail_, thumbnail) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CommitFileResponseBodyDentry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CommitFileResponseBodyDentry& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline CommitFileResponseBodyDentry& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<map<string, vector<Models::DentryAppPropertiesValue>>> appProperties_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> modifierId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> partitionType_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<Models::CommitFileResponseBodyDentryProperties> properties_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageDriver_ = nullptr;
    std::shared_ptr<Models::CommitFileResponseBodyDentryThumbnail> thumbnail_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
