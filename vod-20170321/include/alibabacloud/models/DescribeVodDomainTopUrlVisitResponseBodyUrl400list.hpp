// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPURLVISITRESPONSEBODYURL400LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPURLVISITRESPONSEBODYURL400LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainTopUrlVisitResponseBodyUrl400ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTopUrlVisitResponseBodyUrl400List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTopUrlVisitResponseBodyUrl400List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTopUrlVisitResponseBodyUrl400List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeVodDomainTopUrlVisitResponseBodyUrl400List() = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl400List(const DescribeVodDomainTopUrlVisitResponseBodyUrl400List &) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl400List(DescribeVodDomainTopUrlVisitResponseBodyUrl400List &&) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl400List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTopUrlVisitResponseBodyUrl400List() = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl400List& operator=(const DescribeVodDomainTopUrlVisitResponseBodyUrl400List &) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl400List& operator=(DescribeVodDomainTopUrlVisitResponseBodyUrl400List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl400ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl400ListUrlList>) };
    inline vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl400ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl400ListUrlList>) };
    inline DescribeVodDomainTopUrlVisitResponseBodyUrl400List& setUrlList(const vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl400ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeVodDomainTopUrlVisitResponseBodyUrl400List& setUrlList(vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl400ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl400ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
