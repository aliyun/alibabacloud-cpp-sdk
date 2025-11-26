// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNLOADTASKSRESPONSEBODYDOWNLOADTASKSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNLOADTASKSRESPONSEBODYDOWNLOADTASKSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListDownloadTasksResponseBodyDownloadTasksList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownloadTasksResponseBodyDownloadTasksList& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadTaskFiles, downloadTaskFiles_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownloadTasksResponseBodyDownloadTasksList& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadTaskFiles, downloadTaskFiles_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListDownloadTasksResponseBodyDownloadTasksList() = default ;
    ListDownloadTasksResponseBodyDownloadTasksList(const ListDownloadTasksResponseBodyDownloadTasksList &) = default ;
    ListDownloadTasksResponseBodyDownloadTasksList(ListDownloadTasksResponseBodyDownloadTasksList &&) = default ;
    ListDownloadTasksResponseBodyDownloadTasksList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownloadTasksResponseBodyDownloadTasksList() = default ;
    ListDownloadTasksResponseBodyDownloadTasksList& operator=(const ListDownloadTasksResponseBodyDownloadTasksList &) = default ;
    ListDownloadTasksResponseBodyDownloadTasksList& operator=(ListDownloadTasksResponseBodyDownloadTasksList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadTaskFiles_ == nullptr
        && return this->expireTime_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->title_ == nullptr; };
    // downloadTaskFiles Field Functions 
    bool hasDownloadTaskFiles() const { return this->downloadTaskFiles_ != nullptr;};
    void deleteDownloadTaskFiles() { this->downloadTaskFiles_ = nullptr;};
    inline const vector<Models::ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles> & downloadTaskFiles() const { DARABONBA_PTR_GET_CONST(downloadTaskFiles_, vector<Models::ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles>) };
    inline vector<Models::ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles> downloadTaskFiles() { DARABONBA_PTR_GET(downloadTaskFiles_, vector<Models::ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles>) };
    inline ListDownloadTasksResponseBodyDownloadTasksList& setDownloadTaskFiles(const vector<Models::ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles> & downloadTaskFiles) { DARABONBA_PTR_SET_VALUE(downloadTaskFiles_, downloadTaskFiles) };
    inline ListDownloadTasksResponseBodyDownloadTasksList& setDownloadTaskFiles(vector<Models::ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles> && downloadTaskFiles) { DARABONBA_PTR_SET_RVALUE(downloadTaskFiles_, downloadTaskFiles) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ListDownloadTasksResponseBodyDownloadTasksList& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDownloadTasksResponseBodyDownloadTasksList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListDownloadTasksResponseBodyDownloadTasksList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDownloadTasksResponseBodyDownloadTasksList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles>> downloadTaskFiles_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
