// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIGSIDECARINJECTOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIGSIDECARINJECTOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector& obj) { 
      DARABONBA_PTR_TO_JSON(AutoInjectionPolicyEnabled, autoInjectionPolicyEnabled_);
      DARABONBA_PTR_TO_JSON(EnableNamespacesByDefault, enableNamespacesByDefault_);
      DARABONBA_PTR_TO_JSON(InitCNIConfiguration, initCNIConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoInjectionPolicyEnabled, autoInjectionPolicyEnabled_);
      DARABONBA_PTR_FROM_JSON(EnableNamespacesByDefault, enableNamespacesByDefault_);
      DARABONBA_PTR_FROM_JSON(InitCNIConfiguration, initCNIConfiguration_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector& operator=(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoInjectionPolicyEnabled_ == nullptr
        && return this->enableNamespacesByDefault_ == nullptr && return this->initCNIConfiguration_ == nullptr; };
    // autoInjectionPolicyEnabled Field Functions 
    bool hasAutoInjectionPolicyEnabled() const { return this->autoInjectionPolicyEnabled_ != nullptr;};
    void deleteAutoInjectionPolicyEnabled() { this->autoInjectionPolicyEnabled_ = nullptr;};
    inline bool autoInjectionPolicyEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoInjectionPolicyEnabled_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector& setAutoInjectionPolicyEnabled(bool autoInjectionPolicyEnabled) { DARABONBA_PTR_SET_VALUE(autoInjectionPolicyEnabled_, autoInjectionPolicyEnabled) };


    // enableNamespacesByDefault Field Functions 
    bool hasEnableNamespacesByDefault() const { return this->enableNamespacesByDefault_ != nullptr;};
    void deleteEnableNamespacesByDefault() { this->enableNamespacesByDefault_ = nullptr;};
    inline bool enableNamespacesByDefault() const { DARABONBA_PTR_GET_DEFAULT(enableNamespacesByDefault_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector& setEnableNamespacesByDefault(bool enableNamespacesByDefault) { DARABONBA_PTR_SET_VALUE(enableNamespacesByDefault_, enableNamespacesByDefault) };


    // initCNIConfiguration Field Functions 
    bool hasInitCNIConfiguration() const { return this->initCNIConfiguration_ != nullptr;};
    void deleteInitCNIConfiguration() { this->initCNIConfiguration_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration & initCNIConfiguration() const { DARABONBA_PTR_GET_CONST(initCNIConfiguration_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration initCNIConfiguration() { DARABONBA_PTR_GET(initCNIConfiguration_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector& setInitCNIConfiguration(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration & initCNIConfiguration) { DARABONBA_PTR_SET_VALUE(initCNIConfiguration_, initCNIConfiguration) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector& setInitCNIConfiguration(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration && initCNIConfiguration) { DARABONBA_PTR_SET_RVALUE(initCNIConfiguration_, initCNIConfiguration) };


  protected:
    // Indicates whether automatic sidecar proxy injection is enabled by using annotations.
    std::shared_ptr<bool> autoInjectionPolicyEnabled_ = nullptr;
    // Indicates whether automatic sidecar proxy injection is enabled for all namespaces. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableNamespacesByDefault_ = nullptr;
    // The initial configurations of Container Network Interface (CNI).
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration> initCNIConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
