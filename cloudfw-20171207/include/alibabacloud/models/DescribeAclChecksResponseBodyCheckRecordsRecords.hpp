// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSRESPONSEBODYCHECKRECORDSRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSRESPONSEBODYCHECKRECORDSRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclChecksResponseBodyCheckRecordsRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclChecksResponseBodyCheckRecordsRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AclPendingCount, aclPendingCount_);
      DARABONBA_PTR_TO_JSON(AclTotalCount, aclTotalCount_);
      DARABONBA_PTR_TO_JSON(CheckName, checkName_);
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclChecksResponseBodyCheckRecordsRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AclPendingCount, aclPendingCount_);
      DARABONBA_PTR_FROM_JSON(AclTotalCount, aclTotalCount_);
      DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeAclChecksResponseBodyCheckRecordsRecords() = default ;
    DescribeAclChecksResponseBodyCheckRecordsRecords(const DescribeAclChecksResponseBodyCheckRecordsRecords &) = default ;
    DescribeAclChecksResponseBodyCheckRecordsRecords(DescribeAclChecksResponseBodyCheckRecordsRecords &&) = default ;
    DescribeAclChecksResponseBodyCheckRecordsRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclChecksResponseBodyCheckRecordsRecords() = default ;
    DescribeAclChecksResponseBodyCheckRecordsRecords& operator=(const DescribeAclChecksResponseBodyCheckRecordsRecords &) = default ;
    DescribeAclChecksResponseBodyCheckRecordsRecords& operator=(DescribeAclChecksResponseBodyCheckRecordsRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclPendingCount_ == nullptr
        && return this->aclTotalCount_ == nullptr && return this->checkName_ == nullptr && return this->checkStatus_ == nullptr && return this->checkType_ == nullptr && return this->lastCheckTime_ == nullptr
        && return this->level_ == nullptr && return this->taskId_ == nullptr; };
    // aclPendingCount Field Functions 
    bool hasAclPendingCount() const { return this->aclPendingCount_ != nullptr;};
    void deleteAclPendingCount() { this->aclPendingCount_ = nullptr;};
    inline int64_t aclPendingCount() const { DARABONBA_PTR_GET_DEFAULT(aclPendingCount_, 0L) };
    inline DescribeAclChecksResponseBodyCheckRecordsRecords& setAclPendingCount(int64_t aclPendingCount) { DARABONBA_PTR_SET_VALUE(aclPendingCount_, aclPendingCount) };


    // aclTotalCount Field Functions 
    bool hasAclTotalCount() const { return this->aclTotalCount_ != nullptr;};
    void deleteAclTotalCount() { this->aclTotalCount_ = nullptr;};
    inline int64_t aclTotalCount() const { DARABONBA_PTR_GET_DEFAULT(aclTotalCount_, 0L) };
    inline DescribeAclChecksResponseBodyCheckRecordsRecords& setAclTotalCount(int64_t aclTotalCount) { DARABONBA_PTR_SET_VALUE(aclTotalCount_, aclTotalCount) };


    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string checkName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline DescribeAclChecksResponseBodyCheckRecordsRecords& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline string checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
    inline DescribeAclChecksResponseBodyCheckRecordsRecords& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline DescribeAclChecksResponseBodyCheckRecordsRecords& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // lastCheckTime Field Functions 
    bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
    void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
    inline string lastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, "") };
    inline DescribeAclChecksResponseBodyCheckRecordsRecords& setLastCheckTime(string lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAclChecksResponseBodyCheckRecordsRecords& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeAclChecksResponseBodyCheckRecordsRecords& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> aclPendingCount_ = nullptr;
    std::shared_ptr<int64_t> aclTotalCount_ = nullptr;
    std::shared_ptr<string> checkName_ = nullptr;
    std::shared_ptr<string> checkStatus_ = nullptr;
    std::shared_ptr<string> checkType_ = nullptr;
    std::shared_ptr<string> lastCheckTime_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
