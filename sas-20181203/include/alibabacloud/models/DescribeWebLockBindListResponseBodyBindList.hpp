// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKBINDLISTRESPONSEBODYBINDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKBINDLISTRESPONSEBODYBINDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockBindListResponseBodyBindList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockBindListResponseBodyBindList& obj) { 
      DARABONBA_PTR_TO_JSON(AuditCount, auditCount_);
      DARABONBA_PTR_TO_JSON(BlockCount, blockCount_);
      DARABONBA_PTR_TO_JSON(DirCount, dirCount_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ServiceDetail, serviceDetail_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockBindListResponseBodyBindList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditCount, auditCount_);
      DARABONBA_PTR_FROM_JSON(BlockCount, blockCount_);
      DARABONBA_PTR_FROM_JSON(DirCount, dirCount_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ServiceDetail, serviceDetail_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeWebLockBindListResponseBodyBindList() = default ;
    DescribeWebLockBindListResponseBodyBindList(const DescribeWebLockBindListResponseBodyBindList &) = default ;
    DescribeWebLockBindListResponseBodyBindList(DescribeWebLockBindListResponseBodyBindList &&) = default ;
    DescribeWebLockBindListResponseBodyBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockBindListResponseBodyBindList() = default ;
    DescribeWebLockBindListResponseBodyBindList& operator=(const DescribeWebLockBindListResponseBodyBindList &) = default ;
    DescribeWebLockBindListResponseBodyBindList& operator=(DescribeWebLockBindListResponseBodyBindList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditCount_ == nullptr
        && return this->blockCount_ == nullptr && return this->dirCount_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr
        && return this->os_ == nullptr && return this->percent_ == nullptr && return this->serviceCode_ == nullptr && return this->serviceDetail_ == nullptr && return this->serviceStatus_ == nullptr
        && return this->status_ == nullptr && return this->uuid_ == nullptr; };
    // auditCount Field Functions 
    bool hasAuditCount() const { return this->auditCount_ != nullptr;};
    void deleteAuditCount() { this->auditCount_ = nullptr;};
    inline string auditCount() const { DARABONBA_PTR_GET_DEFAULT(auditCount_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setAuditCount(string auditCount) { DARABONBA_PTR_SET_VALUE(auditCount_, auditCount) };


    // blockCount Field Functions 
    bool hasBlockCount() const { return this->blockCount_ != nullptr;};
    void deleteBlockCount() { this->blockCount_ = nullptr;};
    inline string blockCount() const { DARABONBA_PTR_GET_DEFAULT(blockCount_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setBlockCount(string blockCount) { DARABONBA_PTR_SET_VALUE(blockCount_, blockCount) };


    // dirCount Field Functions 
    bool hasDirCount() const { return this->dirCount_ != nullptr;};
    void deleteDirCount() { this->dirCount_ = nullptr;};
    inline string dirCount() const { DARABONBA_PTR_GET_DEFAULT(dirCount_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setDirCount(string dirCount) { DARABONBA_PTR_SET_VALUE(dirCount_, dirCount) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline DescribeWebLockBindListResponseBodyBindList& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceDetail Field Functions 
    bool hasServiceDetail() const { return this->serviceDetail_ != nullptr;};
    void deleteServiceDetail() { this->serviceDetail_ = nullptr;};
    inline string serviceDetail() const { DARABONBA_PTR_GET_DEFAULT(serviceDetail_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setServiceDetail(string serviceDetail) { DARABONBA_PTR_SET_VALUE(serviceDetail_, serviceDetail) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeWebLockBindListResponseBodyBindList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of alerts.
    std::shared_ptr<string> auditCount_ = nullptr;
    // The number of blocked tampering events.
    std::shared_ptr<string> blockCount_ = nullptr;
    // The number of protected directories.
    std::shared_ptr<string> dirCount_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The operating system that the server runs.
    std::shared_ptr<string> os_ = nullptr;
    // The percentage of the starting progress of web tamper proofing. Valid values: 0 to 100.
    std::shared_ptr<int32_t> percent_ = nullptr;
    // The error code for web tamper proofing. Valid values:
    // 
    // *   **2001**: The Security Center agent is offline.
    // *   **9999**: The connection timed out.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // The exception details of web tamper proofing. Valid values:
    // 
    // *   **client offline**: The Security Center agent is offline.
    // *   **timeout**: The connection timed out.
    std::shared_ptr<string> serviceDetail_ = nullptr;
    // The status of web tamper proofing on the server. Valid values:
    // 
    // *   **stop**: Web tamper proofing is disabled.
    // *   **initializing**: Web tamper proofing is being enabled.
    // *   **exception**: Web tamper proofing is not running as expected.
    // *   **running**: Web tamper proofing is running.
    // *   **closing**: Web tamper proofing is being disabled.
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // The protection status of the server. Valid values:
    // 
    // *   **on**: The server is protected.
    // *   **off**: The server is not protected.
    std::shared_ptr<string> status_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
