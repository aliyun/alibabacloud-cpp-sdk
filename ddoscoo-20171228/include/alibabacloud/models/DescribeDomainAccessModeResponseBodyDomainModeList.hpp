// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINACCESSMODERESPONSEBODYDOMAINMODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINACCESSMODERESPONSEBODYDOMAINMODELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainAccessModeResponseBodyDomainModeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAccessModeResponseBodyDomainModeList& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAccessModeResponseBodyDomainModeList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeDomainAccessModeResponseBodyDomainModeList() = default ;
    DescribeDomainAccessModeResponseBodyDomainModeList(const DescribeDomainAccessModeResponseBodyDomainModeList &) = default ;
    DescribeDomainAccessModeResponseBodyDomainModeList(DescribeDomainAccessModeResponseBodyDomainModeList &&) = default ;
    DescribeDomainAccessModeResponseBodyDomainModeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAccessModeResponseBodyDomainModeList() = default ;
    DescribeDomainAccessModeResponseBodyDomainModeList& operator=(const DescribeDomainAccessModeResponseBodyDomainModeList &) = default ;
    DescribeDomainAccessModeResponseBodyDomainModeList& operator=(DescribeDomainAccessModeResponseBodyDomainModeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessMode_ != nullptr
        && this->domain_ != nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline int32_t accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, 0) };
    inline DescribeDomainAccessModeResponseBodyDomainModeList& setAccessMode(int32_t accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainAccessModeResponseBodyDomainModeList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    std::shared_ptr<int32_t> accessMode_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
