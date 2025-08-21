// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources() = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources(const DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources &) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources(DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources &&) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources() = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources& operator=(const DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources &) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources& operator=(DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource> & source() const { DARABONBA_PTR_GET_CONST(source_, vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource>) };
    inline vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource> source() { DARABONBA_PTR_GET(source_, vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource>) };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources& setSource(const vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources& setSource(vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource>> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
