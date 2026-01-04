// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
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
  class ListSynchronizationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobs, synchronizationJobs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobs, synchronizationJobs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSynchronizationJobsResponseBody() = default ;
    ListSynchronizationJobsResponseBody(const ListSynchronizationJobsResponseBody &) = default ;
    ListSynchronizationJobsResponseBody(ListSynchronizationJobsResponseBody &&) = default ;
    ListSynchronizationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBody() = default ;
    ListSynchronizationJobsResponseBody& operator=(const ListSynchronizationJobsResponseBody &) = default ;
    ListSynchronizationJobsResponseBody& operator=(ListSynchronizationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SynchronizationJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SynchronizationJobs& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, SynchronizationJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      };
      SynchronizationJobs() = default ;
      SynchronizationJobs(const SynchronizationJobs &) = default ;
      SynchronizationJobs(SynchronizationJobs &&) = default ;
      SynchronizationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SynchronizationJobs() = default ;
      SynchronizationJobs& operator=(const SynchronizationJobs &) = default ;
      SynchronizationJobs& operator=(SynchronizationJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(GroupMemberStatistics, groupMemberStatistics_);
          DARABONBA_PTR_TO_JSON(GroupStatistics, groupStatistics_);
          DARABONBA_PTR_TO_JSON(OrganizationalUnitStatistics, organizationalUnitStatistics_);
          DARABONBA_PTR_TO_JSON(UserStatistics, userStatistics_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(GroupMemberStatistics, groupMemberStatistics_);
          DARABONBA_PTR_FROM_JSON(GroupStatistics, groupStatistics_);
          DARABONBA_PTR_FROM_JSON(OrganizationalUnitStatistics, organizationalUnitStatistics_);
          DARABONBA_PTR_FROM_JSON(UserStatistics, userStatistics_);
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
        class UserStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(Binded, binded_);
            DARABONBA_PTR_TO_JSON(Created, created_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(Exported, exported_);
            DARABONBA_PTR_TO_JSON(Pushed, pushed_);
            DARABONBA_PTR_TO_JSON(Same, same_);
            DARABONBA_PTR_TO_JSON(Updated, updated_);
          };
          friend void from_json(const Darabonba::Json& j, UserStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Binded, binded_);
            DARABONBA_PTR_FROM_JSON(Created, created_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(Exported, exported_);
            DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
            DARABONBA_PTR_FROM_JSON(Same, same_);
            DARABONBA_PTR_FROM_JSON(Updated, updated_);
          };
          UserStatistics() = default ;
          UserStatistics(const UserStatistics &) = default ;
          UserStatistics(UserStatistics &&) = default ;
          UserStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserStatistics() = default ;
          UserStatistics& operator=(const UserStatistics &) = default ;
          UserStatistics& operator=(UserStatistics &&) = default ;
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Pushed : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Pushed& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Pushed& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Pushed() = default ;
            Pushed(const Pushed &) = default ;
            Pushed(Pushed &&) = default ;
            Pushed(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Pushed() = default ;
            Pushed& operator=(const Pushed &) = default ;
            Pushed& operator=(Pushed &&) = default ;
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
            inline Pushed& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Pushed& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Pushed& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Pushed& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Exported : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Exported& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Exported& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Exported() = default ;
            Exported(const Exported &) = default ;
            Exported(Exported &&) = default ;
            Exported(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Exported() = default ;
            Exported& operator=(const Exported &) = default ;
            Exported& operator=(Exported &&) = default ;
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
            inline Exported& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Exported& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Exported& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Exported& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            shared_ptr<int64_t> failed_ {};
            shared_ptr<int64_t> skipped_ {};
            shared_ptr<int64_t> success_ {};
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Binded : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Binded& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Binded& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Binded() = default ;
            Binded(const Binded &) = default ;
            Binded(Binded &&) = default ;
            Binded(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Binded() = default ;
            Binded& operator=(const Binded &) = default ;
            Binded& operator=(Binded &&) = default ;
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
            inline Binded& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Binded& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Binded& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Binded& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          virtual bool empty() const override { return this->binded_ == nullptr
        && this->created_ == nullptr && this->deleted_ == nullptr && this->exported_ == nullptr && this->pushed_ == nullptr && this->same_ == nullptr
        && this->updated_ == nullptr; };
          // binded Field Functions 
          bool hasBinded() const { return this->binded_ != nullptr;};
          void deleteBinded() { this->binded_ = nullptr;};
          inline const UserStatistics::Binded & getBinded() const { DARABONBA_PTR_GET_CONST(binded_, UserStatistics::Binded) };
          inline UserStatistics::Binded getBinded() { DARABONBA_PTR_GET(binded_, UserStatistics::Binded) };
          inline UserStatistics& setBinded(const UserStatistics::Binded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
          inline UserStatistics& setBinded(UserStatistics::Binded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


          // created Field Functions 
          bool hasCreated() const { return this->created_ != nullptr;};
          void deleteCreated() { this->created_ = nullptr;};
          inline const UserStatistics::Created & getCreated() const { DARABONBA_PTR_GET_CONST(created_, UserStatistics::Created) };
          inline UserStatistics::Created getCreated() { DARABONBA_PTR_GET(created_, UserStatistics::Created) };
          inline UserStatistics& setCreated(const UserStatistics::Created & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
          inline UserStatistics& setCreated(UserStatistics::Created && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline const UserStatistics::Deleted & getDeleted() const { DARABONBA_PTR_GET_CONST(deleted_, UserStatistics::Deleted) };
          inline UserStatistics::Deleted getDeleted() { DARABONBA_PTR_GET(deleted_, UserStatistics::Deleted) };
          inline UserStatistics& setDeleted(const UserStatistics::Deleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
          inline UserStatistics& setDeleted(UserStatistics::Deleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


          // exported Field Functions 
          bool hasExported() const { return this->exported_ != nullptr;};
          void deleteExported() { this->exported_ = nullptr;};
          inline const UserStatistics::Exported & getExported() const { DARABONBA_PTR_GET_CONST(exported_, UserStatistics::Exported) };
          inline UserStatistics::Exported getExported() { DARABONBA_PTR_GET(exported_, UserStatistics::Exported) };
          inline UserStatistics& setExported(const UserStatistics::Exported & exported) { DARABONBA_PTR_SET_VALUE(exported_, exported) };
          inline UserStatistics& setExported(UserStatistics::Exported && exported) { DARABONBA_PTR_SET_RVALUE(exported_, exported) };


          // pushed Field Functions 
          bool hasPushed() const { return this->pushed_ != nullptr;};
          void deletePushed() { this->pushed_ = nullptr;};
          inline const UserStatistics::Pushed & getPushed() const { DARABONBA_PTR_GET_CONST(pushed_, UserStatistics::Pushed) };
          inline UserStatistics::Pushed getPushed() { DARABONBA_PTR_GET(pushed_, UserStatistics::Pushed) };
          inline UserStatistics& setPushed(const UserStatistics::Pushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
          inline UserStatistics& setPushed(UserStatistics::Pushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


          // same Field Functions 
          bool hasSame() const { return this->same_ != nullptr;};
          void deleteSame() { this->same_ = nullptr;};
          inline const UserStatistics::Same & getSame() const { DARABONBA_PTR_GET_CONST(same_, UserStatistics::Same) };
          inline UserStatistics::Same getSame() { DARABONBA_PTR_GET(same_, UserStatistics::Same) };
          inline UserStatistics& setSame(const UserStatistics::Same & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
          inline UserStatistics& setSame(UserStatistics::Same && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


          // updated Field Functions 
          bool hasUpdated() const { return this->updated_ != nullptr;};
          void deleteUpdated() { this->updated_ = nullptr;};
          inline const UserStatistics::Updated & getUpdated() const { DARABONBA_PTR_GET_CONST(updated_, UserStatistics::Updated) };
          inline UserStatistics::Updated getUpdated() { DARABONBA_PTR_GET(updated_, UserStatistics::Updated) };
          inline UserStatistics& setUpdated(const UserStatistics::Updated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
          inline UserStatistics& setUpdated(UserStatistics::Updated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


        protected:
          // 绑定结果统计
          shared_ptr<UserStatistics::Binded> binded_ {};
          // 创建结果统计
          shared_ptr<UserStatistics::Created> created_ {};
          // 删除结果统计
          shared_ptr<UserStatistics::Deleted> deleted_ {};
          shared_ptr<UserStatistics::Exported> exported_ {};
          // 推送结果统计
          shared_ptr<UserStatistics::Pushed> pushed_ {};
          // 相同结果统计
          shared_ptr<UserStatistics::Same> same_ {};
          // 更新结果统计
          shared_ptr<UserStatistics::Updated> updated_ {};
        };

        class OrganizationalUnitStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OrganizationalUnitStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(Binded, binded_);
            DARABONBA_PTR_TO_JSON(Created, created_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(Pushed, pushed_);
            DARABONBA_PTR_TO_JSON(Same, same_);
            DARABONBA_PTR_TO_JSON(Updated, updated_);
          };
          friend void from_json(const Darabonba::Json& j, OrganizationalUnitStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Binded, binded_);
            DARABONBA_PTR_FROM_JSON(Created, created_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
            DARABONBA_PTR_FROM_JSON(Same, same_);
            DARABONBA_PTR_FROM_JSON(Updated, updated_);
          };
          OrganizationalUnitStatistics() = default ;
          OrganizationalUnitStatistics(const OrganizationalUnitStatistics &) = default ;
          OrganizationalUnitStatistics(OrganizationalUnitStatistics &&) = default ;
          OrganizationalUnitStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OrganizationalUnitStatistics() = default ;
          OrganizationalUnitStatistics& operator=(const OrganizationalUnitStatistics &) = default ;
          OrganizationalUnitStatistics& operator=(OrganizationalUnitStatistics &&) = default ;
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Pushed : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Pushed& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Pushed& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Pushed() = default ;
            Pushed(const Pushed &) = default ;
            Pushed(Pushed &&) = default ;
            Pushed(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Pushed() = default ;
            Pushed& operator=(const Pushed &) = default ;
            Pushed& operator=(Pushed &&) = default ;
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
            inline Pushed& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Pushed& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Pushed& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Pushed& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Binded : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Binded& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Binded& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Binded() = default ;
            Binded(const Binded &) = default ;
            Binded(Binded &&) = default ;
            Binded(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Binded() = default ;
            Binded& operator=(const Binded &) = default ;
            Binded& operator=(Binded &&) = default ;
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
            inline Binded& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Binded& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Binded& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Binded& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          virtual bool empty() const override { return this->binded_ == nullptr
        && this->created_ == nullptr && this->deleted_ == nullptr && this->pushed_ == nullptr && this->same_ == nullptr && this->updated_ == nullptr; };
          // binded Field Functions 
          bool hasBinded() const { return this->binded_ != nullptr;};
          void deleteBinded() { this->binded_ = nullptr;};
          inline const OrganizationalUnitStatistics::Binded & getBinded() const { DARABONBA_PTR_GET_CONST(binded_, OrganizationalUnitStatistics::Binded) };
          inline OrganizationalUnitStatistics::Binded getBinded() { DARABONBA_PTR_GET(binded_, OrganizationalUnitStatistics::Binded) };
          inline OrganizationalUnitStatistics& setBinded(const OrganizationalUnitStatistics::Binded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
          inline OrganizationalUnitStatistics& setBinded(OrganizationalUnitStatistics::Binded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


          // created Field Functions 
          bool hasCreated() const { return this->created_ != nullptr;};
          void deleteCreated() { this->created_ = nullptr;};
          inline const OrganizationalUnitStatistics::Created & getCreated() const { DARABONBA_PTR_GET_CONST(created_, OrganizationalUnitStatistics::Created) };
          inline OrganizationalUnitStatistics::Created getCreated() { DARABONBA_PTR_GET(created_, OrganizationalUnitStatistics::Created) };
          inline OrganizationalUnitStatistics& setCreated(const OrganizationalUnitStatistics::Created & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
          inline OrganizationalUnitStatistics& setCreated(OrganizationalUnitStatistics::Created && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline const OrganizationalUnitStatistics::Deleted & getDeleted() const { DARABONBA_PTR_GET_CONST(deleted_, OrganizationalUnitStatistics::Deleted) };
          inline OrganizationalUnitStatistics::Deleted getDeleted() { DARABONBA_PTR_GET(deleted_, OrganizationalUnitStatistics::Deleted) };
          inline OrganizationalUnitStatistics& setDeleted(const OrganizationalUnitStatistics::Deleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
          inline OrganizationalUnitStatistics& setDeleted(OrganizationalUnitStatistics::Deleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


          // pushed Field Functions 
          bool hasPushed() const { return this->pushed_ != nullptr;};
          void deletePushed() { this->pushed_ = nullptr;};
          inline const OrganizationalUnitStatistics::Pushed & getPushed() const { DARABONBA_PTR_GET_CONST(pushed_, OrganizationalUnitStatistics::Pushed) };
          inline OrganizationalUnitStatistics::Pushed getPushed() { DARABONBA_PTR_GET(pushed_, OrganizationalUnitStatistics::Pushed) };
          inline OrganizationalUnitStatistics& setPushed(const OrganizationalUnitStatistics::Pushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
          inline OrganizationalUnitStatistics& setPushed(OrganizationalUnitStatistics::Pushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


          // same Field Functions 
          bool hasSame() const { return this->same_ != nullptr;};
          void deleteSame() { this->same_ = nullptr;};
          inline const OrganizationalUnitStatistics::Same & getSame() const { DARABONBA_PTR_GET_CONST(same_, OrganizationalUnitStatistics::Same) };
          inline OrganizationalUnitStatistics::Same getSame() { DARABONBA_PTR_GET(same_, OrganizationalUnitStatistics::Same) };
          inline OrganizationalUnitStatistics& setSame(const OrganizationalUnitStatistics::Same & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
          inline OrganizationalUnitStatistics& setSame(OrganizationalUnitStatistics::Same && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


          // updated Field Functions 
          bool hasUpdated() const { return this->updated_ != nullptr;};
          void deleteUpdated() { this->updated_ = nullptr;};
          inline const OrganizationalUnitStatistics::Updated & getUpdated() const { DARABONBA_PTR_GET_CONST(updated_, OrganizationalUnitStatistics::Updated) };
          inline OrganizationalUnitStatistics::Updated getUpdated() { DARABONBA_PTR_GET(updated_, OrganizationalUnitStatistics::Updated) };
          inline OrganizationalUnitStatistics& setUpdated(const OrganizationalUnitStatistics::Updated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
          inline OrganizationalUnitStatistics& setUpdated(OrganizationalUnitStatistics::Updated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


        protected:
          // 绑定结果统计
          shared_ptr<OrganizationalUnitStatistics::Binded> binded_ {};
          // 创建结果统计
          shared_ptr<OrganizationalUnitStatistics::Created> created_ {};
          // 删除结果统计
          shared_ptr<OrganizationalUnitStatistics::Deleted> deleted_ {};
          // 推送结果统计
          shared_ptr<OrganizationalUnitStatistics::Pushed> pushed_ {};
          // 相同结果统计
          shared_ptr<OrganizationalUnitStatistics::Same> same_ {};
          // 更新结果统计
          shared_ptr<OrganizationalUnitStatistics::Updated> updated_ {};
        };

        class GroupStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GroupStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(Binded, binded_);
            DARABONBA_PTR_TO_JSON(Created, created_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(Pushed, pushed_);
            DARABONBA_PTR_TO_JSON(Same, same_);
            DARABONBA_PTR_TO_JSON(Updated, updated_);
          };
          friend void from_json(const Darabonba::Json& j, GroupStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Binded, binded_);
            DARABONBA_PTR_FROM_JSON(Created, created_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
            DARABONBA_PTR_FROM_JSON(Same, same_);
            DARABONBA_PTR_FROM_JSON(Updated, updated_);
          };
          GroupStatistics() = default ;
          GroupStatistics(const GroupStatistics &) = default ;
          GroupStatistics(GroupStatistics &&) = default ;
          GroupStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GroupStatistics() = default ;
          GroupStatistics& operator=(const GroupStatistics &) = default ;
          GroupStatistics& operator=(GroupStatistics &&) = default ;
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Pushed : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Pushed& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Pushed& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Pushed() = default ;
            Pushed(const Pushed &) = default ;
            Pushed(Pushed &&) = default ;
            Pushed(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Pushed() = default ;
            Pushed& operator=(const Pushed &) = default ;
            Pushed& operator=(Pushed &&) = default ;
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
            inline Pushed& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Pushed& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Pushed& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Pushed& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Binded : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Binded& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Binded& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Binded() = default ;
            Binded(const Binded &) = default ;
            Binded(Binded &&) = default ;
            Binded(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Binded() = default ;
            Binded& operator=(const Binded &) = default ;
            Binded& operator=(Binded &&) = default ;
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
            inline Binded& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Binded& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Binded& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Binded& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          virtual bool empty() const override { return this->binded_ == nullptr
        && this->created_ == nullptr && this->deleted_ == nullptr && this->pushed_ == nullptr && this->same_ == nullptr && this->updated_ == nullptr; };
          // binded Field Functions 
          bool hasBinded() const { return this->binded_ != nullptr;};
          void deleteBinded() { this->binded_ = nullptr;};
          inline const GroupStatistics::Binded & getBinded() const { DARABONBA_PTR_GET_CONST(binded_, GroupStatistics::Binded) };
          inline GroupStatistics::Binded getBinded() { DARABONBA_PTR_GET(binded_, GroupStatistics::Binded) };
          inline GroupStatistics& setBinded(const GroupStatistics::Binded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
          inline GroupStatistics& setBinded(GroupStatistics::Binded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


          // created Field Functions 
          bool hasCreated() const { return this->created_ != nullptr;};
          void deleteCreated() { this->created_ = nullptr;};
          inline const GroupStatistics::Created & getCreated() const { DARABONBA_PTR_GET_CONST(created_, GroupStatistics::Created) };
          inline GroupStatistics::Created getCreated() { DARABONBA_PTR_GET(created_, GroupStatistics::Created) };
          inline GroupStatistics& setCreated(const GroupStatistics::Created & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
          inline GroupStatistics& setCreated(GroupStatistics::Created && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline const GroupStatistics::Deleted & getDeleted() const { DARABONBA_PTR_GET_CONST(deleted_, GroupStatistics::Deleted) };
          inline GroupStatistics::Deleted getDeleted() { DARABONBA_PTR_GET(deleted_, GroupStatistics::Deleted) };
          inline GroupStatistics& setDeleted(const GroupStatistics::Deleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
          inline GroupStatistics& setDeleted(GroupStatistics::Deleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


          // pushed Field Functions 
          bool hasPushed() const { return this->pushed_ != nullptr;};
          void deletePushed() { this->pushed_ = nullptr;};
          inline const GroupStatistics::Pushed & getPushed() const { DARABONBA_PTR_GET_CONST(pushed_, GroupStatistics::Pushed) };
          inline GroupStatistics::Pushed getPushed() { DARABONBA_PTR_GET(pushed_, GroupStatistics::Pushed) };
          inline GroupStatistics& setPushed(const GroupStatistics::Pushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
          inline GroupStatistics& setPushed(GroupStatistics::Pushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


          // same Field Functions 
          bool hasSame() const { return this->same_ != nullptr;};
          void deleteSame() { this->same_ = nullptr;};
          inline const GroupStatistics::Same & getSame() const { DARABONBA_PTR_GET_CONST(same_, GroupStatistics::Same) };
          inline GroupStatistics::Same getSame() { DARABONBA_PTR_GET(same_, GroupStatistics::Same) };
          inline GroupStatistics& setSame(const GroupStatistics::Same & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
          inline GroupStatistics& setSame(GroupStatistics::Same && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


          // updated Field Functions 
          bool hasUpdated() const { return this->updated_ != nullptr;};
          void deleteUpdated() { this->updated_ = nullptr;};
          inline const GroupStatistics::Updated & getUpdated() const { DARABONBA_PTR_GET_CONST(updated_, GroupStatistics::Updated) };
          inline GroupStatistics::Updated getUpdated() { DARABONBA_PTR_GET(updated_, GroupStatistics::Updated) };
          inline GroupStatistics& setUpdated(const GroupStatistics::Updated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
          inline GroupStatistics& setUpdated(GroupStatistics::Updated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


        protected:
          // 绑定结果统计
          shared_ptr<GroupStatistics::Binded> binded_ {};
          // 创建结果统计
          shared_ptr<GroupStatistics::Created> created_ {};
          // 删除结果统计
          shared_ptr<GroupStatistics::Deleted> deleted_ {};
          // 推送结果统计
          shared_ptr<GroupStatistics::Pushed> pushed_ {};
          // 相同结果统计
          shared_ptr<GroupStatistics::Same> same_ {};
          // 更新结果统计
          shared_ptr<GroupStatistics::Updated> updated_ {};
        };

        class GroupMemberStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GroupMemberStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(Binded, binded_);
            DARABONBA_PTR_TO_JSON(Created, created_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(Pushed, pushed_);
            DARABONBA_PTR_TO_JSON(Same, same_);
            DARABONBA_PTR_TO_JSON(Updated, updated_);
          };
          friend void from_json(const Darabonba::Json& j, GroupMemberStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Binded, binded_);
            DARABONBA_PTR_FROM_JSON(Created, created_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
            DARABONBA_PTR_FROM_JSON(Same, same_);
            DARABONBA_PTR_FROM_JSON(Updated, updated_);
          };
          GroupMemberStatistics() = default ;
          GroupMemberStatistics(const GroupMemberStatistics &) = default ;
          GroupMemberStatistics(GroupMemberStatistics &&) = default ;
          GroupMemberStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GroupMemberStatistics() = default ;
          GroupMemberStatistics& operator=(const GroupMemberStatistics &) = default ;
          GroupMemberStatistics& operator=(GroupMemberStatistics &&) = default ;
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Pushed : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Pushed& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Pushed& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Pushed() = default ;
            Pushed(const Pushed &) = default ;
            Pushed(Pushed &&) = default ;
            Pushed(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Pushed() = default ;
            Pushed& operator=(const Pushed &) = default ;
            Pushed& operator=(Pushed &&) = default ;
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
            inline Pushed& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Pushed& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Pushed& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Pushed& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
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
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          class Binded : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Binded& obj) { 
              DARABONBA_PTR_TO_JSON(Failed, failed_);
              DARABONBA_PTR_TO_JSON(Skipped, skipped_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(Total, total_);
            };
            friend void from_json(const Darabonba::Json& j, Binded& obj) { 
              DARABONBA_PTR_FROM_JSON(Failed, failed_);
              DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
            };
            Binded() = default ;
            Binded(const Binded &) = default ;
            Binded(Binded &&) = default ;
            Binded(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Binded() = default ;
            Binded& operator=(const Binded &) = default ;
            Binded& operator=(Binded &&) = default ;
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
            inline Binded& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


            // skipped Field Functions 
            bool hasSkipped() const { return this->skipped_ != nullptr;};
            void deleteSkipped() { this->skipped_ = nullptr;};
            inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
            inline Binded& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
            inline Binded& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Binded& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


          protected:
            // 失败数目
            shared_ptr<int64_t> failed_ {};
            // 跳过数目
            shared_ptr<int64_t> skipped_ {};
            // 成功数目
            shared_ptr<int64_t> success_ {};
            // 总共数目
            shared_ptr<int64_t> total_ {};
          };

          virtual bool empty() const override { return this->binded_ == nullptr
        && this->created_ == nullptr && this->deleted_ == nullptr && this->pushed_ == nullptr && this->same_ == nullptr && this->updated_ == nullptr; };
          // binded Field Functions 
          bool hasBinded() const { return this->binded_ != nullptr;};
          void deleteBinded() { this->binded_ = nullptr;};
          inline const GroupMemberStatistics::Binded & getBinded() const { DARABONBA_PTR_GET_CONST(binded_, GroupMemberStatistics::Binded) };
          inline GroupMemberStatistics::Binded getBinded() { DARABONBA_PTR_GET(binded_, GroupMemberStatistics::Binded) };
          inline GroupMemberStatistics& setBinded(const GroupMemberStatistics::Binded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
          inline GroupMemberStatistics& setBinded(GroupMemberStatistics::Binded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


          // created Field Functions 
          bool hasCreated() const { return this->created_ != nullptr;};
          void deleteCreated() { this->created_ = nullptr;};
          inline const GroupMemberStatistics::Created & getCreated() const { DARABONBA_PTR_GET_CONST(created_, GroupMemberStatistics::Created) };
          inline GroupMemberStatistics::Created getCreated() { DARABONBA_PTR_GET(created_, GroupMemberStatistics::Created) };
          inline GroupMemberStatistics& setCreated(const GroupMemberStatistics::Created & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
          inline GroupMemberStatistics& setCreated(GroupMemberStatistics::Created && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline const GroupMemberStatistics::Deleted & getDeleted() const { DARABONBA_PTR_GET_CONST(deleted_, GroupMemberStatistics::Deleted) };
          inline GroupMemberStatistics::Deleted getDeleted() { DARABONBA_PTR_GET(deleted_, GroupMemberStatistics::Deleted) };
          inline GroupMemberStatistics& setDeleted(const GroupMemberStatistics::Deleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
          inline GroupMemberStatistics& setDeleted(GroupMemberStatistics::Deleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


          // pushed Field Functions 
          bool hasPushed() const { return this->pushed_ != nullptr;};
          void deletePushed() { this->pushed_ = nullptr;};
          inline const GroupMemberStatistics::Pushed & getPushed() const { DARABONBA_PTR_GET_CONST(pushed_, GroupMemberStatistics::Pushed) };
          inline GroupMemberStatistics::Pushed getPushed() { DARABONBA_PTR_GET(pushed_, GroupMemberStatistics::Pushed) };
          inline GroupMemberStatistics& setPushed(const GroupMemberStatistics::Pushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
          inline GroupMemberStatistics& setPushed(GroupMemberStatistics::Pushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


          // same Field Functions 
          bool hasSame() const { return this->same_ != nullptr;};
          void deleteSame() { this->same_ = nullptr;};
          inline const GroupMemberStatistics::Same & getSame() const { DARABONBA_PTR_GET_CONST(same_, GroupMemberStatistics::Same) };
          inline GroupMemberStatistics::Same getSame() { DARABONBA_PTR_GET(same_, GroupMemberStatistics::Same) };
          inline GroupMemberStatistics& setSame(const GroupMemberStatistics::Same & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
          inline GroupMemberStatistics& setSame(GroupMemberStatistics::Same && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


          // updated Field Functions 
          bool hasUpdated() const { return this->updated_ != nullptr;};
          void deleteUpdated() { this->updated_ = nullptr;};
          inline const GroupMemberStatistics::Updated & getUpdated() const { DARABONBA_PTR_GET_CONST(updated_, GroupMemberStatistics::Updated) };
          inline GroupMemberStatistics::Updated getUpdated() { DARABONBA_PTR_GET(updated_, GroupMemberStatistics::Updated) };
          inline GroupMemberStatistics& setUpdated(const GroupMemberStatistics::Updated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
          inline GroupMemberStatistics& setUpdated(GroupMemberStatistics::Updated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


        protected:
          // 绑定结果统计
          shared_ptr<GroupMemberStatistics::Binded> binded_ {};
          // 创建结果统计
          shared_ptr<GroupMemberStatistics::Created> created_ {};
          // 删除结果统计
          shared_ptr<GroupMemberStatistics::Deleted> deleted_ {};
          // 推送结果统计
          shared_ptr<GroupMemberStatistics::Pushed> pushed_ {};
          // 相同结果统计
          shared_ptr<GroupMemberStatistics::Same> same_ {};
          // 更新结果统计
          shared_ptr<GroupMemberStatistics::Updated> updated_ {};
        };

        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->groupMemberStatistics_ == nullptr && this->groupStatistics_ == nullptr && this->organizationalUnitStatistics_ == nullptr && this->userStatistics_ == nullptr; };
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


        // groupMemberStatistics Field Functions 
        bool hasGroupMemberStatistics() const { return this->groupMemberStatistics_ != nullptr;};
        void deleteGroupMemberStatistics() { this->groupMemberStatistics_ = nullptr;};
        inline const Result::GroupMemberStatistics & getGroupMemberStatistics() const { DARABONBA_PTR_GET_CONST(groupMemberStatistics_, Result::GroupMemberStatistics) };
        inline Result::GroupMemberStatistics getGroupMemberStatistics() { DARABONBA_PTR_GET(groupMemberStatistics_, Result::GroupMemberStatistics) };
        inline Result& setGroupMemberStatistics(const Result::GroupMemberStatistics & groupMemberStatistics) { DARABONBA_PTR_SET_VALUE(groupMemberStatistics_, groupMemberStatistics) };
        inline Result& setGroupMemberStatistics(Result::GroupMemberStatistics && groupMemberStatistics) { DARABONBA_PTR_SET_RVALUE(groupMemberStatistics_, groupMemberStatistics) };


        // groupStatistics Field Functions 
        bool hasGroupStatistics() const { return this->groupStatistics_ != nullptr;};
        void deleteGroupStatistics() { this->groupStatistics_ = nullptr;};
        inline const Result::GroupStatistics & getGroupStatistics() const { DARABONBA_PTR_GET_CONST(groupStatistics_, Result::GroupStatistics) };
        inline Result::GroupStatistics getGroupStatistics() { DARABONBA_PTR_GET(groupStatistics_, Result::GroupStatistics) };
        inline Result& setGroupStatistics(const Result::GroupStatistics & groupStatistics) { DARABONBA_PTR_SET_VALUE(groupStatistics_, groupStatistics) };
        inline Result& setGroupStatistics(Result::GroupStatistics && groupStatistics) { DARABONBA_PTR_SET_RVALUE(groupStatistics_, groupStatistics) };


        // organizationalUnitStatistics Field Functions 
        bool hasOrganizationalUnitStatistics() const { return this->organizationalUnitStatistics_ != nullptr;};
        void deleteOrganizationalUnitStatistics() { this->organizationalUnitStatistics_ = nullptr;};
        inline const Result::OrganizationalUnitStatistics & getOrganizationalUnitStatistics() const { DARABONBA_PTR_GET_CONST(organizationalUnitStatistics_, Result::OrganizationalUnitStatistics) };
        inline Result::OrganizationalUnitStatistics getOrganizationalUnitStatistics() { DARABONBA_PTR_GET(organizationalUnitStatistics_, Result::OrganizationalUnitStatistics) };
        inline Result& setOrganizationalUnitStatistics(const Result::OrganizationalUnitStatistics & organizationalUnitStatistics) { DARABONBA_PTR_SET_VALUE(organizationalUnitStatistics_, organizationalUnitStatistics) };
        inline Result& setOrganizationalUnitStatistics(Result::OrganizationalUnitStatistics && organizationalUnitStatistics) { DARABONBA_PTR_SET_RVALUE(organizationalUnitStatistics_, organizationalUnitStatistics) };


        // userStatistics Field Functions 
        bool hasUserStatistics() const { return this->userStatistics_ != nullptr;};
        void deleteUserStatistics() { this->userStatistics_ = nullptr;};
        inline const Result::UserStatistics & getUserStatistics() const { DARABONBA_PTR_GET_CONST(userStatistics_, Result::UserStatistics) };
        inline Result::UserStatistics getUserStatistics() { DARABONBA_PTR_GET(userStatistics_, Result::UserStatistics) };
        inline Result& setUserStatistics(const Result::UserStatistics & userStatistics) { DARABONBA_PTR_SET_VALUE(userStatistics_, userStatistics) };
        inline Result& setUserStatistics(Result::UserStatistics && userStatistics) { DARABONBA_PTR_SET_RVALUE(userStatistics_, userStatistics) };


      protected:
        // 同步结果错误码
        shared_ptr<string> errorCode_ {};
        // 同步结果错误信息描述
        shared_ptr<string> errorMessage_ {};
        // 组成员同步结果统计
        shared_ptr<Result::GroupMemberStatistics> groupMemberStatistics_ {};
        // 组同步结果统计
        shared_ptr<Result::GroupStatistics> groupStatistics_ {};
        // 组织同步结果统计
        shared_ptr<Result::OrganizationalUnitStatistics> organizationalUnitStatistics_ {};
        // 用户同步结果统计
        shared_ptr<Result::UserStatistics> userStatistics_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->direction_ == nullptr && this->endTime_ == nullptr && this->result_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->synchronizationJobId_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr && this->triggerType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SynchronizationJobs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline SynchronizationJobs& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline SynchronizationJobs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const SynchronizationJobs::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, SynchronizationJobs::Result) };
      inline SynchronizationJobs::Result getResult() { DARABONBA_PTR_GET(result_, SynchronizationJobs::Result) };
      inline SynchronizationJobs& setResult(const SynchronizationJobs::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline SynchronizationJobs& setResult(SynchronizationJobs::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SynchronizationJobs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SynchronizationJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // synchronizationJobId Field Functions 
      bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
      void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
      inline string getSynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
      inline SynchronizationJobs& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline SynchronizationJobs& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline SynchronizationJobs& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline SynchronizationJobs& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      shared_ptr<string> description_ {};
      // 同步任务方向
      shared_ptr<string> direction_ {};
      // 同步结束时间
      shared_ptr<int64_t> endTime_ {};
      // 同步任务结果
      shared_ptr<SynchronizationJobs::Result> result_ {};
      // 同步开始时间
      shared_ptr<int64_t> startTime_ {};
      // 同步任务状态
      shared_ptr<string> status_ {};
      // 同步任务ID
      shared_ptr<string> synchronizationJobId_ {};
      // 同步目标ID
      shared_ptr<string> targetId_ {};
      // 同步目标类型
      shared_ptr<string> targetType_ {};
      // 同步触发类型
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->synchronizationJobs_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSynchronizationJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSynchronizationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // synchronizationJobs Field Functions 
    bool hasSynchronizationJobs() const { return this->synchronizationJobs_ != nullptr;};
    void deleteSynchronizationJobs() { this->synchronizationJobs_ = nullptr;};
    inline const vector<ListSynchronizationJobsResponseBody::SynchronizationJobs> & getSynchronizationJobs() const { DARABONBA_PTR_GET_CONST(synchronizationJobs_, vector<ListSynchronizationJobsResponseBody::SynchronizationJobs>) };
    inline vector<ListSynchronizationJobsResponseBody::SynchronizationJobs> getSynchronizationJobs() { DARABONBA_PTR_GET(synchronizationJobs_, vector<ListSynchronizationJobsResponseBody::SynchronizationJobs>) };
    inline ListSynchronizationJobsResponseBody& setSynchronizationJobs(const vector<ListSynchronizationJobsResponseBody::SynchronizationJobs> & synchronizationJobs) { DARABONBA_PTR_SET_VALUE(synchronizationJobs_, synchronizationJobs) };
    inline ListSynchronizationJobsResponseBody& setSynchronizationJobs(vector<ListSynchronizationJobsResponseBody::SynchronizationJobs> && synchronizationJobs) { DARABONBA_PTR_SET_RVALUE(synchronizationJobs_, synchronizationJobs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSynchronizationJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListSynchronizationJobsResponseBody::SynchronizationJobs>> synchronizationJobs_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
