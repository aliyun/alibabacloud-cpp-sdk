// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINDETAILRESPONSEBODYDOMAINDETAILSOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINDETAILRESPONSEBODYDOMAINDETAILSOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainDetailResponseBodyDomainDetailSourcesSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainDetailResponseBodyDomainDetailSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainDetailResponseBodyDomainDetailSources& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainDetailResponseBodyDomainDetailSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeVodDomainDetailResponseBodyDomainDetailSources() = default ;
    DescribeVodDomainDetailResponseBodyDomainDetailSources(const DescribeVodDomainDetailResponseBodyDomainDetailSources &) = default ;
    DescribeVodDomainDetailResponseBodyDomainDetailSources(DescribeVodDomainDetailResponseBodyDomainDetailSources &&) = default ;
    DescribeVodDomainDetailResponseBodyDomainDetailSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainDetailResponseBodyDomainDetailSources() = default ;
    DescribeVodDomainDetailResponseBodyDomainDetailSources& operator=(const DescribeVodDomainDetailResponseBodyDomainDetailSources &) = default ;
    DescribeVodDomainDetailResponseBodyDomainDetailSources& operator=(DescribeVodDomainDetailResponseBodyDomainDetailSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<Models::DescribeVodDomainDetailResponseBodyDomainDetailSourcesSource> & source() const { DARABONBA_PTR_GET_CONST(source_, vector<Models::DescribeVodDomainDetailResponseBodyDomainDetailSourcesSource>) };
    inline vector<Models::DescribeVodDomainDetailResponseBodyDomainDetailSourcesSource> source() { DARABONBA_PTR_GET(source_, vector<Models::DescribeVodDomainDetailResponseBodyDomainDetailSourcesSource>) };
    inline DescribeVodDomainDetailResponseBodyDomainDetailSources& setSource(const vector<Models::DescribeVodDomainDetailResponseBodyDomainDetailSourcesSource> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline DescribeVodDomainDetailResponseBodyDomainDetailSources& setSource(vector<Models::DescribeVodDomainDetailResponseBodyDomainDetailSourcesSource> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainDetailResponseBodyDomainDetailSourcesSource>> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
