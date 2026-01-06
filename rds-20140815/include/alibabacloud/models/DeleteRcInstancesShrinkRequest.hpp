// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERCINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERCINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteRCInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRCInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceIdShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TerminateSubscription, terminateSubscription_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRCInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceIdShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TerminateSubscription, terminateSubscription_);
    };
    DeleteRCInstancesShrinkRequest() = default ;
    DeleteRCInstancesShrinkRequest(const DeleteRCInstancesShrinkRequest &) = default ;
    DeleteRCInstancesShrinkRequest(DeleteRCInstancesShrinkRequest &&) = default ;
    DeleteRCInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRCInstancesShrinkRequest() = default ;
    DeleteRCInstancesShrinkRequest& operator=(const DeleteRCInstancesShrinkRequest &) = default ;
    DeleteRCInstancesShrinkRequest& operator=(DeleteRCInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->force_ == nullptr && this->instanceIdShrink_ == nullptr && this->regionId_ == nullptr && this->terminateSubscription_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteRCInstancesShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteRCInstancesShrinkRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceIdShrink Field Functions 
    bool hasInstanceIdShrink() const { return this->instanceIdShrink_ != nullptr;};
    void deleteInstanceIdShrink() { this->instanceIdShrink_ = nullptr;};
    inline string getInstanceIdShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdShrink_, "") };
    inline DeleteRCInstancesShrinkRequest& setInstanceIdShrink(string instanceIdShrink) { DARABONBA_PTR_SET_VALUE(instanceIdShrink_, instanceIdShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRCInstancesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // terminateSubscription Field Functions 
    bool hasTerminateSubscription() const { return this->terminateSubscription_ != nullptr;};
    void deleteTerminateSubscription() { this->terminateSubscription_ = nullptr;};
    inline bool getTerminateSubscription() const { DARABONBA_PTR_GET_DEFAULT(terminateSubscription_, false) };
    inline DeleteRCInstancesShrinkRequest& setTerminateSubscription(bool terminateSubscription) { DARABONBA_PTR_SET_VALUE(terminateSubscription_, terminateSubscription) };


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
    shared_ptr<string> instanceIdShrink_ {};
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
