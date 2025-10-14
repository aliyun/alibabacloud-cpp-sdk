// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHNETWORKINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHNETWORKINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DetachNetworkInterfaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
    };
    DetachNetworkInterfaceRequest() = default ;
    DetachNetworkInterfaceRequest(const DetachNetworkInterfaceRequest &) = default ;
    DetachNetworkInterfaceRequest(DetachNetworkInterfaceRequest &&) = default ;
    DetachNetworkInterfaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachNetworkInterfaceRequest() = default ;
    DetachNetworkInterfaceRequest& operator=(const DetachNetworkInterfaceRequest &) = default ;
    DetachNetworkInterfaceRequest& operator=(DetachNetworkInterfaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceId_ == nullptr; };
    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DetachNetworkInterfaceRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


  protected:
    // The ID of the ENI.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
