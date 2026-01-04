// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QosList, qosList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QosList, qosList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeExpressConnectTrafficQosResponseBody() = default ;
    DescribeExpressConnectTrafficQosResponseBody(const DescribeExpressConnectTrafficQosResponseBody &) = default ;
    DescribeExpressConnectTrafficQosResponseBody(DescribeExpressConnectTrafficQosResponseBody &&) = default ;
    DescribeExpressConnectTrafficQosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosResponseBody() = default ;
    DescribeExpressConnectTrafficQosResponseBody& operator=(const DescribeExpressConnectTrafficQosResponseBody &) = default ;
    DescribeExpressConnectTrafficQosResponseBody& operator=(DescribeExpressConnectTrafficQosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QosList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QosList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, QosList& obj) { 
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
      QosList() = default ;
      QosList(const QosList &) = default ;
      QosList(QosList &&) = default ;
      QosList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QosList() = default ;
      QosList& operator=(const QosList &) = default ;
      QosList& operator=(QosList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class QueueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueueList& obj) { 
          DARABONBA_PTR_TO_JSON(BandwidthPercent, bandwidthPercent_);
          DARABONBA_PTR_TO_JSON(QosId, qosId_);
          DARABONBA_PTR_TO_JSON(QueueDescription, queueDescription_);
          DARABONBA_PTR_TO_JSON(QueueId, queueId_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(QueueType, queueType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, QueueList& obj) { 
          DARABONBA_PTR_FROM_JSON(BandwidthPercent, bandwidthPercent_);
          DARABONBA_PTR_FROM_JSON(QosId, qosId_);
          DARABONBA_PTR_FROM_JSON(QueueDescription, queueDescription_);
          DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        QueueList() = default ;
        QueueList(const QueueList &) = default ;
        QueueList(QueueList &&) = default ;
        QueueList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueueList() = default ;
        QueueList& operator=(const QueueList &) = default ;
        QueueList& operator=(QueueList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidthPercent_ == nullptr
        && this->qosId_ == nullptr && this->queueDescription_ == nullptr && this->queueId_ == nullptr && this->queueName_ == nullptr && this->queueType_ == nullptr
        && this->status_ == nullptr; };
        // bandwidthPercent Field Functions 
        bool hasBandwidthPercent() const { return this->bandwidthPercent_ != nullptr;};
        void deleteBandwidthPercent() { this->bandwidthPercent_ = nullptr;};
        inline string getBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPercent_, "") };
        inline QueueList& setBandwidthPercent(string bandwidthPercent) { DARABONBA_PTR_SET_VALUE(bandwidthPercent_, bandwidthPercent) };


        // qosId Field Functions 
        bool hasQosId() const { return this->qosId_ != nullptr;};
        void deleteQosId() { this->qosId_ = nullptr;};
        inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
        inline QueueList& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


        // queueDescription Field Functions 
        bool hasQueueDescription() const { return this->queueDescription_ != nullptr;};
        void deleteQueueDescription() { this->queueDescription_ = nullptr;};
        inline string getQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(queueDescription_, "") };
        inline QueueList& setQueueDescription(string queueDescription) { DARABONBA_PTR_SET_VALUE(queueDescription_, queueDescription) };


        // queueId Field Functions 
        bool hasQueueId() const { return this->queueId_ != nullptr;};
        void deleteQueueId() { this->queueId_ = nullptr;};
        inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
        inline QueueList& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline QueueList& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // queueType Field Functions 
        bool hasQueueType() const { return this->queueType_ != nullptr;};
        void deleteQueueType() { this->queueType_ = nullptr;};
        inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
        inline QueueList& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline QueueList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The percentage of bandwidth allocated to a QoS queue.
        // 
        // - If QueueType is set to **Medium**, this parameter is required. Valid values: **1** to **100**.
        // - If QueueType is set to **Default**, a value of - is returned.
        shared_ptr<string> bandwidthPercent_ {};
        // The ID of the QoS policy.
        shared_ptr<string> qosId_ {};
        // The description of the QoS queue.
        // 
        // The description can be up to **256** characters in length. It cannot start with `http://` or `https://`.
        shared_ptr<string> queueDescription_ {};
        // The ID of the QoS queue.
        shared_ptr<string> queueId_ {};
        // The name of the QoS queue.
        // 
        // The name can be up to **128** characters in length and cannot start with `http://` or `https://`.
        shared_ptr<string> queueName_ {};
        // The type of the QoS queue. Valid values:
        // 
        // - **High**: high-priority queue.
        // - **Medium**: standard queue.
        // - **Default**: default queue.
        // 
        // 
        // > You cannot create a default queue.
        shared_ptr<string> queueType_ {};
        // The state of the QoS queue. Valid values:
        // 
        // - **Normal**: The QoS queue is available.
        // - **Configuring**: The QoS queue is being configured.
        // - **Deleting**: The QoS queue is being deleted.
        shared_ptr<string> status_ {};
      };

      class AssociatedInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceProgressing, instanceProgressing_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceProgressing, instanceProgressing_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        };
        AssociatedInstanceList() = default ;
        AssociatedInstanceList(const AssociatedInstanceList &) = default ;
        AssociatedInstanceList(AssociatedInstanceList &&) = default ;
        AssociatedInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedInstanceList() = default ;
        AssociatedInstanceList& operator=(const AssociatedInstanceList &) = default ;
        AssociatedInstanceList& operator=(AssociatedInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceProgressing_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AssociatedInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceProgressing Field Functions 
        bool hasInstanceProgressing() const { return this->instanceProgressing_ != nullptr;};
        void deleteInstanceProgressing() { this->instanceProgressing_ = nullptr;};
        inline int32_t getInstanceProgressing() const { DARABONBA_PTR_GET_DEFAULT(instanceProgressing_, 0) };
        inline AssociatedInstanceList& setInstanceProgressing(int32_t instanceProgressing) { DARABONBA_PTR_SET_VALUE(instanceProgressing_, instanceProgressing) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline AssociatedInstanceList& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline AssociatedInstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      protected:
        // The ID of the instance to which the QoS policy is associated.
        shared_ptr<string> instanceId_ {};
        // The configuration progress of the instance to which the QoS policy is associated. Valid values: **0** to **100**.
        shared_ptr<int32_t> instanceProgressing_ {};
        // The state of the instance to which the QoS policy is associated. Valid values:
        // 
        // - **Normal**: The instance is available.
        // - **Configuring**: The instance is being configured.
        // - **Deleting**: The instance is being deleted.
        shared_ptr<string> instanceStatus_ {};
        // The type of the instance to which the QoS policy is associated. Only **PHYSICALCONNECTION** is returned.
        shared_ptr<string> instanceType_ {};
      };

      virtual bool empty() const override { return this->associatedInstanceList_ == nullptr
        && this->progressing_ == nullptr && this->qosDescription_ == nullptr && this->qosId_ == nullptr && this->qosName_ == nullptr && this->queueList_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // associatedInstanceList Field Functions 
      bool hasAssociatedInstanceList() const { return this->associatedInstanceList_ != nullptr;};
      void deleteAssociatedInstanceList() { this->associatedInstanceList_ = nullptr;};
      inline const vector<QosList::AssociatedInstanceList> & getAssociatedInstanceList() const { DARABONBA_PTR_GET_CONST(associatedInstanceList_, vector<QosList::AssociatedInstanceList>) };
      inline vector<QosList::AssociatedInstanceList> getAssociatedInstanceList() { DARABONBA_PTR_GET(associatedInstanceList_, vector<QosList::AssociatedInstanceList>) };
      inline QosList& setAssociatedInstanceList(const vector<QosList::AssociatedInstanceList> & associatedInstanceList) { DARABONBA_PTR_SET_VALUE(associatedInstanceList_, associatedInstanceList) };
      inline QosList& setAssociatedInstanceList(vector<QosList::AssociatedInstanceList> && associatedInstanceList) { DARABONBA_PTR_SET_RVALUE(associatedInstanceList_, associatedInstanceList) };


      // progressing Field Functions 
      bool hasProgressing() const { return this->progressing_ != nullptr;};
      void deleteProgressing() { this->progressing_ = nullptr;};
      inline int32_t getProgressing() const { DARABONBA_PTR_GET_DEFAULT(progressing_, 0) };
      inline QosList& setProgressing(int32_t progressing) { DARABONBA_PTR_SET_VALUE(progressing_, progressing) };


      // qosDescription Field Functions 
      bool hasQosDescription() const { return this->qosDescription_ != nullptr;};
      void deleteQosDescription() { this->qosDescription_ = nullptr;};
      inline string getQosDescription() const { DARABONBA_PTR_GET_DEFAULT(qosDescription_, "") };
      inline QosList& setQosDescription(string qosDescription) { DARABONBA_PTR_SET_VALUE(qosDescription_, qosDescription) };


      // qosId Field Functions 
      bool hasQosId() const { return this->qosId_ != nullptr;};
      void deleteQosId() { this->qosId_ = nullptr;};
      inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
      inline QosList& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


      // qosName Field Functions 
      bool hasQosName() const { return this->qosName_ != nullptr;};
      void deleteQosName() { this->qosName_ = nullptr;};
      inline string getQosName() const { DARABONBA_PTR_GET_DEFAULT(qosName_, "") };
      inline QosList& setQosName(string qosName) { DARABONBA_PTR_SET_VALUE(qosName_, qosName) };


      // queueList Field Functions 
      bool hasQueueList() const { return this->queueList_ != nullptr;};
      void deleteQueueList() { this->queueList_ = nullptr;};
      inline const vector<QosList::QueueList> & getQueueList() const { DARABONBA_PTR_GET_CONST(queueList_, vector<QosList::QueueList>) };
      inline vector<QosList::QueueList> getQueueList() { DARABONBA_PTR_GET(queueList_, vector<QosList::QueueList>) };
      inline QosList& setQueueList(const vector<QosList::QueueList> & queueList) { DARABONBA_PTR_SET_VALUE(queueList_, queueList) };
      inline QosList& setQueueList(vector<QosList::QueueList> && queueList) { DARABONBA_PTR_SET_RVALUE(queueList_, queueList) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline QosList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QosList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<QosList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<QosList::Tags>) };
      inline vector<QosList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<QosList::Tags>) };
      inline QosList& setTags(const vector<QosList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline QosList& setTags(vector<QosList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The information about the instances to which the QoS policy is associated.
      shared_ptr<vector<QosList::AssociatedInstanceList>> associatedInstanceList_ {};
      // The configuration progress of the QoS policy. Valid values: **0** to **100**.
      shared_ptr<int32_t> progressing_ {};
      // The description of the QoS policy.
      // 
      // The description can be up to 256 characters in length. It cannot start with `http://` or `https://`.
      shared_ptr<string> qosDescription_ {};
      // The ID of the QoS policy.
      shared_ptr<string> qosId_ {};
      // The name of the QoS policy.
      // 
      // The name can be up to 128 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> qosName_ {};
      // The information about the QoS queues.
      shared_ptr<vector<QosList::QueueList>> queueList_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The state of the QoS policy. Valid values:
      // 
      // - **Normal**: The QoS policy is available.
      // - **Configuring**: The QoS policy is being configured.
      // 
      //  > If a QoS policy is in the Configuring state, you cannot perform most of the operations to create, update, or delete QoS policies, QoS queues, or QoS rules.
      shared_ptr<string> status_ {};
      // The tag list.
      shared_ptr<vector<QosList::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->qosList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeExpressConnectTrafficQosResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeExpressConnectTrafficQosResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeExpressConnectTrafficQosResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // qosList Field Functions 
    bool hasQosList() const { return this->qosList_ != nullptr;};
    void deleteQosList() { this->qosList_ = nullptr;};
    inline const vector<DescribeExpressConnectTrafficQosResponseBody::QosList> & getQosList() const { DARABONBA_PTR_GET_CONST(qosList_, vector<DescribeExpressConnectTrafficQosResponseBody::QosList>) };
    inline vector<DescribeExpressConnectTrafficQosResponseBody::QosList> getQosList() { DARABONBA_PTR_GET(qosList_, vector<DescribeExpressConnectTrafficQosResponseBody::QosList>) };
    inline DescribeExpressConnectTrafficQosResponseBody& setQosList(const vector<DescribeExpressConnectTrafficQosResponseBody::QosList> & qosList) { DARABONBA_PTR_SET_VALUE(qosList_, qosList) };
    inline DescribeExpressConnectTrafficQosResponseBody& setQosList(vector<DescribeExpressConnectTrafficQosResponseBody::QosList> && qosList) { DARABONBA_PTR_SET_RVALUE(qosList_, qosList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectTrafficQosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeExpressConnectTrafficQosResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The total number of entries returned.
    shared_ptr<string> count_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The information about QoS policies.
    shared_ptr<vector<DescribeExpressConnectTrafficQosResponseBody::QosList>> qosList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
