// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEINSTANCEDASCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEINSTANCEDASCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableInstanceDasConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableInstanceDasConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
    };
    friend void from_json(const Darabonba::Json& j, DisableInstanceDasConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
    };
    DisableInstanceDasConfigRequest() = default ;
    DisableInstanceDasConfigRequest(const DisableInstanceDasConfigRequest &) = default ;
    DisableInstanceDasConfigRequest(DisableInstanceDasConfigRequest &&) = default ;
    DisableInstanceDasConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableInstanceDasConfigRequest() = default ;
    DisableInstanceDasConfigRequest& operator=(const DisableInstanceDasConfigRequest &) = default ;
    DisableInstanceDasConfigRequest& operator=(DisableInstanceDasConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engine_ != nullptr
        && this->instanceId_ != nullptr && this->scaleType_ != nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DisableInstanceDasConfigRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableInstanceDasConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline DisableInstanceDasConfigRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


  protected:
    // The database engine. Set the value to Redis.
    // 
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // The database instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of auto scaling. Valid values:
    // 
    // *   **specScale**: The specifications of a database instance are automatically scaled up or down.
    // *   **shardScale**: The number of shards for a database instance is automatically increased or decreased.
    // *   **bandwidthScale**: The bandwidth of a database instance is automatically increased or decreased.
    // 
    // This parameter is required.
    std::shared_ptr<string> scaleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
