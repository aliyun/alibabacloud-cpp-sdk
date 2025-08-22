// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListAppsResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsResponseBodyDataRecords& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAppsResponseBodyDataRecords& obj) { 
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
    ListAppsResponseBodyDataRecords() = default ;
    ListAppsResponseBodyDataRecords(const ListAppsResponseBodyDataRecords &) = default ;
    ListAppsResponseBodyDataRecords(ListAppsResponseBodyDataRecords &&) = default ;
    ListAppsResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsResponseBodyDataRecords() = default ;
    ListAppsResponseBodyDataRecords& operator=(const ListAppsResponseBodyDataRecords &) = default ;
    ListAppsResponseBodyDataRecords& operator=(ListAppsResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->creator_ != nullptr && this->enableLog_ != nullptr && this->executorNum_ != nullptr
        && this->id_ != nullptr && this->jobNum_ != nullptr && this->labelRouteStrategy_ != nullptr && this->leader_ != nullptr && this->maxConcurrency_ != nullptr
        && this->maxJobs_ != nullptr && this->title_ != nullptr && this->updater_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListAppsResponseBodyDataRecords& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppsResponseBodyDataRecords& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline ListAppsResponseBodyDataRecords& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListAppsResponseBodyDataRecords& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // enableLog Field Functions 
    bool hasEnableLog() const { return this->enableLog_ != nullptr;};
    void deleteEnableLog() { this->enableLog_ = nullptr;};
    inline bool enableLog() const { DARABONBA_PTR_GET_DEFAULT(enableLog_, false) };
    inline ListAppsResponseBodyDataRecords& setEnableLog(bool enableLog) { DARABONBA_PTR_SET_VALUE(enableLog_, enableLog) };


    // executorNum Field Functions 
    bool hasExecutorNum() const { return this->executorNum_ != nullptr;};
    void deleteExecutorNum() { this->executorNum_ = nullptr;};
    inline int64_t executorNum() const { DARABONBA_PTR_GET_DEFAULT(executorNum_, 0L) };
    inline ListAppsResponseBodyDataRecords& setExecutorNum(int64_t executorNum) { DARABONBA_PTR_SET_VALUE(executorNum_, executorNum) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListAppsResponseBodyDataRecords& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobNum Field Functions 
    bool hasJobNum() const { return this->jobNum_ != nullptr;};
    void deleteJobNum() { this->jobNum_ = nullptr;};
    inline int32_t jobNum() const { DARABONBA_PTR_GET_DEFAULT(jobNum_, 0) };
    inline ListAppsResponseBodyDataRecords& setJobNum(int32_t jobNum) { DARABONBA_PTR_SET_VALUE(jobNum_, jobNum) };


    // labelRouteStrategy Field Functions 
    bool hasLabelRouteStrategy() const { return this->labelRouteStrategy_ != nullptr;};
    void deleteLabelRouteStrategy() { this->labelRouteStrategy_ = nullptr;};
    inline int32_t labelRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(labelRouteStrategy_, 0) };
    inline ListAppsResponseBodyDataRecords& setLabelRouteStrategy(int32_t labelRouteStrategy) { DARABONBA_PTR_SET_VALUE(labelRouteStrategy_, labelRouteStrategy) };


    // leader Field Functions 
    bool hasLeader() const { return this->leader_ != nullptr;};
    void deleteLeader() { this->leader_ = nullptr;};
    inline string leader() const { DARABONBA_PTR_GET_DEFAULT(leader_, "") };
    inline ListAppsResponseBodyDataRecords& setLeader(string leader) { DARABONBA_PTR_SET_VALUE(leader_, leader) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline ListAppsResponseBodyDataRecords& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // maxJobs Field Functions 
    bool hasMaxJobs() const { return this->maxJobs_ != nullptr;};
    void deleteMaxJobs() { this->maxJobs_ = nullptr;};
    inline int32_t maxJobs() const { DARABONBA_PTR_GET_DEFAULT(maxJobs_, 0) };
    inline ListAppsResponseBodyDataRecords& setMaxJobs(int32_t maxJobs) { DARABONBA_PTR_SET_VALUE(maxJobs_, maxJobs) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListAppsResponseBodyDataRecords& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline string updater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
    inline ListAppsResponseBodyDataRecords& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


  protected:
    // AccessToken
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<bool> enableLog_ = nullptr;
    std::shared_ptr<int64_t> executorNum_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> jobNum_ = nullptr;
    std::shared_ptr<int32_t> labelRouteStrategy_ = nullptr;
    std::shared_ptr<string> leader_ = nullptr;
    std::shared_ptr<int32_t> maxConcurrency_ = nullptr;
    std::shared_ptr<int32_t> maxJobs_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updater_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
