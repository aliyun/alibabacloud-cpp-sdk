// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSourcesSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources() = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources(const DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources &) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources(DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources &&) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources() = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources& operator=(const DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources &) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources& operator=(DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSourcesSource> & source() const { DARABONBA_PTR_GET_CONST(source_, vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSourcesSource>) };
    inline vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSourcesSource> source() { DARABONBA_PTR_GET(source_, vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSourcesSource>) };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources& setSource(const vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSourcesSource> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources& setSource(vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSourcesSource> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSourcesSource>> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
