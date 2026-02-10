// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLISTRESPONSEBODY_HPP_
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
  class DescribeHybridProxyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridProxyListResponseBody() = default ;
    DescribeHybridProxyListResponseBody(const DescribeHybridProxyListResponseBody &) = default ;
    DescribeHybridProxyListResponseBody(DescribeHybridProxyListResponseBody &&) = default ;
    DescribeHybridProxyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyListResponseBody() = default ;
    DescribeHybridProxyListResponseBody& operator=(const DescribeHybridProxyListResponseBody &) = default ;
    DescribeHybridProxyListResponseBody& operator=(DescribeHybridProxyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyList& obj) { 
        DARABONBA_PTR_TO_JSON(ClientCount, clientCount_);
        DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(ProxyUuid, proxyUuid_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ProxyList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientCount, clientCount_);
        DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(ProxyUuid, proxyUuid_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      ProxyList() = default ;
      ProxyList(const ProxyList &) = default ;
      ProxyList(ProxyList &&) = default ;
      ProxyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyList() = default ;
      ProxyList& operator=(const ProxyList &) = default ;
      ProxyList& operator=(ProxyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientCount_ == nullptr
        && this->currentVersion_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->proxyUuid_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr; };
      // clientCount Field Functions 
      bool hasClientCount() const { return this->clientCount_ != nullptr;};
      void deleteClientCount() { this->clientCount_ = nullptr;};
      inline int32_t getClientCount() const { DARABONBA_PTR_GET_DEFAULT(clientCount_, 0) };
      inline ProxyList& setClientCount(int32_t clientCount) { DARABONBA_PTR_SET_VALUE(clientCount_, clientCount) };


      // currentVersion Field Functions 
      bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
      void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
      inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
      inline ProxyList& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ProxyList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline ProxyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline ProxyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline ProxyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // proxyUuid Field Functions 
      bool hasProxyUuid() const { return this->proxyUuid_ != nullptr;};
      void deleteProxyUuid() { this->proxyUuid_ = nullptr;};
      inline string getProxyUuid() const { DARABONBA_PTR_GET_DEFAULT(proxyUuid_, "") };
      inline ProxyList& setProxyUuid(string proxyUuid) { DARABONBA_PTR_SET_VALUE(proxyUuid_, proxyUuid) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProxyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ProxyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The number of servers that are connected to the proxy instance.
      shared_ptr<int32_t> clientCount_ {};
      // The version of the proxy instance.
      shared_ptr<string> currentVersion_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The UUID of the proxy node.
      shared_ptr<string> proxyUuid_ {};
      // The status of the proxy server. Valid values:
      // 
      // *   **online**
      // *   **offline**
      shared_ptr<string> status_ {};
      // The UUID of the server that is connected to the proxy instance.
      shared_ptr<string> uuid_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


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
      // The number of entries on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->proxyList_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeHybridProxyListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeHybridProxyListResponseBody::PageInfo) };
    inline DescribeHybridProxyListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeHybridProxyListResponseBody::PageInfo) };
    inline DescribeHybridProxyListResponseBody& setPageInfo(const DescribeHybridProxyListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeHybridProxyListResponseBody& setPageInfo(DescribeHybridProxyListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // proxyList Field Functions 
    bool hasProxyList() const { return this->proxyList_ != nullptr;};
    void deleteProxyList() { this->proxyList_ = nullptr;};
    inline const vector<DescribeHybridProxyListResponseBody::ProxyList> & getProxyList() const { DARABONBA_PTR_GET_CONST(proxyList_, vector<DescribeHybridProxyListResponseBody::ProxyList>) };
    inline vector<DescribeHybridProxyListResponseBody::ProxyList> getProxyList() { DARABONBA_PTR_GET(proxyList_, vector<DescribeHybridProxyListResponseBody::ProxyList>) };
    inline DescribeHybridProxyListResponseBody& setProxyList(const vector<DescribeHybridProxyListResponseBody::ProxyList> & proxyList) { DARABONBA_PTR_SET_VALUE(proxyList_, proxyList) };
    inline DescribeHybridProxyListResponseBody& setProxyList(vector<DescribeHybridProxyListResponseBody::ProxyList> && proxyList) { DARABONBA_PTR_SET_RVALUE(proxyList_, proxyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridProxyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribeHybridProxyListResponseBody::PageInfo> pageInfo_ {};
    // The information about the proxy clusters.
    shared_ptr<vector<DescribeHybridProxyListResponseBody::ProxyList>> proxyList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
