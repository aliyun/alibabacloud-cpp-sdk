// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGSIDECARINJECTOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGSIDECARINJECTOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& obj) { 
      DARABONBA_PTR_TO_JSON(AutoInjectionPolicyEnabled, autoInjectionPolicyEnabled_);
      DARABONBA_PTR_TO_JSON(EnableNamespacesByDefault, enableNamespacesByDefault_);
      DARABONBA_PTR_TO_JSON(InitCNIConfiguration, initCNIConfiguration_);
      DARABONBA_PTR_TO_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_TO_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(SidecarInjectorNum, sidecarInjectorNum_);
      DARABONBA_PTR_TO_JSON(SidecarInjectorWebhookAsYaml, sidecarInjectorWebhookAsYaml_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoInjectionPolicyEnabled, autoInjectionPolicyEnabled_);
      DARABONBA_PTR_FROM_JSON(EnableNamespacesByDefault, enableNamespacesByDefault_);
      DARABONBA_PTR_FROM_JSON(InitCNIConfiguration, initCNIConfiguration_);
      DARABONBA_PTR_FROM_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_FROM_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(SidecarInjectorNum, sidecarInjectorNum_);
      DARABONBA_PTR_FROM_JSON(SidecarInjectorWebhookAsYaml, sidecarInjectorWebhookAsYaml_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoInjectionPolicyEnabled_ == nullptr
        && return this->enableNamespacesByDefault_ == nullptr && return this->initCNIConfiguration_ == nullptr && return this->limitCPU_ == nullptr && return this->limitMemory_ == nullptr && return this->requestCPU_ == nullptr
        && return this->requestMemory_ == nullptr && return this->sidecarInjectorNum_ == nullptr && return this->sidecarInjectorWebhookAsYaml_ == nullptr; };
    // autoInjectionPolicyEnabled Field Functions 
    bool hasAutoInjectionPolicyEnabled() const { return this->autoInjectionPolicyEnabled_ != nullptr;};
    void deleteAutoInjectionPolicyEnabled() { this->autoInjectionPolicyEnabled_ = nullptr;};
    inline bool autoInjectionPolicyEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoInjectionPolicyEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setAutoInjectionPolicyEnabled(bool autoInjectionPolicyEnabled) { DARABONBA_PTR_SET_VALUE(autoInjectionPolicyEnabled_, autoInjectionPolicyEnabled) };


    // enableNamespacesByDefault Field Functions 
    bool hasEnableNamespacesByDefault() const { return this->enableNamespacesByDefault_ != nullptr;};
    void deleteEnableNamespacesByDefault() { this->enableNamespacesByDefault_ = nullptr;};
    inline bool enableNamespacesByDefault() const { DARABONBA_PTR_GET_DEFAULT(enableNamespacesByDefault_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setEnableNamespacesByDefault(bool enableNamespacesByDefault) { DARABONBA_PTR_SET_VALUE(enableNamespacesByDefault_, enableNamespacesByDefault) };


    // initCNIConfiguration Field Functions 
    bool hasInitCNIConfiguration() const { return this->initCNIConfiguration_ != nullptr;};
    void deleteInitCNIConfiguration() { this->initCNIConfiguration_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration & initCNIConfiguration() const { DARABONBA_PTR_GET_CONST(initCNIConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration initCNIConfiguration() { DARABONBA_PTR_GET(initCNIConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setInitCNIConfiguration(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration & initCNIConfiguration) { DARABONBA_PTR_SET_VALUE(initCNIConfiguration_, initCNIConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setInitCNIConfiguration(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration && initCNIConfiguration) { DARABONBA_PTR_SET_RVALUE(initCNIConfiguration_, initCNIConfiguration) };


    // limitCPU Field Functions 
    bool hasLimitCPU() const { return this->limitCPU_ != nullptr;};
    void deleteLimitCPU() { this->limitCPU_ = nullptr;};
    inline string limitCPU() const { DARABONBA_PTR_GET_DEFAULT(limitCPU_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setLimitCPU(string limitCPU) { DARABONBA_PTR_SET_VALUE(limitCPU_, limitCPU) };


    // limitMemory Field Functions 
    bool hasLimitMemory() const { return this->limitMemory_ != nullptr;};
    void deleteLimitMemory() { this->limitMemory_ = nullptr;};
    inline string limitMemory() const { DARABONBA_PTR_GET_DEFAULT(limitMemory_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setLimitMemory(string limitMemory) { DARABONBA_PTR_SET_VALUE(limitMemory_, limitMemory) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline string requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setRequestCPU(string requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // sidecarInjectorNum Field Functions 
    bool hasSidecarInjectorNum() const { return this->sidecarInjectorNum_ != nullptr;};
    void deleteSidecarInjectorNum() { this->sidecarInjectorNum_ = nullptr;};
    inline int32_t sidecarInjectorNum() const { DARABONBA_PTR_GET_DEFAULT(sidecarInjectorNum_, 0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setSidecarInjectorNum(int32_t sidecarInjectorNum) { DARABONBA_PTR_SET_VALUE(sidecarInjectorNum_, sidecarInjectorNum) };


    // sidecarInjectorWebhookAsYaml Field Functions 
    bool hasSidecarInjectorWebhookAsYaml() const { return this->sidecarInjectorWebhookAsYaml_ != nullptr;};
    void deleteSidecarInjectorWebhookAsYaml() { this->sidecarInjectorWebhookAsYaml_ = nullptr;};
    inline string sidecarInjectorWebhookAsYaml() const { DARABONBA_PTR_GET_DEFAULT(sidecarInjectorWebhookAsYaml_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector& setSidecarInjectorWebhookAsYaml(string sidecarInjectorWebhookAsYaml) { DARABONBA_PTR_SET_VALUE(sidecarInjectorWebhookAsYaml_, sidecarInjectorWebhookAsYaml) };


  protected:
    // Indicates whether automatic sidecar proxy injection can be enabled by using pod annotations. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> autoInjectionPolicyEnabled_ = nullptr;
    // Indicates whether automatic sidecar proxy injection is enabled for all namespaces. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableNamespacesByDefault_ = nullptr;
    // The configurations of Container Network Interface (CNI).
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration> initCNIConfiguration_ = nullptr;
    // The maximum number of CPU cores that are available to the pod where the sidecar injector resides.
    std::shared_ptr<string> limitCPU_ = nullptr;
    // The maximum size of the memory that is available to the pod where the sidecar injector resides.
    std::shared_ptr<string> limitMemory_ = nullptr;
    // The number of CPU cores that are requested by the pod where the sidecar injector resides.
    std::shared_ptr<string> requestCPU_ = nullptr;
    // The size of the memory that is requested by the pod where the sidecar injector resides.
    std::shared_ptr<string> requestMemory_ = nullptr;
    // The number of component replicas that are used for sidecar proxy injection. Default value: `1`.
    std::shared_ptr<int32_t> sidecarInjectorNum_ = nullptr;
    // Other configurations of automatic sidecar proxy injection, in the YAML format. For more information, see [Enable automatic sidecar proxy injection](https://help.aliyun.com/document_detail/186136.html).
    std::shared_ptr<string> sidecarInjectorWebhookAsYaml_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
