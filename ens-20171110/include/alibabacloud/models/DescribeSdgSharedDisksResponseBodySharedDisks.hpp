// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSHAREDDISKSRESPONSEBODYSHAREDDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSHAREDDISKSRESPONSEBODYSHAREDDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGSharedDisksResponseBodySharedDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGSharedDisksResponseBodySharedDisks& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdgId, sdgId_);
      DARABONBA_PTR_TO_JSON(SharedNum, sharedNum_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGSharedDisksResponseBodySharedDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdgId, sdgId_);
      DARABONBA_PTR_FROM_JSON(SharedNum, sharedNum_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSDGSharedDisksResponseBodySharedDisks() = default ;
    DescribeSDGSharedDisksResponseBodySharedDisks(const DescribeSDGSharedDisksResponseBodySharedDisks &) = default ;
    DescribeSDGSharedDisksResponseBodySharedDisks(DescribeSDGSharedDisksResponseBodySharedDisks &&) = default ;
    DescribeSDGSharedDisksResponseBodySharedDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGSharedDisksResponseBodySharedDisks() = default ;
    DescribeSDGSharedDisksResponseBodySharedDisks& operator=(const DescribeSDGSharedDisksResponseBodySharedDisks &) = default ;
    DescribeSDGSharedDisksResponseBodySharedDisks& operator=(DescribeSDGSharedDisksResponseBodySharedDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->diskId_ == nullptr && return this->diskType_ == nullptr && return this->namespace_ == nullptr && return this->regionId_ == nullptr && return this->sdgId_ == nullptr
        && return this->sharedNum_ == nullptr && return this->status_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSDGSharedDisksResponseBodySharedDisks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeSDGSharedDisksResponseBodySharedDisks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeSDGSharedDisksResponseBodySharedDisks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeSDGSharedDisksResponseBodySharedDisks& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSDGSharedDisksResponseBodySharedDisks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdgId Field Functions 
    bool hasSdgId() const { return this->sdgId_ != nullptr;};
    void deleteSdgId() { this->sdgId_ = nullptr;};
    inline string sdgId() const { DARABONBA_PTR_GET_DEFAULT(sdgId_, "") };
    inline DescribeSDGSharedDisksResponseBodySharedDisks& setSdgId(string sdgId) { DARABONBA_PTR_SET_VALUE(sdgId_, sdgId) };


    // sharedNum Field Functions 
    bool hasSharedNum() const { return this->sharedNum_ != nullptr;};
    void deleteSharedNum() { this->sharedNum_ = nullptr;};
    inline int32_t sharedNum() const { DARABONBA_PTR_GET_DEFAULT(sharedNum_, 0) };
    inline DescribeSDGSharedDisksResponseBodySharedDisks& setSharedNum(int32_t sharedNum) { DARABONBA_PTR_SET_VALUE(sharedNum_, sharedNum) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSDGSharedDisksResponseBodySharedDisks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the shared disk was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // shared disk id
    std::shared_ptr<string> diskId_ = nullptr;
    // Shared disk type
    std::shared_ptr<string> diskType_ = nullptr;
    // The namespace of the service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The node ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // SdgId of the shared disk
    std::shared_ptr<string> sdgId_ = nullptr;
    // Number of shared mounts
    std::shared_ptr<int32_t> sharedNum_ = nullptr;
    // Shared disk status
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
