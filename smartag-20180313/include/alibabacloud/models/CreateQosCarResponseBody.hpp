// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSCARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSCARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateQosCarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosCarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LimitType, limitType_);
      DARABONBA_PTR_TO_JSON(MaxBandwidthAbs, maxBandwidthAbs_);
      DARABONBA_PTR_TO_JSON(MaxBandwidthPercent, maxBandwidthPercent_);
      DARABONBA_PTR_TO_JSON(MinBandwidthAbs, minBandwidthAbs_);
      DARABONBA_PTR_TO_JSON(MinBandwidthPercent, minBandwidthPercent_);
      DARABONBA_PTR_TO_JSON(PercentSourceType, percentSourceType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QosCarId, qosCarId_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosCarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidthAbs, maxBandwidthAbs_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidthPercent, maxBandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(MinBandwidthAbs, minBandwidthAbs_);
      DARABONBA_PTR_FROM_JSON(MinBandwidthPercent, minBandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(PercentSourceType, percentSourceType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QosCarId, qosCarId_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateQosCarResponseBody() = default ;
    CreateQosCarResponseBody(const CreateQosCarResponseBody &) = default ;
    CreateQosCarResponseBody(CreateQosCarResponseBody &&) = default ;
    CreateQosCarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosCarResponseBody() = default ;
    CreateQosCarResponseBody& operator=(const CreateQosCarResponseBody &) = default ;
    CreateQosCarResponseBody& operator=(CreateQosCarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->limitType_ == nullptr && this->maxBandwidthAbs_ == nullptr && this->maxBandwidthPercent_ == nullptr && this->minBandwidthAbs_ == nullptr && this->minBandwidthPercent_ == nullptr
        && this->percentSourceType_ == nullptr && this->priority_ == nullptr && this->qosCarId_ == nullptr && this->qosId_ == nullptr && this->requestId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateQosCarResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // limitType Field Functions 
    bool hasLimitType() const { return this->limitType_ != nullptr;};
    void deleteLimitType() { this->limitType_ = nullptr;};
    inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
    inline CreateQosCarResponseBody& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


    // maxBandwidthAbs Field Functions 
    bool hasMaxBandwidthAbs() const { return this->maxBandwidthAbs_ != nullptr;};
    void deleteMaxBandwidthAbs() { this->maxBandwidthAbs_ = nullptr;};
    inline int32_t getMaxBandwidthAbs() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthAbs_, 0) };
    inline CreateQosCarResponseBody& setMaxBandwidthAbs(int32_t maxBandwidthAbs) { DARABONBA_PTR_SET_VALUE(maxBandwidthAbs_, maxBandwidthAbs) };


    // maxBandwidthPercent Field Functions 
    bool hasMaxBandwidthPercent() const { return this->maxBandwidthPercent_ != nullptr;};
    void deleteMaxBandwidthPercent() { this->maxBandwidthPercent_ = nullptr;};
    inline int32_t getMaxBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthPercent_, 0) };
    inline CreateQosCarResponseBody& setMaxBandwidthPercent(int32_t maxBandwidthPercent) { DARABONBA_PTR_SET_VALUE(maxBandwidthPercent_, maxBandwidthPercent) };


    // minBandwidthAbs Field Functions 
    bool hasMinBandwidthAbs() const { return this->minBandwidthAbs_ != nullptr;};
    void deleteMinBandwidthAbs() { this->minBandwidthAbs_ = nullptr;};
    inline int32_t getMinBandwidthAbs() const { DARABONBA_PTR_GET_DEFAULT(minBandwidthAbs_, 0) };
    inline CreateQosCarResponseBody& setMinBandwidthAbs(int32_t minBandwidthAbs) { DARABONBA_PTR_SET_VALUE(minBandwidthAbs_, minBandwidthAbs) };


    // minBandwidthPercent Field Functions 
    bool hasMinBandwidthPercent() const { return this->minBandwidthPercent_ != nullptr;};
    void deleteMinBandwidthPercent() { this->minBandwidthPercent_ = nullptr;};
    inline int32_t getMinBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(minBandwidthPercent_, 0) };
    inline CreateQosCarResponseBody& setMinBandwidthPercent(int32_t minBandwidthPercent) { DARABONBA_PTR_SET_VALUE(minBandwidthPercent_, minBandwidthPercent) };


    // percentSourceType Field Functions 
    bool hasPercentSourceType() const { return this->percentSourceType_ != nullptr;};
    void deletePercentSourceType() { this->percentSourceType_ = nullptr;};
    inline string getPercentSourceType() const { DARABONBA_PTR_GET_DEFAULT(percentSourceType_, "") };
    inline CreateQosCarResponseBody& setPercentSourceType(string percentSourceType) { DARABONBA_PTR_SET_VALUE(percentSourceType_, percentSourceType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateQosCarResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // qosCarId Field Functions 
    bool hasQosCarId() const { return this->qosCarId_ != nullptr;};
    void deleteQosCarId() { this->qosCarId_ = nullptr;};
    inline string getQosCarId() const { DARABONBA_PTR_GET_DEFAULT(qosCarId_, "") };
    inline CreateQosCarResponseBody& setQosCarId(string qosCarId) { DARABONBA_PTR_SET_VALUE(qosCarId_, qosCarId) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline CreateQosCarResponseBody& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQosCarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The description of the QoS rate limiting rule.
    shared_ptr<string> description_ {};
    // The type of rate limiting. Valid values:
    // 
    // - **Absolute**: by bandwidth value.
    // 
    // - **Percent**: by percentage.
    shared_ptr<string> limitType_ {};
    // The maximum bandwidth value. Unit: Mbit/s.
    // 
    // This parameter is required when **LimitType** is set to **Absolute**.
    shared_ptr<int32_t> maxBandwidthAbs_ {};
    // The maximum bandwidth percentage. Unit: percent (%).
    shared_ptr<int32_t> maxBandwidthPercent_ {};
    // The minimum bandwidth value. Unit: Mbit/s.
    // 
    // This parameter is required when **LimitType** is set to **Absolute**.
    shared_ptr<int32_t> minBandwidthAbs_ {};
    // The minimum bandwidth percentage. Unit: percent (%).
    shared_ptr<int32_t> minBandwidthPercent_ {};
    // The bandwidth type when rate limiting by percentage. Valid values:
    // 
    // - **CcnBandwidth**: CCN bandwidth.
    // 
    // - **InternetUpBandwidth**: total Internet bandwidth.
    shared_ptr<string> percentSourceType_ {};
    // The priority of the rule.
    shared_ptr<int32_t> priority_ {};
    // The instance ID of the QoS rate limiting rule.
    shared_ptr<string> qosCarId_ {};
    // The instance ID of the QoS policy.
    shared_ptr<string> qosId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
