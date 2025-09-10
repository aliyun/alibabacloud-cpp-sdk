// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupSetResponseBodyDataOSSList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBackupSetResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BackupModel, backupModel_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(BackupSetSize, backupSetSize_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OSSList, OSSList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupModel, backupModel_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(BackupSetSize, backupSetSize_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OSSList, OSSList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBackupSetResponseBodyData() = default ;
    DescribeBackupSetResponseBodyData(const DescribeBackupSetResponseBodyData &) = default ;
    DescribeBackupSetResponseBodyData(DescribeBackupSetResponseBodyData &&) = default ;
    DescribeBackupSetResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetResponseBodyData() = default ;
    DescribeBackupSetResponseBodyData& operator=(const DescribeBackupSetResponseBodyData &) = default ;
    DescribeBackupSetResponseBodyData& operator=(DescribeBackupSetResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupModel_ != nullptr
        && this->backupSetId_ != nullptr && this->backupSetSize_ != nullptr && this->backupType_ != nullptr && this->beginTime_ != nullptr && this->endTime_ != nullptr
        && this->OSSList_ != nullptr && this->status_ != nullptr; };
    // backupModel Field Functions 
    bool hasBackupModel() const { return this->backupModel_ != nullptr;};
    void deleteBackupModel() { this->backupModel_ = nullptr;};
    inline int32_t backupModel() const { DARABONBA_PTR_GET_DEFAULT(backupModel_, 0) };
    inline DescribeBackupSetResponseBodyData& setBackupModel(int32_t backupModel) { DARABONBA_PTR_SET_VALUE(backupModel_, backupModel) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline int64_t backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, 0L) };
    inline DescribeBackupSetResponseBodyData& setBackupSetId(int64_t backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // backupSetSize Field Functions 
    bool hasBackupSetSize() const { return this->backupSetSize_ != nullptr;};
    void deleteBackupSetSize() { this->backupSetSize_ = nullptr;};
    inline int64_t backupSetSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSize_, 0L) };
    inline DescribeBackupSetResponseBodyData& setBackupSetSize(int64_t backupSetSize) { DARABONBA_PTR_SET_VALUE(backupSetSize_, backupSetSize) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline int32_t backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, 0) };
    inline DescribeBackupSetResponseBodyData& setBackupType(int32_t backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline DescribeBackupSetResponseBodyData& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeBackupSetResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // OSSList Field Functions 
    bool hasOSSList() const { return this->OSSList_ != nullptr;};
    void deleteOSSList() { this->OSSList_ = nullptr;};
    inline const vector<Models::DescribeBackupSetResponseBodyDataOSSList> & OSSList() const { DARABONBA_PTR_GET_CONST(OSSList_, vector<Models::DescribeBackupSetResponseBodyDataOSSList>) };
    inline vector<Models::DescribeBackupSetResponseBodyDataOSSList> OSSList() { DARABONBA_PTR_GET(OSSList_, vector<Models::DescribeBackupSetResponseBodyDataOSSList>) };
    inline DescribeBackupSetResponseBodyData& setOSSList(const vector<Models::DescribeBackupSetResponseBodyDataOSSList> & OSSList) { DARABONBA_PTR_SET_VALUE(OSSList_, OSSList) };
    inline DescribeBackupSetResponseBodyData& setOSSList(vector<Models::DescribeBackupSetResponseBodyDataOSSList> && OSSList) { DARABONBA_PTR_SET_RVALUE(OSSList_, OSSList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeBackupSetResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> backupModel_ = nullptr;
    std::shared_ptr<int64_t> backupSetId_ = nullptr;
    std::shared_ptr<int64_t> backupSetSize_ = nullptr;
    std::shared_ptr<int32_t> backupType_ = nullptr;
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<Models::DescribeBackupSetResponseBodyDataOSSList>> OSSList_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
