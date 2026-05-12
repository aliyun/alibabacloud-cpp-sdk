// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupHistories, autoProvisioningGroupHistories_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupHistories, autoProvisioningGroupHistories_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoProvisioningGroupHistoryResponseBody() = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(const DescribeAutoProvisioningGroupHistoryResponseBody &) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(DescribeAutoProvisioningGroupHistoryResponseBody &&) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupHistoryResponseBody() = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody& operator=(const DescribeAutoProvisioningGroupHistoryResponseBody &) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody& operator=(DescribeAutoProvisioningGroupHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoProvisioningGroupHistories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoProvisioningGroupHistories& obj) { 
        DARABONBA_PTR_TO_JSON(AutoProvisioningGroupHistory, autoProvisioningGroupHistory_);
      };
      friend void from_json(const Darabonba::Json& j, AutoProvisioningGroupHistories& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupHistory, autoProvisioningGroupHistory_);
      };
      AutoProvisioningGroupHistories() = default ;
      AutoProvisioningGroupHistories(const AutoProvisioningGroupHistories &) = default ;
      AutoProvisioningGroupHistories(AutoProvisioningGroupHistories &&) = default ;
      AutoProvisioningGroupHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoProvisioningGroupHistories() = default ;
      AutoProvisioningGroupHistories& operator=(const AutoProvisioningGroupHistories &) = default ;
      AutoProvisioningGroupHistories& operator=(AutoProvisioningGroupHistories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoProvisioningGroupHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoProvisioningGroupHistory& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityDetails, activityDetails_);
          DARABONBA_PTR_TO_JSON(LastEventTime, lastEventTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, AutoProvisioningGroupHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityDetails, activityDetails_);
          DARABONBA_PTR_FROM_JSON(LastEventTime, lastEventTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        AutoProvisioningGroupHistory() = default ;
        AutoProvisioningGroupHistory(const AutoProvisioningGroupHistory &) = default ;
        AutoProvisioningGroupHistory(AutoProvisioningGroupHistory &&) = default ;
        AutoProvisioningGroupHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoProvisioningGroupHistory() = default ;
        AutoProvisioningGroupHistory& operator=(const AutoProvisioningGroupHistory &) = default ;
        AutoProvisioningGroupHistory& operator=(AutoProvisioningGroupHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ActivityDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ActivityDetails& obj) { 
            DARABONBA_PTR_TO_JSON(ActivityDetail, activityDetail_);
          };
          friend void from_json(const Darabonba::Json& j, ActivityDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(ActivityDetail, activityDetail_);
          };
          ActivityDetails() = default ;
          ActivityDetails(const ActivityDetails &) = default ;
          ActivityDetails(ActivityDetails &&) = default ;
          ActivityDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ActivityDetails() = default ;
          ActivityDetails& operator=(const ActivityDetails &) = default ;
          ActivityDetails& operator=(ActivityDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ActivityDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ActivityDetail& obj) { 
              DARABONBA_PTR_TO_JSON(CreatedInstanceIds, createdInstanceIds_);
              DARABONBA_PTR_TO_JSON(DestroyedInstanceIds, destroyedInstanceIds_);
              DARABONBA_PTR_TO_JSON(Detail, detail_);
              DARABONBA_PTR_TO_JSON(ErrorMessages, errorMessages_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, ActivityDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(CreatedInstanceIds, createdInstanceIds_);
              DARABONBA_PTR_FROM_JSON(DestroyedInstanceIds, destroyedInstanceIds_);
              DARABONBA_PTR_FROM_JSON(Detail, detail_);
              DARABONBA_PTR_FROM_JSON(ErrorMessages, errorMessages_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            ActivityDetail() = default ;
            ActivityDetail(const ActivityDetail &) = default ;
            ActivityDetail(ActivityDetail &&) = default ;
            ActivityDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ActivityDetail() = default ;
            ActivityDetail& operator=(const ActivityDetail &) = default ;
            ActivityDetail& operator=(ActivityDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ErrorMessages : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ErrorMessages& obj) { 
                DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
              };
              friend void from_json(const Darabonba::Json& j, ErrorMessages& obj) { 
                DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
              };
              ErrorMessages() = default ;
              ErrorMessages(const ErrorMessages &) = default ;
              ErrorMessages(ErrorMessages &&) = default ;
              ErrorMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ErrorMessages() = default ;
              ErrorMessages& operator=(const ErrorMessages &) = default ;
              ErrorMessages& operator=(ErrorMessages &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ErrorMessage : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ErrorMessage& obj) { 
                  DARABONBA_PTR_TO_JSON(Code, code_);
                  DARABONBA_PTR_TO_JSON(FailedInstanceIds, failedInstanceIds_);
                  DARABONBA_PTR_TO_JSON(Message, message_);
                };
                friend void from_json(const Darabonba::Json& j, ErrorMessage& obj) { 
                  DARABONBA_PTR_FROM_JSON(Code, code_);
                  DARABONBA_PTR_FROM_JSON(FailedInstanceIds, failedInstanceIds_);
                  DARABONBA_PTR_FROM_JSON(Message, message_);
                };
                ErrorMessage() = default ;
                ErrorMessage(const ErrorMessage &) = default ;
                ErrorMessage(ErrorMessage &&) = default ;
                ErrorMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ErrorMessage() = default ;
                ErrorMessage& operator=(const ErrorMessage &) = default ;
                ErrorMessage& operator=(ErrorMessage &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class FailedInstanceIds : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const FailedInstanceIds& obj) { 
                    DARABONBA_PTR_TO_JSON(FailedInstanceId, failedInstanceId_);
                  };
                  friend void from_json(const Darabonba::Json& j, FailedInstanceIds& obj) { 
                    DARABONBA_PTR_FROM_JSON(FailedInstanceId, failedInstanceId_);
                  };
                  FailedInstanceIds() = default ;
                  FailedInstanceIds(const FailedInstanceIds &) = default ;
                  FailedInstanceIds(FailedInstanceIds &&) = default ;
                  FailedInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~FailedInstanceIds() = default ;
                  FailedInstanceIds& operator=(const FailedInstanceIds &) = default ;
                  FailedInstanceIds& operator=(FailedInstanceIds &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->failedInstanceId_ == nullptr; };
                  // failedInstanceId Field Functions 
                  bool hasFailedInstanceId() const { return this->failedInstanceId_ != nullptr;};
                  void deleteFailedInstanceId() { this->failedInstanceId_ = nullptr;};
                  inline const vector<string> & getFailedInstanceId() const { DARABONBA_PTR_GET_CONST(failedInstanceId_, vector<string>) };
                  inline vector<string> getFailedInstanceId() { DARABONBA_PTR_GET(failedInstanceId_, vector<string>) };
                  inline FailedInstanceIds& setFailedInstanceId(const vector<string> & failedInstanceId) { DARABONBA_PTR_SET_VALUE(failedInstanceId_, failedInstanceId) };
                  inline FailedInstanceIds& setFailedInstanceId(vector<string> && failedInstanceId) { DARABONBA_PTR_SET_RVALUE(failedInstanceId_, failedInstanceId) };


                protected:
                  shared_ptr<vector<string>> failedInstanceId_ {};
                };

                virtual bool empty() const override { return this->code_ == nullptr
        && this->failedInstanceIds_ == nullptr && this->message_ == nullptr; };
                // code Field Functions 
                bool hasCode() const { return this->code_ != nullptr;};
                void deleteCode() { this->code_ = nullptr;};
                inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
                inline ErrorMessage& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


                // failedInstanceIds Field Functions 
                bool hasFailedInstanceIds() const { return this->failedInstanceIds_ != nullptr;};
                void deleteFailedInstanceIds() { this->failedInstanceIds_ = nullptr;};
                inline const ErrorMessage::FailedInstanceIds & getFailedInstanceIds() const { DARABONBA_PTR_GET_CONST(failedInstanceIds_, ErrorMessage::FailedInstanceIds) };
                inline ErrorMessage::FailedInstanceIds getFailedInstanceIds() { DARABONBA_PTR_GET(failedInstanceIds_, ErrorMessage::FailedInstanceIds) };
                inline ErrorMessage& setFailedInstanceIds(const ErrorMessage::FailedInstanceIds & failedInstanceIds) { DARABONBA_PTR_SET_VALUE(failedInstanceIds_, failedInstanceIds) };
                inline ErrorMessage& setFailedInstanceIds(ErrorMessage::FailedInstanceIds && failedInstanceIds) { DARABONBA_PTR_SET_RVALUE(failedInstanceIds_, failedInstanceIds) };


                // message Field Functions 
                bool hasMessage() const { return this->message_ != nullptr;};
                void deleteMessage() { this->message_ = nullptr;};
                inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
                inline ErrorMessage& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


              protected:
                shared_ptr<string> code_ {};
                shared_ptr<ErrorMessage::FailedInstanceIds> failedInstanceIds_ {};
                shared_ptr<string> message_ {};
              };

              virtual bool empty() const override { return this->errorMessage_ == nullptr; };
              // errorMessage Field Functions 
              bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
              void deleteErrorMessage() { this->errorMessage_ = nullptr;};
              inline const vector<ErrorMessages::ErrorMessage> & getErrorMessage() const { DARABONBA_PTR_GET_CONST(errorMessage_, vector<ErrorMessages::ErrorMessage>) };
              inline vector<ErrorMessages::ErrorMessage> getErrorMessage() { DARABONBA_PTR_GET(errorMessage_, vector<ErrorMessages::ErrorMessage>) };
              inline ErrorMessages& setErrorMessage(const vector<ErrorMessages::ErrorMessage> & errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };
              inline ErrorMessages& setErrorMessage(vector<ErrorMessages::ErrorMessage> && errorMessage) { DARABONBA_PTR_SET_RVALUE(errorMessage_, errorMessage) };


            protected:
              shared_ptr<vector<ErrorMessages::ErrorMessage>> errorMessage_ {};
            };

            class DestroyedInstanceIds : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const DestroyedInstanceIds& obj) { 
                DARABONBA_PTR_TO_JSON(DestroyedInstanceId, destroyedInstanceId_);
              };
              friend void from_json(const Darabonba::Json& j, DestroyedInstanceIds& obj) { 
                DARABONBA_PTR_FROM_JSON(DestroyedInstanceId, destroyedInstanceId_);
              };
              DestroyedInstanceIds() = default ;
              DestroyedInstanceIds(const DestroyedInstanceIds &) = default ;
              DestroyedInstanceIds(DestroyedInstanceIds &&) = default ;
              DestroyedInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~DestroyedInstanceIds() = default ;
              DestroyedInstanceIds& operator=(const DestroyedInstanceIds &) = default ;
              DestroyedInstanceIds& operator=(DestroyedInstanceIds &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->destroyedInstanceId_ == nullptr; };
              // destroyedInstanceId Field Functions 
              bool hasDestroyedInstanceId() const { return this->destroyedInstanceId_ != nullptr;};
              void deleteDestroyedInstanceId() { this->destroyedInstanceId_ = nullptr;};
              inline const vector<string> & getDestroyedInstanceId() const { DARABONBA_PTR_GET_CONST(destroyedInstanceId_, vector<string>) };
              inline vector<string> getDestroyedInstanceId() { DARABONBA_PTR_GET(destroyedInstanceId_, vector<string>) };
              inline DestroyedInstanceIds& setDestroyedInstanceId(const vector<string> & destroyedInstanceId) { DARABONBA_PTR_SET_VALUE(destroyedInstanceId_, destroyedInstanceId) };
              inline DestroyedInstanceIds& setDestroyedInstanceId(vector<string> && destroyedInstanceId) { DARABONBA_PTR_SET_RVALUE(destroyedInstanceId_, destroyedInstanceId) };


            protected:
              shared_ptr<vector<string>> destroyedInstanceId_ {};
            };

            class CreatedInstanceIds : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CreatedInstanceIds& obj) { 
                DARABONBA_PTR_TO_JSON(CreatedInstanceId, createdInstanceId_);
              };
              friend void from_json(const Darabonba::Json& j, CreatedInstanceIds& obj) { 
                DARABONBA_PTR_FROM_JSON(CreatedInstanceId, createdInstanceId_);
              };
              CreatedInstanceIds() = default ;
              CreatedInstanceIds(const CreatedInstanceIds &) = default ;
              CreatedInstanceIds(CreatedInstanceIds &&) = default ;
              CreatedInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CreatedInstanceIds() = default ;
              CreatedInstanceIds& operator=(const CreatedInstanceIds &) = default ;
              CreatedInstanceIds& operator=(CreatedInstanceIds &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->createdInstanceId_ == nullptr; };
              // createdInstanceId Field Functions 
              bool hasCreatedInstanceId() const { return this->createdInstanceId_ != nullptr;};
              void deleteCreatedInstanceId() { this->createdInstanceId_ = nullptr;};
              inline const vector<string> & getCreatedInstanceId() const { DARABONBA_PTR_GET_CONST(createdInstanceId_, vector<string>) };
              inline vector<string> getCreatedInstanceId() { DARABONBA_PTR_GET(createdInstanceId_, vector<string>) };
              inline CreatedInstanceIds& setCreatedInstanceId(const vector<string> & createdInstanceId) { DARABONBA_PTR_SET_VALUE(createdInstanceId_, createdInstanceId) };
              inline CreatedInstanceIds& setCreatedInstanceId(vector<string> && createdInstanceId) { DARABONBA_PTR_SET_RVALUE(createdInstanceId_, createdInstanceId) };


            protected:
              shared_ptr<vector<string>> createdInstanceId_ {};
            };

            virtual bool empty() const override { return this->createdInstanceIds_ == nullptr
        && this->destroyedInstanceIds_ == nullptr && this->detail_ == nullptr && this->errorMessages_ == nullptr && this->status_ == nullptr; };
            // createdInstanceIds Field Functions 
            bool hasCreatedInstanceIds() const { return this->createdInstanceIds_ != nullptr;};
            void deleteCreatedInstanceIds() { this->createdInstanceIds_ = nullptr;};
            inline const ActivityDetail::CreatedInstanceIds & getCreatedInstanceIds() const { DARABONBA_PTR_GET_CONST(createdInstanceIds_, ActivityDetail::CreatedInstanceIds) };
            inline ActivityDetail::CreatedInstanceIds getCreatedInstanceIds() { DARABONBA_PTR_GET(createdInstanceIds_, ActivityDetail::CreatedInstanceIds) };
            inline ActivityDetail& setCreatedInstanceIds(const ActivityDetail::CreatedInstanceIds & createdInstanceIds) { DARABONBA_PTR_SET_VALUE(createdInstanceIds_, createdInstanceIds) };
            inline ActivityDetail& setCreatedInstanceIds(ActivityDetail::CreatedInstanceIds && createdInstanceIds) { DARABONBA_PTR_SET_RVALUE(createdInstanceIds_, createdInstanceIds) };


            // destroyedInstanceIds Field Functions 
            bool hasDestroyedInstanceIds() const { return this->destroyedInstanceIds_ != nullptr;};
            void deleteDestroyedInstanceIds() { this->destroyedInstanceIds_ = nullptr;};
            inline const ActivityDetail::DestroyedInstanceIds & getDestroyedInstanceIds() const { DARABONBA_PTR_GET_CONST(destroyedInstanceIds_, ActivityDetail::DestroyedInstanceIds) };
            inline ActivityDetail::DestroyedInstanceIds getDestroyedInstanceIds() { DARABONBA_PTR_GET(destroyedInstanceIds_, ActivityDetail::DestroyedInstanceIds) };
            inline ActivityDetail& setDestroyedInstanceIds(const ActivityDetail::DestroyedInstanceIds & destroyedInstanceIds) { DARABONBA_PTR_SET_VALUE(destroyedInstanceIds_, destroyedInstanceIds) };
            inline ActivityDetail& setDestroyedInstanceIds(ActivityDetail::DestroyedInstanceIds && destroyedInstanceIds) { DARABONBA_PTR_SET_RVALUE(destroyedInstanceIds_, destroyedInstanceIds) };


            // detail Field Functions 
            bool hasDetail() const { return this->detail_ != nullptr;};
            void deleteDetail() { this->detail_ = nullptr;};
            inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
            inline ActivityDetail& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


            // errorMessages Field Functions 
            bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
            void deleteErrorMessages() { this->errorMessages_ = nullptr;};
            inline const ActivityDetail::ErrorMessages & getErrorMessages() const { DARABONBA_PTR_GET_CONST(errorMessages_, ActivityDetail::ErrorMessages) };
            inline ActivityDetail::ErrorMessages getErrorMessages() { DARABONBA_PTR_GET(errorMessages_, ActivityDetail::ErrorMessages) };
            inline ActivityDetail& setErrorMessages(const ActivityDetail::ErrorMessages & errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };
            inline ActivityDetail& setErrorMessages(ActivityDetail::ErrorMessages && errorMessages) { DARABONBA_PTR_SET_RVALUE(errorMessages_, errorMessages) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline ActivityDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            shared_ptr<ActivityDetail::CreatedInstanceIds> createdInstanceIds_ {};
            shared_ptr<ActivityDetail::DestroyedInstanceIds> destroyedInstanceIds_ {};
            shared_ptr<string> detail_ {};
            shared_ptr<ActivityDetail::ErrorMessages> errorMessages_ {};
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->activityDetail_ == nullptr; };
          // activityDetail Field Functions 
          bool hasActivityDetail() const { return this->activityDetail_ != nullptr;};
          void deleteActivityDetail() { this->activityDetail_ = nullptr;};
          inline const vector<ActivityDetails::ActivityDetail> & getActivityDetail() const { DARABONBA_PTR_GET_CONST(activityDetail_, vector<ActivityDetails::ActivityDetail>) };
          inline vector<ActivityDetails::ActivityDetail> getActivityDetail() { DARABONBA_PTR_GET(activityDetail_, vector<ActivityDetails::ActivityDetail>) };
          inline ActivityDetails& setActivityDetail(const vector<ActivityDetails::ActivityDetail> & activityDetail) { DARABONBA_PTR_SET_VALUE(activityDetail_, activityDetail) };
          inline ActivityDetails& setActivityDetail(vector<ActivityDetails::ActivityDetail> && activityDetail) { DARABONBA_PTR_SET_RVALUE(activityDetail_, activityDetail) };


        protected:
          shared_ptr<vector<ActivityDetails::ActivityDetail>> activityDetail_ {};
        };

        virtual bool empty() const override { return this->activityDetails_ == nullptr
        && this->lastEventTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
        // activityDetails Field Functions 
        bool hasActivityDetails() const { return this->activityDetails_ != nullptr;};
        void deleteActivityDetails() { this->activityDetails_ = nullptr;};
        inline const AutoProvisioningGroupHistory::ActivityDetails & getActivityDetails() const { DARABONBA_PTR_GET_CONST(activityDetails_, AutoProvisioningGroupHistory::ActivityDetails) };
        inline AutoProvisioningGroupHistory::ActivityDetails getActivityDetails() { DARABONBA_PTR_GET(activityDetails_, AutoProvisioningGroupHistory::ActivityDetails) };
        inline AutoProvisioningGroupHistory& setActivityDetails(const AutoProvisioningGroupHistory::ActivityDetails & activityDetails) { DARABONBA_PTR_SET_VALUE(activityDetails_, activityDetails) };
        inline AutoProvisioningGroupHistory& setActivityDetails(AutoProvisioningGroupHistory::ActivityDetails && activityDetails) { DARABONBA_PTR_SET_RVALUE(activityDetails_, activityDetails) };


        // lastEventTime Field Functions 
        bool hasLastEventTime() const { return this->lastEventTime_ != nullptr;};
        void deleteLastEventTime() { this->lastEventTime_ = nullptr;};
        inline string getLastEventTime() const { DARABONBA_PTR_GET_DEFAULT(lastEventTime_, "") };
        inline AutoProvisioningGroupHistory& setLastEventTime(string lastEventTime) { DARABONBA_PTR_SET_VALUE(lastEventTime_, lastEventTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline AutoProvisioningGroupHistory& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AutoProvisioningGroupHistory& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline AutoProvisioningGroupHistory& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        shared_ptr<AutoProvisioningGroupHistory::ActivityDetails> activityDetails_ {};
        shared_ptr<string> lastEventTime_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->autoProvisioningGroupHistory_ == nullptr; };
      // autoProvisioningGroupHistory Field Functions 
      bool hasAutoProvisioningGroupHistory() const { return this->autoProvisioningGroupHistory_ != nullptr;};
      void deleteAutoProvisioningGroupHistory() { this->autoProvisioningGroupHistory_ = nullptr;};
      inline const vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory> & getAutoProvisioningGroupHistory() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroupHistory_, vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory>) };
      inline vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory> getAutoProvisioningGroupHistory() { DARABONBA_PTR_GET(autoProvisioningGroupHistory_, vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory>) };
      inline AutoProvisioningGroupHistories& setAutoProvisioningGroupHistory(const vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory> & autoProvisioningGroupHistory) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupHistory_, autoProvisioningGroupHistory) };
      inline AutoProvisioningGroupHistories& setAutoProvisioningGroupHistory(vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory> && autoProvisioningGroupHistory) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroupHistory_, autoProvisioningGroupHistory) };


    protected:
      shared_ptr<vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory>> autoProvisioningGroupHistory_ {};
    };

    virtual bool empty() const override { return this->autoProvisioningGroupHistories_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // autoProvisioningGroupHistories Field Functions 
    bool hasAutoProvisioningGroupHistories() const { return this->autoProvisioningGroupHistories_ != nullptr;};
    void deleteAutoProvisioningGroupHistories() { this->autoProvisioningGroupHistories_ = nullptr;};
    inline const DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories & getAutoProvisioningGroupHistories() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroupHistories_, DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories getAutoProvisioningGroupHistories() { DARABONBA_PTR_GET(autoProvisioningGroupHistories_, DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setAutoProvisioningGroupHistories(const DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories & autoProvisioningGroupHistories) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupHistories_, autoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setAutoProvisioningGroupHistories(DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories && autoProvisioningGroupHistories) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroupHistories_, autoProvisioningGroupHistories) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories> autoProvisioningGroupHistories_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of queried scheduling tasks in the auto provisioning group.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
