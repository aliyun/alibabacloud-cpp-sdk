// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLISTRESPONSEBODYPROXYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLISTRESPONSEBODYPROXYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyListResponseBodyProxyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyListResponseBodyProxyList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyListResponseBodyProxyList& obj) { 
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
    DescribeHybridProxyListResponseBodyProxyList() = default ;
    DescribeHybridProxyListResponseBodyProxyList(const DescribeHybridProxyListResponseBodyProxyList &) = default ;
    DescribeHybridProxyListResponseBodyProxyList(DescribeHybridProxyListResponseBodyProxyList &&) = default ;
    DescribeHybridProxyListResponseBodyProxyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyListResponseBodyProxyList() = default ;
    DescribeHybridProxyListResponseBodyProxyList& operator=(const DescribeHybridProxyListResponseBodyProxyList &) = default ;
    DescribeHybridProxyListResponseBodyProxyList& operator=(DescribeHybridProxyListResponseBodyProxyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientCount_ == nullptr
        && return this->currentVersion_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr
        && return this->proxyUuid_ == nullptr && return this->status_ == nullptr && return this->uuid_ == nullptr; };
    // clientCount Field Functions 
    bool hasClientCount() const { return this->clientCount_ != nullptr;};
    void deleteClientCount() { this->clientCount_ = nullptr;};
    inline int32_t clientCount() const { DARABONBA_PTR_GET_DEFAULT(clientCount_, 0) };
    inline DescribeHybridProxyListResponseBodyProxyList& setClientCount(int32_t clientCount) { DARABONBA_PTR_SET_VALUE(clientCount_, clientCount) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeHybridProxyListResponseBodyProxyList& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHybridProxyListResponseBodyProxyList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeHybridProxyListResponseBodyProxyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeHybridProxyListResponseBodyProxyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeHybridProxyListResponseBodyProxyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // proxyUuid Field Functions 
    bool hasProxyUuid() const { return this->proxyUuid_ != nullptr;};
    void deleteProxyUuid() { this->proxyUuid_ = nullptr;};
    inline string proxyUuid() const { DARABONBA_PTR_GET_DEFAULT(proxyUuid_, "") };
    inline DescribeHybridProxyListResponseBodyProxyList& setProxyUuid(string proxyUuid) { DARABONBA_PTR_SET_VALUE(proxyUuid_, proxyUuid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHybridProxyListResponseBodyProxyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeHybridProxyListResponseBodyProxyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of servers that are connected to the proxy instance.
    std::shared_ptr<int32_t> clientCount_ = nullptr;
    // The version of the proxy instance.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The UUID of the proxy node.
    std::shared_ptr<string> proxyUuid_ = nullptr;
    // The status of the proxy server. Valid values:
    // 
    // *   **online**
    // *   **offline**
    std::shared_ptr<string> status_ = nullptr;
    // The UUID of the server that is connected to the proxy instance.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
