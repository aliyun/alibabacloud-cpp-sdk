// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESPONSEBODYQOSLISTQUEUELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESPONSEBODYQOSLISTQUEUELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosResponseBodyQosListQueueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPercent, bandwidthPercent_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(QueueDescription, queueDescription_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(QueueType, queueType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPercent, bandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(QueueDescription, queueDescription_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeExpressConnectTrafficQosResponseBodyQosListQueueList() = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListQueueList(const DescribeExpressConnectTrafficQosResponseBodyQosListQueueList &) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListQueueList(DescribeExpressConnectTrafficQosResponseBodyQosListQueueList &&) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListQueueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosResponseBodyQosListQueueList() = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& operator=(const DescribeExpressConnectTrafficQosResponseBodyQosListQueueList &) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& operator=(DescribeExpressConnectTrafficQosResponseBodyQosListQueueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPercent_ != nullptr
        && this->qosId_ != nullptr && this->queueDescription_ != nullptr && this->queueId_ != nullptr && this->queueName_ != nullptr && this->queueType_ != nullptr
        && this->status_ != nullptr; };
    // bandwidthPercent Field Functions 
    bool hasBandwidthPercent() const { return this->bandwidthPercent_ != nullptr;};
    void deleteBandwidthPercent() { this->bandwidthPercent_ = nullptr;};
    inline string bandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPercent_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& setBandwidthPercent(string bandwidthPercent) { DARABONBA_PTR_SET_VALUE(bandwidthPercent_, bandwidthPercent) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string qosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // queueDescription Field Functions 
    bool hasQueueDescription() const { return this->queueDescription_ != nullptr;};
    void deleteQueueDescription() { this->queueDescription_ = nullptr;};
    inline string queueDescription() const { DARABONBA_PTR_GET_DEFAULT(queueDescription_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& setQueueDescription(string queueDescription) { DARABONBA_PTR_SET_VALUE(queueDescription_, queueDescription) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string queueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListQueueList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The percentage of bandwidth allocated to a QoS queue.
    // 
    // - If QueueType is set to **Medium**, this parameter is required. Valid values: **1** to **100**.
    // - If QueueType is set to **Default**, a value of - is returned.
    std::shared_ptr<string> bandwidthPercent_ = nullptr;
    // The ID of the QoS policy.
    std::shared_ptr<string> qosId_ = nullptr;
    // The description of the QoS queue.
    // 
    // The description can be up to **256** characters in length. It cannot start with `http://` or `https://`.
    std::shared_ptr<string> queueDescription_ = nullptr;
    // The ID of the QoS queue.
    std::shared_ptr<string> queueId_ = nullptr;
    // The name of the QoS queue.
    // 
    // The name can be up to **128** characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> queueName_ = nullptr;
    // The type of the QoS queue. Valid values:
    // 
    // - **High**: high-priority queue.
    // - **Medium**: standard queue.
    // - **Default**: default queue.
    // 
    // 
    // > You cannot create a default queue.
    std::shared_ptr<string> queueType_ = nullptr;
    // The state of the QoS queue. Valid values:
    // 
    // - **Normal**: The QoS queue is available.
    // - **Configuring**: The QoS queue is being configured.
    // - **Deleting**: The QoS queue is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
