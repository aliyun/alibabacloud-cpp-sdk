// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEVERSIONRESPONSEBODYVERSION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEVERSIONRESPONSEBODYVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeUpgradeVersionResponseBodyVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeVersionResponseBodyVersion& obj) { 
      DARABONBA_PTR_TO_JSON(IstioOperatorVersion, istioOperatorVersion_);
      DARABONBA_PTR_TO_JSON(IstioVersion, istioVersion_);
      DARABONBA_PTR_TO_JSON(KubernetesVersion, kubernetesVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeVersionResponseBodyVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(IstioOperatorVersion, istioOperatorVersion_);
      DARABONBA_PTR_FROM_JSON(IstioVersion, istioVersion_);
      DARABONBA_PTR_FROM_JSON(KubernetesVersion, kubernetesVersion_);
    };
    DescribeUpgradeVersionResponseBodyVersion() = default ;
    DescribeUpgradeVersionResponseBodyVersion(const DescribeUpgradeVersionResponseBodyVersion &) = default ;
    DescribeUpgradeVersionResponseBodyVersion(DescribeUpgradeVersionResponseBodyVersion &&) = default ;
    DescribeUpgradeVersionResponseBodyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeVersionResponseBodyVersion() = default ;
    DescribeUpgradeVersionResponseBodyVersion& operator=(const DescribeUpgradeVersionResponseBodyVersion &) = default ;
    DescribeUpgradeVersionResponseBodyVersion& operator=(DescribeUpgradeVersionResponseBodyVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->istioOperatorVersion_ == nullptr
        && return this->istioVersion_ == nullptr && return this->kubernetesVersion_ == nullptr; };
    // istioOperatorVersion Field Functions 
    bool hasIstioOperatorVersion() const { return this->istioOperatorVersion_ != nullptr;};
    void deleteIstioOperatorVersion() { this->istioOperatorVersion_ = nullptr;};
    inline string istioOperatorVersion() const { DARABONBA_PTR_GET_DEFAULT(istioOperatorVersion_, "") };
    inline DescribeUpgradeVersionResponseBodyVersion& setIstioOperatorVersion(string istioOperatorVersion) { DARABONBA_PTR_SET_VALUE(istioOperatorVersion_, istioOperatorVersion) };


    // istioVersion Field Functions 
    bool hasIstioVersion() const { return this->istioVersion_ != nullptr;};
    void deleteIstioVersion() { this->istioVersion_ = nullptr;};
    inline string istioVersion() const { DARABONBA_PTR_GET_DEFAULT(istioVersion_, "") };
    inline DescribeUpgradeVersionResponseBodyVersion& setIstioVersion(string istioVersion) { DARABONBA_PTR_SET_VALUE(istioVersion_, istioVersion) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string kubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline DescribeUpgradeVersionResponseBodyVersion& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


  protected:
    // The version of the ASM instance.
    std::shared_ptr<string> istioOperatorVersion_ = nullptr;
    // The Istio version.
    std::shared_ptr<string> istioVersion_ = nullptr;
    // The Kubernetes version.
    std::shared_ptr<string> kubernetesVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
