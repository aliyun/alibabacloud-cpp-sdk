// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCROBOTINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCROBOTINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateRtcRobotInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcRobotInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, configShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcRobotInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, configShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateRtcRobotInstanceShrinkRequest() = default ;
    UpdateRtcRobotInstanceShrinkRequest(const UpdateRtcRobotInstanceShrinkRequest &) = default ;
    UpdateRtcRobotInstanceShrinkRequest(UpdateRtcRobotInstanceShrinkRequest &&) = default ;
    UpdateRtcRobotInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcRobotInstanceShrinkRequest() = default ;
    UpdateRtcRobotInstanceShrinkRequest& operator=(const UpdateRtcRobotInstanceShrinkRequest &) = default ;
    UpdateRtcRobotInstanceShrinkRequest& operator=(UpdateRtcRobotInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configShrink_ != nullptr
        && this->instanceId_ != nullptr; };
    // configShrink Field Functions 
    bool hasConfigShrink() const { return this->configShrink_ != nullptr;};
    void deleteConfigShrink() { this->configShrink_ = nullptr;};
    inline string configShrink() const { DARABONBA_PTR_GET_DEFAULT(configShrink_, "") };
    inline UpdateRtcRobotInstanceShrinkRequest& setConfigShrink(string configShrink) { DARABONBA_PTR_SET_VALUE(configShrink_, configShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRtcRobotInstanceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> configShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
