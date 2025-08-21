// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTOPURLVISITRESPONSEBODYALLURLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTOPURLVISITRESPONSEBODYALLURLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSrcTopUrlVisitResponseBodyAllUrlListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList() = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList(const DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList &) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList(DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList &&) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList() = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList& operator=(const DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList &) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList& operator=(DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyAllUrlListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyAllUrlListUrlList>) };
    inline vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyAllUrlListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyAllUrlListUrlList>) };
    inline DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList& setUrlList(const vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyAllUrlListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainSrcTopUrlVisitResponseBodyAllUrlList& setUrlList(vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyAllUrlListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyAllUrlListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
