// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEADAUTHSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEADAUTHSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceADAuthServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceADAuthServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserSourceId, userSourceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceADAuthServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserSourceId, userSourceId_);
    };
    GetInstanceADAuthServerRequest() = default ;
    GetInstanceADAuthServerRequest(const GetInstanceADAuthServerRequest &) = default ;
    GetInstanceADAuthServerRequest(GetInstanceADAuthServerRequest &&) = default ;
    GetInstanceADAuthServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceADAuthServerRequest() = default ;
    GetInstanceADAuthServerRequest& operator=(const GetInstanceADAuthServerRequest &) = default ;
    GetInstanceADAuthServerRequest& operator=(GetInstanceADAuthServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->userSourceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceADAuthServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceADAuthServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userSourceId Field Functions 
    bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
    void deleteUserSourceId() { this->userSourceId_ = nullptr;};
    inline string getUserSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
    inline GetInstanceADAuthServerRequest& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


  protected:
    // The ID of the Bastionhost instance.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the Bastionhost instance.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    shared_ptr<string> userSourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
