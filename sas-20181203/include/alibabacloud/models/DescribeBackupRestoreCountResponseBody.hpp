// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPRESTORECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPRESTORECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupRestoreCountResponseBodyBackupRestoreCount.hpp>
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
    virtual bool empty() const override { return this->backupRestoreCount_ == nullptr
        && return this->requestId_ == nullptr; };
    // backupRestoreCount Field Functions 
    bool hasBackupRestoreCount() const { return this->backupRestoreCount_ != nullptr;};
    void deleteBackupRestoreCount() { this->backupRestoreCount_ = nullptr;};
    inline const DescribeBackupRestoreCountResponseBodyBackupRestoreCount & backupRestoreCount() const { DARABONBA_PTR_GET_CONST(backupRestoreCount_, DescribeBackupRestoreCountResponseBodyBackupRestoreCount) };
    inline DescribeBackupRestoreCountResponseBodyBackupRestoreCount backupRestoreCount() { DARABONBA_PTR_GET(backupRestoreCount_, DescribeBackupRestoreCountResponseBodyBackupRestoreCount) };
    inline DescribeBackupRestoreCountResponseBody& setBackupRestoreCount(const DescribeBackupRestoreCountResponseBodyBackupRestoreCount & backupRestoreCount) { DARABONBA_PTR_SET_VALUE(backupRestoreCount_, backupRestoreCount) };
    inline DescribeBackupRestoreCountResponseBody& setBackupRestoreCount(DescribeBackupRestoreCountResponseBodyBackupRestoreCount && backupRestoreCount) { DARABONBA_PTR_SET_RVALUE(backupRestoreCount_, backupRestoreCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupRestoreCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of restoration tasks.
    std::shared_ptr<DescribeBackupRestoreCountResponseBodyBackupRestoreCount> backupRestoreCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
