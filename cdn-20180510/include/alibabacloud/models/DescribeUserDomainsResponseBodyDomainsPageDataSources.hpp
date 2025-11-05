// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserDomainsResponseBodyDomainsPageDataSourcesSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserDomainsResponseBodyDomainsPageDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserDomainsResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserDomainsResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeUserDomainsResponseBodyDomainsPageDataSources() = default ;
    DescribeUserDomainsResponseBodyDomainsPageDataSources(const DescribeUserDomainsResponseBodyDomainsPageDataSources &) = default ;
    DescribeUserDomainsResponseBodyDomainsPageDataSources(DescribeUserDomainsResponseBodyDomainsPageDataSources &&) = default ;
    DescribeUserDomainsResponseBodyDomainsPageDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserDomainsResponseBodyDomainsPageDataSources() = default ;
    DescribeUserDomainsResponseBodyDomainsPageDataSources& operator=(const DescribeUserDomainsResponseBodyDomainsPageDataSources &) = default ;
    DescribeUserDomainsResponseBodyDomainsPageDataSources& operator=(DescribeUserDomainsResponseBodyDomainsPageDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<Models::DescribeUserDomainsResponseBodyDomainsPageDataSourcesSource> & source() const { DARABONBA_PTR_GET_CONST(source_, vector<Models::DescribeUserDomainsResponseBodyDomainsPageDataSourcesSource>) };
    inline vector<Models::DescribeUserDomainsResponseBodyDomainsPageDataSourcesSource> source() { DARABONBA_PTR_GET(source_, vector<Models::DescribeUserDomainsResponseBodyDomainsPageDataSourcesSource>) };
    inline DescribeUserDomainsResponseBodyDomainsPageDataSources& setSource(const vector<Models::DescribeUserDomainsResponseBodyDomainsPageDataSourcesSource> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline DescribeUserDomainsResponseBodyDomainsPageDataSources& setSource(vector<Models::DescribeUserDomainsResponseBodyDomainsPageDataSourcesSource> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<vector<Models::DescribeUserDomainsResponseBodyDomainsPageDataSourcesSource>> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
