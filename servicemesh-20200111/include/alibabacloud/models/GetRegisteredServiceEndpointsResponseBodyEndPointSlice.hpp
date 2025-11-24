// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSRESPONSEBODYENDPOINTSLICE_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSRESPONSEBODYENDPOINTSLICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetRegisteredServiceEndpointsResponseBodyEndPointSlice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegisteredServiceEndpointsResponseBodyEndPointSlice& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointsDetails, endpointsDetails_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegisteredServiceEndpointsResponseBodyEndPointSlice& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointsDetails, endpointsDetails_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetRegisteredServiceEndpointsResponseBodyEndPointSlice() = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSlice(const GetRegisteredServiceEndpointsResponseBodyEndPointSlice &) = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSlice(GetRegisteredServiceEndpointsResponseBodyEndPointSlice &&) = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSlice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegisteredServiceEndpointsResponseBodyEndPointSlice() = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSlice& operator=(const GetRegisteredServiceEndpointsResponseBodyEndPointSlice &) = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSlice& operator=(GetRegisteredServiceEndpointsResponseBodyEndPointSlice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointsDetails_ == nullptr
        && return this->location_ == nullptr && return this->namespace_ == nullptr && return this->serviceName_ == nullptr; };
    // endpointsDetails Field Functions 
    bool hasEndpointsDetails() const { return this->endpointsDetails_ != nullptr;};
    void deleteEndpointsDetails() { this->endpointsDetails_ = nullptr;};
    inline const vector<Models::GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails> & endpointsDetails() const { DARABONBA_PTR_GET_CONST(endpointsDetails_, vector<Models::GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails>) };
    inline vector<Models::GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails> endpointsDetails() { DARABONBA_PTR_GET(endpointsDetails_, vector<Models::GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails>) };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSlice& setEndpointsDetails(const vector<Models::GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails> & endpointsDetails) { DARABONBA_PTR_SET_VALUE(endpointsDetails_, endpointsDetails) };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSlice& setEndpointsDetails(vector<Models::GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails> && endpointsDetails) { DARABONBA_PTR_SET_RVALUE(endpointsDetails_, endpointsDetails) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSlice& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSlice& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSlice& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The name of the pod.
    std::shared_ptr<vector<Models::GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails>> endpointsDetails_ = nullptr;
    // The details of the endpoint of the registered service.
    std::shared_ptr<string> location_ = nullptr;
    // The location of the registered service. Valid values:
    // 
    // *   `MESH_INTERNAL`: The service is deployed inside the ASM instance.
    // *   `MESH_EXTERNAL`: The service is deployed outside the ASM instance.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
