// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSRESPONSEBODYSERVICEENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSRESPONSEBODYSERVICEENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetRegisteredServiceEndpointsResponseBodyServiceEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegisteredServiceEndpointsResponseBodyServiceEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegisteredServiceEndpointsResponseBodyServiceEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    GetRegisteredServiceEndpointsResponseBodyServiceEndpoints() = default ;
    GetRegisteredServiceEndpointsResponseBodyServiceEndpoints(const GetRegisteredServiceEndpointsResponseBodyServiceEndpoints &) = default ;
    GetRegisteredServiceEndpointsResponseBodyServiceEndpoints(GetRegisteredServiceEndpointsResponseBodyServiceEndpoints &&) = default ;
    GetRegisteredServiceEndpointsResponseBodyServiceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegisteredServiceEndpointsResponseBodyServiceEndpoints() = default ;
    GetRegisteredServiceEndpointsResponseBodyServiceEndpoints& operator=(const GetRegisteredServiceEndpointsResponseBodyServiceEndpoints &) = default ;
    GetRegisteredServiceEndpointsResponseBodyServiceEndpoints& operator=(GetRegisteredServiceEndpointsResponseBodyServiceEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->clusterId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyServiceEndpoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyServiceEndpoints& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The ID of the cluster on the data plane.
    std::shared_ptr<string> address_ = nullptr;
    // The details of the endpoints of the registered service.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
