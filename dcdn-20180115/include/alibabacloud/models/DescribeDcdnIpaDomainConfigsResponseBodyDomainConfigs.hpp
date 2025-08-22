// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
    };
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs(const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs(DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs &&) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs& operator=(const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs& operator=(DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfig_ != nullptr; };
    // domainConfig Field Functions 
    bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
    void deleteDomainConfig() { this->domainConfig_ = nullptr;};
    inline const vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig> domainConfig() { DARABONBA_PTR_GET(domainConfig_, vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs& setDomainConfig(const vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigs& setDomainConfig(vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig> && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig>> domainConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
