// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESSIDECARPROXYRESOURCELIMIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESSIDECARPROXYRESOURCELIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCPULimit, resourceCPULimit_);
      DARABONBA_PTR_TO_JSON(ResourceMemoryLimit, resourceMemoryLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCPULimit, resourceCPULimit_);
      DARABONBA_PTR_FROM_JSON(ResourceMemoryLimit, resourceMemoryLimit_);
    };
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit &&) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit& operator=(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit& operator=(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCPULimit_ == nullptr
        && return this->resourceMemoryLimit_ == nullptr; };
    // resourceCPULimit Field Functions 
    bool hasResourceCPULimit() const { return this->resourceCPULimit_ != nullptr;};
    void deleteResourceCPULimit() { this->resourceCPULimit_ = nullptr;};
    inline string resourceCPULimit() const { DARABONBA_PTR_GET_DEFAULT(resourceCPULimit_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit& setResourceCPULimit(string resourceCPULimit) { DARABONBA_PTR_SET_VALUE(resourceCPULimit_, resourceCPULimit) };


    // resourceMemoryLimit Field Functions 
    bool hasResourceMemoryLimit() const { return this->resourceMemoryLimit_ != nullptr;};
    void deleteResourceMemoryLimit() { this->resourceMemoryLimit_ = nullptr;};
    inline string resourceMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(resourceMemoryLimit_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit& setResourceMemoryLimit(string resourceMemoryLimit) { DARABONBA_PTR_SET_VALUE(resourceMemoryLimit_, resourceMemoryLimit) };


  protected:
    // The maximum number of CPU cores.
    std::shared_ptr<string> resourceCPULimit_ = nullptr;
    // The maximum size of the memory.
    std::shared_ptr<string> resourceMemoryLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
