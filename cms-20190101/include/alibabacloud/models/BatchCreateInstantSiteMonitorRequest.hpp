// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEINSTANTSITEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEINSTANTSITEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateInstantSiteMonitorRequestTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class BatchCreateInstantSiteMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateInstantSiteMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateInstantSiteMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    BatchCreateInstantSiteMonitorRequest() = default ;
    BatchCreateInstantSiteMonitorRequest(const BatchCreateInstantSiteMonitorRequest &) = default ;
    BatchCreateInstantSiteMonitorRequest(BatchCreateInstantSiteMonitorRequest &&) = default ;
    BatchCreateInstantSiteMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateInstantSiteMonitorRequest() = default ;
    BatchCreateInstantSiteMonitorRequest& operator=(const BatchCreateInstantSiteMonitorRequest &) = default ;
    BatchCreateInstantSiteMonitorRequest& operator=(BatchCreateInstantSiteMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->taskList_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchCreateInstantSiteMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<BatchCreateInstantSiteMonitorRequestTaskList> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<BatchCreateInstantSiteMonitorRequestTaskList>) };
    inline vector<BatchCreateInstantSiteMonitorRequestTaskList> taskList() { DARABONBA_PTR_GET(taskList_, vector<BatchCreateInstantSiteMonitorRequestTaskList>) };
    inline BatchCreateInstantSiteMonitorRequest& setTaskList(const vector<BatchCreateInstantSiteMonitorRequestTaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline BatchCreateInstantSiteMonitorRequest& setTaskList(vector<BatchCreateInstantSiteMonitorRequestTaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The site monitoring tasks.
    // 
    // >  You must create at least one site monitoring task. You must specify all of the `Address`, `TaskName`, and `TaskType` parameters in each request.
    // 
    // This parameter is required.
    std::shared_ptr<vector<BatchCreateInstantSiteMonitorRequestTaskList>> taskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
