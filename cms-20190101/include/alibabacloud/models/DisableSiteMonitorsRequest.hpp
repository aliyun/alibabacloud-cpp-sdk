// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESITEMONITORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLESITEMONITORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DisableSiteMonitorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSiteMonitorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSiteMonitorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    DisableSiteMonitorsRequest() = default ;
    DisableSiteMonitorsRequest(const DisableSiteMonitorsRequest &) = default ;
    DisableSiteMonitorsRequest(DisableSiteMonitorsRequest &&) = default ;
    DisableSiteMonitorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSiteMonitorsRequest() = default ;
    DisableSiteMonitorsRequest& operator=(const DisableSiteMonitorsRequest &) = default ;
    DisableSiteMonitorsRequest& operator=(DisableSiteMonitorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->taskIds_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableSiteMonitorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string getTaskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline DisableSiteMonitorsRequest& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


  protected:
    shared_ptr<string> regionId_ {};
    // The ID of the site monitoring task. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
