// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAppResponseBody() = default ;
    GetAppResponseBody(const GetAppResponseBody &) = default ;
    GetAppResponseBody(GetAppResponseBody &&) = default ;
    GetAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppResponseBody() = default ;
    GetAppResponseBody& operator=(const GetAppResponseBody &) = default ;
    GetAppResponseBody& operator=(GetAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(EnableLog, enableLog_);
        DARABONBA_PTR_TO_JSON(ExecutorNum, executorNum_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(JobNum, jobNum_);
        DARABONBA_PTR_TO_JSON(LabelRouteStrategy, labelRouteStrategy_);
        DARABONBA_PTR_TO_JSON(Leader, leader_);
        DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
        DARABONBA_PTR_TO_JSON(MaxJobs, maxJobs_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Updater, updater_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(EnableLog, enableLog_);
        DARABONBA_PTR_FROM_JSON(ExecutorNum, executorNum_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(JobNum, jobNum_);
        DARABONBA_PTR_FROM_JSON(LabelRouteStrategy, labelRouteStrategy_);
        DARABONBA_PTR_FROM_JSON(Leader, leader_);
        DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
        DARABONBA_PTR_FROM_JSON(MaxJobs, maxJobs_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Updater, updater_);
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
      virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->appName_ == nullptr && this->appType_ == nullptr && this->creator_ == nullptr && this->enableLog_ == nullptr && this->executorNum_ == nullptr
        && this->id_ == nullptr && this->jobNum_ == nullptr && this->labelRouteStrategy_ == nullptr && this->leader_ == nullptr && this->maxConcurrency_ == nullptr
        && this->maxJobs_ == nullptr && this->title_ == nullptr && this->updater_ == nullptr; };
      // accessToken Field Functions 
      bool hasAccessToken() const { return this->accessToken_ != nullptr;};
      void deleteAccessToken() { this->accessToken_ = nullptr;};
      inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
      inline Data& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline int32_t getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
      inline Data& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // enableLog Field Functions 
      bool hasEnableLog() const { return this->enableLog_ != nullptr;};
      void deleteEnableLog() { this->enableLog_ = nullptr;};
      inline bool getEnableLog() const { DARABONBA_PTR_GET_DEFAULT(enableLog_, false) };
      inline Data& setEnableLog(bool enableLog) { DARABONBA_PTR_SET_VALUE(enableLog_, enableLog) };


      // executorNum Field Functions 
      bool hasExecutorNum() const { return this->executorNum_ != nullptr;};
      void deleteExecutorNum() { this->executorNum_ = nullptr;};
      inline int64_t getExecutorNum() const { DARABONBA_PTR_GET_DEFAULT(executorNum_, 0L) };
      inline Data& setExecutorNum(int64_t executorNum) { DARABONBA_PTR_SET_VALUE(executorNum_, executorNum) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jobNum Field Functions 
      bool hasJobNum() const { return this->jobNum_ != nullptr;};
      void deleteJobNum() { this->jobNum_ = nullptr;};
      inline int32_t getJobNum() const { DARABONBA_PTR_GET_DEFAULT(jobNum_, 0) };
      inline Data& setJobNum(int32_t jobNum) { DARABONBA_PTR_SET_VALUE(jobNum_, jobNum) };


      // labelRouteStrategy Field Functions 
      bool hasLabelRouteStrategy() const { return this->labelRouteStrategy_ != nullptr;};
      void deleteLabelRouteStrategy() { this->labelRouteStrategy_ = nullptr;};
      inline int32_t getLabelRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(labelRouteStrategy_, 0) };
      inline Data& setLabelRouteStrategy(int32_t labelRouteStrategy) { DARABONBA_PTR_SET_VALUE(labelRouteStrategy_, labelRouteStrategy) };


      // leader Field Functions 
      bool hasLeader() const { return this->leader_ != nullptr;};
      void deleteLeader() { this->leader_ = nullptr;};
      inline string getLeader() const { DARABONBA_PTR_GET_DEFAULT(leader_, "") };
      inline Data& setLeader(string leader) { DARABONBA_PTR_SET_VALUE(leader_, leader) };


      // maxConcurrency Field Functions 
      bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
      void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
      inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
      inline Data& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


      // maxJobs Field Functions 
      bool hasMaxJobs() const { return this->maxJobs_ != nullptr;};
      void deleteMaxJobs() { this->maxJobs_ = nullptr;};
      inline int32_t getMaxJobs() const { DARABONBA_PTR_GET_DEFAULT(maxJobs_, 0) };
      inline Data& setMaxJobs(int32_t maxJobs) { DARABONBA_PTR_SET_VALUE(maxJobs_, maxJobs) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updater Field Functions 
      bool hasUpdater() const { return this->updater_ != nullptr;};
      void deleteUpdater() { this->updater_ = nullptr;};
      inline string getUpdater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
      inline Data& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


    protected:
      // AccessToken。
      shared_ptr<string> accessToken_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<int32_t> appType_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<bool> enableLog_ {};
      shared_ptr<int64_t> executorNum_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int32_t> jobNum_ {};
      shared_ptr<int32_t> labelRouteStrategy_ {};
      shared_ptr<string> leader_ {};
      shared_ptr<int32_t> maxConcurrency_ {};
      shared_ptr<int32_t> maxJobs_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> updater_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAppResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAppResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAppResponseBody::Data) };
    inline GetAppResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAppResponseBody::Data) };
    inline GetAppResponseBody& setData(const GetAppResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAppResponseBody& setData(GetAppResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAppResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<GetAppResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
