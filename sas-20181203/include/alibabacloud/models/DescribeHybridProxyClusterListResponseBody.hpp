// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYCLUSTERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYCLUSTERLISTRESPONSEBODY_HPP_
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
  class DescribeHybridProxyClusterListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyClusterListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyClusterListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridProxyClusterListResponseBody() = default ;
    DescribeHybridProxyClusterListResponseBody(const DescribeHybridProxyClusterListResponseBody &) = default ;
    DescribeHybridProxyClusterListResponseBody(DescribeHybridProxyClusterListResponseBody &&) = default ;
    DescribeHybridProxyClusterListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyClusterListResponseBody() = default ;
    DescribeHybridProxyClusterListResponseBody& operator=(const DescribeHybridProxyClusterListResponseBody &) = default ;
    DescribeHybridProxyClusterListResponseBody& operator=(DescribeHybridProxyClusterListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

    class ClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterList& obj) { 
        DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
        DARABONBA_PTR_TO_JSON(AuthKeySecret, authKeySecret_);
        DARABONBA_PTR_TO_JSON(ClientCount, clientCount_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(InstallCommand, installCommand_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(LastHeartTime, lastHeartTime_);
        DARABONBA_PTR_TO_JSON(ProxyCount, proxyCount_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
        DARABONBA_PTR_FROM_JSON(AuthKeySecret, authKeySecret_);
        DARABONBA_PTR_FROM_JSON(ClientCount, clientCount_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(InstallCommand, installCommand_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(LastHeartTime, lastHeartTime_);
        DARABONBA_PTR_FROM_JSON(ProxyCount, proxyCount_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ClusterList() = default ;
      ClusterList(const ClusterList &) = default ;
      ClusterList(ClusterList &&) = default ;
      ClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterList() = default ;
      ClusterList& operator=(const ClusterList &) = default ;
      ClusterList& operator=(ClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authKey_ == nullptr
        && this->authKeySecret_ == nullptr && this->clientCount_ == nullptr && this->clusterName_ == nullptr && this->installCommand_ == nullptr && this->ip_ == nullptr
        && this->lastHeartTime_ == nullptr && this->proxyCount_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr; };
      // authKey Field Functions 
      bool hasAuthKey() const { return this->authKey_ != nullptr;};
      void deleteAuthKey() { this->authKey_ = nullptr;};
      inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
      inline ClusterList& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


      // authKeySecret Field Functions 
      bool hasAuthKeySecret() const { return this->authKeySecret_ != nullptr;};
      void deleteAuthKeySecret() { this->authKeySecret_ = nullptr;};
      inline string getAuthKeySecret() const { DARABONBA_PTR_GET_DEFAULT(authKeySecret_, "") };
      inline ClusterList& setAuthKeySecret(string authKeySecret) { DARABONBA_PTR_SET_VALUE(authKeySecret_, authKeySecret) };


      // clientCount Field Functions 
      bool hasClientCount() const { return this->clientCount_ != nullptr;};
      void deleteClientCount() { this->clientCount_ = nullptr;};
      inline int32_t getClientCount() const { DARABONBA_PTR_GET_DEFAULT(clientCount_, 0) };
      inline ClusterList& setClientCount(int32_t clientCount) { DARABONBA_PTR_SET_VALUE(clientCount_, clientCount) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline ClusterList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // installCommand Field Functions 
      bool hasInstallCommand() const { return this->installCommand_ != nullptr;};
      void deleteInstallCommand() { this->installCommand_ = nullptr;};
      inline string getInstallCommand() const { DARABONBA_PTR_GET_DEFAULT(installCommand_, "") };
      inline ClusterList& setInstallCommand(string installCommand) { DARABONBA_PTR_SET_VALUE(installCommand_, installCommand) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline ClusterList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // lastHeartTime Field Functions 
      bool hasLastHeartTime() const { return this->lastHeartTime_ != nullptr;};
      void deleteLastHeartTime() { this->lastHeartTime_ = nullptr;};
      inline int64_t getLastHeartTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartTime_, 0L) };
      inline ClusterList& setLastHeartTime(int64_t lastHeartTime) { DARABONBA_PTR_SET_VALUE(lastHeartTime_, lastHeartTime) };


      // proxyCount Field Functions 
      bool hasProxyCount() const { return this->proxyCount_ != nullptr;};
      void deleteProxyCount() { this->proxyCount_ = nullptr;};
      inline int32_t getProxyCount() const { DARABONBA_PTR_GET_DEFAULT(proxyCount_, 0) };
      inline ClusterList& setProxyCount(int32_t proxyCount) { DARABONBA_PTR_SET_VALUE(proxyCount_, proxyCount) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline ClusterList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ClusterList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the credential that is used for cluster authentication.
      shared_ptr<string> authKey_ {};
      // The key of the credential that is used for cluster authentication.
      shared_ptr<string> authKeySecret_ {};
      // The number of servers that are connected to the proxy cluster.
      shared_ptr<int32_t> clientCount_ {};
      // The name of the proxy cluster.
      shared_ptr<string> clusterName_ {};
      // The installation command for the node of the proxy cluster.
      shared_ptr<string> installCommand_ {};
      // The endpoint of the cluster. An IP address or a domain name is specified.
      shared_ptr<string> ip_ {};
      // The timestamp when the cluster last sent a heartbeat message. Unit: milliseconds.
      shared_ptr<int64_t> lastHeartTime_ {};
      // The number of proxy nodes.
      shared_ptr<int32_t> proxyCount_ {};
      // The description of the proxy cluster.
      shared_ptr<string> remark_ {};
      // The status of the cluster.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->clusterList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const vector<DescribeHybridProxyClusterListResponseBody::ClusterList> & getClusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, vector<DescribeHybridProxyClusterListResponseBody::ClusterList>) };
    inline vector<DescribeHybridProxyClusterListResponseBody::ClusterList> getClusterList() { DARABONBA_PTR_GET(clusterList_, vector<DescribeHybridProxyClusterListResponseBody::ClusterList>) };
    inline DescribeHybridProxyClusterListResponseBody& setClusterList(const vector<DescribeHybridProxyClusterListResponseBody::ClusterList> & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline DescribeHybridProxyClusterListResponseBody& setClusterList(vector<DescribeHybridProxyClusterListResponseBody::ClusterList> && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeHybridProxyClusterListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeHybridProxyClusterListResponseBody::PageInfo) };
    inline DescribeHybridProxyClusterListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeHybridProxyClusterListResponseBody::PageInfo) };
    inline DescribeHybridProxyClusterListResponseBody& setPageInfo(const DescribeHybridProxyClusterListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeHybridProxyClusterListResponseBody& setPageInfo(DescribeHybridProxyClusterListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridProxyClusterListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The proxy clusters.
    shared_ptr<vector<DescribeHybridProxyClusterListResponseBody::ClusterList>> clusterList_ {};
    // The pagination information.
    shared_ptr<DescribeHybridProxyClusterListResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
