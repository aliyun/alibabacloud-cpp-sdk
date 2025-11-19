// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserDomainsResponseBodyDomainsPageDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserDomainsResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserDomainsResponseBodyDomainsPageDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeVodUserDomainsResponseBodyDomainsPageDataSources() = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSources(const DescribeVodUserDomainsResponseBodyDomainsPageDataSources &) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSources(DescribeVodUserDomainsResponseBodyDomainsPageDataSources &&) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserDomainsResponseBodyDomainsPageDataSources() = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSources& operator=(const DescribeVodUserDomainsResponseBodyDomainsPageDataSources &) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSources& operator=(DescribeVodUserDomainsResponseBodyDomainsPageDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource> & source() const { DARABONBA_PTR_GET_CONST(source_, vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource>) };
    inline vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource> source() { DARABONBA_PTR_GET(source_, vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource>) };
    inline DescribeVodUserDomainsResponseBodyDomainsPageDataSources& setSource(const vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline DescribeVodUserDomainsResponseBodyDomainsPageDataSources& setSource(vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource>> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
