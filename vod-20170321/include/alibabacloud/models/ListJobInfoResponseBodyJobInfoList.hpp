// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFORESPONSEBODYJOBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFORESPONSEBODYJOBINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListJobInfoResponseBodyJobInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfoResponseBodyJobInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfoResponseBodyJobInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListJobInfoResponseBodyJobInfoList() = default ;
    ListJobInfoResponseBodyJobInfoList(const ListJobInfoResponseBodyJobInfoList &) = default ;
    ListJobInfoResponseBodyJobInfoList(ListJobInfoResponseBodyJobInfoList &&) = default ;
    ListJobInfoResponseBodyJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfoResponseBodyJobInfoList() = default ;
    ListJobInfoResponseBodyJobInfoList& operator=(const ListJobInfoResponseBodyJobInfoList &) = default ;
    ListJobInfoResponseBodyJobInfoList& operator=(ListJobInfoResponseBodyJobInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeTime_ != nullptr
        && this->createTime_ != nullptr && this->jobId_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline ListJobInfoResponseBodyJobInfoList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListJobInfoResponseBodyJobInfoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobInfoResponseBodyJobInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobInfoResponseBodyJobInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListJobInfoResponseBodyJobInfoList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The time when the task was complete.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the user who submitted the task.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
