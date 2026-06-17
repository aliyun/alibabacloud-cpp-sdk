// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeAlert, includeAlert_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeAlert, includeAlert_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeSiteMonitorAttributeRequest() = default ;
    DescribeSiteMonitorAttributeRequest(const DescribeSiteMonitorAttributeRequest &) = default ;
    DescribeSiteMonitorAttributeRequest(DescribeSiteMonitorAttributeRequest &&) = default ;
    DescribeSiteMonitorAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeRequest() = default ;
    DescribeSiteMonitorAttributeRequest& operator=(const DescribeSiteMonitorAttributeRequest &) = default ;
    DescribeSiteMonitorAttributeRequest& operator=(DescribeSiteMonitorAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeAlert_ == nullptr
        && this->regionId_ == nullptr && this->taskId_ == nullptr; };
    // includeAlert Field Functions 
    bool hasIncludeAlert() const { return this->includeAlert_ != nullptr;};
    void deleteIncludeAlert() { this->includeAlert_ = nullptr;};
    inline bool getIncludeAlert() const { DARABONBA_PTR_GET_DEFAULT(includeAlert_, false) };
    inline DescribeSiteMonitorAttributeRequest& setIncludeAlert(bool includeAlert) { DARABONBA_PTR_SET_VALUE(includeAlert_, includeAlert) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSiteMonitorAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSiteMonitorAttributeRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Specifies whether the returned task details include alert rules.
    // 
    // - true: Alert rules are returned.
    // - false (default): Alert rules are not returned.
    shared_ptr<bool> includeAlert_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the monitoring task.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
