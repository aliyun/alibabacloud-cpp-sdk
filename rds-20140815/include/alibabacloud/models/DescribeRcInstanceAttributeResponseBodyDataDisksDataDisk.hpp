// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYDATADISKSDATADISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYDATADISKSDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk() = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk(const DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk &) = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk(DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk &&) = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk() = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& operator=(const DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk &) = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& operator=(DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->deleteWithInstance_ == nullptr && return this->device_ == nullptr && return this->encrypted_ == nullptr && return this->performanceLevel_ == nullptr && return this->size_ == nullptr
        && return this->snapshotId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The category of the data disk.
    std::shared_ptr<string> category_ = nullptr;
    // Indicates whether the data disk is released when the instance is released. Valid values:
    // 
    // *   **true**: The data disk is released when the instance is released.
    // *   **false**: The data disk is reserved when the instance is released.
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    std::shared_ptr<string> device_ = nullptr;
    // Indicates whether the data disk is encrypted. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> encrypted_ = nullptr;
    // The performance level of data disk. This parameter is available when the data disk is an Enterprise SSD (ESSD).
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
