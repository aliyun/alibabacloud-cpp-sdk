// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeBackupStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(BdsClusterId, bdsClusterId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(BdsClusterId, bdsClusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupStatusResponseBody() = default ;
    DescribeBackupStatusResponseBody(const DescribeBackupStatusResponseBody &) = default ;
    DescribeBackupStatusResponseBody(DescribeBackupStatusResponseBody &&) = default ;
    DescribeBackupStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupStatusResponseBody() = default ;
    DescribeBackupStatusResponseBody& operator=(const DescribeBackupStatusResponseBody &) = default ;
    DescribeBackupStatusResponseBody& operator=(DescribeBackupStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupStatus_ == nullptr
        && this->bdsClusterId_ == nullptr && this->clusterId_ == nullptr && this->requestId_ == nullptr; };
    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeBackupStatusResponseBody& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // bdsClusterId Field Functions 
    bool hasBdsClusterId() const { return this->bdsClusterId_ != nullptr;};
    void deleteBdsClusterId() { this->bdsClusterId_ = nullptr;};
    inline string getBdsClusterId() const { DARABONBA_PTR_GET_DEFAULT(bdsClusterId_, "") };
    inline DescribeBackupStatusResponseBody& setBdsClusterId(string bdsClusterId) { DARABONBA_PTR_SET_VALUE(bdsClusterId_, bdsClusterId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeBackupStatusResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The enabling status of backup. Valid values:
    // - closed: not enabled.
    // - opened: enabled.
    // - opening: being enabled.
    shared_ptr<string> backupStatus_ {};
    // The instance ID of the BDS instance used for backup.
    shared_ptr<string> bdsClusterId_ {};
    // The ID of the backup cluster.
    shared_ptr<string> clusterId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
