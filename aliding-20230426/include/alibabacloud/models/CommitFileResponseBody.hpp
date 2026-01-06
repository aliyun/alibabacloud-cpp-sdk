// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMITFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMMITFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DentryAppPropertiesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CommitFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommitFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dentry, dentry_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, CommitFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dentry, dentry_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    CommitFileResponseBody() = default ;
    CommitFileResponseBody(const CommitFileResponseBody &) = default ;
    CommitFileResponseBody(CommitFileResponseBody &&) = default ;
    CommitFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommitFileResponseBody() = default ;
    CommitFileResponseBody& operator=(const CommitFileResponseBody &) = default ;
    CommitFileResponseBody& operator=(CommitFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Dentry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dentry& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Dentry& obj) { 
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
      Dentry() = default ;
      Dentry(const Dentry &) = default ;
      Dentry(Dentry &&) = default ;
      Dentry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dentry() = default ;
      Dentry& operator=(const Dentry &) = default ;
      Dentry& operator=(Dentry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Thumbnail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Thumbnail& obj) { 
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Thumbnail& obj) { 
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        Thumbnail() = default ;
        Thumbnail(const Thumbnail &) = default ;
        Thumbnail(Thumbnail &&) = default ;
        Thumbnail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Thumbnail() = default ;
        Thumbnail& operator=(const Thumbnail &) = default ;
        Thumbnail& operator=(Thumbnail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->height_ == nullptr
        && this->url_ == nullptr && this->width_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline Thumbnail& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Thumbnail& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline Thumbnail& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<int32_t> height_ {};
        shared_ptr<string> url_ {};
        shared_ptr<int32_t> width_ {};
      };

      class Properties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Properties& obj) { 
          DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
        };
        friend void from_json(const Darabonba::Json& j, Properties& obj) { 
          DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
        };
        Properties() = default ;
        Properties(const Properties &) = default ;
        Properties(Properties &&) = default ;
        Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Properties() = default ;
        Properties& operator=(const Properties &) = default ;
        Properties& operator=(Properties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->readOnly_ == nullptr; };
        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline Properties& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      protected:
        shared_ptr<bool> readOnly_ {};
      };

      virtual bool empty() const override { return this->appProperties_ == nullptr
        && this->category_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->extension_ == nullptr && this->id_ == nullptr
        && this->modifiedTime_ == nullptr && this->modifierId_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr && this->partitionType_ == nullptr
        && this->path_ == nullptr && this->properties_ == nullptr && this->size_ == nullptr && this->spaceId_ == nullptr && this->status_ == nullptr
        && this->storageDriver_ == nullptr && this->thumbnail_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr && this->version_ == nullptr; };
      // appProperties Field Functions 
      bool hasAppProperties() const { return this->appProperties_ != nullptr;};
      void deleteAppProperties() { this->appProperties_ = nullptr;};
      inline const map<string, vector<DentryAppPropertiesValue>> & getAppProperties() const { DARABONBA_PTR_GET_CONST(appProperties_, map<string, vector<DentryAppPropertiesValue>>) };
      inline map<string, vector<DentryAppPropertiesValue>> getAppProperties() { DARABONBA_PTR_GET(appProperties_, map<string, vector<DentryAppPropertiesValue>>) };
      inline Dentry& setAppProperties(const map<string, vector<DentryAppPropertiesValue>> & appProperties) { DARABONBA_PTR_SET_VALUE(appProperties_, appProperties) };
      inline Dentry& setAppProperties(map<string, vector<DentryAppPropertiesValue>> && appProperties) { DARABONBA_PTR_SET_RVALUE(appProperties_, appProperties) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Dentry& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Dentry& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Dentry& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Dentry& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Dentry& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Dentry& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // modifierId Field Functions 
      bool hasModifierId() const { return this->modifierId_ != nullptr;};
      void deleteModifierId() { this->modifierId_ = nullptr;};
      inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
      inline Dentry& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Dentry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Dentry& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // partitionType Field Functions 
      bool hasPartitionType() const { return this->partitionType_ != nullptr;};
      void deletePartitionType() { this->partitionType_ = nullptr;};
      inline string getPartitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
      inline Dentry& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Dentry& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline const Dentry::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, Dentry::Properties) };
      inline Dentry::Properties getProperties() { DARABONBA_PTR_GET(properties_, Dentry::Properties) };
      inline Dentry& setProperties(const Dentry::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
      inline Dentry& setProperties(Dentry::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Dentry& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // spaceId Field Functions 
      bool hasSpaceId() const { return this->spaceId_ != nullptr;};
      void deleteSpaceId() { this->spaceId_ = nullptr;};
      inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
      inline Dentry& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Dentry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageDriver Field Functions 
      bool hasStorageDriver() const { return this->storageDriver_ != nullptr;};
      void deleteStorageDriver() { this->storageDriver_ = nullptr;};
      inline string getStorageDriver() const { DARABONBA_PTR_GET_DEFAULT(storageDriver_, "") };
      inline Dentry& setStorageDriver(string storageDriver) { DARABONBA_PTR_SET_VALUE(storageDriver_, storageDriver) };


      // thumbnail Field Functions 
      bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
      void deleteThumbnail() { this->thumbnail_ = nullptr;};
      inline const Dentry::Thumbnail & getThumbnail() const { DARABONBA_PTR_GET_CONST(thumbnail_, Dentry::Thumbnail) };
      inline Dentry::Thumbnail getThumbnail() { DARABONBA_PTR_GET(thumbnail_, Dentry::Thumbnail) };
      inline Dentry& setThumbnail(const Dentry::Thumbnail & thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };
      inline Dentry& setThumbnail(Dentry::Thumbnail && thumbnail) { DARABONBA_PTR_SET_RVALUE(thumbnail_, thumbnail) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Dentry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Dentry& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Dentry& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<map<string, vector<DentryAppPropertiesValue>>> appProperties_ {};
      shared_ptr<string> category_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> extension_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> modifierId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> parentId_ {};
      shared_ptr<string> partitionType_ {};
      shared_ptr<string> path_ {};
      shared_ptr<Dentry::Properties> properties_ {};
      shared_ptr<int64_t> size_ {};
      shared_ptr<string> spaceId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> storageDriver_ {};
      shared_ptr<Dentry::Thumbnail> thumbnail_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uuid_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->dentry_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // dentry Field Functions 
    bool hasDentry() const { return this->dentry_ != nullptr;};
    void deleteDentry() { this->dentry_ = nullptr;};
    inline const CommitFileResponseBody::Dentry & getDentry() const { DARABONBA_PTR_GET_CONST(dentry_, CommitFileResponseBody::Dentry) };
    inline CommitFileResponseBody::Dentry getDentry() { DARABONBA_PTR_GET(dentry_, CommitFileResponseBody::Dentry) };
    inline CommitFileResponseBody& setDentry(const CommitFileResponseBody::Dentry & dentry) { DARABONBA_PTR_SET_VALUE(dentry_, dentry) };
    inline CommitFileResponseBody& setDentry(CommitFileResponseBody::Dentry && dentry) { DARABONBA_PTR_SET_RVALUE(dentry_, dentry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CommitFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline CommitFileResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline CommitFileResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<CommitFileResponseBody::Dentry> dentry_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
