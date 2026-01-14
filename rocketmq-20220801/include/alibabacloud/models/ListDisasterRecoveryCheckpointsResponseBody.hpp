// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryCheckpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryCheckpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryCheckpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListDisasterRecoveryCheckpointsResponseBody() = default ;
    ListDisasterRecoveryCheckpointsResponseBody(const ListDisasterRecoveryCheckpointsResponseBody &) = default ;
    ListDisasterRecoveryCheckpointsResponseBody(ListDisasterRecoveryCheckpointsResponseBody &&) = default ;
    ListDisasterRecoveryCheckpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryCheckpointsResponseBody() = default ;
    ListDisasterRecoveryCheckpointsResponseBody& operator=(const ListDisasterRecoveryCheckpointsResponseBody &) = default ;
    ListDisasterRecoveryCheckpointsResponseBody& operator=(ListDisasterRecoveryCheckpointsResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
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
          DARABONBA_PTR_TO_JSON(checkpointId, checkpointId_);
          DARABONBA_PTR_TO_JSON(itemId, itemId_);
          DARABONBA_PTR_TO_JSON(lastSyncTime, lastSyncTime_);
          DARABONBA_PTR_TO_JSON(planId, planId_);
          DARABONBA_PTR_TO_JSON(sourceProgress, sourceProgress_);
          DARABONBA_PTR_TO_JSON(targetProgress, targetProgress_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(checkpointId, checkpointId_);
          DARABONBA_PTR_FROM_JSON(itemId, itemId_);
          DARABONBA_PTR_FROM_JSON(lastSyncTime, lastSyncTime_);
          DARABONBA_PTR_FROM_JSON(planId, planId_);
          DARABONBA_PTR_FROM_JSON(sourceProgress, sourceProgress_);
          DARABONBA_PTR_FROM_JSON(targetProgress, targetProgress_);
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
        class TargetProgress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TargetProgress& obj) { 
            DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(lastFetchTime, lastFetchTime_);
            DARABONBA_PTR_TO_JSON(progressData, progressData_);
            DARABONBA_PTR_TO_JSON(regionId, regionId_);
            DARABONBA_PTR_TO_JSON(topicName, topicName_);
          };
          friend void from_json(const Darabonba::Json& j, TargetProgress& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(lastFetchTime, lastFetchTime_);
            DARABONBA_PTR_FROM_JSON(progressData, progressData_);
            DARABONBA_PTR_FROM_JSON(regionId, regionId_);
            DARABONBA_PTR_FROM_JSON(topicName, topicName_);
          };
          TargetProgress() = default ;
          TargetProgress(const TargetProgress &) = default ;
          TargetProgress(TargetProgress &&) = default ;
          TargetProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TargetProgress() = default ;
          TargetProgress& operator=(const TargetProgress &) = default ;
          TargetProgress& operator=(TargetProgress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ProgressData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ProgressData& obj) { 
              DARABONBA_PTR_TO_JSON(consumeTimestamp, consumeTimestamp_);
            };
            friend void from_json(const Darabonba::Json& j, ProgressData& obj) { 
              DARABONBA_PTR_FROM_JSON(consumeTimestamp, consumeTimestamp_);
            };
            ProgressData() = default ;
            ProgressData(const ProgressData &) = default ;
            ProgressData(ProgressData &&) = default ;
            ProgressData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ProgressData() = default ;
            ProgressData& operator=(const ProgressData &) = default ;
            ProgressData& operator=(ProgressData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->consumeTimestamp_ == nullptr; };
            // consumeTimestamp Field Functions 
            bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
            void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
            inline int64_t getConsumeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(consumeTimestamp_, 0L) };
            inline ProgressData& setConsumeTimestamp(int64_t consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };


          protected:
            // Latest consumption time
            shared_ptr<int64_t> consumeTimestamp_ {};
          };

          virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->lastFetchTime_ == nullptr && this->progressData_ == nullptr && this->regionId_ == nullptr
        && this->topicName_ == nullptr; };
          // consumerGroupId Field Functions 
          bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
          void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
          inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
          inline TargetProgress& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline TargetProgress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline TargetProgress& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // lastFetchTime Field Functions 
          bool hasLastFetchTime() const { return this->lastFetchTime_ != nullptr;};
          void deleteLastFetchTime() { this->lastFetchTime_ = nullptr;};
          inline int64_t getLastFetchTime() const { DARABONBA_PTR_GET_DEFAULT(lastFetchTime_, 0L) };
          inline TargetProgress& setLastFetchTime(int64_t lastFetchTime) { DARABONBA_PTR_SET_VALUE(lastFetchTime_, lastFetchTime) };


          // progressData Field Functions 
          bool hasProgressData() const { return this->progressData_ != nullptr;};
          void deleteProgressData() { this->progressData_ = nullptr;};
          inline const TargetProgress::ProgressData & getProgressData() const { DARABONBA_PTR_GET_CONST(progressData_, TargetProgress::ProgressData) };
          inline TargetProgress::ProgressData getProgressData() { DARABONBA_PTR_GET(progressData_, TargetProgress::ProgressData) };
          inline TargetProgress& setProgressData(const TargetProgress::ProgressData & progressData) { DARABONBA_PTR_SET_VALUE(progressData_, progressData) };
          inline TargetProgress& setProgressData(TargetProgress::ProgressData && progressData) { DARABONBA_PTR_SET_RVALUE(progressData_, progressData) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline TargetProgress& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // topicName Field Functions 
          bool hasTopicName() const { return this->topicName_ != nullptr;};
          void deleteTopicName() { this->topicName_ = nullptr;};
          inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
          inline TargetProgress& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        protected:
          // Consumer group ID
          shared_ptr<string> consumerGroupId_ {};
          // Instance ID
          shared_ptr<string> instanceId_ {};
          // Instance type
          //   - ALIYUN_ROCKETMQ: Alibaba Cloud instance
          //   - EXTERNAL_ROCKETMQ: External instance, open-source instance, open-source cluster
          shared_ptr<string> instanceType_ {};
          // Latest fetch time
          shared_ptr<int64_t> lastFetchTime_ {};
          // Consumption progress data
          shared_ptr<TargetProgress::ProgressData> progressData_ {};
          // Region ID
          shared_ptr<string> regionId_ {};
          // Topic name
          shared_ptr<string> topicName_ {};
        };

        class SourceProgress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceProgress& obj) { 
            DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(lastFetchTime, lastFetchTime_);
            DARABONBA_PTR_TO_JSON(progressData, progressData_);
            DARABONBA_PTR_TO_JSON(regionId, regionId_);
            DARABONBA_PTR_TO_JSON(topicName, topicName_);
          };
          friend void from_json(const Darabonba::Json& j, SourceProgress& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(lastFetchTime, lastFetchTime_);
            DARABONBA_PTR_FROM_JSON(progressData, progressData_);
            DARABONBA_PTR_FROM_JSON(regionId, regionId_);
            DARABONBA_PTR_FROM_JSON(topicName, topicName_);
          };
          SourceProgress() = default ;
          SourceProgress(const SourceProgress &) = default ;
          SourceProgress(SourceProgress &&) = default ;
          SourceProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceProgress() = default ;
          SourceProgress& operator=(const SourceProgress &) = default ;
          SourceProgress& operator=(SourceProgress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ProgressData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ProgressData& obj) { 
              DARABONBA_PTR_TO_JSON(consumeTimestamp, consumeTimestamp_);
            };
            friend void from_json(const Darabonba::Json& j, ProgressData& obj) { 
              DARABONBA_PTR_FROM_JSON(consumeTimestamp, consumeTimestamp_);
            };
            ProgressData() = default ;
            ProgressData(const ProgressData &) = default ;
            ProgressData(ProgressData &&) = default ;
            ProgressData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ProgressData() = default ;
            ProgressData& operator=(const ProgressData &) = default ;
            ProgressData& operator=(ProgressData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->consumeTimestamp_ == nullptr; };
            // consumeTimestamp Field Functions 
            bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
            void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
            inline int64_t getConsumeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(consumeTimestamp_, 0L) };
            inline ProgressData& setConsumeTimestamp(int64_t consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };


          protected:
            // Latest consumption time
            shared_ptr<int64_t> consumeTimestamp_ {};
          };

          virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->lastFetchTime_ == nullptr && this->progressData_ == nullptr && this->regionId_ == nullptr
        && this->topicName_ == nullptr; };
          // consumerGroupId Field Functions 
          bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
          void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
          inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
          inline SourceProgress& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline SourceProgress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline SourceProgress& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // lastFetchTime Field Functions 
          bool hasLastFetchTime() const { return this->lastFetchTime_ != nullptr;};
          void deleteLastFetchTime() { this->lastFetchTime_ = nullptr;};
          inline int64_t getLastFetchTime() const { DARABONBA_PTR_GET_DEFAULT(lastFetchTime_, 0L) };
          inline SourceProgress& setLastFetchTime(int64_t lastFetchTime) { DARABONBA_PTR_SET_VALUE(lastFetchTime_, lastFetchTime) };


          // progressData Field Functions 
          bool hasProgressData() const { return this->progressData_ != nullptr;};
          void deleteProgressData() { this->progressData_ = nullptr;};
          inline const SourceProgress::ProgressData & getProgressData() const { DARABONBA_PTR_GET_CONST(progressData_, SourceProgress::ProgressData) };
          inline SourceProgress::ProgressData getProgressData() { DARABONBA_PTR_GET(progressData_, SourceProgress::ProgressData) };
          inline SourceProgress& setProgressData(const SourceProgress::ProgressData & progressData) { DARABONBA_PTR_SET_VALUE(progressData_, progressData) };
          inline SourceProgress& setProgressData(SourceProgress::ProgressData && progressData) { DARABONBA_PTR_SET_RVALUE(progressData_, progressData) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline SourceProgress& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // topicName Field Functions 
          bool hasTopicName() const { return this->topicName_ != nullptr;};
          void deleteTopicName() { this->topicName_ = nullptr;};
          inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
          inline SourceProgress& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        protected:
          // Consumer Group ID
          shared_ptr<string> consumerGroupId_ {};
          // Instance ID
          shared_ptr<string> instanceId_ {};
          // Instance type
          //   - ALIYUN_ROCKETMQ: Alibaba Cloud instance
          //   - EXTERNAL_ROCKETMQ: External instance, open-source instance, open-source cluster
          shared_ptr<string> instanceType_ {};
          // Last fetch time
          shared_ptr<int64_t> lastFetchTime_ {};
          // Consumption progress data
          shared_ptr<SourceProgress::ProgressData> progressData_ {};
          // Region ID
          shared_ptr<string> regionId_ {};
          // The topic name.
          shared_ptr<string> topicName_ {};
        };

        virtual bool empty() const override { return this->checkpointId_ == nullptr
        && this->itemId_ == nullptr && this->lastSyncTime_ == nullptr && this->planId_ == nullptr && this->sourceProgress_ == nullptr && this->targetProgress_ == nullptr; };
        // checkpointId Field Functions 
        bool hasCheckpointId() const { return this->checkpointId_ != nullptr;};
        void deleteCheckpointId() { this->checkpointId_ = nullptr;};
        inline int64_t getCheckpointId() const { DARABONBA_PTR_GET_DEFAULT(checkpointId_, 0L) };
        inline List& setCheckpointId(int64_t checkpointId) { DARABONBA_PTR_SET_VALUE(checkpointId_, checkpointId) };


        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
        inline List& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // lastSyncTime Field Functions 
        bool hasLastSyncTime() const { return this->lastSyncTime_ != nullptr;};
        void deleteLastSyncTime() { this->lastSyncTime_ = nullptr;};
        inline int64_t getLastSyncTime() const { DARABONBA_PTR_GET_DEFAULT(lastSyncTime_, 0L) };
        inline List& setLastSyncTime(int64_t lastSyncTime) { DARABONBA_PTR_SET_VALUE(lastSyncTime_, lastSyncTime) };


        // planId Field Functions 
        bool hasPlanId() const { return this->planId_ != nullptr;};
        void deletePlanId() { this->planId_ = nullptr;};
        inline int64_t getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, 0L) };
        inline List& setPlanId(int64_t planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


        // sourceProgress Field Functions 
        bool hasSourceProgress() const { return this->sourceProgress_ != nullptr;};
        void deleteSourceProgress() { this->sourceProgress_ = nullptr;};
        inline const List::SourceProgress & getSourceProgress() const { DARABONBA_PTR_GET_CONST(sourceProgress_, List::SourceProgress) };
        inline List::SourceProgress getSourceProgress() { DARABONBA_PTR_GET(sourceProgress_, List::SourceProgress) };
        inline List& setSourceProgress(const List::SourceProgress & sourceProgress) { DARABONBA_PTR_SET_VALUE(sourceProgress_, sourceProgress) };
        inline List& setSourceProgress(List::SourceProgress && sourceProgress) { DARABONBA_PTR_SET_RVALUE(sourceProgress_, sourceProgress) };


        // targetProgress Field Functions 
        bool hasTargetProgress() const { return this->targetProgress_ != nullptr;};
        void deleteTargetProgress() { this->targetProgress_ = nullptr;};
        inline const List::TargetProgress & getTargetProgress() const { DARABONBA_PTR_GET_CONST(targetProgress_, List::TargetProgress) };
        inline List::TargetProgress getTargetProgress() { DARABONBA_PTR_GET(targetProgress_, List::TargetProgress) };
        inline List& setTargetProgress(const List::TargetProgress & targetProgress) { DARABONBA_PTR_SET_VALUE(targetProgress_, targetProgress) };
        inline List& setTargetProgress(List::TargetProgress && targetProgress) { DARABONBA_PTR_SET_RVALUE(targetProgress_, targetProgress) };


      protected:
        // Consumption Progress ID
        shared_ptr<int64_t> checkpointId_ {};
        // Backup Mapping ID
        shared_ptr<int64_t> itemId_ {};
        // Last synchronization time
        shared_ptr<int64_t> lastSyncTime_ {};
        // Backup Plan ID
        shared_ptr<int64_t> planId_ {};
        // Source consumption progress
        shared_ptr<List::SourceProgress> sourceProgress_ {};
        // Target consumption progress
        shared_ptr<List::TargetProgress> targetProgress_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Paged data
      shared_ptr<vector<Data::List>> list_ {};
      // Current page number
      shared_ptr<int64_t> pageNumber_ {};
      // Page size
      shared_ptr<int64_t> pageSize_ {};
      // Total number of records
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDisasterRecoveryCheckpointsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDisasterRecoveryCheckpointsResponseBody::Data) };
    inline ListDisasterRecoveryCheckpointsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDisasterRecoveryCheckpointsResponseBody::Data) };
    inline ListDisasterRecoveryCheckpointsResponseBody& setData(const ListDisasterRecoveryCheckpointsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDisasterRecoveryCheckpointsResponseBody& setData(ListDisasterRecoveryCheckpointsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDisasterRecoveryCheckpointsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDisasterRecoveryCheckpointsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code
    shared_ptr<string> code_ {};
    // Response Data
    shared_ptr<ListDisasterRecoveryCheckpointsResponseBody::Data> data_ {};
    // Dynamic error code
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // HTTP status code
    shared_ptr<int32_t> httpStatusCode_ {};
    // Error message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Whether the operation was successful
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
