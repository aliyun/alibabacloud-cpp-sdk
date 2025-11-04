// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCROBOTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCROBOTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRtcRobotInstanceRequestConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateRtcRobotInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcRobotInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcRobotInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateRtcRobotInstanceRequest() = default ;
    UpdateRtcRobotInstanceRequest(const UpdateRtcRobotInstanceRequest &) = default ;
    UpdateRtcRobotInstanceRequest(UpdateRtcRobotInstanceRequest &&) = default ;
    UpdateRtcRobotInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcRobotInstanceRequest() = default ;
    UpdateRtcRobotInstanceRequest& operator=(const UpdateRtcRobotInstanceRequest &) = default ;
    UpdateRtcRobotInstanceRequest& operator=(UpdateRtcRobotInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->instanceId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const UpdateRtcRobotInstanceRequestConfig & config() const { DARABONBA_PTR_GET_CONST(config_, UpdateRtcRobotInstanceRequestConfig) };
    inline UpdateRtcRobotInstanceRequestConfig config() { DARABONBA_PTR_GET(config_, UpdateRtcRobotInstanceRequestConfig) };
    inline UpdateRtcRobotInstanceRequest& setConfig(const UpdateRtcRobotInstanceRequestConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdateRtcRobotInstanceRequest& setConfig(UpdateRtcRobotInstanceRequestConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRtcRobotInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<UpdateRtcRobotInstanceRequestConfig> config_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
