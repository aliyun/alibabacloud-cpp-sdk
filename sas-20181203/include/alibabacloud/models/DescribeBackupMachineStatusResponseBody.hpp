// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupMachineStatusResponseBodyBackupMachineStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupMachineStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupMachineStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMachineStatus, backupMachineStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupMachineStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMachineStatus, backupMachineStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupMachineStatusResponseBody() = default ;
    DescribeBackupMachineStatusResponseBody(const DescribeBackupMachineStatusResponseBody &) = default ;
    DescribeBackupMachineStatusResponseBody(DescribeBackupMachineStatusResponseBody &&) = default ;
    DescribeBackupMachineStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupMachineStatusResponseBody() = default ;
    DescribeBackupMachineStatusResponseBody& operator=(const DescribeBackupMachineStatusResponseBody &) = default ;
    DescribeBackupMachineStatusResponseBody& operator=(DescribeBackupMachineStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupMachineStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // backupMachineStatus Field Functions 
    bool hasBackupMachineStatus() const { return this->backupMachineStatus_ != nullptr;};
    void deleteBackupMachineStatus() { this->backupMachineStatus_ = nullptr;};
    inline const DescribeBackupMachineStatusResponseBodyBackupMachineStatus & backupMachineStatus() const { DARABONBA_PTR_GET_CONST(backupMachineStatus_, DescribeBackupMachineStatusResponseBodyBackupMachineStatus) };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus backupMachineStatus() { DARABONBA_PTR_GET(backupMachineStatus_, DescribeBackupMachineStatusResponseBodyBackupMachineStatus) };
    inline DescribeBackupMachineStatusResponseBody& setBackupMachineStatus(const DescribeBackupMachineStatusResponseBodyBackupMachineStatus & backupMachineStatus) { DARABONBA_PTR_SET_VALUE(backupMachineStatus_, backupMachineStatus) };
    inline DescribeBackupMachineStatusResponseBody& setBackupMachineStatus(DescribeBackupMachineStatusResponseBodyBackupMachineStatus && backupMachineStatus) { DARABONBA_PTR_SET_RVALUE(backupMachineStatus_, backupMachineStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupMachineStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backup status of the server.
    std::shared_ptr<DescribeBackupMachineStatusResponseBodyBackupMachineStatus> backupMachineStatus_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
