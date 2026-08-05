// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFLINETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFLINETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListOfflineTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfflineTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfflineTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    ListOfflineTaskRequest() = default ;
    ListOfflineTaskRequest(const ListOfflineTaskRequest &) = default ;
    ListOfflineTaskRequest(ListOfflineTaskRequest &&) = default ;
    ListOfflineTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfflineTaskRequest() = default ;
    ListOfflineTaskRequest& operator=(const ListOfflineTaskRequest &) = default ;
    ListOfflineTaskRequest& operator=(ListOfflineTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->taskName_ == nullptr && this->taskStatus_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline ListOfflineTaskRequest& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListOfflineTaskRequest& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOfflineTaskRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOfflineTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOfflineTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListOfflineTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline const vector<string> & getTaskStatus() const { DARABONBA_PTR_GET_CONST(taskStatus_, vector<string>) };
    inline vector<string> getTaskStatus() { DARABONBA_PTR_GET(taskStatus_, vector<string>) };
    inline ListOfflineTaskRequest& setTaskStatus(const vector<string> & taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };
    inline ListOfflineTaskRequest& setTaskStatus(vector<string> && taskStatus) { DARABONBA_PTR_SET_RVALUE(taskStatus_, taskStatus) };


  protected:
    // The list of task labels.
    shared_ptr<vector<string>> labels_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The task name.
    shared_ptr<string> taskName_ {};
    // The task status.
    shared_ptr<vector<string>> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
