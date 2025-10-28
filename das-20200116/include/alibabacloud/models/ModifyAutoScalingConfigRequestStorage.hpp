// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTSTORAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyAutoScalingConfigRequestStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingConfigRequestStorage& obj) { 
      DARABONBA_PTR_TO_JSON(Apply, apply_);
      DARABONBA_PTR_TO_JSON(DiskUsageUpperThreshold, diskUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(MaxStorage, maxStorage_);
      DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingConfigRequestStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(Apply, apply_);
      DARABONBA_PTR_FROM_JSON(DiskUsageUpperThreshold, diskUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxStorage, maxStorage_);
      DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
    };
    ModifyAutoScalingConfigRequestStorage() = default ;
    ModifyAutoScalingConfigRequestStorage(const ModifyAutoScalingConfigRequestStorage &) = default ;
    ModifyAutoScalingConfigRequestStorage(ModifyAutoScalingConfigRequestStorage &&) = default ;
    ModifyAutoScalingConfigRequestStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingConfigRequestStorage() = default ;
    ModifyAutoScalingConfigRequestStorage& operator=(const ModifyAutoScalingConfigRequestStorage &) = default ;
    ModifyAutoScalingConfigRequestStorage& operator=(ModifyAutoScalingConfigRequestStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apply_ == nullptr
        && return this->diskUsageUpperThreshold_ == nullptr && return this->maxStorage_ == nullptr && return this->upgrade_ == nullptr; };
    // apply Field Functions 
    bool hasApply() const { return this->apply_ != nullptr;};
    void deleteApply() { this->apply_ = nullptr;};
    inline bool apply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
    inline ModifyAutoScalingConfigRequestStorage& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


    // diskUsageUpperThreshold Field Functions 
    bool hasDiskUsageUpperThreshold() const { return this->diskUsageUpperThreshold_ != nullptr;};
    void deleteDiskUsageUpperThreshold() { this->diskUsageUpperThreshold_ = nullptr;};
    inline int32_t diskUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(diskUsageUpperThreshold_, 0) };
    inline ModifyAutoScalingConfigRequestStorage& setDiskUsageUpperThreshold(int32_t diskUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(diskUsageUpperThreshold_, diskUsageUpperThreshold) };


    // maxStorage Field Functions 
    bool hasMaxStorage() const { return this->maxStorage_ != nullptr;};
    void deleteMaxStorage() { this->maxStorage_ = nullptr;};
    inline int32_t maxStorage() const { DARABONBA_PTR_GET_DEFAULT(maxStorage_, 0) };
    inline ModifyAutoScalingConfigRequestStorage& setMaxStorage(int32_t maxStorage) { DARABONBA_PTR_SET_VALUE(maxStorage_, maxStorage) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline ModifyAutoScalingConfigRequestStorage& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


  protected:
    // Specifies whether to apply the **Storage** configuration of the automatic storage expansion feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> apply_ = nullptr;
    // The average storage usage threshold that triggers automatic storage expansion. Unit: %. Valid values:
    // 
    // *   **50**
    // *   **60**
    // *   **70**
    // *   **80**
    // *   **90**
    std::shared_ptr<int32_t> diskUsageUpperThreshold_ = nullptr;
    // The maximum storage size of the database instance. Unit: GB. The value must be greater than or equal to the total storage size of the instance.
    // 
    // *   If the instance uses ESSDs, the maximum value of this parameter can be 32000.
    // *   If the instance uses standard SSDs, the maximum value of this parameter can be 6000.
    // 
    // >  The standard SSD storage type is phased out. We recommend that you [upgrade the storage type of your instance from standard SSDs to ESSDs](https://help.aliyun.com/document_detail/314678.html).
    std::shared_ptr<int32_t> maxStorage_ = nullptr;
    // Specifies whether to enable automatic storage expansion. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
