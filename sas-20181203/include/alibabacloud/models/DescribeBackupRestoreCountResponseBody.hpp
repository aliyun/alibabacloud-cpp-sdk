// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPRESTORECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPRESTORECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupRestoreCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupRestoreCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRestoreCount, backupRestoreCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupRestoreCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRestoreCount, backupRestoreCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupRestoreCountResponseBody() = default ;
    DescribeBackupRestoreCountResponseBody(const DescribeBackupRestoreCountResponseBody &) = default ;
    DescribeBackupRestoreCountResponseBody(DescribeBackupRestoreCountResponseBody &&) = default ;
    DescribeBackupRestoreCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupRestoreCountResponseBody() = default ;
    DescribeBackupRestoreCountResponseBody& operator=(const DescribeBackupRestoreCountResponseBody &) = default ;
    DescribeBackupRestoreCountResponseBody& operator=(DescribeBackupRestoreCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupRestoreCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupRestoreCount& obj) { 
        DARABONBA_PTR_TO_JSON(Recovering, recovering_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, BackupRestoreCount& obj) { 
        DARABONBA_PTR_FROM_JSON(Recovering, recovering_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      BackupRestoreCount() = default ;
      BackupRestoreCount(const BackupRestoreCount &) = default ;
      BackupRestoreCount(BackupRestoreCount &&) = default ;
      BackupRestoreCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupRestoreCount() = default ;
      BackupRestoreCount& operator=(const BackupRestoreCount &) = default ;
      BackupRestoreCount& operator=(BackupRestoreCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->recovering_ == nullptr
        && this->total_ == nullptr; };
      // recovering Field Functions 
      bool hasRecovering() const { return this->recovering_ != nullptr;};
      void deleteRecovering() { this->recovering_ = nullptr;};
      inline int32_t getRecovering() const { DARABONBA_PTR_GET_DEFAULT(recovering_, 0) };
      inline BackupRestoreCount& setRecovering(int32_t recovering) { DARABONBA_PTR_SET_VALUE(recovering_, recovering) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline BackupRestoreCount& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The number of the restoration tasks that are in the **being restored** state.
      shared_ptr<int32_t> recovering_ {};
      // The total number of the restoration tasks that you create.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->backupRestoreCount_ == nullptr
        && this->requestId_ == nullptr; };
    // backupRestoreCount Field Functions 
    bool hasBackupRestoreCount() const { return this->backupRestoreCount_ != nullptr;};
    void deleteBackupRestoreCount() { this->backupRestoreCount_ = nullptr;};
    inline const DescribeBackupRestoreCountResponseBody::BackupRestoreCount & getBackupRestoreCount() const { DARABONBA_PTR_GET_CONST(backupRestoreCount_, DescribeBackupRestoreCountResponseBody::BackupRestoreCount) };
    inline DescribeBackupRestoreCountResponseBody::BackupRestoreCount getBackupRestoreCount() { DARABONBA_PTR_GET(backupRestoreCount_, DescribeBackupRestoreCountResponseBody::BackupRestoreCount) };
    inline DescribeBackupRestoreCountResponseBody& setBackupRestoreCount(const DescribeBackupRestoreCountResponseBody::BackupRestoreCount & backupRestoreCount) { DARABONBA_PTR_SET_VALUE(backupRestoreCount_, backupRestoreCount) };
    inline DescribeBackupRestoreCountResponseBody& setBackupRestoreCount(DescribeBackupRestoreCountResponseBody::BackupRestoreCount && backupRestoreCount) { DARABONBA_PTR_SET_RVALUE(backupRestoreCount_, backupRestoreCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupRestoreCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of restoration tasks.
    shared_ptr<DescribeBackupRestoreCountResponseBody::BackupRestoreCount> backupRestoreCount_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
