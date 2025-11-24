// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENAMESPACESCOPESIDECARCONFIGREQUESTSCALEDSIDECARRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_UPDATENAMESPACESCOPESIDECARCONFIGREQUESTSCALEDSIDECARRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerRef, containerRef_);
      DARABONBA_PTR_TO_JSON(ResourceCalculationStrategy, resourceCalculationStrategy_);
      DARABONBA_PTR_TO_JSON(ResourcePercentage, resourcePercentage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerRef, containerRef_);
      DARABONBA_PTR_FROM_JSON(ResourceCalculationStrategy, resourceCalculationStrategy_);
      DARABONBA_PTR_FROM_JSON(ResourcePercentage, resourcePercentage_);
    };
    UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource() = default ;
    UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource(const UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource &) = default ;
    UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource(UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource &&) = default ;
    UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource() = default ;
    UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource& operator=(const UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource &) = default ;
    UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource& operator=(UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerRef_ == nullptr
        && return this->resourceCalculationStrategy_ == nullptr && return this->resourcePercentage_ == nullptr; };
    // containerRef Field Functions 
    bool hasContainerRef() const { return this->containerRef_ != nullptr;};
    void deleteContainerRef() { this->containerRef_ = nullptr;};
    inline string containerRef() const { DARABONBA_PTR_GET_DEFAULT(containerRef_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource& setContainerRef(string containerRef) { DARABONBA_PTR_SET_VALUE(containerRef_, containerRef) };


    // resourceCalculationStrategy Field Functions 
    bool hasResourceCalculationStrategy() const { return this->resourceCalculationStrategy_ != nullptr;};
    void deleteResourceCalculationStrategy() { this->resourceCalculationStrategy_ = nullptr;};
    inline string resourceCalculationStrategy() const { DARABONBA_PTR_GET_DEFAULT(resourceCalculationStrategy_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource& setResourceCalculationStrategy(string resourceCalculationStrategy) { DARABONBA_PTR_SET_VALUE(resourceCalculationStrategy_, resourceCalculationStrategy) };


    // resourcePercentage Field Functions 
    bool hasResourcePercentage() const { return this->resourcePercentage_ != nullptr;};
    void deleteResourcePercentage() { this->resourcePercentage_ = nullptr;};
    inline int32_t resourcePercentage() const { DARABONBA_PTR_GET_DEFAULT(resourcePercentage_, 0) };
    inline UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource& setResourcePercentage(int32_t resourcePercentage) { DARABONBA_PTR_SET_VALUE(resourcePercentage_, resourcePercentage) };


  protected:
    std::shared_ptr<string> containerRef_ = nullptr;
    std::shared_ptr<string> resourceCalculationStrategy_ = nullptr;
    std::shared_ptr<int32_t> resourcePercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
