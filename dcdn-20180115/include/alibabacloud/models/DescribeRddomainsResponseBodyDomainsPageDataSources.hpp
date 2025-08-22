// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRDDomainsResponseBodyDomainsPageDataSourcesSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeRDDomainsResponseBodyDomainsPageDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRDDomainsResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRDDomainsResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeRDDomainsResponseBodyDomainsPageDataSources() = default ;
    DescribeRDDomainsResponseBodyDomainsPageDataSources(const DescribeRDDomainsResponseBodyDomainsPageDataSources &) = default ;
    DescribeRDDomainsResponseBodyDomainsPageDataSources(DescribeRDDomainsResponseBodyDomainsPageDataSources &&) = default ;
    DescribeRDDomainsResponseBodyDomainsPageDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRDDomainsResponseBodyDomainsPageDataSources() = default ;
    DescribeRDDomainsResponseBodyDomainsPageDataSources& operator=(const DescribeRDDomainsResponseBodyDomainsPageDataSources &) = default ;
    DescribeRDDomainsResponseBodyDomainsPageDataSources& operator=(DescribeRDDomainsResponseBodyDomainsPageDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<Models::DescribeRDDomainsResponseBodyDomainsPageDataSourcesSource> & source() const { DARABONBA_PTR_GET_CONST(source_, vector<Models::DescribeRDDomainsResponseBodyDomainsPageDataSourcesSource>) };
    inline vector<Models::DescribeRDDomainsResponseBodyDomainsPageDataSourcesSource> source() { DARABONBA_PTR_GET(source_, vector<Models::DescribeRDDomainsResponseBodyDomainsPageDataSourcesSource>) };
    inline DescribeRDDomainsResponseBodyDomainsPageDataSources& setSource(const vector<Models::DescribeRDDomainsResponseBodyDomainsPageDataSourcesSource> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline DescribeRDDomainsResponseBodyDomainsPageDataSources& setSource(vector<Models::DescribeRDDomainsResponseBodyDomainsPageDataSourcesSource> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<vector<Models::DescribeRDDomainsResponseBodyDomainsPageDataSourcesSource>> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
