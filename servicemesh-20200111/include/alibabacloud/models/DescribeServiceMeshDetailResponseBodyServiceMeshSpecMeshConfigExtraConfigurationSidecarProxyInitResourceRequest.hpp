// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONSIDECARPROXYINITRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONSIDECARPROXYINITRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCPURequest, resourceCPURequest_);
      DARABONBA_PTR_TO_JSON(ResourceMemoryRequest, resourceMemoryRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCPURequest, resourceCPURequest_);
      DARABONBA_PTR_FROM_JSON(ResourceMemoryRequest, resourceMemoryRequest_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCPURequest_ == nullptr
        && return this->resourceMemoryRequest_ == nullptr; };
    // resourceCPURequest Field Functions 
    bool hasResourceCPURequest() const { return this->resourceCPURequest_ != nullptr;};
    void deleteResourceCPURequest() { this->resourceCPURequest_ = nullptr;};
    inline string resourceCPURequest() const { DARABONBA_PTR_GET_DEFAULT(resourceCPURequest_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest& setResourceCPURequest(string resourceCPURequest) { DARABONBA_PTR_SET_VALUE(resourceCPURequest_, resourceCPURequest) };


    // resourceMemoryRequest Field Functions 
    bool hasResourceMemoryRequest() const { return this->resourceMemoryRequest_ != nullptr;};
    void deleteResourceMemoryRequest() { this->resourceMemoryRequest_ = nullptr;};
    inline string resourceMemoryRequest() const { DARABONBA_PTR_GET_DEFAULT(resourceMemoryRequest_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest& setResourceMemoryRequest(string resourceMemoryRequest) { DARABONBA_PTR_SET_VALUE(resourceMemoryRequest_, resourceMemoryRequest) };


  protected:
    // The number of CPU cores that are requested by the istio-init container.
    std::shared_ptr<string> resourceCPURequest_ = nullptr;
    // The size of the memory that is requested by the istio-init container.
    std::shared_ptr<string> resourceMemoryRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
