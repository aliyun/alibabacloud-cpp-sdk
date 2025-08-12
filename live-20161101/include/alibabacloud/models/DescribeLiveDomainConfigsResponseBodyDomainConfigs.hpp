// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainConfigsResponseBodyDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
    };
    DescribeLiveDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigs(const DescribeLiveDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigs(DescribeLiveDomainConfigsResponseBodyDomainConfigs &&) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigs& operator=(const DescribeLiveDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigs& operator=(DescribeLiveDomainConfigsResponseBodyDomainConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfig_ != nullptr; };
    // domainConfig Field Functions 
    bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
    void deleteDomainConfig() { this->domainConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig> domainConfig() { DARABONBA_PTR_GET(domainConfig_, vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigs& setDomainConfig(const vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigs& setDomainConfig(vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig> && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig>> domainConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
