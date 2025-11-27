// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class ReleaseInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceDeleteInstance, forceDeleteInstance_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceDeleteInstance, forceDeleteInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ReleaseInstanceRequest() = default ;
    ReleaseInstanceRequest(const ReleaseInstanceRequest &) = default ;
    ReleaseInstanceRequest(ReleaseInstanceRequest &&) = default ;
    ReleaseInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseInstanceRequest() = default ;
    ReleaseInstanceRequest& operator=(const ReleaseInstanceRequest &) = default ;
    ReleaseInstanceRequest& operator=(ReleaseInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forceDeleteInstance_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // forceDeleteInstance Field Functions 
    bool hasForceDeleteInstance() const { return this->forceDeleteInstance_ != nullptr;};
    void deleteForceDeleteInstance() { this->forceDeleteInstance_ = nullptr;};
    inline bool forceDeleteInstance() const { DARABONBA_PTR_GET_DEFAULT(forceDeleteInstance_, false) };
    inline ReleaseInstanceRequest& setForceDeleteInstance(bool forceDeleteInstance) { DARABONBA_PTR_SET_VALUE(forceDeleteInstance_, forceDeleteInstance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReleaseInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReleaseInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to immediately release the physical resources of the instance. Valid values:
    // 
    // *   **true**: The physical resources of the instance are immediately released.
    // *   **false**: The physical resources of the instance are retained for a period of time before they are released.
    std::shared_ptr<bool> forceDeleteInstance_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
