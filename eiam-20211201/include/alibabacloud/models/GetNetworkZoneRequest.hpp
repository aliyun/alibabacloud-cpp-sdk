// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetNetworkZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkZoneId, networkZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneId, networkZoneId_);
    };
    GetNetworkZoneRequest() = default ;
    GetNetworkZoneRequest(const GetNetworkZoneRequest &) = default ;
    GetNetworkZoneRequest(GetNetworkZoneRequest &&) = default ;
    GetNetworkZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkZoneRequest() = default ;
    GetNetworkZoneRequest& operator=(const GetNetworkZoneRequest &) = default ;
    GetNetworkZoneRequest& operator=(GetNetworkZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->networkZoneId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNetworkZoneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkZoneId Field Functions 
    bool hasNetworkZoneId() const { return this->networkZoneId_ != nullptr;};
    void deleteNetworkZoneId() { this->networkZoneId_ = nullptr;};
    inline string getNetworkZoneId() const { DARABONBA_PTR_GET_DEFAULT(networkZoneId_, "") };
    inline GetNetworkZoneRequest& setNetworkZoneId(string networkZoneId) { DARABONBA_PTR_SET_VALUE(networkZoneId_, networkZoneId) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // IDaaS的网络区域主键id
    // 
    // This parameter is required.
    shared_ptr<string> networkZoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
