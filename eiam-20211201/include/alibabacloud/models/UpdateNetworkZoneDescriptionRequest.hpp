// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKZONEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKZONEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateNetworkZoneDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkZoneDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkZoneId, networkZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkZoneDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneId, networkZoneId_);
    };
    UpdateNetworkZoneDescriptionRequest() = default ;
    UpdateNetworkZoneDescriptionRequest(const UpdateNetworkZoneDescriptionRequest &) = default ;
    UpdateNetworkZoneDescriptionRequest(UpdateNetworkZoneDescriptionRequest &&) = default ;
    UpdateNetworkZoneDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkZoneDescriptionRequest() = default ;
    UpdateNetworkZoneDescriptionRequest& operator=(const UpdateNetworkZoneDescriptionRequest &) = default ;
    UpdateNetworkZoneDescriptionRequest& operator=(UpdateNetworkZoneDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->description_ == nullptr && return this->instanceId_ == nullptr && return this->networkZoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateNetworkZoneDescriptionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateNetworkZoneDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNetworkZoneDescriptionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkZoneId Field Functions 
    bool hasNetworkZoneId() const { return this->networkZoneId_ != nullptr;};
    void deleteNetworkZoneId() { this->networkZoneId_ = nullptr;};
    inline string networkZoneId() const { DARABONBA_PTR_GET_DEFAULT(networkZoneId_, "") };
    inline UpdateNetworkZoneDescriptionRequest& setNetworkZoneId(string networkZoneId) { DARABONBA_PTR_SET_VALUE(networkZoneId_, networkZoneId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // 网络区域描述
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // IDaaS的网络区域主键id
    // 
    // This parameter is required.
    std::shared_ptr<string> networkZoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
