// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSRESPONSEBODYSDGSAVALIABLEREGIONIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSRESPONSEBODYSDGSAVALIABLEREGIONIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGsResponseBodySDGsAvaliableRegionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGsResponseBodySDGsAvaliableRegionIds& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGsResponseBodySDGsAvaliableRegionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSDGsResponseBodySDGsAvaliableRegionIds() = default ;
    DescribeSDGsResponseBodySDGsAvaliableRegionIds(const DescribeSDGsResponseBodySDGsAvaliableRegionIds &) = default ;
    DescribeSDGsResponseBodySDGsAvaliableRegionIds(DescribeSDGsResponseBodySDGsAvaliableRegionIds &&) = default ;
    DescribeSDGsResponseBodySDGsAvaliableRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGsResponseBodySDGsAvaliableRegionIds() = default ;
    DescribeSDGsResponseBodySDGsAvaliableRegionIds& operator=(const DescribeSDGsResponseBodySDGsAvaliableRegionIds &) = default ;
    DescribeSDGsResponseBodySDGsAvaliableRegionIds& operator=(DescribeSDGsResponseBodySDGsAvaliableRegionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->regionId_ == nullptr && return this->snapshotId_ == nullptr && return this->status_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSDGsResponseBodySDGsAvaliableRegionIds& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSDGsResponseBodySDGsAvaliableRegionIds& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeSDGsResponseBodySDGsAvaliableRegionIds& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSDGsResponseBodySDGsAvaliableRegionIds& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the SDG was created on the node.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The status of the SDG on the node. Valid values:
    // 
    // *   **sdg_making**
    // *   **sdg_saving**
    // *   **sdg_copying**
    // *   **failed**
    // *   **success**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
