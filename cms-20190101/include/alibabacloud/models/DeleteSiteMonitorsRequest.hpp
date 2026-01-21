// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESITEMONITORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESITEMONITORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteSiteMonitorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSiteMonitorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsDeleteAlarms, isDeleteAlarms_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSiteMonitorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDeleteAlarms, isDeleteAlarms_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    DeleteSiteMonitorsRequest() = default ;
    DeleteSiteMonitorsRequest(const DeleteSiteMonitorsRequest &) = default ;
    DeleteSiteMonitorsRequest(DeleteSiteMonitorsRequest &&) = default ;
    DeleteSiteMonitorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSiteMonitorsRequest() = default ;
    DeleteSiteMonitorsRequest& operator=(const DeleteSiteMonitorsRequest &) = default ;
    DeleteSiteMonitorsRequest& operator=(DeleteSiteMonitorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDeleteAlarms_ == nullptr
        && this->regionId_ == nullptr && this->taskIds_ == nullptr; };
    // isDeleteAlarms Field Functions 
    bool hasIsDeleteAlarms() const { return this->isDeleteAlarms_ != nullptr;};
    void deleteIsDeleteAlarms() { this->isDeleteAlarms_ = nullptr;};
    inline bool getIsDeleteAlarms() const { DARABONBA_PTR_GET_DEFAULT(isDeleteAlarms_, false) };
    inline DeleteSiteMonitorsRequest& setIsDeleteAlarms(bool isDeleteAlarms) { DARABONBA_PTR_SET_VALUE(isDeleteAlarms_, isDeleteAlarms) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSiteMonitorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string getTaskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline DeleteSiteMonitorsRequest& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


  protected:
    // Specifies whether to delete the alert rules configured for the site monitoring tasks. Valid values:
    // 
    // *   true (default value)
    // *   false
    shared_ptr<bool> isDeleteAlarms_ {};
    shared_ptr<string> regionId_ {};
    // The IDs of the site monitoring tasks that you want to delete. Separate multiple task IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
