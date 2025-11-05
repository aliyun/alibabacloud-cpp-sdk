// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSRESPONSEBODYDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSRESPONSEBODYDISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Disk, disk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
    };
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks() = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks(const DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks &) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks(DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks &&) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks() = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks& operator=(const DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks &) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks& operator=(DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disk_ == nullptr; };
    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline const vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk> & disk() const { DARABONBA_PTR_GET_CONST(disk_, vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk>) };
    inline vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk> disk() { DARABONBA_PTR_GET(disk_, vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk>) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks& setDisk(const vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk> & disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks& setDisk(vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk> && disk) { DARABONBA_PTR_SET_RVALUE(disk_, disk) };


  protected:
    // Details about the cloud disks.
    std::shared_ptr<vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk>> disk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
