// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERCINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERCINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteRCInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRCInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TerminateSubscription, terminateSubscription_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRCInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TerminateSubscription, terminateSubscription_);
    };
    DeleteRCInstancesRequest() = default ;
    DeleteRCInstancesRequest(const DeleteRCInstancesRequest &) = default ;
    DeleteRCInstancesRequest(DeleteRCInstancesRequest &&) = default ;
    DeleteRCInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRCInstancesRequest() = default ;
    DeleteRCInstancesRequest& operator=(const DeleteRCInstancesRequest &) = default ;
    DeleteRCInstancesRequest& operator=(DeleteRCInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->force_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->terminateSubscription_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteRCInstancesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteRCInstancesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline DeleteRCInstancesRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline DeleteRCInstancesRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRCInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // terminateSubscription Field Functions 
    bool hasTerminateSubscription() const { return this->terminateSubscription_ != nullptr;};
    void deleteTerminateSubscription() { this->terminateSubscription_ = nullptr;};
    inline bool getTerminateSubscription() const { DARABONBA_PTR_GET_DEFAULT(terminateSubscription_, false) };
    inline DeleteRCInstancesRequest& setTerminateSubscription(bool terminateSubscription) { DARABONBA_PTR_SET_VALUE(terminateSubscription_, terminateSubscription) };


  protected:
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, service limits, and insufficient inventory errors.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to forcefully release a running instance. Valid values:
    // 
    // *   **Yes**
    // *   **No** (default)
    shared_ptr<bool> force_ {};
    // The details of the instance.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceId_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // Specifies whether to release an expired subscription instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> terminateSubscription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
