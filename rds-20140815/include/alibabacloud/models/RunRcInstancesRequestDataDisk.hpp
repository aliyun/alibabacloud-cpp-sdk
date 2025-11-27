// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCINSTANCESREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_RUNRCINSTANCESREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCInstancesRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCInstancesRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCInstancesRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    RunRCInstancesRequestDataDisk() = default ;
    RunRCInstancesRequestDataDisk(const RunRCInstancesRequestDataDisk &) = default ;
    RunRCInstancesRequestDataDisk(RunRCInstancesRequestDataDisk &&) = default ;
    RunRCInstancesRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCInstancesRequestDataDisk() = default ;
    RunRCInstancesRequestDataDisk& operator=(const RunRCInstancesRequestDataDisk &) = default ;
    RunRCInstancesRequestDataDisk& operator=(RunRCInstancesRequestDataDisk &&) = default ;
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
    inline RunRCInstancesRequestDataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline RunRCInstancesRequestDataDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline RunRCInstancesRequestDataDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline RunRCInstancesRequestDataDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline RunRCInstancesRequestDataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline RunRCInstancesRequestDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline RunRCInstancesRequestDataDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The type of the data disk. Set the value to **cloud_essd**, which indicates Enterprise SSDs (ESSDs).
    std::shared_ptr<string> category_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    std::shared_ptr<string> device_ = nullptr;
    // Specifies whether to encrypt the cloud disk. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<string> encrypted_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
