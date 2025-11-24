// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESSIDECARPROXYACKSLORESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESSIDECARPROXYACKSLORESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource& obj) { 
      DARABONBA_PTR_TO_JSON(Limits, limits_);
      DARABONBA_PTR_TO_JSON(Requests, requests_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Limits, limits_);
      DARABONBA_PTR_FROM_JSON(Requests, requests_);
    };
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource &&) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource& operator=(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource& operator=(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limits_ == nullptr
        && return this->requests_ == nullptr; };
    // limits Field Functions 
    bool hasLimits() const { return this->limits_ != nullptr;};
    void deleteLimits() { this->limits_ = nullptr;};
    inline const map<string, string> & limits() const { DARABONBA_PTR_GET_CONST(limits_, map<string, string>) };
    inline map<string, string> limits() { DARABONBA_PTR_GET(limits_, map<string, string>) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource& setLimits(const map<string, string> & limits) { DARABONBA_PTR_SET_VALUE(limits_, limits) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource& setLimits(map<string, string> && limits) { DARABONBA_PTR_SET_RVALUE(limits_, limits) };


    // requests Field Functions 
    bool hasRequests() const { return this->requests_ != nullptr;};
    void deleteRequests() { this->requests_ = nullptr;};
    inline const map<string, string> & requests() const { DARABONBA_PTR_GET_CONST(requests_, map<string, string>) };
    inline map<string, string> requests() { DARABONBA_PTR_GET(requests_, map<string, string>) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource& setRequests(const map<string, string> & requests) { DARABONBA_PTR_SET_VALUE(requests_, requests) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource& setRequests(map<string, string> && requests) { DARABONBA_PTR_SET_RVALUE(requests_, requests) };


  protected:
    // The maximum size of reclaimed ACK resources that are available to the sidecar proxy container. This configuration item indicates the maximum size of resources that are available to the sidecar proxy container in a pod labeled with `koordinator.sh/qosClass`. The object can contain the following two types of keys, which indicate two types of resources:
    // 
    // *   `kubernetes.io/batch-cpu`: CPU resources that can be dynamically overcommitted. Unit: millicore.
    // *   `kubernetes.io/batch-memory`: memory resources that can be dynamically overcommitted.
    std::shared_ptr<map<string, string>> limits_ = nullptr;
    // The minimum size of reclaimed ACK resources that the sidecar proxy container needs to use at runtime. This configuration item indicates the minimum size of reclaimed ACK resources for the sidecar proxy container in a pod labeled with `koordinator.sh/qosClass`. The object can contain the following two types of keys, which indicate two types of resources:
    // 
    // *   `kubernetes.io/batch-cpu`: CPU resources that can be dynamically overcommitted. Unit: millicore.
    // *   `kubernetes.io/batch-memory`: memory resources that can be dynamically overcommitted.
    std::shared_ptr<map<string, string>> requests_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
