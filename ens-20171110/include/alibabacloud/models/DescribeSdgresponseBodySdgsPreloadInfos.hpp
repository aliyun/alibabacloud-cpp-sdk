// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGRESPONSEBODYSDGSPRELOADINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGRESPONSEBODYSDGSPRELOADINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGResponseBodySDGsPreloadInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGResponseBodySDGsPreloadInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RedundantNum, redundantNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGResponseBodySDGsPreloadInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RedundantNum, redundantNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeSDGResponseBodySDGsPreloadInfos() = default ;
    DescribeSDGResponseBodySDGsPreloadInfos(const DescribeSDGResponseBodySDGsPreloadInfos &) = default ;
    DescribeSDGResponseBodySDGsPreloadInfos(DescribeSDGResponseBodySDGsPreloadInfos &&) = default ;
    DescribeSDGResponseBodySDGsPreloadInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGResponseBodySDGsPreloadInfos() = default ;
    DescribeSDGResponseBodySDGsPreloadInfos& operator=(const DescribeSDGResponseBodySDGsPreloadInfos &) = default ;
    DescribeSDGResponseBodySDGsPreloadInfos& operator=(DescribeSDGResponseBodySDGsPreloadInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->diskType_ != nullptr && this->namespace_ != nullptr && this->redundantNum_ != nullptr && this->regionId_ != nullptr && this->updateTime_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSDGResponseBodySDGsPreloadInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeSDGResponseBodySDGsPreloadInfos& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeSDGResponseBodySDGsPreloadInfos& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // redundantNum Field Functions 
    bool hasRedundantNum() const { return this->redundantNum_ != nullptr;};
    void deleteRedundantNum() { this->redundantNum_ = nullptr;};
    inline int32_t redundantNum() const { DARABONBA_PTR_GET_DEFAULT(redundantNum_, 0) };
    inline DescribeSDGResponseBodySDGsPreloadInfos& setRedundantNum(int32_t redundantNum) { DARABONBA_PTR_SET_VALUE(redundantNum_, redundantNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSDGResponseBodySDGsPreloadInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeSDGResponseBodySDGsPreloadInfos& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the SDG was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The number of redundant replicas to quickly respond to shared mounts.
    std::shared_ptr<int32_t> redundantNum_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the status was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
