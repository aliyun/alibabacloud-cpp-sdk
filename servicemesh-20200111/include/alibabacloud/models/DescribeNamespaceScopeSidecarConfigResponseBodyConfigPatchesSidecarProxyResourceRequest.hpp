// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESSIDECARPROXYRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESSIDECARPROXYRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCPURequest, resourceCPURequest_);
      DARABONBA_PTR_TO_JSON(ResourceMemoryRequest, resourceMemoryRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCPURequest, resourceCPURequest_);
      DARABONBA_PTR_FROM_JSON(ResourceMemoryRequest, resourceMemoryRequest_);
    };
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest &&) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest& operator=(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest& operator=(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest &&) = default ;
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
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest& setResourceCPURequest(string resourceCPURequest) { DARABONBA_PTR_SET_VALUE(resourceCPURequest_, resourceCPURequest) };


    // resourceMemoryRequest Field Functions 
    bool hasResourceMemoryRequest() const { return this->resourceMemoryRequest_ != nullptr;};
    void deleteResourceMemoryRequest() { this->resourceMemoryRequest_ = nullptr;};
    inline string resourceMemoryRequest() const { DARABONBA_PTR_GET_DEFAULT(resourceMemoryRequest_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest& setResourceMemoryRequest(string resourceMemoryRequest) { DARABONBA_PTR_SET_VALUE(resourceMemoryRequest_, resourceMemoryRequest) };


  protected:
    // The minimum number of CPU cores.
    std::shared_ptr<string> resourceCPURequest_ = nullptr;
    // The minimum size of the memory.
    std::shared_ptr<string> resourceMemoryRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
