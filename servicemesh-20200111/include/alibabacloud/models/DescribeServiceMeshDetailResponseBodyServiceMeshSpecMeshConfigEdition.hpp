// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEDITION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition& obj) { 
      DARABONBA_PTR_TO_JSON(IstiodImageTag, istiodImageTag_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProxyImageTag, proxyImageTag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition& obj) { 
      DARABONBA_PTR_FROM_JSON(IstiodImageTag, istiodImageTag_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProxyImageTag, proxyImageTag_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->istiodImageTag_ == nullptr
        && return this->name_ == nullptr && return this->proxyImageTag_ == nullptr; };
    // istiodImageTag Field Functions 
    bool hasIstiodImageTag() const { return this->istiodImageTag_ != nullptr;};
    void deleteIstiodImageTag() { this->istiodImageTag_ = nullptr;};
    inline string istiodImageTag() const { DARABONBA_PTR_GET_DEFAULT(istiodImageTag_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition& setIstiodImageTag(string istiodImageTag) { DARABONBA_PTR_SET_VALUE(istiodImageTag_, istiodImageTag) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // proxyImageTag Field Functions 
    bool hasProxyImageTag() const { return this->proxyImageTag_ != nullptr;};
    void deleteProxyImageTag() { this->proxyImageTag_ = nullptr;};
    inline string proxyImageTag() const { DARABONBA_PTR_GET_DEFAULT(proxyImageTag_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition& setProxyImageTag(string proxyImageTag) { DARABONBA_PTR_SET_VALUE(proxyImageTag_, proxyImageTag) };


  protected:
    // The version of the Istiod image.
    std::shared_ptr<string> istiodImageTag_ = nullptr;
    // The name of the edition.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the Istio Proxy image.
    std::shared_ptr<string> proxyImageTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
