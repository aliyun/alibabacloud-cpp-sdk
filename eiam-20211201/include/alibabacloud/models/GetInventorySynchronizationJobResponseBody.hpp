// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYSYNCHRONIZATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYSYNCHRONIZATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInventorySynchronizationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventorySynchronizationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InventorySynchronizationJob, inventorySynchronizationJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventorySynchronizationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InventorySynchronizationJob, inventorySynchronizationJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInventorySynchronizationJobResponseBody() = default ;
    GetInventorySynchronizationJobResponseBody(const GetInventorySynchronizationJobResponseBody &) = default ;
    GetInventorySynchronizationJobResponseBody(GetInventorySynchronizationJobResponseBody &&) = default ;
    GetInventorySynchronizationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventorySynchronizationJobResponseBody() = default ;
    GetInventorySynchronizationJobResponseBody& operator=(const GetInventorySynchronizationJobResponseBody &) = default ;
    GetInventorySynchronizationJobResponseBody& operator=(GetInventorySynchronizationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InventorySynchronizationJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InventorySynchronizationJob& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InventorySourceId, inventorySourceId_);
        DARABONBA_PTR_TO_JSON(InventorySynchronizationJobId, inventorySynchronizationJobId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, InventorySynchronizationJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InventorySourceId, inventorySourceId_);
        DARABONBA_PTR_FROM_JSON(InventorySynchronizationJobId, inventorySynchronizationJobId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      };
      InventorySynchronizationJob() = default ;
      InventorySynchronizationJob(const InventorySynchronizationJob &) = default ;
      InventorySynchronizationJob(InventorySynchronizationJob &&) = default ;
      InventorySynchronizationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InventorySynchronizationJob() = default ;
      InventorySynchronizationJob& operator=(const InventorySynchronizationJob &) = default ;
      InventorySynchronizationJob& operator=(InventorySynchronizationJob &&) = default ;
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
            // The failure count.
            shared_ptr<int64_t> failed_ {};
            // The skipped count.
            shared_ptr<int64_t> skipped_ {};
            // The success count.
            shared_ptr<int64_t> success_ {};
            // The total count.
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
            // The failure count.
            shared_ptr<int64_t> failed_ {};
            // The skipped count.
            shared_ptr<int64_t> skipped_ {};
            // The success count.
            shared_ptr<int64_t> success_ {};
            // The total count.
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
            // The failure count.
            shared_ptr<int64_t> failed_ {};
            // The skipped count.
            shared_ptr<int64_t> skipped_ {};
            // The success count.
            shared_ptr<int64_t> success_ {};
            // The total count.
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
            // The failure count.
            shared_ptr<int64_t> failed_ {};
            // The skipped count.
            shared_ptr<int64_t> skipped_ {};
            // The success count.
            shared_ptr<int64_t> success_ {};
            // The total count.
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
          // The creation statistics.
          shared_ptr<AssetStatistics::Created> created_ {};
          // The deletion statistics.
          shared_ptr<AssetStatistics::Deleted> deleted_ {};
          // The statistics of unchanged assets.
          shared_ptr<AssetStatistics::Same> same_ {};
          // The update statistics.
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
            // The failure count.
            shared_ptr<int64_t> failed_ {};
            // The skipped count.
            shared_ptr<int64_t> skipped_ {};
            // The success count.
            shared_ptr<int64_t> success_ {};
            // The total count.
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
            // The failure count.
            shared_ptr<int64_t> failed_ {};
            // The skipped count.
            shared_ptr<int64_t> skipped_ {};
            // The success count.
            shared_ptr<int64_t> success_ {};
            // The total count.
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
            // The failure count.
            shared_ptr<int64_t> failed_ {};
            // The skipped count.
            shared_ptr<int64_t> skipped_ {};
            // The success count.
            shared_ptr<int64_t> success_ {};
            // The total count.
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
            // The failure count.
            shared_ptr<int64_t> failed_ {};
            // The skipped count.
            shared_ptr<int64_t> skipped_ {};
            // The success count.
            shared_ptr<int64_t> success_ {};
            // The total count.
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
          // The creation statistics.
          shared_ptr<AgentStatistics::Created> created_ {};
          // The deletion statistics.
          shared_ptr<AgentStatistics::Deleted> deleted_ {};
          // The statistics of unchanged assets.
          shared_ptr<AgentStatistics::Same> same_ {};
          // The update statistics.
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
        // The agent synchronization statistics.
        shared_ptr<Result::AgentStatistics> agentStatistics_ {};
        // The asset synchronization statistics.
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
      inline InventorySynchronizationJob& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline InventorySynchronizationJob& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // inventorySourceId Field Functions 
      bool hasInventorySourceId() const { return this->inventorySourceId_ != nullptr;};
      void deleteInventorySourceId() { this->inventorySourceId_ = nullptr;};
      inline string getInventorySourceId() const { DARABONBA_PTR_GET_DEFAULT(inventorySourceId_, "") };
      inline InventorySynchronizationJob& setInventorySourceId(string inventorySourceId) { DARABONBA_PTR_SET_VALUE(inventorySourceId_, inventorySourceId) };


      // inventorySynchronizationJobId Field Functions 
      bool hasInventorySynchronizationJobId() const { return this->inventorySynchronizationJobId_ != nullptr;};
      void deleteInventorySynchronizationJobId() { this->inventorySynchronizationJobId_ = nullptr;};
      inline string getInventorySynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(inventorySynchronizationJobId_, "") };
      inline InventorySynchronizationJob& setInventorySynchronizationJobId(string inventorySynchronizationJobId) { DARABONBA_PTR_SET_VALUE(inventorySynchronizationJobId_, inventorySynchronizationJobId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const InventorySynchronizationJob::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, InventorySynchronizationJob::Result) };
      inline InventorySynchronizationJob::Result getResult() { DARABONBA_PTR_GET(result_, InventorySynchronizationJob::Result) };
      inline InventorySynchronizationJob& setResult(const InventorySynchronizationJob::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline InventorySynchronizationJob& setResult(InventorySynchronizationJob::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline InventorySynchronizationJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InventorySynchronizationJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline InventorySynchronizationJob& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      // The description.
      shared_ptr<string> description_ {};
      // The end time.
      shared_ptr<int64_t> endTime_ {};
      // The inventory source ID.
      shared_ptr<string> inventorySourceId_ {};
      // The ID of the synchronization task.
      shared_ptr<string> inventorySynchronizationJobId_ {};
      // The synchronization node task result.
      shared_ptr<InventorySynchronizationJob::Result> result_ {};
      // The start time.
      shared_ptr<int64_t> startTime_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The trigger type.
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->inventorySynchronizationJob_ == nullptr
        && this->requestId_ == nullptr; };
    // inventorySynchronizationJob Field Functions 
    bool hasInventorySynchronizationJob() const { return this->inventorySynchronizationJob_ != nullptr;};
    void deleteInventorySynchronizationJob() { this->inventorySynchronizationJob_ = nullptr;};
    inline const GetInventorySynchronizationJobResponseBody::InventorySynchronizationJob & getInventorySynchronizationJob() const { DARABONBA_PTR_GET_CONST(inventorySynchronizationJob_, GetInventorySynchronizationJobResponseBody::InventorySynchronizationJob) };
    inline GetInventorySynchronizationJobResponseBody::InventorySynchronizationJob getInventorySynchronizationJob() { DARABONBA_PTR_GET(inventorySynchronizationJob_, GetInventorySynchronizationJobResponseBody::InventorySynchronizationJob) };
    inline GetInventorySynchronizationJobResponseBody& setInventorySynchronizationJob(const GetInventorySynchronizationJobResponseBody::InventorySynchronizationJob & inventorySynchronizationJob) { DARABONBA_PTR_SET_VALUE(inventorySynchronizationJob_, inventorySynchronizationJob) };
    inline GetInventorySynchronizationJobResponseBody& setInventorySynchronizationJob(GetInventorySynchronizationJobResponseBody::InventorySynchronizationJob && inventorySynchronizationJob) { DARABONBA_PTR_SET_RVALUE(inventorySynchronizationJob_, inventorySynchronizationJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInventorySynchronizationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The inventory synchronization job.
    shared_ptr<GetInventorySynchronizationJobResponseBody::InventorySynchronizationJob> inventorySynchronizationJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
