// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINDETAILRESPONSEBODYDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINDETAILRESPONSEBODYDOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDomainDetailResponseBodyDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDomainDetailResponseBodyDomain& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScenes, defenseScenes_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDomainDetailResponseBodyDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScenes, defenseScenes_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeDcdnWafDomainDetailResponseBodyDomain() = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomain(const DescribeDcdnWafDomainDetailResponseBodyDomain &) = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomain(DescribeDcdnWafDomainDetailResponseBodyDomain &&) = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDomainDetailResponseBodyDomain() = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomain& operator=(const DescribeDcdnWafDomainDetailResponseBodyDomain &) = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomain& operator=(DescribeDcdnWafDomainDetailResponseBodyDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScenes_ != nullptr
        && this->domainName_ != nullptr; };
    // defenseScenes Field Functions 
    bool hasDefenseScenes() const { return this->defenseScenes_ != nullptr;};
    void deleteDefenseScenes() { this->defenseScenes_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes> & defenseScenes() const { DARABONBA_PTR_GET_CONST(defenseScenes_, vector<Models::DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes>) };
    inline vector<Models::DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes> defenseScenes() { DARABONBA_PTR_GET(defenseScenes_, vector<Models::DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes>) };
    inline DescribeDcdnWafDomainDetailResponseBodyDomain& setDefenseScenes(const vector<Models::DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes> & defenseScenes) { DARABONBA_PTR_SET_VALUE(defenseScenes_, defenseScenes) };
    inline DescribeDcdnWafDomainDetailResponseBodyDomain& setDefenseScenes(vector<Models::DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes> && defenseScenes) { DARABONBA_PTR_SET_RVALUE(defenseScenes_, defenseScenes) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnWafDomainDetailResponseBodyDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The types of the protection policies.
    std::shared_ptr<vector<Models::DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes>> defenseScenes_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
