// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQOSATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQOSATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class GetQosAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQosAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorConfigSmartAGCount, errorConfigSmartAGCount_);
      DARABONBA_PTR_TO_JSON(QosCars, qosCars_);
      DARABONBA_PTR_TO_JSON(QosDescription, qosDescription_);
      DARABONBA_PTR_TO_JSON(QosName, qosName_);
      DARABONBA_PTR_TO_JSON(QosPolicies, qosPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQosAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorConfigSmartAGCount, errorConfigSmartAGCount_);
      DARABONBA_PTR_FROM_JSON(QosCars, qosCars_);
      DARABONBA_PTR_FROM_JSON(QosDescription, qosDescription_);
      DARABONBA_PTR_FROM_JSON(QosName, qosName_);
      DARABONBA_PTR_FROM_JSON(QosPolicies, qosPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetQosAttributeResponseBody() = default ;
    GetQosAttributeResponseBody(const GetQosAttributeResponseBody &) = default ;
    GetQosAttributeResponseBody(GetQosAttributeResponseBody &&) = default ;
    GetQosAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQosAttributeResponseBody() = default ;
    GetQosAttributeResponseBody& operator=(const GetQosAttributeResponseBody &) = default ;
    GetQosAttributeResponseBody& operator=(GetQosAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QosPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QosPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(DestCidr, destCidr_);
        DARABONBA_PTR_TO_JSON(DestPortRange, destPortRange_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(QosPolicieDescription, qosPolicieDescription_);
        DARABONBA_PTR_TO_JSON(QosPolicieName, qosPolicieName_);
        DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, QosPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(DestCidr, destCidr_);
        DARABONBA_PTR_FROM_JSON(DestPortRange, destPortRange_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(QosPolicieDescription, qosPolicieDescription_);
        DARABONBA_PTR_FROM_JSON(QosPolicieName, qosPolicieName_);
        DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      QosPolicies() = default ;
      QosPolicies(const QosPolicies &) = default ;
      QosPolicies(QosPolicies &&) = default ;
      QosPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QosPolicies() = default ;
      QosPolicies& operator=(const QosPolicies &) = default ;
      QosPolicies& operator=(QosPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destCidr_ == nullptr
        && this->destPortRange_ == nullptr && this->endTime_ == nullptr && this->ipProtocol_ == nullptr && this->priority_ == nullptr && this->qosPolicieDescription_ == nullptr
        && this->qosPolicieName_ == nullptr && this->sourceCidr_ == nullptr && this->sourcePortRange_ == nullptr && this->startTime_ == nullptr; };
      // destCidr Field Functions 
      bool hasDestCidr() const { return this->destCidr_ != nullptr;};
      void deleteDestCidr() { this->destCidr_ = nullptr;};
      inline string getDestCidr() const { DARABONBA_PTR_GET_DEFAULT(destCidr_, "") };
      inline QosPolicies& setDestCidr(string destCidr) { DARABONBA_PTR_SET_VALUE(destCidr_, destCidr) };


      // destPortRange Field Functions 
      bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
      void deleteDestPortRange() { this->destPortRange_ = nullptr;};
      inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
      inline QosPolicies& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline QosPolicies& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline QosPolicies& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline QosPolicies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // qosPolicieDescription Field Functions 
      bool hasQosPolicieDescription() const { return this->qosPolicieDescription_ != nullptr;};
      void deleteQosPolicieDescription() { this->qosPolicieDescription_ = nullptr;};
      inline string getQosPolicieDescription() const { DARABONBA_PTR_GET_DEFAULT(qosPolicieDescription_, "") };
      inline QosPolicies& setQosPolicieDescription(string qosPolicieDescription) { DARABONBA_PTR_SET_VALUE(qosPolicieDescription_, qosPolicieDescription) };


      // qosPolicieName Field Functions 
      bool hasQosPolicieName() const { return this->qosPolicieName_ != nullptr;};
      void deleteQosPolicieName() { this->qosPolicieName_ = nullptr;};
      inline string getQosPolicieName() const { DARABONBA_PTR_GET_DEFAULT(qosPolicieName_, "") };
      inline QosPolicies& setQosPolicieName(string qosPolicieName) { DARABONBA_PTR_SET_VALUE(qosPolicieName_, qosPolicieName) };


      // sourceCidr Field Functions 
      bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
      void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
      inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
      inline QosPolicies& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline QosPolicies& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline QosPolicies& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The range of the destination CIDR block.
      shared_ptr<string> destCidr_ {};
      // The range of destination ports.
      // 
      // Valid values: **1** to **65535** and **-1**.
      // 
      // Examples of the format of the destination port range:
      // 
      // *   **1/200**: a port range from 1 to 200.
      // *   **80/80**: port 80.
      // *   **-1/-1**: all ports.
      shared_ptr<string> destPortRange_ {};
      // The end time of the valid time of the 5-tuple.
      // 
      // The time must be in UTC+8.
      shared_ptr<int64_t> endTime_ {};
      // The type of the protocol that is applied to the 5-tuple rule.
      shared_ptr<string> ipProtocol_ {};
      // The priority of the traffic throttling rule that is applied to the 5-tuple.rule.
      // 
      // A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The description of the 5-tuple.
      shared_ptr<string> qosPolicieDescription_ {};
      // The name of the 5-tuple.
      shared_ptr<string> qosPolicieName_ {};
      // The range of the source CIDR block.
      shared_ptr<string> sourceCidr_ {};
      // The range of source ports.
      // 
      // Valid values: **1** to **65535** and **-1**.
      // 
      // Examples of the format of the source port range:
      // 
      // *   **1/200**: a port range from 1 to 200.
      // *   **80/80**: port 80.
      // *   **-1/-1**: all ports.
      shared_ptr<string> sourcePortRange_ {};
      // The start time of the valid time of the 5-tuple.
      shared_ptr<int64_t> startTime_ {};
    };

    class QosCars : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QosCars& obj) { 
        DARABONBA_PTR_TO_JSON(LimitType, limitType_);
        DARABONBA_PTR_TO_JSON(MaxBandwidthAbs, maxBandwidthAbs_);
        DARABONBA_PTR_TO_JSON(MaxBandwidthPercent, maxBandwidthPercent_);
        DARABONBA_PTR_TO_JSON(MinBandwidthAbs, minBandwidthAbs_);
        DARABONBA_PTR_TO_JSON(MinBandwidthPercent, minBandwidthPercent_);
        DARABONBA_PTR_TO_JSON(PercentSourceType, percentSourceType_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(QosCarDescription, qosCarDescription_);
        DARABONBA_PTR_TO_JSON(QosCarId, qosCarId_);
        DARABONBA_PTR_TO_JSON(QosCarName, qosCarName_);
      };
      friend void from_json(const Darabonba::Json& j, QosCars& obj) { 
        DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
        DARABONBA_PTR_FROM_JSON(MaxBandwidthAbs, maxBandwidthAbs_);
        DARABONBA_PTR_FROM_JSON(MaxBandwidthPercent, maxBandwidthPercent_);
        DARABONBA_PTR_FROM_JSON(MinBandwidthAbs, minBandwidthAbs_);
        DARABONBA_PTR_FROM_JSON(MinBandwidthPercent, minBandwidthPercent_);
        DARABONBA_PTR_FROM_JSON(PercentSourceType, percentSourceType_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(QosCarDescription, qosCarDescription_);
        DARABONBA_PTR_FROM_JSON(QosCarId, qosCarId_);
        DARABONBA_PTR_FROM_JSON(QosCarName, qosCarName_);
      };
      QosCars() = default ;
      QosCars(const QosCars &) = default ;
      QosCars(QosCars &&) = default ;
      QosCars(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QosCars() = default ;
      QosCars& operator=(const QosCars &) = default ;
      QosCars& operator=(QosCars &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->limitType_ == nullptr
        && this->maxBandwidthAbs_ == nullptr && this->maxBandwidthPercent_ == nullptr && this->minBandwidthAbs_ == nullptr && this->minBandwidthPercent_ == nullptr && this->percentSourceType_ == nullptr
        && this->priority_ == nullptr && this->qosCarDescription_ == nullptr && this->qosCarId_ == nullptr && this->qosCarName_ == nullptr; };
      // limitType Field Functions 
      bool hasLimitType() const { return this->limitType_ != nullptr;};
      void deleteLimitType() { this->limitType_ = nullptr;};
      inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
      inline QosCars& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


      // maxBandwidthAbs Field Functions 
      bool hasMaxBandwidthAbs() const { return this->maxBandwidthAbs_ != nullptr;};
      void deleteMaxBandwidthAbs() { this->maxBandwidthAbs_ = nullptr;};
      inline int32_t getMaxBandwidthAbs() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthAbs_, 0) };
      inline QosCars& setMaxBandwidthAbs(int32_t maxBandwidthAbs) { DARABONBA_PTR_SET_VALUE(maxBandwidthAbs_, maxBandwidthAbs) };


      // maxBandwidthPercent Field Functions 
      bool hasMaxBandwidthPercent() const { return this->maxBandwidthPercent_ != nullptr;};
      void deleteMaxBandwidthPercent() { this->maxBandwidthPercent_ = nullptr;};
      inline int32_t getMaxBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthPercent_, 0) };
      inline QosCars& setMaxBandwidthPercent(int32_t maxBandwidthPercent) { DARABONBA_PTR_SET_VALUE(maxBandwidthPercent_, maxBandwidthPercent) };


      // minBandwidthAbs Field Functions 
      bool hasMinBandwidthAbs() const { return this->minBandwidthAbs_ != nullptr;};
      void deleteMinBandwidthAbs() { this->minBandwidthAbs_ = nullptr;};
      inline int32_t getMinBandwidthAbs() const { DARABONBA_PTR_GET_DEFAULT(minBandwidthAbs_, 0) };
      inline QosCars& setMinBandwidthAbs(int32_t minBandwidthAbs) { DARABONBA_PTR_SET_VALUE(minBandwidthAbs_, minBandwidthAbs) };


      // minBandwidthPercent Field Functions 
      bool hasMinBandwidthPercent() const { return this->minBandwidthPercent_ != nullptr;};
      void deleteMinBandwidthPercent() { this->minBandwidthPercent_ = nullptr;};
      inline int32_t getMinBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(minBandwidthPercent_, 0) };
      inline QosCars& setMinBandwidthPercent(int32_t minBandwidthPercent) { DARABONBA_PTR_SET_VALUE(minBandwidthPercent_, minBandwidthPercent) };


      // percentSourceType Field Functions 
      bool hasPercentSourceType() const { return this->percentSourceType_ != nullptr;};
      void deletePercentSourceType() { this->percentSourceType_ = nullptr;};
      inline string getPercentSourceType() const { DARABONBA_PTR_GET_DEFAULT(percentSourceType_, "") };
      inline QosCars& setPercentSourceType(string percentSourceType) { DARABONBA_PTR_SET_VALUE(percentSourceType_, percentSourceType) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline QosCars& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // qosCarDescription Field Functions 
      bool hasQosCarDescription() const { return this->qosCarDescription_ != nullptr;};
      void deleteQosCarDescription() { this->qosCarDescription_ = nullptr;};
      inline string getQosCarDescription() const { DARABONBA_PTR_GET_DEFAULT(qosCarDescription_, "") };
      inline QosCars& setQosCarDescription(string qosCarDescription) { DARABONBA_PTR_SET_VALUE(qosCarDescription_, qosCarDescription) };


      // qosCarId Field Functions 
      bool hasQosCarId() const { return this->qosCarId_ != nullptr;};
      void deleteQosCarId() { this->qosCarId_ = nullptr;};
      inline string getQosCarId() const { DARABONBA_PTR_GET_DEFAULT(qosCarId_, "") };
      inline QosCars& setQosCarId(string qosCarId) { DARABONBA_PTR_SET_VALUE(qosCarId_, qosCarId) };


      // qosCarName Field Functions 
      bool hasQosCarName() const { return this->qosCarName_ != nullptr;};
      void deleteQosCarName() { this->qosCarName_ = nullptr;};
      inline string getQosCarName() const { DARABONBA_PTR_GET_DEFAULT(qosCarName_, "") };
      inline QosCars& setQosCarName(string qosCarName) { DARABONBA_PTR_SET_VALUE(qosCarName_, qosCarName) };


    protected:
      // The type of traffic throttling. Valid values:
      // 
      // *   **Absolute**: throttles traffic based on a specific range of bandwidth.
      // *   **Percent**: throttles traffic based on a specific range of bandwidth percentage.
      shared_ptr<string> limitType_ {};
      // The maximum bandwidth. Unit: Mbit/s.
      shared_ptr<int32_t> maxBandwidthAbs_ {};
      // The maximum bandwidth percentage that the traffic is throttled to.
      shared_ptr<int32_t> maxBandwidthPercent_ {};
      // The minimum bandwidth. Unit: Mbit/s.
      shared_ptr<int32_t> minBandwidthAbs_ {};
      // The minimum bandwidth percentage.
      shared_ptr<int32_t> minBandwidthPercent_ {};
      // Bandwidth type when traffic is throttled to a percentage of the total bandwidth of the network.
      // 
      // *   **CcnBandwidth**: Cloud Connect Network (CCN) bandwidth.
      // *   **InternetUpBandwidth**: Internet upstream bandwidth.
      shared_ptr<string> percentSourceType_ {};
      // The priority of the traffic throttling rule.
      // 
      // Valid values are from **1** to **3**. A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The description of the traffic throttling rule.
      shared_ptr<string> qosCarDescription_ {};
      // The ID of the traffic throttling rule.
      shared_ptr<string> qosCarId_ {};
      // The name of the traffic throttling rule.
      shared_ptr<string> qosCarName_ {};
    };

    virtual bool empty() const override { return this->errorConfigSmartAGCount_ == nullptr
        && this->qosCars_ == nullptr && this->qosDescription_ == nullptr && this->qosName_ == nullptr && this->qosPolicies_ == nullptr && this->requestId_ == nullptr; };
    // errorConfigSmartAGCount Field Functions 
    bool hasErrorConfigSmartAGCount() const { return this->errorConfigSmartAGCount_ != nullptr;};
    void deleteErrorConfigSmartAGCount() { this->errorConfigSmartAGCount_ = nullptr;};
    inline int32_t getErrorConfigSmartAGCount() const { DARABONBA_PTR_GET_DEFAULT(errorConfigSmartAGCount_, 0) };
    inline GetQosAttributeResponseBody& setErrorConfigSmartAGCount(int32_t errorConfigSmartAGCount) { DARABONBA_PTR_SET_VALUE(errorConfigSmartAGCount_, errorConfigSmartAGCount) };


    // qosCars Field Functions 
    bool hasQosCars() const { return this->qosCars_ != nullptr;};
    void deleteQosCars() { this->qosCars_ = nullptr;};
    inline const vector<GetQosAttributeResponseBody::QosCars> & getQosCars() const { DARABONBA_PTR_GET_CONST(qosCars_, vector<GetQosAttributeResponseBody::QosCars>) };
    inline vector<GetQosAttributeResponseBody::QosCars> getQosCars() { DARABONBA_PTR_GET(qosCars_, vector<GetQosAttributeResponseBody::QosCars>) };
    inline GetQosAttributeResponseBody& setQosCars(const vector<GetQosAttributeResponseBody::QosCars> & qosCars) { DARABONBA_PTR_SET_VALUE(qosCars_, qosCars) };
    inline GetQosAttributeResponseBody& setQosCars(vector<GetQosAttributeResponseBody::QosCars> && qosCars) { DARABONBA_PTR_SET_RVALUE(qosCars_, qosCars) };


    // qosDescription Field Functions 
    bool hasQosDescription() const { return this->qosDescription_ != nullptr;};
    void deleteQosDescription() { this->qosDescription_ = nullptr;};
    inline string getQosDescription() const { DARABONBA_PTR_GET_DEFAULT(qosDescription_, "") };
    inline GetQosAttributeResponseBody& setQosDescription(string qosDescription) { DARABONBA_PTR_SET_VALUE(qosDescription_, qosDescription) };


    // qosName Field Functions 
    bool hasQosName() const { return this->qosName_ != nullptr;};
    void deleteQosName() { this->qosName_ = nullptr;};
    inline string getQosName() const { DARABONBA_PTR_GET_DEFAULT(qosName_, "") };
    inline GetQosAttributeResponseBody& setQosName(string qosName) { DARABONBA_PTR_SET_VALUE(qosName_, qosName) };


    // qosPolicies Field Functions 
    bool hasQosPolicies() const { return this->qosPolicies_ != nullptr;};
    void deleteQosPolicies() { this->qosPolicies_ = nullptr;};
    inline const vector<GetQosAttributeResponseBody::QosPolicies> & getQosPolicies() const { DARABONBA_PTR_GET_CONST(qosPolicies_, vector<GetQosAttributeResponseBody::QosPolicies>) };
    inline vector<GetQosAttributeResponseBody::QosPolicies> getQosPolicies() { DARABONBA_PTR_GET(qosPolicies_, vector<GetQosAttributeResponseBody::QosPolicies>) };
    inline GetQosAttributeResponseBody& setQosPolicies(const vector<GetQosAttributeResponseBody::QosPolicies> & qosPolicies) { DARABONBA_PTR_SET_VALUE(qosPolicies_, qosPolicies) };
    inline GetQosAttributeResponseBody& setQosPolicies(vector<GetQosAttributeResponseBody::QosPolicies> && qosPolicies) { DARABONBA_PTR_SET_RVALUE(qosPolicies_, qosPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQosAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of Smart Access Gateway (SAG) instances that have exceptional configurations.
    shared_ptr<int32_t> errorConfigSmartAGCount_ {};
    // The traffic throttling rule applied to the QoS policies that have exceptional configurations.
    shared_ptr<vector<GetQosAttributeResponseBody::QosCars>> qosCars_ {};
    // The description of the QoS policy.
    shared_ptr<string> qosDescription_ {};
    // The name of the QoS policy.
    shared_ptr<string> qosName_ {};
    // List of QoS policies based on 5-tuple.
    shared_ptr<vector<GetQosAttributeResponseBody::QosPolicies>> qosPolicies_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
