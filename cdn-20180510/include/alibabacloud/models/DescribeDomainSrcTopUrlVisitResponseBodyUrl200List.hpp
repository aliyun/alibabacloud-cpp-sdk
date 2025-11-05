// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTOPURLVISITRESPONSEBODYURL200LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTOPURLVISITRESPONSEBODYURL200LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSrcTopUrlVisitResponseBodyUrl200ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcTopUrlVisitResponseBodyUrl200List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcTopUrlVisitResponseBodyUrl200List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcTopUrlVisitResponseBodyUrl200List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainSrcTopUrlVisitResponseBodyUrl200List() = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl200List(const DescribeDomainSrcTopUrlVisitResponseBodyUrl200List &) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl200List(DescribeDomainSrcTopUrlVisitResponseBodyUrl200List &&) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl200List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcTopUrlVisitResponseBodyUrl200List() = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl200List& operator=(const DescribeDomainSrcTopUrlVisitResponseBodyUrl200List &) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl200List& operator=(DescribeDomainSrcTopUrlVisitResponseBodyUrl200List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->urlList_ == nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl200ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl200ListUrlList>) };
    inline vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl200ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl200ListUrlList>) };
    inline DescribeDomainSrcTopUrlVisitResponseBodyUrl200List& setUrlList(const vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl200ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainSrcTopUrlVisitResponseBodyUrl200List& setUrlList(vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl200ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl200ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
