// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSPATHSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSPATHSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessPathsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessPathsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessPathsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
    };
    ListNetworkAccessPathsRequest() = default ;
    ListNetworkAccessPathsRequest(const ListNetworkAccessPathsRequest &) = default ;
    ListNetworkAccessPathsRequest(ListNetworkAccessPathsRequest &&) = default ;
    ListNetworkAccessPathsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessPathsRequest() = default ;
    ListNetworkAccessPathsRequest& operator=(const ListNetworkAccessPathsRequest &) = default ;
    ListNetworkAccessPathsRequest& operator=(ListNetworkAccessPathsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->networkAccessEndpointId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNetworkAccessPathsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline ListNetworkAccessPathsRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Network access endpoint ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
