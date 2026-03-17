// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeHealthCheckAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DstIpAddr, dstIpAddr_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(FailCountThreshold, failCountThreshold_);
      DARABONBA_PTR_TO_JSON(HcInstanceId, hcInstanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProbeCount, probeCount_);
      DARABONBA_PTR_TO_JSON(ProbeInterval, probeInterval_);
      DARABONBA_PTR_TO_JSON(ProbeTimeout, probeTimeout_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RttFailThreshold, rttFailThreshold_);
      DARABONBA_PTR_TO_JSON(RttThreshold, rttThreshold_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SrcIpAddr, srcIpAddr_);
      DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DstIpAddr, dstIpAddr_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(FailCountThreshold, failCountThreshold_);
      DARABONBA_PTR_FROM_JSON(HcInstanceId, hcInstanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProbeCount, probeCount_);
      DARABONBA_PTR_FROM_JSON(ProbeInterval, probeInterval_);
      DARABONBA_PTR_FROM_JSON(ProbeTimeout, probeTimeout_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RttFailThreshold, rttFailThreshold_);
      DARABONBA_PTR_FROM_JSON(RttThreshold, rttThreshold_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SrcIpAddr, srcIpAddr_);
      DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeHealthCheckAttributeResponseBody() = default ;
    DescribeHealthCheckAttributeResponseBody(const DescribeHealthCheckAttributeResponseBody &) = default ;
    DescribeHealthCheckAttributeResponseBody(DescribeHealthCheckAttributeResponseBody &&) = default ;
    DescribeHealthCheckAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckAttributeResponseBody() = default ;
    DescribeHealthCheckAttributeResponseBody& operator=(const DescribeHealthCheckAttributeResponseBody &) = default ;
    DescribeHealthCheckAttributeResponseBody& operator=(DescribeHealthCheckAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->dstIpAddr_ == nullptr && this->dstPort_ == nullptr && this->failCountThreshold_ == nullptr && this->hcInstanceId_ == nullptr
        && this->name_ == nullptr && this->probeCount_ == nullptr && this->probeInterval_ == nullptr && this->probeTimeout_ == nullptr && this->requestId_ == nullptr
        && this->rttFailThreshold_ == nullptr && this->rttThreshold_ == nullptr && this->smartAGId_ == nullptr && this->srcIpAddr_ == nullptr && this->srcPort_ == nullptr
        && this->type_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeHealthCheckAttributeResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeHealthCheckAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstIpAddr Field Functions 
    bool hasDstIpAddr() const { return this->dstIpAddr_ != nullptr;};
    void deleteDstIpAddr() { this->dstIpAddr_ = nullptr;};
    inline string getDstIpAddr() const { DARABONBA_PTR_GET_DEFAULT(dstIpAddr_, "") };
    inline DescribeHealthCheckAttributeResponseBody& setDstIpAddr(string dstIpAddr) { DARABONBA_PTR_SET_VALUE(dstIpAddr_, dstIpAddr) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
    inline DescribeHealthCheckAttributeResponseBody& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // failCountThreshold Field Functions 
    bool hasFailCountThreshold() const { return this->failCountThreshold_ != nullptr;};
    void deleteFailCountThreshold() { this->failCountThreshold_ = nullptr;};
    inline int32_t getFailCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(failCountThreshold_, 0) };
    inline DescribeHealthCheckAttributeResponseBody& setFailCountThreshold(int32_t failCountThreshold) { DARABONBA_PTR_SET_VALUE(failCountThreshold_, failCountThreshold) };


    // hcInstanceId Field Functions 
    bool hasHcInstanceId() const { return this->hcInstanceId_ != nullptr;};
    void deleteHcInstanceId() { this->hcInstanceId_ = nullptr;};
    inline string getHcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(hcInstanceId_, "") };
    inline DescribeHealthCheckAttributeResponseBody& setHcInstanceId(string hcInstanceId) { DARABONBA_PTR_SET_VALUE(hcInstanceId_, hcInstanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHealthCheckAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // probeCount Field Functions 
    bool hasProbeCount() const { return this->probeCount_ != nullptr;};
    void deleteProbeCount() { this->probeCount_ = nullptr;};
    inline int32_t getProbeCount() const { DARABONBA_PTR_GET_DEFAULT(probeCount_, 0) };
    inline DescribeHealthCheckAttributeResponseBody& setProbeCount(int32_t probeCount) { DARABONBA_PTR_SET_VALUE(probeCount_, probeCount) };


    // probeInterval Field Functions 
    bool hasProbeInterval() const { return this->probeInterval_ != nullptr;};
    void deleteProbeInterval() { this->probeInterval_ = nullptr;};
    inline int32_t getProbeInterval() const { DARABONBA_PTR_GET_DEFAULT(probeInterval_, 0) };
    inline DescribeHealthCheckAttributeResponseBody& setProbeInterval(int32_t probeInterval) { DARABONBA_PTR_SET_VALUE(probeInterval_, probeInterval) };


    // probeTimeout Field Functions 
    bool hasProbeTimeout() const { return this->probeTimeout_ != nullptr;};
    void deleteProbeTimeout() { this->probeTimeout_ = nullptr;};
    inline int32_t getProbeTimeout() const { DARABONBA_PTR_GET_DEFAULT(probeTimeout_, 0) };
    inline DescribeHealthCheckAttributeResponseBody& setProbeTimeout(int32_t probeTimeout) { DARABONBA_PTR_SET_VALUE(probeTimeout_, probeTimeout) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthCheckAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rttFailThreshold Field Functions 
    bool hasRttFailThreshold() const { return this->rttFailThreshold_ != nullptr;};
    void deleteRttFailThreshold() { this->rttFailThreshold_ = nullptr;};
    inline int32_t getRttFailThreshold() const { DARABONBA_PTR_GET_DEFAULT(rttFailThreshold_, 0) };
    inline DescribeHealthCheckAttributeResponseBody& setRttFailThreshold(int32_t rttFailThreshold) { DARABONBA_PTR_SET_VALUE(rttFailThreshold_, rttFailThreshold) };


    // rttThreshold Field Functions 
    bool hasRttThreshold() const { return this->rttThreshold_ != nullptr;};
    void deleteRttThreshold() { this->rttThreshold_ = nullptr;};
    inline int32_t getRttThreshold() const { DARABONBA_PTR_GET_DEFAULT(rttThreshold_, 0) };
    inline DescribeHealthCheckAttributeResponseBody& setRttThreshold(int32_t rttThreshold) { DARABONBA_PTR_SET_VALUE(rttThreshold_, rttThreshold) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DescribeHealthCheckAttributeResponseBody& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // srcIpAddr Field Functions 
    bool hasSrcIpAddr() const { return this->srcIpAddr_ != nullptr;};
    void deleteSrcIpAddr() { this->srcIpAddr_ = nullptr;};
    inline string getSrcIpAddr() const { DARABONBA_PTR_GET_DEFAULT(srcIpAddr_, "") };
    inline DescribeHealthCheckAttributeResponseBody& setSrcIpAddr(string srcIpAddr) { DARABONBA_PTR_SET_VALUE(srcIpAddr_, srcIpAddr) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline int32_t getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
    inline DescribeHealthCheckAttributeResponseBody& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeHealthCheckAttributeResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the health check instance was created. This value is a UNIX timestamp.
    // 
    // Unit: milliseconds.
    shared_ptr<int64_t> createTime_ {};
    // The description of the health check instance.
    shared_ptr<string> description_ {};
    // The destination IP address of the health check.
    shared_ptr<string> dstIpAddr_ {};
    // The destination port of the health check instance.
    // 
    // >  This feature is not supported.
    shared_ptr<int32_t> dstPort_ {};
    // The maximum number of failed probes before the health check is declared failed.
    // 
    // Valid values: **1** to **15**.
    // 
    // Default value: **3**.
    shared_ptr<int32_t> failCountThreshold_ {};
    // The ID of the health check instance.
    shared_ptr<string> hcInstanceId_ {};
    // The name of the health check instance.
    shared_ptr<string> name_ {};
    // The number of probes performed per health check.
    // 
    // Valid values: **1** to **20**.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> probeCount_ {};
    // The time interval at which probes are performed. The next probe does not start before the current one is complete.
    // 
    // Valid values: **1000** to **60000**.
    // 
    // Default value: **2000**.
    // 
    // Unit: milliseconds.
    shared_ptr<int32_t> probeInterval_ {};
    // The timeout period of the probe.
    // 
    // Valid values: **10** to **30000**.
    // 
    // Default value: **1000**.
    // 
    // Unit: milliseconds.
    shared_ptr<int32_t> probeTimeout_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of times that the maximum RTT is exceeded before an alert is triggered.
    // 
    // Valid values: **1** to **15**.
    // 
    // Default value: **3**.
    shared_ptr<int32_t> rttFailThreshold_ {};
    // The maximum round-trip time (RTT).
    // 
    // Value values: **-1** and **1** to **5000**.
    // 
    // Default value: **-1**. This value indicates that the RTT threshold is not specified.
    shared_ptr<int32_t> rttThreshold_ {};
    // The ID of the SAG instance.
    shared_ptr<string> smartAGId_ {};
    // The source IP address of the health check.
    shared_ptr<string> srcIpAddr_ {};
    // The source port of the health check instance.
    // 
    // >  This feature is not supported.
    shared_ptr<int32_t> srcPort_ {};
    // The type of packets used in the health check.
    // 
    // Only **ICMP_ECHO** is supported.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
