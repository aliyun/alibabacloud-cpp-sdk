// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListDisasterRecoveryItemsResponseBody() = default ;
    ListDisasterRecoveryItemsResponseBody(const ListDisasterRecoveryItemsResponseBody &) = default ;
    ListDisasterRecoveryItemsResponseBody(ListDisasterRecoveryItemsResponseBody &&) = default ;
    ListDisasterRecoveryItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryItemsResponseBody() = default ;
    ListDisasterRecoveryItemsResponseBody& operator=(const ListDisasterRecoveryItemsResponseBody &) = default ;
    ListDisasterRecoveryItemsResponseBody& operator=(ListDisasterRecoveryItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(scrollId, scrollId_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(scrollId, scrollId_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
          DARABONBA_PTR_TO_JSON(itemId, itemId_);
          DARABONBA_PTR_TO_JSON(itemStatus, itemStatus_);
          DARABONBA_PTR_TO_JSON(planId, planId_);
          DARABONBA_PTR_TO_JSON(topics, topics_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
          DARABONBA_PTR_FROM_JSON(itemId, itemId_);
          DARABONBA_PTR_FROM_JSON(itemStatus, itemStatus_);
          DARABONBA_PTR_FROM_JSON(planId, planId_);
          DARABONBA_PTR_FROM_JSON(topics, topics_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Topics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topics& obj) { 
            DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
            DARABONBA_PTR_TO_JSON(deliveryOrderType, deliveryOrderType_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(regionId, regionId_);
            DARABONBA_PTR_TO_JSON(topicName, topicName_);
          };
          friend void from_json(const Darabonba::Json& j, Topics& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
            DARABONBA_PTR_FROM_JSON(deliveryOrderType, deliveryOrderType_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(regionId, regionId_);
            DARABONBA_PTR_FROM_JSON(topicName, topicName_);
          };
          Topics() = default ;
          Topics(const Topics &) = default ;
          Topics(Topics &&) = default ;
          Topics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topics() = default ;
          Topics& operator=(const Topics &) = default ;
          Topics& operator=(Topics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->deliveryOrderType_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->regionId_ == nullptr && this->topicName_ == nullptr; };
          // consumerGroupId Field Functions 
          bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
          void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
          inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
          inline Topics& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


          // deliveryOrderType Field Functions 
          bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
          void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
          inline string getDeliveryOrderType() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderType_, "") };
          inline Topics& setDeliveryOrderType(string deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline Topics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline Topics& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline Topics& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // topicName Field Functions 
          bool hasTopicName() const { return this->topicName_ != nullptr;};
          void deleteTopicName() { this->topicName_ = nullptr;};
          inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
          inline Topics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        protected:
          // The ID of the consumer group.
          shared_ptr<string> consumerGroupId_ {};
          // The method used to deliver messages to the destination instance.
          // 
          // Valid values:
          // 
          // *   Concurrently: concurrent delivery
          // *   Orderly: ordered delivery
          shared_ptr<string> deliveryOrderType_ {};
          // The instance ID.
          shared_ptr<string> instanceId_ {};
          // The instance type.
          shared_ptr<string> instanceType_ {};
          // regionId
          shared_ptr<string> regionId_ {};
          // The topic name.
          shared_ptr<string> topicName_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->extInfo_ == nullptr && this->itemId_ == nullptr && this->itemStatus_ == nullptr && this->planId_ == nullptr && this->topics_ == nullptr
        && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // extInfo Field Functions 
        bool hasExtInfo() const { return this->extInfo_ != nullptr;};
        void deleteExtInfo() { this->extInfo_ = nullptr;};
        inline const map<string, string> & getExtInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, map<string, string>) };
        inline map<string, string> getExtInfo() { DARABONBA_PTR_GET(extInfo_, map<string, string>) };
        inline List& setExtInfo(const map<string, string> & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
        inline List& setExtInfo(map<string, string> && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
        inline List& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // itemStatus Field Functions 
        bool hasItemStatus() const { return this->itemStatus_ != nullptr;};
        void deleteItemStatus() { this->itemStatus_ = nullptr;};
        inline string getItemStatus() const { DARABONBA_PTR_GET_DEFAULT(itemStatus_, "") };
        inline List& setItemStatus(string itemStatus) { DARABONBA_PTR_SET_VALUE(itemStatus_, itemStatus) };


        // planId Field Functions 
        bool hasPlanId() const { return this->planId_ != nullptr;};
        void deletePlanId() { this->planId_ = nullptr;};
        inline int64_t getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, 0L) };
        inline List& setPlanId(int64_t planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


        // topics Field Functions 
        bool hasTopics() const { return this->topics_ != nullptr;};
        void deleteTopics() { this->topics_ = nullptr;};
        inline const vector<List::Topics> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<List::Topics>) };
        inline vector<List::Topics> getTopics() { DARABONBA_PTR_GET(topics_, vector<List::Topics>) };
        inline List& setTopics(const vector<List::Topics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
        inline List& setTopics(vector<List::Topics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline List& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The time when the query task was created.
        shared_ptr<string> createTime_ {};
        // The extended information.
        shared_ptr<map<string, string>> extInfo_ {};
        // The ID of the Global Replicator task.
        shared_ptr<int64_t> itemId_ {};
        // The status of the topic mapping. Valid values:
        // 
        // *   CREATING
        // *   CHANGING
        // *   RUNNING
        // *   MANUAL_STOPPED
        // *   OVERDUE_STOPPED
        shared_ptr<string> itemStatus_ {};
        // The ID of the topic mapping.
        shared_ptr<int64_t> planId_ {};
        // The topics involved in the topic mapping.
        shared_ptr<vector<List::Topics>> topics_ {};
        // The time when the query task was last modified.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scrollId_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // scrollId Field Functions 
      bool hasScrollId() const { return this->scrollId_ != nullptr;};
      void deleteScrollId() { this->scrollId_ = nullptr;};
      inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
      inline Data& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The Global Replicator tasks.
      shared_ptr<vector<Data::List>> list_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The scroll ID of the request. The ID is automatically generated by the system. The result can be paginated only if this parameter is included in the pagination request.
      shared_ptr<string> scrollId_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListDisasterRecoveryItemsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDisasterRecoveryItemsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDisasterRecoveryItemsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDisasterRecoveryItemsResponseBody::Data) };
    inline ListDisasterRecoveryItemsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDisasterRecoveryItemsResponseBody::Data) };
    inline ListDisasterRecoveryItemsResponseBody& setData(const ListDisasterRecoveryItemsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDisasterRecoveryItemsResponseBody& setData(ListDisasterRecoveryItemsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListDisasterRecoveryItemsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListDisasterRecoveryItemsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDisasterRecoveryItemsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDisasterRecoveryItemsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDisasterRecoveryItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDisasterRecoveryItemsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial. This parameter is returned only if the access is denied because the Resource Access Management (RAM) user does not have the required permissions.
    shared_ptr<string> accessDeniedDetail_ {};
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListDisasterRecoveryItemsResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The response code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
