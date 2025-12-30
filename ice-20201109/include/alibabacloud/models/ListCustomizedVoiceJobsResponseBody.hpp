// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICEJOBSRESPONSEBODY_HPP_
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
  class ListCustomizedVoiceJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizedVoiceJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizedVoiceJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCustomizedVoiceJobsResponseBody() = default ;
    ListCustomizedVoiceJobsResponseBody(const ListCustomizedVoiceJobsResponseBody &) = default ;
    ListCustomizedVoiceJobsResponseBody(ListCustomizedVoiceJobsResponseBody &&) = default ;
    ListCustomizedVoiceJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizedVoiceJobsResponseBody() = default ;
    ListCustomizedVoiceJobsResponseBody& operator=(const ListCustomizedVoiceJobsResponseBody &) = default ;
    ListCustomizedVoiceJobsResponseBody& operator=(ListCustomizedVoiceJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomizedVoiceJobList, customizedVoiceJobList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomizedVoiceJobList, customizedVoiceJobList_);
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
      class CustomizedVoiceJobList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomizedVoiceJobList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Gender, gender_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Scenario, scenario_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VoiceDesc, voiceDesc_);
          DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
          DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
        };
        friend void from_json(const Darabonba::Json& j, CustomizedVoiceJobList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Gender, gender_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VoiceDesc, voiceDesc_);
          DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
          DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
        };
        CustomizedVoiceJobList() = default ;
        CustomizedVoiceJobList(const CustomizedVoiceJobList &) = default ;
        CustomizedVoiceJobList(CustomizedVoiceJobList &&) = default ;
        CustomizedVoiceJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomizedVoiceJobList() = default ;
        CustomizedVoiceJobList& operator=(const CustomizedVoiceJobList &) = default ;
        CustomizedVoiceJobList& operator=(CustomizedVoiceJobList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->gender_ == nullptr && this->gmtCreate_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->scenario_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->voiceDesc_ == nullptr && this->voiceId_ == nullptr && this->voiceName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline CustomizedVoiceJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
        inline CustomizedVoiceJobList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline CustomizedVoiceJobList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline CustomizedVoiceJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline CustomizedVoiceJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // scenario Field Functions 
        bool hasScenario() const { return this->scenario_ != nullptr;};
        void deleteScenario() { this->scenario_ = nullptr;};
        inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
        inline CustomizedVoiceJobList& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CustomizedVoiceJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CustomizedVoiceJobList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // voiceDesc Field Functions 
        bool hasVoiceDesc() const { return this->voiceDesc_ != nullptr;};
        void deleteVoiceDesc() { this->voiceDesc_ = nullptr;};
        inline string getVoiceDesc() const { DARABONBA_PTR_GET_DEFAULT(voiceDesc_, "") };
        inline CustomizedVoiceJobList& setVoiceDesc(string voiceDesc) { DARABONBA_PTR_SET_VALUE(voiceDesc_, voiceDesc) };


        // voiceId Field Functions 
        bool hasVoiceId() const { return this->voiceId_ != nullptr;};
        void deleteVoiceId() { this->voiceId_ = nullptr;};
        inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
        inline CustomizedVoiceJobList& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


        // voiceName Field Functions 
        bool hasVoiceName() const { return this->voiceName_ != nullptr;};
        void deleteVoiceName() { this->voiceName_ = nullptr;};
        inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
        inline CustomizedVoiceJobList& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


      protected:
        // *   The time when the job was created.
        // *   The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The gender. Valid values:
        // 
        // *   female
        // *   male
        shared_ptr<string> gender_ {};
        // The time when the job was created.
        shared_ptr<string> gmtCreate_ {};
        // The ID of the human voice cloning job.
        shared_ptr<string> jobId_ {};
        // The returned message.
        shared_ptr<string> message_ {};
        // The scenario. Valid values:
        // 
        // *   story
        // *   interaction
        // *   navigation
        shared_ptr<string> scenario_ {};
        // The job state. Valid values:
        // 
        // *   Initialization
        // *   AudioDetecting
        // *   PreTraining
        // *   Training
        // *   Success
        // *   Fail
        shared_ptr<string> status_ {};
        // *   The voice type. Valid values:
        // 
        //     *   Basic
        //     *   Standard
        shared_ptr<string> type_ {};
        // The voice description.
        // 
        // *   The description can be up to 256 characters in length.
        shared_ptr<string> voiceDesc_ {};
        // The voice ID.
        shared_ptr<string> voiceId_ {};
        // The voice name.
        // 
        // *   The name can be up to 32 characters in length.
        shared_ptr<string> voiceName_ {};
      };

      virtual bool empty() const override { return this->customizedVoiceJobList_ == nullptr
        && this->totalCount_ == nullptr; };
      // customizedVoiceJobList Field Functions 
      bool hasCustomizedVoiceJobList() const { return this->customizedVoiceJobList_ != nullptr;};
      void deleteCustomizedVoiceJobList() { this->customizedVoiceJobList_ = nullptr;};
      inline const vector<Data::CustomizedVoiceJobList> & getCustomizedVoiceJobList() const { DARABONBA_PTR_GET_CONST(customizedVoiceJobList_, vector<Data::CustomizedVoiceJobList>) };
      inline vector<Data::CustomizedVoiceJobList> getCustomizedVoiceJobList() { DARABONBA_PTR_GET(customizedVoiceJobList_, vector<Data::CustomizedVoiceJobList>) };
      inline Data& setCustomizedVoiceJobList(const vector<Data::CustomizedVoiceJobList> & customizedVoiceJobList) { DARABONBA_PTR_SET_VALUE(customizedVoiceJobList_, customizedVoiceJobList) };
      inline Data& setCustomizedVoiceJobList(vector<Data::CustomizedVoiceJobList> && customizedVoiceJobList) { DARABONBA_PTR_SET_RVALUE(customizedVoiceJobList_, customizedVoiceJobList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The queried human voice cloning jobs.
      shared_ptr<vector<Data::CustomizedVoiceJobList>> customizedVoiceJobList_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCustomizedVoiceJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCustomizedVoiceJobsResponseBody::Data) };
    inline ListCustomizedVoiceJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCustomizedVoiceJobsResponseBody::Data) };
    inline ListCustomizedVoiceJobsResponseBody& setData(const ListCustomizedVoiceJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomizedVoiceJobsResponseBody& setData(ListCustomizedVoiceJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomizedVoiceJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomizedVoiceJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListCustomizedVoiceJobsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
