// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSRISKUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSRISKUUIDRESPONSEBODY_HPP_
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
  class ListAgentlessRiskUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessRiskUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessRiskUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentlessRiskUuidResponseBody() = default ;
    ListAgentlessRiskUuidResponseBody(const ListAgentlessRiskUuidResponseBody &) = default ;
    ListAgentlessRiskUuidResponseBody(ListAgentlessRiskUuidResponseBody &&) = default ;
    ListAgentlessRiskUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessRiskUuidResponseBody() = default ;
    ListAgentlessRiskUuidResponseBody& operator=(const ListAgentlessRiskUuidResponseBody &) = default ;
    ListAgentlessRiskUuidResponseBody& operator=(ListAgentlessRiskUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineCount, baselineCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(MaliciousCount, maliciousCount_);
        DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineCount, baselineCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(MaliciousCount, maliciousCount_);
        DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baselineCount_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->maliciousCount_ == nullptr
        && this->scanTime_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->uuid_ == nullptr && this->vulCount_ == nullptr; };
      // baselineCount Field Functions 
      bool hasBaselineCount() const { return this->baselineCount_ != nullptr;};
      void deleteBaselineCount() { this->baselineCount_ = nullptr;};
      inline int32_t getBaselineCount() const { DARABONBA_PTR_GET_DEFAULT(baselineCount_, 0) };
      inline List& setBaselineCount(int32_t baselineCount) { DARABONBA_PTR_SET_VALUE(baselineCount_, baselineCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline List& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline List& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline List& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // maliciousCount Field Functions 
      bool hasMaliciousCount() const { return this->maliciousCount_ != nullptr;};
      void deleteMaliciousCount() { this->maliciousCount_ = nullptr;};
      inline int32_t getMaliciousCount() const { DARABONBA_PTR_GET_DEFAULT(maliciousCount_, 0) };
      inline List& setMaliciousCount(int32_t maliciousCount) { DARABONBA_PTR_SET_VALUE(maliciousCount_, maliciousCount) };


      // scanTime Field Functions 
      bool hasScanTime() const { return this->scanTime_ != nullptr;};
      void deleteScanTime() { this->scanTime_ = nullptr;};
      inline int64_t getScanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
      inline List& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline List& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline List& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline List& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline List& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    protected:
      // The number of baseline risks.
      shared_ptr<int32_t> baselineCount_ {};
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The instance name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The number of malicious samples.
      shared_ptr<int32_t> maliciousCount_ {};
      // The timestamp of the detection. Unit: milliseconds.
      shared_ptr<int64_t> scanTime_ {};
      // The ID of the asset that is detected.
      shared_ptr<string> targetId_ {};
      // The name of the asset that is detected.
      shared_ptr<string> targetName_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The number of detected vulnerabilities.
      shared_ptr<int32_t> vulCount_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListAgentlessRiskUuidResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListAgentlessRiskUuidResponseBody::List>) };
    inline vector<ListAgentlessRiskUuidResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListAgentlessRiskUuidResponseBody::List>) };
    inline ListAgentlessRiskUuidResponseBody& setList(const vector<ListAgentlessRiskUuidResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAgentlessRiskUuidResponseBody& setList(vector<ListAgentlessRiskUuidResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAgentlessRiskUuidResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAgentlessRiskUuidResponseBody::PageInfo) };
    inline ListAgentlessRiskUuidResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAgentlessRiskUuidResponseBody::PageInfo) };
    inline ListAgentlessRiskUuidResponseBody& setPageInfo(const ListAgentlessRiskUuidResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAgentlessRiskUuidResponseBody& setPageInfo(ListAgentlessRiskUuidResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentlessRiskUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the hosts.
    shared_ptr<vector<ListAgentlessRiskUuidResponseBody::List>> list_ {};
    // The pagination information.
    shared_ptr<ListAgentlessRiskUuidResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
