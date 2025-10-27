// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYCLUSTERLISTRESPONSEBODYCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYCLUSTERLISTRESPONSEBODYCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyClusterListResponseBodyClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyClusterListResponseBodyClusterList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyClusterListResponseBodyClusterList& obj) { 
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
    DescribeHybridProxyClusterListResponseBodyClusterList() = default ;
    DescribeHybridProxyClusterListResponseBodyClusterList(const DescribeHybridProxyClusterListResponseBodyClusterList &) = default ;
    DescribeHybridProxyClusterListResponseBodyClusterList(DescribeHybridProxyClusterListResponseBodyClusterList &&) = default ;
    DescribeHybridProxyClusterListResponseBodyClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyClusterListResponseBodyClusterList() = default ;
    DescribeHybridProxyClusterListResponseBodyClusterList& operator=(const DescribeHybridProxyClusterListResponseBodyClusterList &) = default ;
    DescribeHybridProxyClusterListResponseBodyClusterList& operator=(DescribeHybridProxyClusterListResponseBodyClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKey_ == nullptr
        && return this->authKeySecret_ == nullptr && return this->clientCount_ == nullptr && return this->clusterName_ == nullptr && return this->installCommand_ == nullptr && return this->ip_ == nullptr
        && return this->lastHeartTime_ == nullptr && return this->proxyCount_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authKeySecret Field Functions 
    bool hasAuthKeySecret() const { return this->authKeySecret_ != nullptr;};
    void deleteAuthKeySecret() { this->authKeySecret_ = nullptr;};
    inline string authKeySecret() const { DARABONBA_PTR_GET_DEFAULT(authKeySecret_, "") };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setAuthKeySecret(string authKeySecret) { DARABONBA_PTR_SET_VALUE(authKeySecret_, authKeySecret) };


    // clientCount Field Functions 
    bool hasClientCount() const { return this->clientCount_ != nullptr;};
    void deleteClientCount() { this->clientCount_ = nullptr;};
    inline int32_t clientCount() const { DARABONBA_PTR_GET_DEFAULT(clientCount_, 0) };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setClientCount(int32_t clientCount) { DARABONBA_PTR_SET_VALUE(clientCount_, clientCount) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // installCommand Field Functions 
    bool hasInstallCommand() const { return this->installCommand_ != nullptr;};
    void deleteInstallCommand() { this->installCommand_ = nullptr;};
    inline string installCommand() const { DARABONBA_PTR_GET_DEFAULT(installCommand_, "") };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setInstallCommand(string installCommand) { DARABONBA_PTR_SET_VALUE(installCommand_, installCommand) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // lastHeartTime Field Functions 
    bool hasLastHeartTime() const { return this->lastHeartTime_ != nullptr;};
    void deleteLastHeartTime() { this->lastHeartTime_ = nullptr;};
    inline int64_t lastHeartTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartTime_, 0L) };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setLastHeartTime(int64_t lastHeartTime) { DARABONBA_PTR_SET_VALUE(lastHeartTime_, lastHeartTime) };


    // proxyCount Field Functions 
    bool hasProxyCount() const { return this->proxyCount_ != nullptr;};
    void deleteProxyCount() { this->proxyCount_ = nullptr;};
    inline int32_t proxyCount() const { DARABONBA_PTR_GET_DEFAULT(proxyCount_, 0) };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setProxyCount(int32_t proxyCount) { DARABONBA_PTR_SET_VALUE(proxyCount_, proxyCount) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHybridProxyClusterListResponseBodyClusterList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the credential that is used for cluster authentication.
    std::shared_ptr<string> authKey_ = nullptr;
    // The key of the credential that is used for cluster authentication.
    std::shared_ptr<string> authKeySecret_ = nullptr;
    // The number of servers that are connected to the proxy cluster.
    std::shared_ptr<int32_t> clientCount_ = nullptr;
    // The name of the proxy cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The installation command for the node of the proxy cluster.
    std::shared_ptr<string> installCommand_ = nullptr;
    // The endpoint of the cluster. An IP address or a domain name is specified.
    std::shared_ptr<string> ip_ = nullptr;
    // The timestamp when the cluster last sent a heartbeat message. Unit: milliseconds.
    std::shared_ptr<int64_t> lastHeartTime_ = nullptr;
    // The number of proxy nodes.
    std::shared_ptr<int32_t> proxyCount_ = nullptr;
    // The description of the proxy cluster.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the cluster.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
