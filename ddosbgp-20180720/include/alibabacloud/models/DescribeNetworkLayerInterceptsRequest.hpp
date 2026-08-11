// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKLAYERINTERCEPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKLAYERINTERCEPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeNetworkLayerInterceptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkLayerInterceptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationIp, destinationIp_);
      DARABONBA_PTR_TO_JSON(DestinationPort, destinationPort_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkProtocol, networkProtocol_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProtocolNumber, protocolNumber_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkLayerInterceptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationIp, destinationIp_);
      DARABONBA_PTR_FROM_JSON(DestinationPort, destinationPort_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkProtocol, networkProtocol_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProtocolNumber, protocolNumber_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeNetworkLayerInterceptsRequest() = default ;
    DescribeNetworkLayerInterceptsRequest(const DescribeNetworkLayerInterceptsRequest &) = default ;
    DescribeNetworkLayerInterceptsRequest(DescribeNetworkLayerInterceptsRequest &&) = default ;
    DescribeNetworkLayerInterceptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkLayerInterceptsRequest() = default ;
    DescribeNetworkLayerInterceptsRequest& operator=(const DescribeNetworkLayerInterceptsRequest &) = default ;
    DescribeNetworkLayerInterceptsRequest& operator=(DescribeNetworkLayerInterceptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationIp_ == nullptr
        && this->destinationPort_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->networkProtocol_ == nullptr && this->page_ == nullptr
        && this->pageSize_ == nullptr && this->protocolNumber_ == nullptr && this->sourcePort_ == nullptr && this->srcIp_ == nullptr && this->startTime_ == nullptr; };
    // destinationIp Field Functions 
    bool hasDestinationIp() const { return this->destinationIp_ != nullptr;};
    void deleteDestinationIp() { this->destinationIp_ = nullptr;};
    inline string getDestinationIp() const { DARABONBA_PTR_GET_DEFAULT(destinationIp_, "") };
    inline DescribeNetworkLayerInterceptsRequest& setDestinationIp(string destinationIp) { DARABONBA_PTR_SET_VALUE(destinationIp_, destinationIp) };


    // destinationPort Field Functions 
    bool hasDestinationPort() const { return this->destinationPort_ != nullptr;};
    void deleteDestinationPort() { this->destinationPort_ = nullptr;};
    inline int64_t getDestinationPort() const { DARABONBA_PTR_GET_DEFAULT(destinationPort_, 0L) };
    inline DescribeNetworkLayerInterceptsRequest& setDestinationPort(int64_t destinationPort) { DARABONBA_PTR_SET_VALUE(destinationPort_, destinationPort) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeNetworkLayerInterceptsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkLayerInterceptsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkProtocol Field Functions 
    bool hasNetworkProtocol() const { return this->networkProtocol_ != nullptr;};
    void deleteNetworkProtocol() { this->networkProtocol_ = nullptr;};
    inline string getNetworkProtocol() const { DARABONBA_PTR_GET_DEFAULT(networkProtocol_, "") };
    inline DescribeNetworkLayerInterceptsRequest& setNetworkProtocol(string networkProtocol) { DARABONBA_PTR_SET_VALUE(networkProtocol_, networkProtocol) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline DescribeNetworkLayerInterceptsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeNetworkLayerInterceptsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // protocolNumber Field Functions 
    bool hasProtocolNumber() const { return this->protocolNumber_ != nullptr;};
    void deleteProtocolNumber() { this->protocolNumber_ = nullptr;};
    inline int64_t getProtocolNumber() const { DARABONBA_PTR_GET_DEFAULT(protocolNumber_, 0L) };
    inline DescribeNetworkLayerInterceptsRequest& setProtocolNumber(int64_t protocolNumber) { DARABONBA_PTR_SET_VALUE(protocolNumber_, protocolNumber) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline DescribeNetworkLayerInterceptsRequest& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline DescribeNetworkLayerInterceptsRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeNetworkLayerInterceptsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The destination IP address.
    shared_ptr<string> destinationIp_ {};
    // The destination port.
    shared_ptr<int64_t> destinationPort_ {};
    // The end time of the DDoS attack event to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID of the Anti-DDoS Origin instance to query.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The network protocol.
    shared_ptr<string> networkProtocol_ {};
    // The page number.
    shared_ptr<int64_t> page_ {};
    // Settings for the number of interception logs to return on each page when you perform a paged query. Paging is used to return results.
    shared_ptr<int64_t> pageSize_ {};
    // The network protocol number. This is a standard network protocol number.
    shared_ptr<int64_t> protocolNumber_ {};
    // The source port.
    shared_ptr<int64_t> sourcePort_ {};
    // The source IP address.
    shared_ptr<string> srcIp_ {};
    // The start time of the DDoS attack event to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
