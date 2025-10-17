// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGSTAGRESOURCETYPECOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGSTAGRESOURCETYPECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTagsResponseBodyTagsTagResourceTypeCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyTagsTagResourceTypeCount& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyTagsTagResourceTypeCount& obj) { 
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
    DescribeTagsResponseBodyTagsTagResourceTypeCount() = default ;
    DescribeTagsResponseBodyTagsTagResourceTypeCount(const DescribeTagsResponseBodyTagsTagResourceTypeCount &) = default ;
    DescribeTagsResponseBodyTagsTagResourceTypeCount(DescribeTagsResponseBodyTagsTagResourceTypeCount &&) = default ;
    DescribeTagsResponseBodyTagsTagResourceTypeCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyTagsTagResourceTypeCount() = default ;
    DescribeTagsResponseBodyTagsTagResourceTypeCount& operator=(const DescribeTagsResponseBodyTagsTagResourceTypeCount &) = default ;
    DescribeTagsResponseBodyTagsTagResourceTypeCount& operator=(DescribeTagsResponseBodyTagsTagResourceTypeCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ddh_ == nullptr
        && return this->disk_ == nullptr && return this->eni_ == nullptr && return this->image_ == nullptr && return this->instance_ == nullptr && return this->keyPair_ == nullptr
        && return this->launchTemplate_ == nullptr && return this->reservedInstance_ == nullptr && return this->securitygroup_ == nullptr && return this->snapshot_ == nullptr && return this->snapshotPolicy_ == nullptr
        && return this->volume_ == nullptr; };
    // ddh Field Functions 
    bool hasDdh() const { return this->ddh_ != nullptr;};
    void deleteDdh() { this->ddh_ = nullptr;};
    inline int32_t ddh() const { DARABONBA_PTR_GET_DEFAULT(ddh_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setDdh(int32_t ddh) { DARABONBA_PTR_SET_VALUE(ddh_, ddh) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // eni Field Functions 
    bool hasEni() const { return this->eni_ != nullptr;};
    void deleteEni() { this->eni_ = nullptr;};
    inline int32_t eni() const { DARABONBA_PTR_GET_DEFAULT(eni_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setEni(int32_t eni) { DARABONBA_PTR_SET_VALUE(eni_, eni) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline int32_t image() const { DARABONBA_PTR_GET_DEFAULT(image_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setImage(int32_t image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline int32_t instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setInstance(int32_t instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline int32_t keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setKeyPair(int32_t keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // launchTemplate Field Functions 
    bool hasLaunchTemplate() const { return this->launchTemplate_ != nullptr;};
    void deleteLaunchTemplate() { this->launchTemplate_ = nullptr;};
    inline int32_t launchTemplate() const { DARABONBA_PTR_GET_DEFAULT(launchTemplate_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setLaunchTemplate(int32_t launchTemplate) { DARABONBA_PTR_SET_VALUE(launchTemplate_, launchTemplate) };


    // reservedInstance Field Functions 
    bool hasReservedInstance() const { return this->reservedInstance_ != nullptr;};
    void deleteReservedInstance() { this->reservedInstance_ = nullptr;};
    inline int32_t reservedInstance() const { DARABONBA_PTR_GET_DEFAULT(reservedInstance_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setReservedInstance(int32_t reservedInstance) { DARABONBA_PTR_SET_VALUE(reservedInstance_, reservedInstance) };


    // securitygroup Field Functions 
    bool hasSecuritygroup() const { return this->securitygroup_ != nullptr;};
    void deleteSecuritygroup() { this->securitygroup_ = nullptr;};
    inline int32_t securitygroup() const { DARABONBA_PTR_GET_DEFAULT(securitygroup_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setSecuritygroup(int32_t securitygroup) { DARABONBA_PTR_SET_VALUE(securitygroup_, securitygroup) };


    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline int32_t snapshot() const { DARABONBA_PTR_GET_DEFAULT(snapshot_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setSnapshot(int32_t snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };


    // snapshotPolicy Field Functions 
    bool hasSnapshotPolicy() const { return this->snapshotPolicy_ != nullptr;};
    void deleteSnapshotPolicy() { this->snapshotPolicy_ = nullptr;};
    inline int32_t snapshotPolicy() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicy_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setSnapshotPolicy(int32_t snapshotPolicy) { DARABONBA_PTR_SET_VALUE(snapshotPolicy_, snapshotPolicy) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline DescribeTagsResponseBodyTagsTagResourceTypeCount& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // The number of dedicated hosts to which the tag is added.
    std::shared_ptr<int32_t> ddh_ = nullptr;
    // The number of disks to which the tag is added.
    std::shared_ptr<int32_t> disk_ = nullptr;
    // The number of ENIs to which the tag is added.
    std::shared_ptr<int32_t> eni_ = nullptr;
    // The number of images to which the tag is added.
    std::shared_ptr<int32_t> image_ = nullptr;
    // The number of instances to which the tag is added.
    std::shared_ptr<int32_t> instance_ = nullptr;
    // The number of key pairs to which the tag is added.
    std::shared_ptr<int32_t> keyPair_ = nullptr;
    // The number of launch templates to which the tag is added.
    std::shared_ptr<int32_t> launchTemplate_ = nullptr;
    // The number of reserved instances to which the tag is added.
    std::shared_ptr<int32_t> reservedInstance_ = nullptr;
    // The number of security groups to which the tag is added.
    std::shared_ptr<int32_t> securitygroup_ = nullptr;
    // The number of snapshots to which the tag is added.
    std::shared_ptr<int32_t> snapshot_ = nullptr;
    // The number of automatic snapshot policies to which the tag is added.
    std::shared_ptr<int32_t> snapshotPolicy_ = nullptr;
    // The number of storage volumes to which the tag is added.
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
