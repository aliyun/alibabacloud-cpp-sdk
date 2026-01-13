// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListExperimentGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LayerId, layerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeRangeEnd, timeRangeEnd_);
      DARABONBA_PTR_TO_JSON(TimeRangeStart, timeRangeStart_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeRangeEnd, timeRangeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeRangeStart, timeRangeStart_);
    };
    ListExperimentGroupsRequest() = default ;
    ListExperimentGroupsRequest(const ListExperimentGroupsRequest &) = default ;
    ListExperimentGroupsRequest(ListExperimentGroupsRequest &&) = default ;
    ListExperimentGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentGroupsRequest() = default ;
    ListExperimentGroupsRequest& operator=(const ListExperimentGroupsRequest &) = default ;
    ListExperimentGroupsRequest& operator=(ListExperimentGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->layerId_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->timeRangeEnd_ == nullptr && this->timeRangeStart_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListExperimentGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // layerId Field Functions 
    bool hasLayerId() const { return this->layerId_ != nullptr;};
    void deleteLayerId() { this->layerId_ = nullptr;};
    inline string getLayerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
    inline ListExperimentGroupsRequest& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListExperimentGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExperimentGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeRangeEnd Field Functions 
    bool hasTimeRangeEnd() const { return this->timeRangeEnd_ != nullptr;};
    void deleteTimeRangeEnd() { this->timeRangeEnd_ = nullptr;};
    inline string getTimeRangeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeRangeEnd_, "") };
    inline ListExperimentGroupsRequest& setTimeRangeEnd(string timeRangeEnd) { DARABONBA_PTR_SET_VALUE(timeRangeEnd_, timeRangeEnd) };


    // timeRangeStart Field Functions 
    bool hasTimeRangeStart() const { return this->timeRangeStart_ != nullptr;};
    void deleteTimeRangeStart() { this->timeRangeStart_ = nullptr;};
    inline string getTimeRangeStart() const { DARABONBA_PTR_GET_DEFAULT(timeRangeStart_, "") };
    inline ListExperimentGroupsRequest& setTimeRangeStart(string timeRangeStart) { DARABONBA_PTR_SET_VALUE(timeRangeStart_, timeRangeStart) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> layerId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> timeRangeEnd_ {};
    shared_ptr<string> timeRangeStart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
