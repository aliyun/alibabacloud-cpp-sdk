// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODYINSTANCEMODELDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODYINSTANCEMODELDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstancesResponseBodyInstanceModelDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstancesResponseBodyInstanceModelDisks& obj) { 
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstancesResponseBodyInstanceModelDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
    };
    DescribeAndroidInstancesResponseBodyInstanceModelDisks() = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelDisks(const DescribeAndroidInstancesResponseBodyInstanceModelDisks &) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelDisks(DescribeAndroidInstancesResponseBodyInstanceModelDisks &&) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstancesResponseBodyInstanceModelDisks() = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelDisks& operator=(const DescribeAndroidInstancesResponseBodyInstanceModelDisks &) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelDisks& operator=(DescribeAndroidInstancesResponseBodyInstanceModelDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskSize_ != nullptr
        && this->diskType_ != nullptr; };
    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DescribeAndroidInstancesResponseBodyInstanceModelDisks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModelDisks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


  protected:
    // The disk size. Unit: GB.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The type of the disk.
    std::shared_ptr<string> diskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
