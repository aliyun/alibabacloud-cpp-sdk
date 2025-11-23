// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSRESPONSEBODYDDLPUBLISHRECORDLISTPUBLISHTASKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSRESPONSEBODYDDLPUBLISHRECORDLISTPUBLISHTASKINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PlanTime, planTime_);
      DARABONBA_PTR_TO_JSON(PublishJobList, publishJobList_);
      DARABONBA_PTR_TO_JSON(PublishStrategy, publishStrategy_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(TaskJobStatus, taskJobStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PlanTime, planTime_);
      DARABONBA_PTR_FROM_JSON(PublishJobList, publishJobList_);
      DARABONBA_PTR_FROM_JSON(PublishStrategy, publishStrategy_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(TaskJobStatus, taskJobStatus_);
    };
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList() = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList(const ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList &) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList(ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList &&) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList() = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& operator=(const ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList &) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& operator=(ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->logic_ == nullptr && return this->planTime_ == nullptr && return this->publishJobList_ == nullptr && return this->publishStrategy_ == nullptr && return this->statusDesc_ == nullptr
        && return this->taskJobStatus_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // planTime Field Functions 
    bool hasPlanTime() const { return this->planTime_ != nullptr;};
    void deletePlanTime() { this->planTime_ = nullptr;};
    inline string planTime() const { DARABONBA_PTR_GET_DEFAULT(planTime_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& setPlanTime(string planTime) { DARABONBA_PTR_SET_VALUE(planTime_, planTime) };


    // publishJobList Field Functions 
    bool hasPublishJobList() const { return this->publishJobList_ != nullptr;};
    void deletePublishJobList() { this->publishJobList_ = nullptr;};
    inline const vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList> & publishJobList() const { DARABONBA_PTR_GET_CONST(publishJobList_, vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList>) };
    inline vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList> publishJobList() { DARABONBA_PTR_GET(publishJobList_, vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList>) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& setPublishJobList(const vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList> & publishJobList) { DARABONBA_PTR_SET_VALUE(publishJobList_, publishJobList) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& setPublishJobList(vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList> && publishJobList) { DARABONBA_PTR_SET_RVALUE(publishJobList_, publishJobList) };


    // publishStrategy Field Functions 
    bool hasPublishStrategy() const { return this->publishStrategy_ != nullptr;};
    void deletePublishStrategy() { this->publishStrategy_ = nullptr;};
    inline string publishStrategy() const { DARABONBA_PTR_GET_DEFAULT(publishStrategy_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& setPublishStrategy(string publishStrategy) { DARABONBA_PTR_SET_VALUE(publishStrategy_, publishStrategy) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // taskJobStatus Field Functions 
    bool hasTaskJobStatus() const { return this->taskJobStatus_ != nullptr;};
    void deleteTaskJobStatus() { this->taskJobStatus_ = nullptr;};
    inline string taskJobStatus() const { DARABONBA_PTR_GET_DEFAULT(taskJobStatus_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList& setTaskJobStatus(string taskJobStatus) { DARABONBA_PTR_SET_VALUE(taskJobStatus_, taskJobStatus) };


  protected:
    // The ID of the database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: the database is not a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The time to publish the ticket.
    std::shared_ptr<string> planTime_ = nullptr;
    // The list of the publishing tasks.
    std::shared_ptr<vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList>> publishJobList_ = nullptr;
    // The publishing policy. Valid values:
    // 
    // *   **IMMEDIATELY**: immediately publishes the ticket.
    // *   **REGULARLY**: publishes the ticket at a scheduled time.
    std::shared_ptr<string> publishStrategy_ = nullptr;
    // The description of the state.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The state of the task.
    std::shared_ptr<string> taskJobStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
