// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainConfigsResponseBodyDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
    };
    DescribeDcdnDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigs(const DescribeDcdnDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigs(DescribeDcdnDomainConfigsResponseBodyDomainConfigs &&) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigs& operator=(const DescribeDcdnDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigs& operator=(DescribeDcdnDomainConfigsResponseBodyDomainConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfig_ != nullptr; };
    // domainConfig Field Functions 
    bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
    void deleteDomainConfig() { this->domainConfig_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig> domainConfig() { DARABONBA_PTR_GET(domainConfig_, vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigs& setDomainConfig(const vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigs& setDomainConfig(vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig> && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig>> domainConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
