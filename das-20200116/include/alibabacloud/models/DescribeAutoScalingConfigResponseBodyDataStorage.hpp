// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATASTORAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATASTORAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingConfigResponseBodyDataStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingConfigResponseBodyDataStorage& obj) { 
      DARABONBA_PTR_TO_JSON(DiskUsageUpperThreshold, diskUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(MaxStorage, maxStorage_);
      DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingConfigResponseBodyDataStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskUsageUpperThreshold, diskUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxStorage, maxStorage_);
      DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
    };
    DescribeAutoScalingConfigResponseBodyDataStorage() = default ;
    DescribeAutoScalingConfigResponseBodyDataStorage(const DescribeAutoScalingConfigResponseBodyDataStorage &) = default ;
    DescribeAutoScalingConfigResponseBodyDataStorage(DescribeAutoScalingConfigResponseBodyDataStorage &&) = default ;
    DescribeAutoScalingConfigResponseBodyDataStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingConfigResponseBodyDataStorage() = default ;
    DescribeAutoScalingConfigResponseBodyDataStorage& operator=(const DescribeAutoScalingConfigResponseBodyDataStorage &) = default ;
    DescribeAutoScalingConfigResponseBodyDataStorage& operator=(DescribeAutoScalingConfigResponseBodyDataStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskUsageUpperThreshold_ != nullptr
        && this->maxStorage_ != nullptr && this->upgrade_ != nullptr; };
    // diskUsageUpperThreshold Field Functions 
    bool hasDiskUsageUpperThreshold() const { return this->diskUsageUpperThreshold_ != nullptr;};
    void deleteDiskUsageUpperThreshold() { this->diskUsageUpperThreshold_ = nullptr;};
    inline int32_t diskUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(diskUsageUpperThreshold_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataStorage& setDiskUsageUpperThreshold(int32_t diskUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(diskUsageUpperThreshold_, diskUsageUpperThreshold) };


    // maxStorage Field Functions 
    bool hasMaxStorage() const { return this->maxStorage_ != nullptr;};
    void deleteMaxStorage() { this->maxStorage_ = nullptr;};
    inline int32_t maxStorage() const { DARABONBA_PTR_GET_DEFAULT(maxStorage_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataStorage& setMaxStorage(int32_t maxStorage) { DARABONBA_PTR_SET_VALUE(maxStorage_, maxStorage) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline DescribeAutoScalingConfigResponseBodyDataStorage& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


  protected:
    // The average storage usage threshold that triggers automatic storage expansion. Unit: %.
    std::shared_ptr<int32_t> diskUsageUpperThreshold_ = nullptr;
    // The maximum storage size. Unit: GB.
    std::shared_ptr<int32_t> maxStorage_ = nullptr;
    // Indicates whether the automatic storage expansion feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
