// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources() = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources(const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources &) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources(DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources &&) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources() = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources& operator=(const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources &) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources& operator=(DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource> & source() const { DARABONBA_PTR_GET_CONST(source_, vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource>) };
    inline vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource> source() { DARABONBA_PTR_GET(source_, vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource>) };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources& setSource(const vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources& setSource(vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource>> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
