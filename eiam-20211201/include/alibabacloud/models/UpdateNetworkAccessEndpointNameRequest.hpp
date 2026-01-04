// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKACCESSENDPOINTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKACCESSENDPOINTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateNetworkAccessEndpointNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkAccessEndpointNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointName, networkAccessEndpointName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkAccessEndpointNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointName, networkAccessEndpointName_);
    };
    UpdateNetworkAccessEndpointNameRequest() = default ;
    UpdateNetworkAccessEndpointNameRequest(const UpdateNetworkAccessEndpointNameRequest &) = default ;
    UpdateNetworkAccessEndpointNameRequest(UpdateNetworkAccessEndpointNameRequest &&) = default ;
    UpdateNetworkAccessEndpointNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkAccessEndpointNameRequest() = default ;
    UpdateNetworkAccessEndpointNameRequest& operator=(const UpdateNetworkAccessEndpointNameRequest &) = default ;
    UpdateNetworkAccessEndpointNameRequest& operator=(UpdateNetworkAccessEndpointNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->networkAccessEndpointId_ == nullptr && this->networkAccessEndpointName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNetworkAccessEndpointNameRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline UpdateNetworkAccessEndpointNameRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // networkAccessEndpointName Field Functions 
    bool hasNetworkAccessEndpointName() const { return this->networkAccessEndpointName_ != nullptr;};
    void deleteNetworkAccessEndpointName() { this->networkAccessEndpointName_ = nullptr;};
    inline string getNetworkAccessEndpointName() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointName_, "") };
    inline UpdateNetworkAccessEndpointNameRequest& setNetworkAccessEndpointName(string networkAccessEndpointName) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointName_, networkAccessEndpointName) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 专属网络端点ID。
    // 
    // This parameter is required.
    shared_ptr<string> networkAccessEndpointId_ {};
    // 专属网络端点名称。
    // 
    // This parameter is required.
    shared_ptr<string> networkAccessEndpointName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
