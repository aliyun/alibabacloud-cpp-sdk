// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESPONSEBODYQOSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESPONSEBODYQOSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList.hpp>
#include <alibabacloud/models/DescribeExpressConnectTrafficQosResponseBodyQosListQueueList.hpp>
#include <alibabacloud/models/DescribeExpressConnectTrafficQosResponseBodyQosListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosResponseBodyQosList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosResponseBodyQosList& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedInstanceList, associatedInstanceList_);
      DARABONBA_PTR_TO_JSON(Progressing, progressing_);
      DARABONBA_PTR_TO_JSON(QosDescription, qosDescription_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(QosName, qosName_);
      DARABONBA_PTR_TO_JSON(QueueList, queueList_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosResponseBodyQosList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedInstanceList, associatedInstanceList_);
      DARABONBA_PTR_FROM_JSON(Progressing, progressing_);
      DARABONBA_PTR_FROM_JSON(QosDescription, qosDescription_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(QosName, qosName_);
      DARABONBA_PTR_FROM_JSON(QueueList, queueList_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeExpressConnectTrafficQosResponseBodyQosList() = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosList(const DescribeExpressConnectTrafficQosResponseBodyQosList &) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosList(DescribeExpressConnectTrafficQosResponseBodyQosList &&) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosResponseBodyQosList() = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosList& operator=(const DescribeExpressConnectTrafficQosResponseBodyQosList &) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosList& operator=(DescribeExpressConnectTrafficQosResponseBodyQosList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associatedInstanceList_ != nullptr
        && this->progressing_ != nullptr && this->qosDescription_ != nullptr && this->qosId_ != nullptr && this->qosName_ != nullptr && this->queueList_ != nullptr
        && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // associatedInstanceList Field Functions 
    bool hasAssociatedInstanceList() const { return this->associatedInstanceList_ != nullptr;};
    void deleteAssociatedInstanceList() { this->associatedInstanceList_ = nullptr;};
    inline const vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList> & associatedInstanceList() const { DARABONBA_PTR_GET_CONST(associatedInstanceList_, vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList>) };
    inline vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList> associatedInstanceList() { DARABONBA_PTR_GET(associatedInstanceList_, vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList>) };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setAssociatedInstanceList(const vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList> & associatedInstanceList) { DARABONBA_PTR_SET_VALUE(associatedInstanceList_, associatedInstanceList) };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setAssociatedInstanceList(vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList> && associatedInstanceList) { DARABONBA_PTR_SET_RVALUE(associatedInstanceList_, associatedInstanceList) };


    // progressing Field Functions 
    bool hasProgressing() const { return this->progressing_ != nullptr;};
    void deleteProgressing() { this->progressing_ = nullptr;};
    inline int32_t progressing() const { DARABONBA_PTR_GET_DEFAULT(progressing_, 0) };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setProgressing(int32_t progressing) { DARABONBA_PTR_SET_VALUE(progressing_, progressing) };


    // qosDescription Field Functions 
    bool hasQosDescription() const { return this->qosDescription_ != nullptr;};
    void deleteQosDescription() { this->qosDescription_ = nullptr;};
    inline string qosDescription() const { DARABONBA_PTR_GET_DEFAULT(qosDescription_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setQosDescription(string qosDescription) { DARABONBA_PTR_SET_VALUE(qosDescription_, qosDescription) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string qosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // qosName Field Functions 
    bool hasQosName() const { return this->qosName_ != nullptr;};
    void deleteQosName() { this->qosName_ = nullptr;};
    inline string qosName() const { DARABONBA_PTR_GET_DEFAULT(qosName_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setQosName(string qosName) { DARABONBA_PTR_SET_VALUE(qosName_, qosName) };


    // queueList Field Functions 
    bool hasQueueList() const { return this->queueList_ != nullptr;};
    void deleteQueueList() { this->queueList_ = nullptr;};
    inline const vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListQueueList> & queueList() const { DARABONBA_PTR_GET_CONST(queueList_, vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListQueueList>) };
    inline vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListQueueList> queueList() { DARABONBA_PTR_GET(queueList_, vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListQueueList>) };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setQueueList(const vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListQueueList> & queueList) { DARABONBA_PTR_SET_VALUE(queueList_, queueList) };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setQueueList(vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListQueueList> && queueList) { DARABONBA_PTR_SET_RVALUE(queueList_, queueList) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListTags>) };
    inline vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListTags>) };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setTags(const vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeExpressConnectTrafficQosResponseBodyQosList& setTags(vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The information about the instances to which the QoS policy is associated.
    std::shared_ptr<vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList>> associatedInstanceList_ = nullptr;
    // The configuration progress of the QoS policy. Valid values: **0** to **100**.
    std::shared_ptr<int32_t> progressing_ = nullptr;
    // The description of the QoS policy.
    // 
    // The description can be up to 256 characters in length. It cannot start with `http://` or `https://`.
    std::shared_ptr<string> qosDescription_ = nullptr;
    // The ID of the QoS policy.
    std::shared_ptr<string> qosId_ = nullptr;
    // The name of the QoS policy.
    // 
    // The name can be up to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> qosName_ = nullptr;
    // The information about the QoS queues.
    std::shared_ptr<vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListQueueList>> queueList_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The state of the QoS policy. Valid values:
    // 
    // - **Normal**: The QoS policy is available.
    // - **Configuring**: The QoS policy is being configured.
    // 
    //  > If a QoS policy is in the Configuring state, you cannot perform most of the operations to create, update, or delete QoS policies, QoS queues, or QoS rules.
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::DescribeExpressConnectTrafficQosResponseBodyQosListTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
