// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainConfigsResponseBodyDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
    };
    DescribeCdnDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigs(const DescribeCdnDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigs(DescribeCdnDomainConfigsResponseBodyDomainConfigs &&) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigs& operator=(const DescribeCdnDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigs& operator=(DescribeCdnDomainConfigsResponseBodyDomainConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfig_ == nullptr; };
    // domainConfig Field Functions 
    bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
    void deleteDomainConfig() { this->domainConfig_ = nullptr;};
    inline const vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig> domainConfig() { DARABONBA_PTR_GET(domainConfig_, vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigs& setDomainConfig(const vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigs& setDomainConfig(vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig> && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig>> domainConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
