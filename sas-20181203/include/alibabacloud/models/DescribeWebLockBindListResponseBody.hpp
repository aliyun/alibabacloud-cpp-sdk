// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKBINDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKBINDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockBindListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockBindListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BindList, bindList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockBindListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BindList, bindList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockBindListResponseBody() = default ;
    DescribeWebLockBindListResponseBody(const DescribeWebLockBindListResponseBody &) = default ;
    DescribeWebLockBindListResponseBody(DescribeWebLockBindListResponseBody &&) = default ;
    DescribeWebLockBindListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockBindListResponseBody() = default ;
    DescribeWebLockBindListResponseBody& operator=(const DescribeWebLockBindListResponseBody &) = default ;
    DescribeWebLockBindListResponseBody& operator=(DescribeWebLockBindListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BindList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, BindList& obj) { 
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
      BindList() = default ;
      BindList(const BindList &) = default ;
      BindList(BindList &&) = default ;
      BindList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindList() = default ;
      BindList& operator=(const BindList &) = default ;
      BindList& operator=(BindList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditCount_ == nullptr
        && this->blockCount_ == nullptr && this->dirCount_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->os_ == nullptr && this->percent_ == nullptr && this->serviceCode_ == nullptr && this->serviceDetail_ == nullptr && this->serviceStatus_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr; };
      // auditCount Field Functions 
      bool hasAuditCount() const { return this->auditCount_ != nullptr;};
      void deleteAuditCount() { this->auditCount_ = nullptr;};
      inline string getAuditCount() const { DARABONBA_PTR_GET_DEFAULT(auditCount_, "") };
      inline BindList& setAuditCount(string auditCount) { DARABONBA_PTR_SET_VALUE(auditCount_, auditCount) };


      // blockCount Field Functions 
      bool hasBlockCount() const { return this->blockCount_ != nullptr;};
      void deleteBlockCount() { this->blockCount_ = nullptr;};
      inline string getBlockCount() const { DARABONBA_PTR_GET_DEFAULT(blockCount_, "") };
      inline BindList& setBlockCount(string blockCount) { DARABONBA_PTR_SET_VALUE(blockCount_, blockCount) };


      // dirCount Field Functions 
      bool hasDirCount() const { return this->dirCount_ != nullptr;};
      void deleteDirCount() { this->dirCount_ = nullptr;};
      inline string getDirCount() const { DARABONBA_PTR_GET_DEFAULT(dirCount_, "") };
      inline BindList& setDirCount(string dirCount) { DARABONBA_PTR_SET_VALUE(dirCount_, dirCount) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline BindList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline BindList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline BindList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline BindList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
      inline BindList& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline BindList& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // serviceDetail Field Functions 
      bool hasServiceDetail() const { return this->serviceDetail_ != nullptr;};
      void deleteServiceDetail() { this->serviceDetail_ = nullptr;};
      inline string getServiceDetail() const { DARABONBA_PTR_GET_DEFAULT(serviceDetail_, "") };
      inline BindList& setServiceDetail(string serviceDetail) { DARABONBA_PTR_SET_VALUE(serviceDetail_, serviceDetail) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline BindList& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BindList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline BindList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The number of alerts.
      shared_ptr<string> auditCount_ {};
      // The number of blocked tampering events.
      shared_ptr<string> blockCount_ {};
      // The number of protected directories.
      shared_ptr<string> dirCount_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The operating system that the server runs.
      shared_ptr<string> os_ {};
      // The percentage of the starting progress of web tamper proofing. Valid values: 0 to 100.
      shared_ptr<int32_t> percent_ {};
      // The error code for web tamper proofing. Valid values:
      // 
      // *   **2001**: The Security Center agent is offline.
      // *   **9999**: The connection timed out.
      shared_ptr<string> serviceCode_ {};
      // The exception details of web tamper proofing. Valid values:
      // 
      // *   **client offline**: The Security Center agent is offline.
      // *   **timeout**: The connection timed out.
      shared_ptr<string> serviceDetail_ {};
      // The status of web tamper proofing on the server. Valid values:
      // 
      // *   **stop**: Web tamper proofing is disabled.
      // *   **initializing**: Web tamper proofing is being enabled.
      // *   **exception**: Web tamper proofing is not running as expected.
      // *   **running**: Web tamper proofing is running.
      // *   **closing**: Web tamper proofing is being disabled.
      shared_ptr<string> serviceStatus_ {};
      // The protection status of the server. Valid values:
      // 
      // *   **on**: The server is protected.
      // *   **off**: The server is not protected.
      shared_ptr<string> status_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->bindList_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bindList Field Functions 
    bool hasBindList() const { return this->bindList_ != nullptr;};
    void deleteBindList() { this->bindList_ = nullptr;};
    inline const vector<DescribeWebLockBindListResponseBody::BindList> & getBindList() const { DARABONBA_PTR_GET_CONST(bindList_, vector<DescribeWebLockBindListResponseBody::BindList>) };
    inline vector<DescribeWebLockBindListResponseBody::BindList> getBindList() { DARABONBA_PTR_GET(bindList_, vector<DescribeWebLockBindListResponseBody::BindList>) };
    inline DescribeWebLockBindListResponseBody& setBindList(const vector<DescribeWebLockBindListResponseBody::BindList> & bindList) { DARABONBA_PTR_SET_VALUE(bindList_, bindList) };
    inline DescribeWebLockBindListResponseBody& setBindList(vector<DescribeWebLockBindListResponseBody::BindList> && bindList) { DARABONBA_PTR_SET_RVALUE(bindList_, bindList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWebLockBindListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWebLockBindListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockBindListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockBindListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the servers that have web tamper proofing enabled.
    shared_ptr<vector<DescribeWebLockBindListResponseBody::BindList>> bindList_ {};
    // The page number of the returned page. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries returned per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of servers that have web tamper proofing enabled.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
