// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayTrafficDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayTrafficDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficList, trafficList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayTrafficDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficList, trafficList_);
    };
    DescribePostpayTrafficDetailResponseBody() = default ;
    DescribePostpayTrafficDetailResponseBody(const DescribePostpayTrafficDetailResponseBody &) = default ;
    DescribePostpayTrafficDetailResponseBody(DescribePostpayTrafficDetailResponseBody &&) = default ;
    DescribePostpayTrafficDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayTrafficDetailResponseBody() = default ;
    DescribePostpayTrafficDetailResponseBody& operator=(const DescribePostpayTrafficDetailResponseBody &) = default ;
    DescribePostpayTrafficDetailResponseBody& operator=(DescribePostpayTrafficDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficList& obj) { 
        DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_TO_JSON(ProtectionDuration, protectionDuration_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
        DARABONBA_PTR_TO_JSON(TrafficDay, trafficDay_);
        DARABONBA_PTR_TO_JSON(TrafficType, trafficType_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficList& obj) { 
        DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_FROM_JSON(ProtectionDuration, protectionDuration_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
        DARABONBA_PTR_FROM_JSON(TrafficDay, trafficDay_);
        DARABONBA_PTR_FROM_JSON(TrafficType, trafficType_);
      };
      TrafficList() = default ;
      TrafficList(const TrafficList &) = default ;
      TrafficList(TrafficList &&) = default ;
      TrafficList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficList() = default ;
      TrafficList& operator=(const TrafficList &) = default ;
      TrafficList& operator=(TrafficList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inBytes_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->outBytes_ == nullptr && this->protectionDuration_ == nullptr && this->regionNo_ == nullptr
        && this->resourceId_ == nullptr && this->totalBytes_ == nullptr && this->trafficDay_ == nullptr && this->trafficType_ == nullptr; };
      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline TrafficList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TrafficList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline TrafficList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline TrafficList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // protectionDuration Field Functions 
      bool hasProtectionDuration() const { return this->protectionDuration_ != nullptr;};
      void deleteProtectionDuration() { this->protectionDuration_ = nullptr;};
      inline int64_t getProtectionDuration() const { DARABONBA_PTR_GET_DEFAULT(protectionDuration_, 0L) };
      inline TrafficList& setProtectionDuration(int64_t protectionDuration) { DARABONBA_PTR_SET_VALUE(protectionDuration_, protectionDuration) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline TrafficList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline TrafficList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
      inline TrafficList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


      // trafficDay Field Functions 
      bool hasTrafficDay() const { return this->trafficDay_ != nullptr;};
      void deleteTrafficDay() { this->trafficDay_ = nullptr;};
      inline string getTrafficDay() const { DARABONBA_PTR_GET_DEFAULT(trafficDay_, "") };
      inline TrafficList& setTrafficDay(string trafficDay) { DARABONBA_PTR_SET_VALUE(trafficDay_, trafficDay) };


      // trafficType Field Functions 
      bool hasTrafficType() const { return this->trafficType_ != nullptr;};
      void deleteTrafficType() { this->trafficType_ = nullptr;};
      inline string getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, "") };
      inline TrafficList& setTrafficType(string trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


    protected:
      // The inbound network throughput, which indicates the total number of bytes that are received Unit: bytes.
      shared_ptr<int64_t> inBytes_ {};
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The asset type. This value takes effect only for the Internet firewall.
      shared_ptr<string> instanceType_ {};
      // The outbound network throughput, which indicates the total number of bytes that are sent. Unit: bytes.
      shared_ptr<int64_t> outBytes_ {};
      // Protection duration. Unit: hours.
      shared_ptr<int64_t> protectionDuration_ {};
      // The region ID.
      shared_ptr<string> regionNo_ {};
      // The resource ID. The resource ID for the Internet firewall is the public IP address that is protected the Internet firewall, and the resource ID for a NAT firewall is the instance ID of the NAT firewall.
      shared_ptr<string> resourceId_ {};
      // The total inbound and outbound network throughput, which indicates the total number of bytes that are received and sent. Unit: bytes.
      shared_ptr<int64_t> totalBytes_ {};
      // The date on which the statistics are collected.
      shared_ptr<string> trafficDay_ {};
      // The traffic type. Valid values:
      // 
      // *   **EIP_TRAFFIC**: traffic for the Internet firewall
      // *   **NatGateway_TRAFFIC**: traffic for NAT firewalls
      // *   **VPC_TRAFFIC**: traffic for VPC firewalls
      shared_ptr<string> trafficType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->trafficList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostpayTrafficDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePostpayTrafficDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficList Field Functions 
    bool hasTrafficList() const { return this->trafficList_ != nullptr;};
    void deleteTrafficList() { this->trafficList_ = nullptr;};
    inline const vector<DescribePostpayTrafficDetailResponseBody::TrafficList> & getTrafficList() const { DARABONBA_PTR_GET_CONST(trafficList_, vector<DescribePostpayTrafficDetailResponseBody::TrafficList>) };
    inline vector<DescribePostpayTrafficDetailResponseBody::TrafficList> getTrafficList() { DARABONBA_PTR_GET(trafficList_, vector<DescribePostpayTrafficDetailResponseBody::TrafficList>) };
    inline DescribePostpayTrafficDetailResponseBody& setTrafficList(const vector<DescribePostpayTrafficDetailResponseBody::TrafficList> & trafficList) { DARABONBA_PTR_SET_VALUE(trafficList_, trafficList) };
    inline DescribePostpayTrafficDetailResponseBody& setTrafficList(vector<DescribePostpayTrafficDetailResponseBody::TrafficList> && trafficList) { DARABONBA_PTR_SET_RVALUE(trafficList_, trafficList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The statistics on traffic.
    shared_ptr<vector<DescribePostpayTrafficDetailResponseBody::TrafficList>> trafficList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
