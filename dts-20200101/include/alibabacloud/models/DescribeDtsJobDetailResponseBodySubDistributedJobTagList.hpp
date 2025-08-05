// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBDISTRIBUTEDJOBTAGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBDISTRIBUTEDJOBTAGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySubDistributedJobTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySubDistributedJobTagList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_TO_JSON(TagCategory, tagCategory_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySubDistributedJobTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_FROM_JSON(TagCategory, tagCategory_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeDtsJobDetailResponseBodySubDistributedJobTagList() = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobTagList(const DescribeDtsJobDetailResponseBodySubDistributedJobTagList &) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobTagList(DescribeDtsJobDetailResponseBodySubDistributedJobTagList &&) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySubDistributedJobTagList() = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobTagList& operator=(const DescribeDtsJobDetailResponseBodySubDistributedJobTagList &) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobTagList& operator=(DescribeDtsJobDetailResponseBodySubDistributedJobTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->creator_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->regionId_ != nullptr
        && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->scope_ != nullptr && this->srcRegion_ != nullptr && this->tagCategory_ != nullptr
        && this->tagKey_ != nullptr && this->tagValue_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int64_t creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string srcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


    // tagCategory Field Functions 
    bool hasTagCategory() const { return this->tagCategory_ != nullptr;};
    void deleteTagCategory() { this->tagCategory_ = nullptr;};
    inline string tagCategory() const { DARABONBA_PTR_GET_DEFAULT(tagCategory_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setTagCategory(string tagCategory) { DARABONBA_PTR_SET_VALUE(tagCategory_, tagCategory) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobTagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The Alibaba Cloud account ID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The operator of the tag.
    std::shared_ptr<int64_t> creator_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the task was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The primary key of the table.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the region in which the DTS task resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking instance.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Indicates whether the tag is visible. Valid values:
    // 
    // *   **0**: The tag is public.
    // *   **1**: The tag is private.
    std::shared_ptr<string> scope_ = nullptr;
    // The ID of the region in which the DTS task resides.
    // 
    // > In most cases, the ID of the region in which the destination instance resides is returned.
    std::shared_ptr<string> srcRegion_ = nullptr;
    // The type of the tag. Valid values:
    // 
    // *   **System**: The tag was created by the system.
    // *   **Custom**: The tag was created by a user.
    // 
    // > By default, if the parameter is left empty, custom tags and system tags are returned.
    std::shared_ptr<string> tagCategory_ = nullptr;
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
