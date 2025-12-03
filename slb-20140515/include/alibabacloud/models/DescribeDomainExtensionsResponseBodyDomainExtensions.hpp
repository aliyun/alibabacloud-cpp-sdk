// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINEXTENSIONSRESPONSEBODYDOMAINEXTENSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINEXTENSIONSRESPONSEBODYDOMAINEXTENSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeDomainExtensionsResponseBodyDomainExtensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainExtensionsResponseBodyDomainExtensions& obj) { 
      DARABONBA_PTR_TO_JSON(DomainExtension, domainExtension_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainExtensionsResponseBodyDomainExtensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainExtension, domainExtension_);
    };
    DescribeDomainExtensionsResponseBodyDomainExtensions() = default ;
    DescribeDomainExtensionsResponseBodyDomainExtensions(const DescribeDomainExtensionsResponseBodyDomainExtensions &) = default ;
    DescribeDomainExtensionsResponseBodyDomainExtensions(DescribeDomainExtensionsResponseBodyDomainExtensions &&) = default ;
    DescribeDomainExtensionsResponseBodyDomainExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainExtensionsResponseBodyDomainExtensions() = default ;
    DescribeDomainExtensionsResponseBodyDomainExtensions& operator=(const DescribeDomainExtensionsResponseBodyDomainExtensions &) = default ;
    DescribeDomainExtensionsResponseBodyDomainExtensions& operator=(DescribeDomainExtensionsResponseBodyDomainExtensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainExtension_ == nullptr; };
    // domainExtension Field Functions 
    bool hasDomainExtension() const { return this->domainExtension_ != nullptr;};
    void deleteDomainExtension() { this->domainExtension_ = nullptr;};
    inline const vector<Models::DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension> & domainExtension() const { DARABONBA_PTR_GET_CONST(domainExtension_, vector<Models::DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension>) };
    inline vector<Models::DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension> domainExtension() { DARABONBA_PTR_GET(domainExtension_, vector<Models::DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension>) };
    inline DescribeDomainExtensionsResponseBodyDomainExtensions& setDomainExtension(const vector<Models::DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension> & domainExtension) { DARABONBA_PTR_SET_VALUE(domainExtension_, domainExtension) };
    inline DescribeDomainExtensionsResponseBodyDomainExtensions& setDomainExtension(vector<Models::DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension> && domainExtension) { DARABONBA_PTR_SET_RVALUE(domainExtension_, domainExtension) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainExtensionsResponseBodyDomainExtensionsDomainExtension>> domainExtension_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
