// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPURLVISITRESPONSEBODYURL300LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPURLVISITRESPONSEBODYURL300LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainTopUrlVisitResponseBodyUrl300ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTopUrlVisitResponseBodyUrl300List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTopUrlVisitResponseBodyUrl300List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTopUrlVisitResponseBodyUrl300List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeVodDomainTopUrlVisitResponseBodyUrl300List() = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl300List(const DescribeVodDomainTopUrlVisitResponseBodyUrl300List &) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl300List(DescribeVodDomainTopUrlVisitResponseBodyUrl300List &&) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl300List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTopUrlVisitResponseBodyUrl300List() = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl300List& operator=(const DescribeVodDomainTopUrlVisitResponseBodyUrl300List &) = default ;
    DescribeVodDomainTopUrlVisitResponseBodyUrl300List& operator=(DescribeVodDomainTopUrlVisitResponseBodyUrl300List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl300ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl300ListUrlList>) };
    inline vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl300ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl300ListUrlList>) };
    inline DescribeVodDomainTopUrlVisitResponseBodyUrl300List& setUrlList(const vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl300ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeVodDomainTopUrlVisitResponseBodyUrl300List& setUrlList(vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl300ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainTopUrlVisitResponseBodyUrl300ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
