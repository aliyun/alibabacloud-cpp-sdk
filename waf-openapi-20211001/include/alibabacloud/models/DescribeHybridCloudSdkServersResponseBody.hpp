// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSDKSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSDKSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudSdkServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudSdkServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdkServers, sdkServers_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudSdkServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdkServers, sdkServers_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudSdkServersResponseBody() = default ;
    DescribeHybridCloudSdkServersResponseBody(const DescribeHybridCloudSdkServersResponseBody &) = default ;
    DescribeHybridCloudSdkServersResponseBody(DescribeHybridCloudSdkServersResponseBody &&) = default ;
    DescribeHybridCloudSdkServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudSdkServersResponseBody() = default ;
    DescribeHybridCloudSdkServersResponseBody& operator=(const DescribeHybridCloudSdkServersResponseBody &) = default ;
    DescribeHybridCloudSdkServersResponseBody& operator=(DescribeHybridCloudSdkServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdkServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdkServers& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SdkServers& obj) { 
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
      SdkServers() = default ;
      SdkServers(const SdkServers &) = default ;
      SdkServers(SdkServers &&) = default ;
      SdkServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdkServers() = default ;
      SdkServers& operator=(const SdkServers &) = default ;
      SdkServers& operator=(SdkServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterName_ == nullptr
        && this->createTime_ == nullptr && this->hostName_ == nullptr && this->ip_ == nullptr && this->mid_ == nullptr && this->protectionGroupAddress_ == nullptr
        && this->pullinStatus_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline SdkServers& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline SdkServers& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline SdkServers& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline SdkServers& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // mid Field Functions 
      bool hasMid() const { return this->mid_ != nullptr;};
      void deleteMid() { this->mid_ = nullptr;};
      inline string getMid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
      inline SdkServers& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


      // protectionGroupAddress Field Functions 
      bool hasProtectionGroupAddress() const { return this->protectionGroupAddress_ != nullptr;};
      void deleteProtectionGroupAddress() { this->protectionGroupAddress_ = nullptr;};
      inline string getProtectionGroupAddress() const { DARABONBA_PTR_GET_DEFAULT(protectionGroupAddress_, "") };
      inline SdkServers& setProtectionGroupAddress(string protectionGroupAddress) { DARABONBA_PTR_SET_VALUE(protectionGroupAddress_, protectionGroupAddress) };


      // pullinStatus Field Functions 
      bool hasPullinStatus() const { return this->pullinStatus_ != nullptr;};
      void deletePullinStatus() { this->pullinStatus_ = nullptr;};
      inline string getPullinStatus() const { DARABONBA_PTR_GET_DEFAULT(pullinStatus_, "") };
      inline SdkServers& setPullinStatus(string pullinStatus) { DARABONBA_PTR_SET_VALUE(pullinStatus_, pullinStatus) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline SdkServers& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SdkServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline SdkServers& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> clusterName_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> hostName_ {};
      shared_ptr<string> ip_ {};
      // SDKID。
      shared_ptr<string> mid_ {};
      shared_ptr<string> protectionGroupAddress_ {};
      shared_ptr<string> pullinStatus_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sdkServers_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudSdkServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdkServers Field Functions 
    bool hasSdkServers() const { return this->sdkServers_ != nullptr;};
    void deleteSdkServers() { this->sdkServers_ = nullptr;};
    inline const vector<DescribeHybridCloudSdkServersResponseBody::SdkServers> & getSdkServers() const { DARABONBA_PTR_GET_CONST(sdkServers_, vector<DescribeHybridCloudSdkServersResponseBody::SdkServers>) };
    inline vector<DescribeHybridCloudSdkServersResponseBody::SdkServers> getSdkServers() { DARABONBA_PTR_GET(sdkServers_, vector<DescribeHybridCloudSdkServersResponseBody::SdkServers>) };
    inline DescribeHybridCloudSdkServersResponseBody& setSdkServers(const vector<DescribeHybridCloudSdkServersResponseBody::SdkServers> & sdkServers) { DARABONBA_PTR_SET_VALUE(sdkServers_, sdkServers) };
    inline DescribeHybridCloudSdkServersResponseBody& setSdkServers(vector<DescribeHybridCloudSdkServersResponseBody::SdkServers> && sdkServers) { DARABONBA_PTR_SET_RVALUE(sdkServers_, sdkServers) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudSdkServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeHybridCloudSdkServersResponseBody::SdkServers>> sdkServers_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
