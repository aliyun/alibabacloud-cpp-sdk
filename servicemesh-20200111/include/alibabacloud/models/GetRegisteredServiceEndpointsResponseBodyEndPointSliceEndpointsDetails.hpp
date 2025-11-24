// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSRESPONSEBODYENDPOINTSLICEENDPOINTSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSRESPONSEBODYENDPOINTSLICEENDPOINTSDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SidecarInjected, sidecarInjected_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SidecarInjected, sidecarInjected_);
    };
    GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails() = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails(const GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails &) = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails(GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails &&) = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails() = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& operator=(const GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails &) = default ;
    GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& operator=(GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->hostname_ == nullptr && return this->podName_ == nullptr && return this->ports_ == nullptr && return this->region_ == nullptr && return this->sidecarInjected_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<int32_t> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<int32_t>) };
    inline vector<int32_t> ports() { DARABONBA_PTR_GET(ports_, vector<int32_t>) };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& setPorts(const vector<int32_t> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& setPorts(vector<int32_t> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sidecarInjected Field Functions 
    bool hasSidecarInjected() const { return this->sidecarInjected_ != nullptr;};
    void deleteSidecarInjected() { this->sidecarInjected_ = nullptr;};
    inline bool sidecarInjected() const { DARABONBA_PTR_GET_DEFAULT(sidecarInjected_, false) };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails& setSidecarInjected(bool sidecarInjected) { DARABONBA_PTR_SET_VALUE(sidecarInjected_, sidecarInjected) };


  protected:
    // The port of the registered service.
    std::shared_ptr<string> address_ = nullptr;
    // The ID of the region in which the registered service resides.
    std::shared_ptr<string> hostname_ = nullptr;
    // The IP address of the registered service.
    std::shared_ptr<string> podName_ = nullptr;
    // The host name of the registered service.
    std::shared_ptr<vector<int32_t>> ports_ = nullptr;
    // Indicates whether sidecar proxies are injected. Valid values:
    // 
    // *   `true`: yes
    // *   `false`: no
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the request.
    std::shared_ptr<bool> sidecarInjected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
