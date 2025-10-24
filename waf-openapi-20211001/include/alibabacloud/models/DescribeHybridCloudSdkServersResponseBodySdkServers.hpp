// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSDKSERVERSRESPONSEBODYSDKSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSDKSERVERSRESPONSEBODYSDKSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudSdkServersResponseBodySdkServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudSdkServersResponseBodySdkServers& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Mid, mid_);
      DARABONBA_PTR_TO_JSON(ProtectionGroupAddress, protectionGroupAddress_);
      DARABONBA_PTR_TO_JSON(PullinStatus, pullinStatus_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudSdkServersResponseBodySdkServers& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Mid, mid_);
      DARABONBA_PTR_FROM_JSON(ProtectionGroupAddress, protectionGroupAddress_);
      DARABONBA_PTR_FROM_JSON(PullinStatus, pullinStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeHybridCloudSdkServersResponseBodySdkServers() = default ;
    DescribeHybridCloudSdkServersResponseBodySdkServers(const DescribeHybridCloudSdkServersResponseBodySdkServers &) = default ;
    DescribeHybridCloudSdkServersResponseBodySdkServers(DescribeHybridCloudSdkServersResponseBodySdkServers &&) = default ;
    DescribeHybridCloudSdkServersResponseBodySdkServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudSdkServersResponseBodySdkServers() = default ;
    DescribeHybridCloudSdkServersResponseBodySdkServers& operator=(const DescribeHybridCloudSdkServersResponseBodySdkServers &) = default ;
    DescribeHybridCloudSdkServersResponseBodySdkServers& operator=(DescribeHybridCloudSdkServersResponseBodySdkServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && return this->createTime_ == nullptr && return this->hostName_ == nullptr && return this->ip_ == nullptr && return this->mid_ == nullptr && return this->protectionGroupAddress_ == nullptr
        && return this->pullinStatus_ == nullptr && return this->resourceId_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mid Field Functions 
    bool hasMid() const { return this->mid_ != nullptr;};
    void deleteMid() { this->mid_ = nullptr;};
    inline string mid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


    // protectionGroupAddress Field Functions 
    bool hasProtectionGroupAddress() const { return this->protectionGroupAddress_ != nullptr;};
    void deleteProtectionGroupAddress() { this->protectionGroupAddress_ = nullptr;};
    inline string protectionGroupAddress() const { DARABONBA_PTR_GET_DEFAULT(protectionGroupAddress_, "") };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setProtectionGroupAddress(string protectionGroupAddress) { DARABONBA_PTR_SET_VALUE(protectionGroupAddress_, protectionGroupAddress) };


    // pullinStatus Field Functions 
    bool hasPullinStatus() const { return this->pullinStatus_ != nullptr;};
    void deletePullinStatus() { this->pullinStatus_ = nullptr;};
    inline string pullinStatus() const { DARABONBA_PTR_GET_DEFAULT(pullinStatus_, "") };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setPullinStatus(string pullinStatus) { DARABONBA_PTR_SET_VALUE(pullinStatus_, pullinStatus) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeHybridCloudSdkServersResponseBodySdkServers& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    // SDKID。
    std::shared_ptr<string> mid_ = nullptr;
    std::shared_ptr<string> protectionGroupAddress_ = nullptr;
    std::shared_ptr<string> pullinStatus_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
