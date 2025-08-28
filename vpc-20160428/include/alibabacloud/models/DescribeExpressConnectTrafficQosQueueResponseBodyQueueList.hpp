// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUERESPONSEBODYQUEUELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUERESPONSEBODYQUEUELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExpressConnectTrafficQosQueueResponseBodyQueueListRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosQueueResponseBodyQueueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPercent, bandwidthPercent_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(QueueDescription, queueDescription_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(QueueType, queueType_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPercent, bandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(QueueDescription, queueDescription_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeExpressConnectTrafficQosQueueResponseBodyQueueList() = default ;
    DescribeExpressConnectTrafficQosQueueResponseBodyQueueList(const DescribeExpressConnectTrafficQosQueueResponseBodyQueueList &) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBodyQueueList(DescribeExpressConnectTrafficQosQueueResponseBodyQueueList &&) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBodyQueueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosQueueResponseBodyQueueList() = default ;
    DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& operator=(const DescribeExpressConnectTrafficQosQueueResponseBodyQueueList &) = default ;
    DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& operator=(DescribeExpressConnectTrafficQosQueueResponseBodyQueueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPercent_ != nullptr
        && this->qosId_ != nullptr && this->queueDescription_ != nullptr && this->queueId_ != nullptr && this->queueName_ != nullptr && this->queueType_ != nullptr
        && this->ruleList_ != nullptr && this->status_ != nullptr; };
    // bandwidthPercent Field Functions 
    bool hasBandwidthPercent() const { return this->bandwidthPercent_ != nullptr;};
    void deleteBandwidthPercent() { this->bandwidthPercent_ = nullptr;};
    inline string bandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPercent_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setBandwidthPercent(string bandwidthPercent) { DARABONBA_PTR_SET_VALUE(bandwidthPercent_, bandwidthPercent) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string qosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // queueDescription Field Functions 
    bool hasQueueDescription() const { return this->queueDescription_ != nullptr;};
    void deleteQueueDescription() { this->queueDescription_ = nullptr;};
    inline string queueDescription() const { DARABONBA_PTR_GET_DEFAULT(queueDescription_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setQueueDescription(string queueDescription) { DARABONBA_PTR_SET_VALUE(queueDescription_, queueDescription) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string queueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::DescribeExpressConnectTrafficQosQueueResponseBodyQueueListRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::DescribeExpressConnectTrafficQosQueueResponseBodyQueueListRuleList>) };
    inline vector<Models::DescribeExpressConnectTrafficQosQueueResponseBodyQueueListRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::DescribeExpressConnectTrafficQosQueueResponseBodyQueueListRuleList>) };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setRuleList(const vector<Models::DescribeExpressConnectTrafficQosQueueResponseBodyQueueListRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setRuleList(vector<Models::DescribeExpressConnectTrafficQosQueueResponseBodyQueueListRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressConnectTrafficQosQueueResponseBodyQueueList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The percentage of bandwidth allocated to a QoS queue.
    // 
    // *   If QueueType is set to **Medium**, this parameter is returned. Valid values: **1** to **100**.
    // *   If QueueType is set to **Default**, a value of - is returned.
    std::shared_ptr<string> bandwidthPercent_ = nullptr;
    // The ID of the QoS policy.
    std::shared_ptr<string> qosId_ = nullptr;
    // The description of the QoS queue.
    // 
    // The name must be **0** to **256** characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> queueDescription_ = nullptr;
    // The ID of the QoS queue.
    std::shared_ptr<string> queueId_ = nullptr;
    // The name of the QoS queue.
    // 
    // The name must be **0** to **128** characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> queueName_ = nullptr;
    // The priority of the QoS queue. Valid values:
    // 
    // *   **High**
    // *   **Medium**
    // *   **Default**
    // 
    // 
    // 
    // >  You cannot create a QoS queue of the default priority.
    std::shared_ptr<string> queueType_ = nullptr;
    // The information about the QoS rules.
    std::shared_ptr<vector<Models::DescribeExpressConnectTrafficQosQueueResponseBodyQueueListRuleList>> ruleList_ = nullptr;
    // The state of the QoS queue. Valid values:
    // 
    // *   **Normal**: The QoS queue is available.
    // *   **Configuring**: The QoS queue is being configured.
    // *   **Deleting**: The QoS queue is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
