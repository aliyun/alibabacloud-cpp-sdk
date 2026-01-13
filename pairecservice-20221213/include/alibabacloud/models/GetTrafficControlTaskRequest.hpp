// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlTargetFilter, controlTargetFilter_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlTargetFilter, controlTargetFilter_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetTrafficControlTaskRequest() = default ;
    GetTrafficControlTaskRequest(const GetTrafficControlTaskRequest &) = default ;
    GetTrafficControlTaskRequest(GetTrafficControlTaskRequest &&) = default ;
    GetTrafficControlTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTaskRequest() = default ;
    GetTrafficControlTaskRequest& operator=(const GetTrafficControlTaskRequest &) = default ;
    GetTrafficControlTaskRequest& operator=(GetTrafficControlTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlTargetFilter_ == nullptr
        && this->environment_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->version_ == nullptr; };
    // controlTargetFilter Field Functions 
    bool hasControlTargetFilter() const { return this->controlTargetFilter_ != nullptr;};
    void deleteControlTargetFilter() { this->controlTargetFilter_ = nullptr;};
    inline string getControlTargetFilter() const { DARABONBA_PTR_GET_DEFAULT(controlTargetFilter_, "") };
    inline GetTrafficControlTaskRequest& setControlTargetFilter(string controlTargetFilter) { DARABONBA_PTR_SET_VALUE(controlTargetFilter_, controlTargetFilter) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline GetTrafficControlTaskRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTrafficControlTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTrafficControlTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetTrafficControlTaskRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> controlTargetFilter_ {};
    shared_ptr<string> environment_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
