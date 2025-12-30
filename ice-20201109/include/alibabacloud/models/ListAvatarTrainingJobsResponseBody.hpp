// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARTRAININGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARTRAININGJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAvatarTrainingJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarTrainingJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarTrainingJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAvatarTrainingJobsResponseBody() = default ;
    ListAvatarTrainingJobsResponseBody(const ListAvatarTrainingJobsResponseBody &) = default ;
    ListAvatarTrainingJobsResponseBody(ListAvatarTrainingJobsResponseBody &&) = default ;
    ListAvatarTrainingJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarTrainingJobsResponseBody() = default ;
    ListAvatarTrainingJobsResponseBody& operator=(const ListAvatarTrainingJobsResponseBody &) = default ;
    ListAvatarTrainingJobsResponseBody& operator=(ListAvatarTrainingJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarTrainingJobList, avatarTrainingJobList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarTrainingJobList, avatarTrainingJobList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class AvatarTrainingJobList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvatarTrainingJobList& obj) { 
          DARABONBA_PTR_TO_JSON(AvatarDescription, avatarDescription_);
          DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
          DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
          DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FirstTrainingTime, firstTrainingTime_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(LastTrainingTime, lastTrainingTime_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Portrait, portrait_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AvatarTrainingJobList& obj) { 
          DARABONBA_PTR_FROM_JSON(AvatarDescription, avatarDescription_);
          DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
          DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
          DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FirstTrainingTime, firstTrainingTime_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(LastTrainingTime, lastTrainingTime_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AvatarTrainingJobList() = default ;
        AvatarTrainingJobList(const AvatarTrainingJobList &) = default ;
        AvatarTrainingJobList(AvatarTrainingJobList &&) = default ;
        AvatarTrainingJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvatarTrainingJobList() = default ;
        AvatarTrainingJobList& operator=(const AvatarTrainingJobList &) = default ;
        AvatarTrainingJobList& operator=(AvatarTrainingJobList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avatarDescription_ == nullptr
        && this->avatarId_ == nullptr && this->avatarName_ == nullptr && this->avatarType_ == nullptr && this->createTime_ == nullptr && this->firstTrainingTime_ == nullptr
        && this->jobId_ == nullptr && this->lastTrainingTime_ == nullptr && this->message_ == nullptr && this->portrait_ == nullptr && this->status_ == nullptr; };
        // avatarDescription Field Functions 
        bool hasAvatarDescription() const { return this->avatarDescription_ != nullptr;};
        void deleteAvatarDescription() { this->avatarDescription_ = nullptr;};
        inline string getAvatarDescription() const { DARABONBA_PTR_GET_DEFAULT(avatarDescription_, "") };
        inline AvatarTrainingJobList& setAvatarDescription(string avatarDescription) { DARABONBA_PTR_SET_VALUE(avatarDescription_, avatarDescription) };


        // avatarId Field Functions 
        bool hasAvatarId() const { return this->avatarId_ != nullptr;};
        void deleteAvatarId() { this->avatarId_ = nullptr;};
        inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
        inline AvatarTrainingJobList& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


        // avatarName Field Functions 
        bool hasAvatarName() const { return this->avatarName_ != nullptr;};
        void deleteAvatarName() { this->avatarName_ = nullptr;};
        inline string getAvatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
        inline AvatarTrainingJobList& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


        // avatarType Field Functions 
        bool hasAvatarType() const { return this->avatarType_ != nullptr;};
        void deleteAvatarType() { this->avatarType_ = nullptr;};
        inline string getAvatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
        inline AvatarTrainingJobList& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AvatarTrainingJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // firstTrainingTime Field Functions 
        bool hasFirstTrainingTime() const { return this->firstTrainingTime_ != nullptr;};
        void deleteFirstTrainingTime() { this->firstTrainingTime_ = nullptr;};
        inline string getFirstTrainingTime() const { DARABONBA_PTR_GET_DEFAULT(firstTrainingTime_, "") };
        inline AvatarTrainingJobList& setFirstTrainingTime(string firstTrainingTime) { DARABONBA_PTR_SET_VALUE(firstTrainingTime_, firstTrainingTime) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline AvatarTrainingJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // lastTrainingTime Field Functions 
        bool hasLastTrainingTime() const { return this->lastTrainingTime_ != nullptr;};
        void deleteLastTrainingTime() { this->lastTrainingTime_ = nullptr;};
        inline string getLastTrainingTime() const { DARABONBA_PTR_GET_DEFAULT(lastTrainingTime_, "") };
        inline AvatarTrainingJobList& setLastTrainingTime(string lastTrainingTime) { DARABONBA_PTR_SET_VALUE(lastTrainingTime_, lastTrainingTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AvatarTrainingJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // portrait Field Functions 
        bool hasPortrait() const { return this->portrait_ != nullptr;};
        void deletePortrait() { this->portrait_ = nullptr;};
        inline string getPortrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
        inline AvatarTrainingJobList& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AvatarTrainingJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The description of the digital human.
        shared_ptr<string> avatarDescription_ {};
        // The ID of the digital human.
        shared_ptr<string> avatarId_ {};
        // The name of the digital human.
        shared_ptr<string> avatarName_ {};
        // The type of the digital human.
        shared_ptr<string> avatarType_ {};
        // *   The time when the job was created.
        // *   The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // *   The time when the first training was initiated.
        // *   The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> firstTrainingTime_ {};
        // The ID of the digital human training job.
        shared_ptr<string> jobId_ {};
        // *   The time when the last training was initiated.
        // *   The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> lastTrainingTime_ {};
        // The status description.
        shared_ptr<string> message_ {};
        // The media asset ID of the portrait image.
        shared_ptr<string> portrait_ {};
        // The state of the digital human training job.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->avatarTrainingJobList_ == nullptr
        && this->totalCount_ == nullptr; };
      // avatarTrainingJobList Field Functions 
      bool hasAvatarTrainingJobList() const { return this->avatarTrainingJobList_ != nullptr;};
      void deleteAvatarTrainingJobList() { this->avatarTrainingJobList_ = nullptr;};
      inline const vector<Data::AvatarTrainingJobList> & getAvatarTrainingJobList() const { DARABONBA_PTR_GET_CONST(avatarTrainingJobList_, vector<Data::AvatarTrainingJobList>) };
      inline vector<Data::AvatarTrainingJobList> getAvatarTrainingJobList() { DARABONBA_PTR_GET(avatarTrainingJobList_, vector<Data::AvatarTrainingJobList>) };
      inline Data& setAvatarTrainingJobList(const vector<Data::AvatarTrainingJobList> & avatarTrainingJobList) { DARABONBA_PTR_SET_VALUE(avatarTrainingJobList_, avatarTrainingJobList) };
      inline Data& setAvatarTrainingJobList(vector<Data::AvatarTrainingJobList> && avatarTrainingJobList) { DARABONBA_PTR_SET_RVALUE(avatarTrainingJobList_, avatarTrainingJobList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of digital human training jobs.
      shared_ptr<vector<Data::AvatarTrainingJobList>> avatarTrainingJobList_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAvatarTrainingJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAvatarTrainingJobsResponseBody::Data) };
    inline ListAvatarTrainingJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAvatarTrainingJobsResponseBody::Data) };
    inline ListAvatarTrainingJobsResponseBody& setData(const ListAvatarTrainingJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAvatarTrainingJobsResponseBody& setData(ListAvatarTrainingJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvatarTrainingJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAvatarTrainingJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListAvatarTrainingJobsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
