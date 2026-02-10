// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPSTORAGECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPSTORAGECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBackupStorageCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupStorageCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupStorageCount, backupStorageCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupStorageCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupStorageCount, backupStorageCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBackupStorageCountResponseBody() = default ;
    GetBackupStorageCountResponseBody(const GetBackupStorageCountResponseBody &) = default ;
    GetBackupStorageCountResponseBody(GetBackupStorageCountResponseBody &&) = default ;
    GetBackupStorageCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupStorageCountResponseBody() = default ;
    GetBackupStorageCountResponseBody& operator=(const GetBackupStorageCountResponseBody &) = default ;
    GetBackupStorageCountResponseBody& operator=(GetBackupStorageCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupStorageCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupStorageCount& obj) { 
        DARABONBA_PTR_TO_JSON(BuyStorageByte, buyStorageByte_);
        DARABONBA_PTR_TO_JSON(EcsUsageStorageByte, ecsUsageStorageByte_);
        DARABONBA_PTR_TO_JSON(Overflow, overflow_);
        DARABONBA_PTR_TO_JSON(UniUsageStorageByte, uniUsageStorageByte_);
        DARABONBA_PTR_TO_JSON(UsageStorageByte, usageStorageByte_);
      };
      friend void from_json(const Darabonba::Json& j, BackupStorageCount& obj) { 
        DARABONBA_PTR_FROM_JSON(BuyStorageByte, buyStorageByte_);
        DARABONBA_PTR_FROM_JSON(EcsUsageStorageByte, ecsUsageStorageByte_);
        DARABONBA_PTR_FROM_JSON(Overflow, overflow_);
        DARABONBA_PTR_FROM_JSON(UniUsageStorageByte, uniUsageStorageByte_);
        DARABONBA_PTR_FROM_JSON(UsageStorageByte, usageStorageByte_);
      };
      BackupStorageCount() = default ;
      BackupStorageCount(const BackupStorageCount &) = default ;
      BackupStorageCount(BackupStorageCount &&) = default ;
      BackupStorageCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupStorageCount() = default ;
      BackupStorageCount& operator=(const BackupStorageCount &) = default ;
      BackupStorageCount& operator=(BackupStorageCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buyStorageByte_ == nullptr
        && this->ecsUsageStorageByte_ == nullptr && this->overflow_ == nullptr && this->uniUsageStorageByte_ == nullptr && this->usageStorageByte_ == nullptr; };
      // buyStorageByte Field Functions 
      bool hasBuyStorageByte() const { return this->buyStorageByte_ != nullptr;};
      void deleteBuyStorageByte() { this->buyStorageByte_ = nullptr;};
      inline int64_t getBuyStorageByte() const { DARABONBA_PTR_GET_DEFAULT(buyStorageByte_, 0L) };
      inline BackupStorageCount& setBuyStorageByte(int64_t buyStorageByte) { DARABONBA_PTR_SET_VALUE(buyStorageByte_, buyStorageByte) };


      // ecsUsageStorageByte Field Functions 
      bool hasEcsUsageStorageByte() const { return this->ecsUsageStorageByte_ != nullptr;};
      void deleteEcsUsageStorageByte() { this->ecsUsageStorageByte_ = nullptr;};
      inline int64_t getEcsUsageStorageByte() const { DARABONBA_PTR_GET_DEFAULT(ecsUsageStorageByte_, 0L) };
      inline BackupStorageCount& setEcsUsageStorageByte(int64_t ecsUsageStorageByte) { DARABONBA_PTR_SET_VALUE(ecsUsageStorageByte_, ecsUsageStorageByte) };


      // overflow Field Functions 
      bool hasOverflow() const { return this->overflow_ != nullptr;};
      void deleteOverflow() { this->overflow_ = nullptr;};
      inline int32_t getOverflow() const { DARABONBA_PTR_GET_DEFAULT(overflow_, 0) };
      inline BackupStorageCount& setOverflow(int32_t overflow) { DARABONBA_PTR_SET_VALUE(overflow_, overflow) };


      // uniUsageStorageByte Field Functions 
      bool hasUniUsageStorageByte() const { return this->uniUsageStorageByte_ != nullptr;};
      void deleteUniUsageStorageByte() { this->uniUsageStorageByte_ = nullptr;};
      inline int64_t getUniUsageStorageByte() const { DARABONBA_PTR_GET_DEFAULT(uniUsageStorageByte_, 0L) };
      inline BackupStorageCount& setUniUsageStorageByte(int64_t uniUsageStorageByte) { DARABONBA_PTR_SET_VALUE(uniUsageStorageByte_, uniUsageStorageByte) };


      // usageStorageByte Field Functions 
      bool hasUsageStorageByte() const { return this->usageStorageByte_ != nullptr;};
      void deleteUsageStorageByte() { this->usageStorageByte_ = nullptr;};
      inline int64_t getUsageStorageByte() const { DARABONBA_PTR_GET_DEFAULT(usageStorageByte_, 0L) };
      inline BackupStorageCount& setUsageStorageByte(int64_t usageStorageByte) { DARABONBA_PTR_SET_VALUE(usageStorageByte_, usageStorageByte) };


    protected:
      // The anti-ransomware capacity that you purchased. Unit: bytes.
      shared_ptr<int64_t> buyStorageByte_ {};
      // The storage capacity that is occupied by the backup data of your servers. Unit: bytes.
      shared_ptr<int64_t> ecsUsageStorageByte_ {};
      // Indicates whether the anti-ransomware capacity that is used exceeds the anti-ransomware capacity that you purchased. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> overflow_ {};
      // The storage capacity that is occupied by the backup data of your databases. Unit: bytes.
      shared_ptr<int64_t> uniUsageStorageByte_ {};
      // The total anti-ransomware capacity that is used. Unit: bytes.
      shared_ptr<int64_t> usageStorageByte_ {};
    };

    virtual bool empty() const override { return this->backupStorageCount_ == nullptr
        && this->requestId_ == nullptr; };
    // backupStorageCount Field Functions 
    bool hasBackupStorageCount() const { return this->backupStorageCount_ != nullptr;};
    void deleteBackupStorageCount() { this->backupStorageCount_ = nullptr;};
    inline const GetBackupStorageCountResponseBody::BackupStorageCount & getBackupStorageCount() const { DARABONBA_PTR_GET_CONST(backupStorageCount_, GetBackupStorageCountResponseBody::BackupStorageCount) };
    inline GetBackupStorageCountResponseBody::BackupStorageCount getBackupStorageCount() { DARABONBA_PTR_GET(backupStorageCount_, GetBackupStorageCountResponseBody::BackupStorageCount) };
    inline GetBackupStorageCountResponseBody& setBackupStorageCount(const GetBackupStorageCountResponseBody::BackupStorageCount & backupStorageCount) { DARABONBA_PTR_SET_VALUE(backupStorageCount_, backupStorageCount) };
    inline GetBackupStorageCountResponseBody& setBackupStorageCount(GetBackupStorageCountResponseBody::BackupStorageCount && backupStorageCount) { DARABONBA_PTR_SET_RVALUE(backupStorageCount_, backupStorageCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBackupStorageCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the anti-ransomware capacity.
    shared_ptr<GetBackupStorageCountResponseBody::BackupStorageCount> backupStorageCount_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
