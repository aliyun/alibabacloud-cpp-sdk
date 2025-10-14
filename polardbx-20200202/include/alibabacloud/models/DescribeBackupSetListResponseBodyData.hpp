// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBackupSetListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BackupModel, backupModel_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(BackupSetSize, backupSetSize_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupModel, backupModel_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(BackupSetSize, backupSetSize_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBackupSetListResponseBodyData() = default ;
    DescribeBackupSetListResponseBodyData(const DescribeBackupSetListResponseBodyData &) = default ;
    DescribeBackupSetListResponseBodyData(DescribeBackupSetListResponseBodyData &&) = default ;
    DescribeBackupSetListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetListResponseBodyData() = default ;
    DescribeBackupSetListResponseBodyData& operator=(const DescribeBackupSetListResponseBodyData &) = default ;
    DescribeBackupSetListResponseBodyData& operator=(DescribeBackupSetListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupModel_ == nullptr
        && return this->backupSetId_ == nullptr && return this->backupSetSize_ == nullptr && return this->backupType_ == nullptr && return this->beginTime_ == nullptr && return this->endTime_ == nullptr
        && return this->status_ == nullptr; };
    // backupModel Field Functions 
    bool hasBackupModel() const { return this->backupModel_ != nullptr;};
    void deleteBackupModel() { this->backupModel_ = nullptr;};
    inline int32_t backupModel() const { DARABONBA_PTR_GET_DEFAULT(backupModel_, 0) };
    inline DescribeBackupSetListResponseBodyData& setBackupModel(int32_t backupModel) { DARABONBA_PTR_SET_VALUE(backupModel_, backupModel) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeBackupSetListResponseBodyData& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // backupSetSize Field Functions 
    bool hasBackupSetSize() const { return this->backupSetSize_ != nullptr;};
    void deleteBackupSetSize() { this->backupSetSize_ = nullptr;};
    inline int64_t backupSetSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSize_, 0L) };
    inline DescribeBackupSetListResponseBodyData& setBackupSetSize(int64_t backupSetSize) { DARABONBA_PTR_SET_VALUE(backupSetSize_, backupSetSize) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline int32_t backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, 0) };
    inline DescribeBackupSetListResponseBodyData& setBackupType(int32_t backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline DescribeBackupSetListResponseBodyData& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeBackupSetListResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeBackupSetListResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> backupModel_ = nullptr;
    std::shared_ptr<string> backupSetId_ = nullptr;
    std::shared_ptr<int64_t> backupSetSize_ = nullptr;
    std::shared_ptr<int32_t> backupType_ = nullptr;
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
