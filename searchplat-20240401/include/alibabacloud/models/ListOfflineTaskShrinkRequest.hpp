// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFLINETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFLINETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListOfflineTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfflineTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labels, labelsShrink_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatusShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfflineTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labels, labelsShrink_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatusShrink_);
    };
    ListOfflineTaskShrinkRequest() = default ;
    ListOfflineTaskShrinkRequest(const ListOfflineTaskShrinkRequest &) = default ;
    ListOfflineTaskShrinkRequest(ListOfflineTaskShrinkRequest &&) = default ;
    ListOfflineTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfflineTaskShrinkRequest() = default ;
    ListOfflineTaskShrinkRequest& operator=(const ListOfflineTaskShrinkRequest &) = default ;
    ListOfflineTaskShrinkRequest& operator=(ListOfflineTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelsShrink_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->taskName_ == nullptr && this->taskStatusShrink_ == nullptr; };
    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string getLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline ListOfflineTaskShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOfflineTaskShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOfflineTaskShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOfflineTaskShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListOfflineTaskShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatusShrink Field Functions 
    bool hasTaskStatusShrink() const { return this->taskStatusShrink_ != nullptr;};
    void deleteTaskStatusShrink() { this->taskStatusShrink_ = nullptr;};
    inline string getTaskStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(taskStatusShrink_, "") };
    inline ListOfflineTaskShrinkRequest& setTaskStatusShrink(string taskStatusShrink) { DARABONBA_PTR_SET_VALUE(taskStatusShrink_, taskStatusShrink) };


  protected:
    // The list of task labels.
    shared_ptr<string> labelsShrink_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The task name.
    shared_ptr<string> taskName_ {};
    // The task status.
    shared_ptr<string> taskStatusShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
