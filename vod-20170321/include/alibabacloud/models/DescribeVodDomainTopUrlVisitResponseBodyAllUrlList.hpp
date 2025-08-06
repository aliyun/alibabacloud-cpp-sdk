// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPURLVISITRESPONSEBODYALLURLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPURLVISITRESPONSEBODYALLURLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainTopUrlVisitResponseBodyAllUrlListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTopUrlVisitResponseBodyAllUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTopUrlVisitResponseBodyAllUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTopUrlVisitResponseBodyAllUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeVodDomainTopUrlVisitResponseBodyAllUrlList() = default ;
    DescribeVodDomainTopUrlVisitResponseBodyAllUrlList(const DescribeVodDomainTopUrlVisitResponseBodyAllUrlList &) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyAllUrlList(DescribeVodDomainTopUrlVisitResponseBodyAllUrlList &&) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyAllUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTopUrlVisitResponseBodyAllUrlList() = default ;
    DescribeVodDomainTopUrlVisitResponseBodyAllUrlList& operator=(const DescribeVodDomainTopUrlVisitResponseBodyAllUrlList &) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyAllUrlList& operator=(DescribeVodDomainTopUrlVisitResponseBodyAllUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeVodDomainTopUrlVisitResponseBodyAllUrlListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeVodDomainTopUrlVisitResponseBodyAllUrlListUrlList>) };
    inline vector<Models::DescribeVodDomainTopUrlVisitResponseBodyAllUrlListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeVodDomainTopUrlVisitResponseBodyAllUrlListUrlList>) };
    inline DescribeVodDomainTopUrlVisitResponseBodyAllUrlList& setUrlList(const vector<Models::DescribeVodDomainTopUrlVisitResponseBodyAllUrlListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeVodDomainTopUrlVisitResponseBodyAllUrlList& setUrlList(vector<Models::DescribeVodDomainTopUrlVisitResponseBodyAllUrlListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainTopUrlVisitResponseBodyAllUrlListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
