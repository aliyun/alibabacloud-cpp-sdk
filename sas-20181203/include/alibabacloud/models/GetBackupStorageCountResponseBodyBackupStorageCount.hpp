// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPSTORAGECOUNTRESPONSEBODYBACKUPSTORAGECOUNT_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPSTORAGECOUNTRESPONSEBODYBACKUPSTORAGECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBackupStorageCountResponseBodyBackupStorageCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupStorageCountResponseBodyBackupStorageCount& obj) { 
      DARABONBA_PTR_TO_JSON(BuyStorageByte, buyStorageByte_);
      DARABONBA_PTR_TO_JSON(EcsUsageStorageByte, ecsUsageStorageByte_);
      DARABONBA_PTR_TO_JSON(Overflow, overflow_);
      DARABONBA_PTR_TO_JSON(UniUsageStorageByte, uniUsageStorageByte_);
      DARABONBA_PTR_TO_JSON(UsageStorageByte, usageStorageByte_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupStorageCountResponseBodyBackupStorageCount& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyStorageByte, buyStorageByte_);
      DARABONBA_PTR_FROM_JSON(EcsUsageStorageByte, ecsUsageStorageByte_);
      DARABONBA_PTR_FROM_JSON(Overflow, overflow_);
      DARABONBA_PTR_FROM_JSON(UniUsageStorageByte, uniUsageStorageByte_);
      DARABONBA_PTR_FROM_JSON(UsageStorageByte, usageStorageByte_);
    };
    GetBackupStorageCountResponseBodyBackupStorageCount() = default ;
    GetBackupStorageCountResponseBodyBackupStorageCount(const GetBackupStorageCountResponseBodyBackupStorageCount &) = default ;
    GetBackupStorageCountResponseBodyBackupStorageCount(GetBackupStorageCountResponseBodyBackupStorageCount &&) = default ;
    GetBackupStorageCountResponseBodyBackupStorageCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupStorageCountResponseBodyBackupStorageCount() = default ;
    GetBackupStorageCountResponseBodyBackupStorageCount& operator=(const GetBackupStorageCountResponseBodyBackupStorageCount &) = default ;
    GetBackupStorageCountResponseBodyBackupStorageCount& operator=(GetBackupStorageCountResponseBodyBackupStorageCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyStorageByte_ == nullptr
        && return this->ecsUsageStorageByte_ == nullptr && return this->overflow_ == nullptr && return this->uniUsageStorageByte_ == nullptr && return this->usageStorageByte_ == nullptr; };
    // buyStorageByte Field Functions 
    bool hasBuyStorageByte() const { return this->buyStorageByte_ != nullptr;};
    void deleteBuyStorageByte() { this->buyStorageByte_ = nullptr;};
    inline int64_t buyStorageByte() const { DARABONBA_PTR_GET_DEFAULT(buyStorageByte_, 0L) };
    inline GetBackupStorageCountResponseBodyBackupStorageCount& setBuyStorageByte(int64_t buyStorageByte) { DARABONBA_PTR_SET_VALUE(buyStorageByte_, buyStorageByte) };


    // ecsUsageStorageByte Field Functions 
    bool hasEcsUsageStorageByte() const { return this->ecsUsageStorageByte_ != nullptr;};
    void deleteEcsUsageStorageByte() { this->ecsUsageStorageByte_ = nullptr;};
    inline int64_t ecsUsageStorageByte() const { DARABONBA_PTR_GET_DEFAULT(ecsUsageStorageByte_, 0L) };
    inline GetBackupStorageCountResponseBodyBackupStorageCount& setEcsUsageStorageByte(int64_t ecsUsageStorageByte) { DARABONBA_PTR_SET_VALUE(ecsUsageStorageByte_, ecsUsageStorageByte) };


    // overflow Field Functions 
    bool hasOverflow() const { return this->overflow_ != nullptr;};
    void deleteOverflow() { this->overflow_ = nullptr;};
    inline int32_t overflow() const { DARABONBA_PTR_GET_DEFAULT(overflow_, 0) };
    inline GetBackupStorageCountResponseBodyBackupStorageCount& setOverflow(int32_t overflow) { DARABONBA_PTR_SET_VALUE(overflow_, overflow) };


    // uniUsageStorageByte Field Functions 
    bool hasUniUsageStorageByte() const { return this->uniUsageStorageByte_ != nullptr;};
    void deleteUniUsageStorageByte() { this->uniUsageStorageByte_ = nullptr;};
    inline int64_t uniUsageStorageByte() const { DARABONBA_PTR_GET_DEFAULT(uniUsageStorageByte_, 0L) };
    inline GetBackupStorageCountResponseBodyBackupStorageCount& setUniUsageStorageByte(int64_t uniUsageStorageByte) { DARABONBA_PTR_SET_VALUE(uniUsageStorageByte_, uniUsageStorageByte) };


    // usageStorageByte Field Functions 
    bool hasUsageStorageByte() const { return this->usageStorageByte_ != nullptr;};
    void deleteUsageStorageByte() { this->usageStorageByte_ = nullptr;};
    inline int64_t usageStorageByte() const { DARABONBA_PTR_GET_DEFAULT(usageStorageByte_, 0L) };
    inline GetBackupStorageCountResponseBodyBackupStorageCount& setUsageStorageByte(int64_t usageStorageByte) { DARABONBA_PTR_SET_VALUE(usageStorageByte_, usageStorageByte) };


  protected:
    // The anti-ransomware capacity that you purchased. Unit: bytes.
    std::shared_ptr<int64_t> buyStorageByte_ = nullptr;
    // The storage capacity that is occupied by the backup data of your servers. Unit: bytes.
    std::shared_ptr<int64_t> ecsUsageStorageByte_ = nullptr;
    // Indicates whether the anti-ransomware capacity that is used exceeds the anti-ransomware capacity that you purchased. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> overflow_ = nullptr;
    // The storage capacity that is occupied by the backup data of your databases. Unit: bytes.
    std::shared_ptr<int64_t> uniUsageStorageByte_ = nullptr;
    // The total anti-ransomware capacity that is used. Unit: bytes.
    std::shared_ptr<int64_t> usageStorageByte_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
