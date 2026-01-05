// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTagsResponseBody() = default ;
    DescribeTagsResponseBody(const DescribeTagsResponseBody &) = default ;
    DescribeTagsResponseBody(DescribeTagsResponseBody &&) = default ;
    DescribeTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBody() = default ;
    DescribeTagsResponseBody& operator=(const DescribeTagsResponseBody &) = default ;
    DescribeTagsResponseBody& operator=(DescribeTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceTypeCount, resourceTypeCount_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceTypeCount, resourceTypeCount_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceTypeCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceTypeCount& obj) { 
            DARABONBA_PTR_TO_JSON(Ddh, ddh_);
            DARABONBA_PTR_TO_JSON(Disk, disk_);
            DARABONBA_PTR_TO_JSON(Eni, eni_);
            DARABONBA_PTR_TO_JSON(Image, image_);
            DARABONBA_PTR_TO_JSON(Instance, instance_);
            DARABONBA_PTR_TO_JSON(KeyPair, keyPair_);
            DARABONBA_PTR_TO_JSON(LaunchTemplate, launchTemplate_);
            DARABONBA_PTR_TO_JSON(ReservedInstance, reservedInstance_);
            DARABONBA_PTR_TO_JSON(Securitygroup, securitygroup_);
            DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
            DARABONBA_PTR_TO_JSON(SnapshotPolicy, snapshotPolicy_);
            DARABONBA_PTR_TO_JSON(Volume, volume_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceTypeCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Ddh, ddh_);
            DARABONBA_PTR_FROM_JSON(Disk, disk_);
            DARABONBA_PTR_FROM_JSON(Eni, eni_);
            DARABONBA_PTR_FROM_JSON(Image, image_);
            DARABONBA_PTR_FROM_JSON(Instance, instance_);
            DARABONBA_PTR_FROM_JSON(KeyPair, keyPair_);
            DARABONBA_PTR_FROM_JSON(LaunchTemplate, launchTemplate_);
            DARABONBA_PTR_FROM_JSON(ReservedInstance, reservedInstance_);
            DARABONBA_PTR_FROM_JSON(Securitygroup, securitygroup_);
            DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
            DARABONBA_PTR_FROM_JSON(SnapshotPolicy, snapshotPolicy_);
            DARABONBA_PTR_FROM_JSON(Volume, volume_);
          };
          ResourceTypeCount() = default ;
          ResourceTypeCount(const ResourceTypeCount &) = default ;
          ResourceTypeCount(ResourceTypeCount &&) = default ;
          ResourceTypeCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceTypeCount() = default ;
          ResourceTypeCount& operator=(const ResourceTypeCount &) = default ;
          ResourceTypeCount& operator=(ResourceTypeCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ddh_ == nullptr
        && this->disk_ == nullptr && this->eni_ == nullptr && this->image_ == nullptr && this->instance_ == nullptr && this->keyPair_ == nullptr
        && this->launchTemplate_ == nullptr && this->reservedInstance_ == nullptr && this->securitygroup_ == nullptr && this->snapshot_ == nullptr && this->snapshotPolicy_ == nullptr
        && this->volume_ == nullptr; };
          // ddh Field Functions 
          bool hasDdh() const { return this->ddh_ != nullptr;};
          void deleteDdh() { this->ddh_ = nullptr;};
          inline int32_t getDdh() const { DARABONBA_PTR_GET_DEFAULT(ddh_, 0) };
          inline ResourceTypeCount& setDdh(int32_t ddh) { DARABONBA_PTR_SET_VALUE(ddh_, ddh) };


          // disk Field Functions 
          bool hasDisk() const { return this->disk_ != nullptr;};
          void deleteDisk() { this->disk_ = nullptr;};
          inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
          inline ResourceTypeCount& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


          // eni Field Functions 
          bool hasEni() const { return this->eni_ != nullptr;};
          void deleteEni() { this->eni_ = nullptr;};
          inline int32_t getEni() const { DARABONBA_PTR_GET_DEFAULT(eni_, 0) };
          inline ResourceTypeCount& setEni(int32_t eni) { DARABONBA_PTR_SET_VALUE(eni_, eni) };


          // image Field Functions 
          bool hasImage() const { return this->image_ != nullptr;};
          void deleteImage() { this->image_ = nullptr;};
          inline int32_t getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, 0) };
          inline ResourceTypeCount& setImage(int32_t image) { DARABONBA_PTR_SET_VALUE(image_, image) };


          // instance Field Functions 
          bool hasInstance() const { return this->instance_ != nullptr;};
          void deleteInstance() { this->instance_ = nullptr;};
          inline int32_t getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, 0) };
          inline ResourceTypeCount& setInstance(int32_t instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


          // keyPair Field Functions 
          bool hasKeyPair() const { return this->keyPair_ != nullptr;};
          void deleteKeyPair() { this->keyPair_ = nullptr;};
          inline int32_t getKeyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, 0) };
          inline ResourceTypeCount& setKeyPair(int32_t keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


          // launchTemplate Field Functions 
          bool hasLaunchTemplate() const { return this->launchTemplate_ != nullptr;};
          void deleteLaunchTemplate() { this->launchTemplate_ = nullptr;};
          inline int32_t getLaunchTemplate() const { DARABONBA_PTR_GET_DEFAULT(launchTemplate_, 0) };
          inline ResourceTypeCount& setLaunchTemplate(int32_t launchTemplate) { DARABONBA_PTR_SET_VALUE(launchTemplate_, launchTemplate) };


          // reservedInstance Field Functions 
          bool hasReservedInstance() const { return this->reservedInstance_ != nullptr;};
          void deleteReservedInstance() { this->reservedInstance_ = nullptr;};
          inline int32_t getReservedInstance() const { DARABONBA_PTR_GET_DEFAULT(reservedInstance_, 0) };
          inline ResourceTypeCount& setReservedInstance(int32_t reservedInstance) { DARABONBA_PTR_SET_VALUE(reservedInstance_, reservedInstance) };


          // securitygroup Field Functions 
          bool hasSecuritygroup() const { return this->securitygroup_ != nullptr;};
          void deleteSecuritygroup() { this->securitygroup_ = nullptr;};
          inline int32_t getSecuritygroup() const { DARABONBA_PTR_GET_DEFAULT(securitygroup_, 0) };
          inline ResourceTypeCount& setSecuritygroup(int32_t securitygroup) { DARABONBA_PTR_SET_VALUE(securitygroup_, securitygroup) };


          // snapshot Field Functions 
          bool hasSnapshot() const { return this->snapshot_ != nullptr;};
          void deleteSnapshot() { this->snapshot_ = nullptr;};
          inline int32_t getSnapshot() const { DARABONBA_PTR_GET_DEFAULT(snapshot_, 0) };
          inline ResourceTypeCount& setSnapshot(int32_t snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };


          // snapshotPolicy Field Functions 
          bool hasSnapshotPolicy() const { return this->snapshotPolicy_ != nullptr;};
          void deleteSnapshotPolicy() { this->snapshotPolicy_ = nullptr;};
          inline int32_t getSnapshotPolicy() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicy_, 0) };
          inline ResourceTypeCount& setSnapshotPolicy(int32_t snapshotPolicy) { DARABONBA_PTR_SET_VALUE(snapshotPolicy_, snapshotPolicy) };


          // volume Field Functions 
          bool hasVolume() const { return this->volume_ != nullptr;};
          void deleteVolume() { this->volume_ = nullptr;};
          inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
          inline ResourceTypeCount& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


        protected:
          // The number of dedicated hosts to which the tag is added.
          shared_ptr<int32_t> ddh_ {};
          // The number of disks to which the tag is added.
          shared_ptr<int32_t> disk_ {};
          // The number of ENIs to which the tag is added.
          shared_ptr<int32_t> eni_ {};
          // The number of images to which the tag is added.
          shared_ptr<int32_t> image_ {};
          // The number of instances to which the tag is added.
          shared_ptr<int32_t> instance_ {};
          // The number of key pairs to which the tag is added.
          shared_ptr<int32_t> keyPair_ {};
          // The number of launch templates to which the tag is added.
          shared_ptr<int32_t> launchTemplate_ {};
          // The number of reserved instances to which the tag is added.
          shared_ptr<int32_t> reservedInstance_ {};
          // The number of security groups to which the tag is added.
          shared_ptr<int32_t> securitygroup_ {};
          // The number of snapshots to which the tag is added.
          shared_ptr<int32_t> snapshot_ {};
          // The number of automatic snapshot policies to which the tag is added.
          shared_ptr<int32_t> snapshotPolicy_ {};
          // The number of storage volumes to which the tag is added.
          shared_ptr<int32_t> volume_ {};
        };

        virtual bool empty() const override { return this->resourceTypeCount_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // resourceTypeCount Field Functions 
        bool hasResourceTypeCount() const { return this->resourceTypeCount_ != nullptr;};
        void deleteResourceTypeCount() { this->resourceTypeCount_ = nullptr;};
        inline const Tag::ResourceTypeCount & getResourceTypeCount() const { DARABONBA_PTR_GET_CONST(resourceTypeCount_, Tag::ResourceTypeCount) };
        inline Tag::ResourceTypeCount getResourceTypeCount() { DARABONBA_PTR_GET(resourceTypeCount_, Tag::ResourceTypeCount) };
        inline Tag& setResourceTypeCount(const Tag::ResourceTypeCount & resourceTypeCount) { DARABONBA_PTR_SET_VALUE(resourceTypeCount_, resourceTypeCount) };
        inline Tag& setResourceTypeCount(Tag::ResourceTypeCount && resourceTypeCount) { DARABONBA_PTR_SET_RVALUE(resourceTypeCount_, resourceTypeCount) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The number of resource types.
        shared_ptr<Tag::ResourceTypeCount> resourceTypeCount_ {};
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
      inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
      inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<Tags::Tag>> tag_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tags_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTagsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTagsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeTagsResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeTagsResponseBody::Tags) };
    inline DescribeTagsResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeTagsResponseBody::Tags) };
    inline DescribeTagsResponseBody& setTags(const DescribeTagsResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeTagsResponseBody& setTags(DescribeTagsResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTagsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The tags that match all filter conditions.
    shared_ptr<DescribeTagsResponseBody::Tags> tags_ {};
    // The total number of tags.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
