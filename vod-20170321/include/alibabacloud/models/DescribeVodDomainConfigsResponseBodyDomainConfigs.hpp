// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainConfigsResponseBodyDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainConfigsResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
    };
    DescribeVodDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigs(const DescribeVodDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigs(DescribeVodDomainConfigsResponseBodyDomainConfigs &&) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainConfigsResponseBodyDomainConfigs() = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigs& operator=(const DescribeVodDomainConfigsResponseBodyDomainConfigs &) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigs& operator=(DescribeVodDomainConfigsResponseBodyDomainConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfig_ == nullptr; };
    // domainConfig Field Functions 
    bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
    void deleteDomainConfig() { this->domainConfig_ = nullptr;};
    inline const vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig> domainConfig() { DARABONBA_PTR_GET(domainConfig_, vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig>) };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigs& setDomainConfig(const vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig> & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigs& setDomainConfig(vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig> && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig>> domainConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
