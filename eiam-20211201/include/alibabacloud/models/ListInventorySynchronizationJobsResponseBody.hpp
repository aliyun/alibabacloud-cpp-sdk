// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVENTORYSYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINVENTORYSYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListInventorySynchronizationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInventorySynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InventorySynchronizationJobs, inventorySynchronizationJobs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInventorySynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InventorySynchronizationJobs, inventorySynchronizationJobs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInventorySynchronizationJobsResponseBody() = default ;
    ListInventorySynchronizationJobsResponseBody(const ListInventorySynchronizationJobsResponseBody &) = default ;
    ListInventorySynchronizationJobsResponseBody(ListInventorySynchronizationJobsResponseBody &&) = default ;
    ListInventorySynchronizationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInventorySynchronizationJobsResponseBody() = default ;
    ListInventorySynchronizationJobsResponseBody& operator=(const ListInventorySynchronizationJobsResponseBody &) = default ;
    ListInventorySynchronizationJobsResponseBody& operator=(ListInventorySynchronizationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InventorySynchronizationJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InventorySynchronizationJobs& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InventorySourceId, inventorySourceId_);
        DARABONBA_PTR_TO_JSON(InventorySynchronizationJobId, inventorySynchronizationJobId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, InventorySynchronizationJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InventorySourceId, inventorySourceId_);
        DARABONBA_PTR_FROM_JSON(InventorySynchronizationJobId, inventorySynchronizationJobId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      };
      InventorySynchronizationJobs() = default ;
      InventorySynchronizationJobs(const InventorySynchronizationJobs &) = default ;
      InventorySynchronizationJobs(InventorySynchronizationJobs &&) = default ;
      InventorySynchronizationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InventorySynchronizationJobs() = default ;
      InventorySynchronizationJobs& operator=(const InventorySynchronizationJobs &) = default ;
      InventorySynchronizationJobs& operator=(InventorySynchronizationJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AgentStatistics, agentStatistics_);
          DARABONBA_PTR_TO_JSON(AssetStatistics, assetStatistics_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentStatistics, agentStatistics_);
          DARABONBA_PTR_FROM_JSON(AssetStatistics, assetStatistics_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AssetStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssetStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(Created, created_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(Same, same_);
            DARABONBA_PTR_TO_JSON(Updated, updated_);
          };
          friend void from_json(const Darabonba::Json& j, AssetStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Created, created_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(Same, same_);
            DARABONBA_PTR_FROM_JSON(Updated, updated_);
          };
          AssetStatistics() = default ;
          AssetStatistics(const AssetStatistics &) = default ;
          AssetStatistics(AssetStatistics &&) = default ;
          AssetStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssetStatistics() = default ;
          AssetStatistics& operator=(const AssetStatistics &) = default ;
          AssetStatistics& operator=(AssetStatistics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Updated : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Updated& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Updated& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Updated() = default ;
            Updated(const Updated &) = default ;
            Updated(Updated &&) = default ;
            Updated(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Updated() = default ;
            Updated& operator=(const Updated &) = default ;
            Updated& operator=(Updated &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failed_ == nullptr
        && this->skipped_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
            // failed Field Functions 
            bool hasFailed() const { return this->failed_ != nullptr;};
            void deleteFailed() { this->failed_ = nullptr;};
            inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
            inline Updated& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Updated& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Updated& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Updated& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // The number of failed items.
            shared_ptr<int64_t> failed_ {};
            // The number of skipped items.
            shared_ptr<int64_t> skipped_ {};
            // The number of successful items.
            shared_ptr<int64_t> success_ {};
            // The total number of items.
            shared_ptr<int64_t> total_ {};
          };

          class Same : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Same& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Same& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Same() = default ;
            Same(const Same &) = default ;
            Same(Same &&) = default ;
            Same(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Same() = default ;
            Same& operator=(const Same &) = default ;
            Same& operator=(Same &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failed_ == nullptr
        && this->skipped_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
            // failed Field Functions 
            bool hasFailed() const { return this->failed_ != nullptr;};
            void deleteFailed() { this->failed_ = nullptr;};
            inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
            inline Same& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Same& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Same& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Same& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // The number of failed items.
            shared_ptr<int64_t> failed_ {};
            // The number of skipped items.
            shared_ptr<int64_t> skipped_ {};
            // The number of successful items.
            shared_ptr<int64_t> success_ {};
            // The total number of items.
            shared_ptr<int64_t> total_ {};
          };

          class Deleted : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Deleted& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Deleted& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Deleted() = default ;
            Deleted(const Deleted &) = default ;
            Deleted(Deleted &&) = default ;
            Deleted(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Deleted() = default ;
            Deleted& operator=(const Deleted &) = default ;
            Deleted& operator=(Deleted &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failed_ == nullptr
        && this->skipped_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
            // failed Field Functions 
            bool hasFailed() const { return this->failed_ != nullptr;};
            void deleteFailed() { this->failed_ = nullptr;};
            inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
            inline Deleted& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Deleted& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Deleted& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Deleted& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // The number of failed items.
            shared_ptr<int64_t> failed_ {};
            // The number of skipped items.
            shared_ptr<int64_t> skipped_ {};
            // The number of successful items.
            shared_ptr<int64_t> success_ {};
            // The total number of items.
            shared_ptr<int64_t> total_ {};
          };

          class Created : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Created& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Created& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Created() = default ;
            Created(const Created &) = default ;
            Created(Created &&) = default ;
            Created(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Created() = default ;
            Created& operator=(const Created &) = default ;
            Created& operator=(Created &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failed_ == nullptr
        && this->skipped_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
            // failed Field Functions 
            bool hasFailed() const { return this->failed_ != nullptr;};
            void deleteFailed() { this->failed_ = nullptr;};
            inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
            inline Created& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Created& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Created& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Created& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // The number of failed items.
            shared_ptr<int64_t> failed_ {};
            // The number of skipped items.
            shared_ptr<int64_t> skipped_ {};
            // The number of successful items.
            shared_ptr<int64_t> success_ {};
            // The total number of items.
            shared_ptr<int64_t> total_ {};
          };

          virtual bool empty() const override { return this->created_ == nullptr
        && this->deleted_ == nullptr && this->same_ == nullptr && this->updated_ == nullptr; };
          // created Field Functions 
          bool hasCreated() const { return this->created_ != nullptr;};
          void deleteCreated() { this->created_ = nullptr;};
          inline const AssetStatistics::Created & getCreated() const { DARABONBA_PTR_GET_CONST(created_, AssetStatistics::Created) };
          inline AssetStatistics::Created getCreated() { DARABONBA_PTR_GET(created_, AssetStatistics::Created) };
          inline AssetStatistics& setCreated(const AssetStatistics::Created & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
          inline AssetStatistics& setCreated(AssetStatistics::Created && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline const AssetStatistics::Deleted & getDeleted() const { DARABONBA_PTR_GET_CONST(deleted_, AssetStatistics::Deleted) };
          inline AssetStatistics::Deleted getDeleted() { DARABONBA_PTR_GET(deleted_, AssetStatistics::Deleted) };
          inline AssetStatistics& setDeleted(const AssetStatistics::Deleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
          inline AssetStatistics& setDeleted(AssetStatistics::Deleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


          // same Field Functions 
          bool hasSame() const { return this->same_ != nullptr;};
          void deleteSame() { this->same_ = nullptr;};
          inline const AssetStatistics::Same & getSame() const { DARABONBA_PTR_GET_CONST(same_, AssetStatistics::Same) };
          inline AssetStatistics::Same getSame() { DARABONBA_PTR_GET(same_, AssetStatistics::Same) };
          inline AssetStatistics& setSame(const AssetStatistics::Same & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
          inline AssetStatistics& setSame(AssetStatistics::Same && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


          // updated Field Functions 
          bool hasUpdated() const { return this->updated_ != nullptr;};
          void deleteUpdated() { this->updated_ = nullptr;};
          inline const AssetStatistics::Updated & getUpdated() const { DARABONBA_PTR_GET_CONST(updated_, AssetStatistics::Updated) };
          inline AssetStatistics::Updated getUpdated() { DARABONBA_PTR_GET(updated_, AssetStatistics::Updated) };
          inline AssetStatistics& setUpdated(const AssetStatistics::Updated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
          inline AssetStatistics& setUpdated(AssetStatistics::Updated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


        protected:
          // The statistics of the creation result.
          shared_ptr<AssetStatistics::Created> created_ {};
          // The statistics of the deletion result.
          shared_ptr<AssetStatistics::Deleted> deleted_ {};
          // The statistics of unchanged items.
          shared_ptr<AssetStatistics::Same> same_ {};
          // The statistics of the update result.
          shared_ptr<AssetStatistics::Updated> updated_ {};
        };

        class AgentStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AgentStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(Created, created_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(Same, same_);
            DARABONBA_PTR_TO_JSON(Updated, updated_);
          };
          friend void from_json(const Darabonba::Json& j, AgentStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Created, created_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(Same, same_);
            DARABONBA_PTR_FROM_JSON(Updated, updated_);
          };
          AgentStatistics() = default ;
          AgentStatistics(const AgentStatistics &) = default ;
          AgentStatistics(AgentStatistics &&) = default ;
          AgentStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AgentStatistics() = default ;
          AgentStatistics& operator=(const AgentStatistics &) = default ;
          AgentStatistics& operator=(AgentStatistics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Updated : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Updated& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Updated& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Updated() = default ;
            Updated(const Updated &) = default ;
            Updated(Updated &&) = default ;
            Updated(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Updated() = default ;
            Updated& operator=(const Updated &) = default ;
            Updated& operator=(Updated &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failed_ == nullptr
        && this->skipped_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
            // failed Field Functions 
            bool hasFailed() const { return this->failed_ != nullptr;};
            void deleteFailed() { this->failed_ = nullptr;};
            inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
            inline Updated& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Updated& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Updated& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Updated& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // The number of failed items.
            shared_ptr<int64_t> failed_ {};
            // The number of skipped items.
            shared_ptr<int64_t> skipped_ {};
            // The number of successful items.
            shared_ptr<int64_t> success_ {};
            // The total number of items.
            shared_ptr<int64_t> total_ {};
          };

          class Same : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Same& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Same& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Same() = default ;
            Same(const Same &) = default ;
            Same(Same &&) = default ;
            Same(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Same() = default ;
            Same& operator=(const Same &) = default ;
            Same& operator=(Same &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failed_ == nullptr
        && this->skipped_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
            // failed Field Functions 
            bool hasFailed() const { return this->failed_ != nullptr;};
            void deleteFailed() { this->failed_ = nullptr;};
            inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
            inline Same& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Same& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Same& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Same& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // The number of failed items.
            shared_ptr<int64_t> failed_ {};
            // The number of skipped items.
            shared_ptr<int64_t> skipped_ {};
            // The number of successful items.
            shared_ptr<int64_t> success_ {};
            // The total number of items.
            shared_ptr<int64_t> total_ {};
          };

          class Deleted : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Deleted& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Deleted& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Deleted() = default ;
            Deleted(const Deleted &) = default ;
            Deleted(Deleted &&) = default ;
            Deleted(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Deleted() = default ;
            Deleted& operator=(const Deleted &) = default ;
            Deleted& operator=(Deleted &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failed_ == nullptr
        && this->skipped_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
            // failed Field Functions 
            bool hasFailed() const { return this->failed_ != nullptr;};
            void deleteFailed() { this->failed_ = nullptr;};
            inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
            inline Deleted& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Deleted& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Deleted& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Deleted& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // The number of failed items.
            shared_ptr<int64_t> failed_ {};
            // The number of skipped items.
            shared_ptr<int64_t> skipped_ {};
            // The number of successful items.
            shared_ptr<int64_t> success_ {};
            // The total number of items.
            shared_ptr<int64_t> total_ {};
          };

          class Created : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Created& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Created& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Created() = default ;
            Created(const Created &) = default ;
            Created(Created &&) = default ;
            Created(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Created() = default ;
            Created& operator=(const Created &) = default ;
            Created& operator=(Created &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->failed_ == nullptr
        && this->skipped_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
            // failed Field Functions 
            bool hasFailed() const { return this->failed_ != nullptr;};
            void deleteFailed() { this->failed_ = nullptr;};
            inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
            inline Created& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Created& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Created& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Created& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // The number of failed items.
            shared_ptr<int64_t> failed_ {};
            // The number of skipped items.
            shared_ptr<int64_t> skipped_ {};
            // The number of successful items.
            shared_ptr<int64_t> success_ {};
            // The total number of items.
            shared_ptr<int64_t> total_ {};
          };

          virtual bool empty() const override { return this->created_ == nullptr
        && this->deleted_ == nullptr && this->same_ == nullptr && this->updated_ == nullptr; };
          // created Field Functions 
          bool hasCreated() const { return this->created_ != nullptr;};
          void deleteCreated() { this->created_ = nullptr;};
          inline const AgentStatistics::Created & getCreated() const { DARABONBA_PTR_GET_CONST(created_, AgentStatistics::Created) };
          inline AgentStatistics::Created getCreated() { DARABONBA_PTR_GET(created_, AgentStatistics::Created) };
          inline AgentStatistics& setCreated(const AgentStatistics::Created & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
          inline AgentStatistics& setCreated(AgentStatistics::Created && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline const AgentStatistics::Deleted & getDeleted() const { DARABONBA_PTR_GET_CONST(deleted_, AgentStatistics::Deleted) };
          inline AgentStatistics::Deleted getDeleted() { DARABONBA_PTR_GET(deleted_, AgentStatistics::Deleted) };
          inline AgentStatistics& setDeleted(const AgentStatistics::Deleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
          inline AgentStatistics& setDeleted(AgentStatistics::Deleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


          // same Field Functions 
          bool hasSame() const { return this->same_ != nullptr;};
          void deleteSame() { this->same_ = nullptr;};
          inline const AgentStatistics::Same & getSame() const { DARABONBA_PTR_GET_CONST(same_, AgentStatistics::Same) };
          inline AgentStatistics::Same getSame() { DARABONBA_PTR_GET(same_, AgentStatistics::Same) };
          inline AgentStatistics& setSame(const AgentStatistics::Same & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
          inline AgentStatistics& setSame(AgentStatistics::Same && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


          // updated Field Functions 
          bool hasUpdated() const { return this->updated_ != nullptr;};
          void deleteUpdated() { this->updated_ = nullptr;};
          inline const AgentStatistics::Updated & getUpdated() const { DARABONBA_PTR_GET_CONST(updated_, AgentStatistics::Updated) };
          inline AgentStatistics::Updated getUpdated() { DARABONBA_PTR_GET(updated_, AgentStatistics::Updated) };
          inline AgentStatistics& setUpdated(const AgentStatistics::Updated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
          inline AgentStatistics& setUpdated(AgentStatistics::Updated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


        protected:
          // The statistics of the creation result.
          shared_ptr<AgentStatistics::Created> created_ {};
          // The statistics of the deletion result.
          shared_ptr<AgentStatistics::Deleted> deleted_ {};
          // The statistics of unchanged items.
          shared_ptr<AgentStatistics::Same> same_ {};
          // The statistics of the update result.
          shared_ptr<AgentStatistics::Updated> updated_ {};
        };

        virtual bool empty() const override { return this->agentStatistics_ == nullptr
        && this->assetStatistics_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr; };
        // agentStatistics Field Functions 
        bool hasAgentStatistics() const { return this->agentStatistics_ != nullptr;};
        void deleteAgentStatistics() { this->agentStatistics_ = nullptr;};
        inline const Result::AgentStatistics & getAgentStatistics() const { DARABONBA_PTR_GET_CONST(agentStatistics_, Result::AgentStatistics) };
        inline Result::AgentStatistics getAgentStatistics() { DARABONBA_PTR_GET(agentStatistics_, Result::AgentStatistics) };
        inline Result& setAgentStatistics(const Result::AgentStatistics & agentStatistics) { DARABONBA_PTR_SET_VALUE(agentStatistics_, agentStatistics) };
        inline Result& setAgentStatistics(Result::AgentStatistics && agentStatistics) { DARABONBA_PTR_SET_RVALUE(agentStatistics_, agentStatistics) };


        // assetStatistics Field Functions 
        bool hasAssetStatistics() const { return this->assetStatistics_ != nullptr;};
        void deleteAssetStatistics() { this->assetStatistics_ = nullptr;};
        inline const Result::AssetStatistics & getAssetStatistics() const { DARABONBA_PTR_GET_CONST(assetStatistics_, Result::AssetStatistics) };
        inline Result::AssetStatistics getAssetStatistics() { DARABONBA_PTR_GET(assetStatistics_, Result::AssetStatistics) };
        inline Result& setAssetStatistics(const Result::AssetStatistics & assetStatistics) { DARABONBA_PTR_SET_VALUE(assetStatistics_, assetStatistics) };
        inline Result& setAssetStatistics(Result::AssetStatistics && assetStatistics) { DARABONBA_PTR_SET_RVALUE(assetStatistics_, assetStatistics) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Result& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Result& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      protected:
        // The statistics of the agent synchronization result.
        shared_ptr<Result::AgentStatistics> agentStatistics_ {};
        // The statistics of the asset synchronization result.
        shared_ptr<Result::AssetStatistics> assetStatistics_ {};
        // The error code of the synchronization result.
        shared_ptr<string> errorCode_ {};
        // The error message of the synchronization result.
        shared_ptr<string> errorMessage_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->endTime_ == nullptr && this->inventorySourceId_ == nullptr && this->inventorySynchronizationJobId_ == nullptr && this->result_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->triggerType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline InventorySynchronizationJobs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline InventorySynchronizationJobs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // inventorySourceId Field Functions 
      bool hasInventorySourceId() const { return this->inventorySourceId_ != nullptr;};
      void deleteInventorySourceId() { this->inventorySourceId_ = nullptr;};
      inline string getInventorySourceId() const { DARABONBA_PTR_GET_DEFAULT(inventorySourceId_, "") };
      inline InventorySynchronizationJobs& setInventorySourceId(string inventorySourceId) { DARABONBA_PTR_SET_VALUE(inventorySourceId_, inventorySourceId) };


      // inventorySynchronizationJobId Field Functions 
      bool hasInventorySynchronizationJobId() const { return this->inventorySynchronizationJobId_ != nullptr;};
      void deleteInventorySynchronizationJobId() { this->inventorySynchronizationJobId_ = nullptr;};
      inline string getInventorySynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(inventorySynchronizationJobId_, "") };
      inline InventorySynchronizationJobs& setInventorySynchronizationJobId(string inventorySynchronizationJobId) { DARABONBA_PTR_SET_VALUE(inventorySynchronizationJobId_, inventorySynchronizationJobId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const InventorySynchronizationJobs::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, InventorySynchronizationJobs::Result) };
      inline InventorySynchronizationJobs::Result getResult() { DARABONBA_PTR_GET(result_, InventorySynchronizationJobs::Result) };
      inline InventorySynchronizationJobs& setResult(const InventorySynchronizationJobs::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline InventorySynchronizationJobs& setResult(InventorySynchronizationJobs::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline InventorySynchronizationJobs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InventorySynchronizationJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline InventorySynchronizationJobs& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      // The description of the synchronization job.
      shared_ptr<string> description_ {};
      // The end time of the synchronization job.
      shared_ptr<int64_t> endTime_ {};
      // The IDs of the synchronization targets.
      shared_ptr<string> inventorySourceId_ {};
      // The ID of the synchronization job.
      shared_ptr<string> inventorySynchronizationJobId_ {};
      // The task result of the synchronization node.
      shared_ptr<InventorySynchronizationJobs::Result> result_ {};
      // The start time of the synchronization job.
      shared_ptr<int64_t> startTime_ {};
      // The status of the synchronization job.
      shared_ptr<string> status_ {};
      // The trigger type of the synchronization job.
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->inventorySynchronizationJobs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // inventorySynchronizationJobs Field Functions 
    bool hasInventorySynchronizationJobs() const { return this->inventorySynchronizationJobs_ != nullptr;};
    void deleteInventorySynchronizationJobs() { this->inventorySynchronizationJobs_ = nullptr;};
    inline const vector<ListInventorySynchronizationJobsResponseBody::InventorySynchronizationJobs> & getInventorySynchronizationJobs() const { DARABONBA_PTR_GET_CONST(inventorySynchronizationJobs_, vector<ListInventorySynchronizationJobsResponseBody::InventorySynchronizationJobs>) };
    inline vector<ListInventorySynchronizationJobsResponseBody::InventorySynchronizationJobs> getInventorySynchronizationJobs() { DARABONBA_PTR_GET(inventorySynchronizationJobs_, vector<ListInventorySynchronizationJobsResponseBody::InventorySynchronizationJobs>) };
    inline ListInventorySynchronizationJobsResponseBody& setInventorySynchronizationJobs(const vector<ListInventorySynchronizationJobsResponseBody::InventorySynchronizationJobs> & inventorySynchronizationJobs) { DARABONBA_PTR_SET_VALUE(inventorySynchronizationJobs_, inventorySynchronizationJobs) };
    inline ListInventorySynchronizationJobsResponseBody& setInventorySynchronizationJobs(vector<ListInventorySynchronizationJobsResponseBody::InventorySynchronizationJobs> && inventorySynchronizationJobs) { DARABONBA_PTR_SET_RVALUE(inventorySynchronizationJobs_, inventorySynchronizationJobs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInventorySynchronizationJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInventorySynchronizationJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInventorySynchronizationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInventorySynchronizationJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The inventory synchronization jobs.
    shared_ptr<vector<ListInventorySynchronizationJobsResponseBody::InventorySynchronizationJobs>> inventorySynchronizationJobs_ {};
    // The maximum number of returned results.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token returned by the current call for subsequent paged queries.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
