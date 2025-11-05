// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTOPURLVISITRESPONSEBODYURL400LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTOPURLVISITRESPONSEBODYURL400LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSrcTopUrlVisitResponseBodyUrl400ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcTopUrlVisitResponseBodyUrl400List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcTopUrlVisitResponseBodyUrl400List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcTopUrlVisitResponseBodyUrl400List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainSrcTopUrlVisitResponseBodyUrl400List() = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl400List(const DescribeDomainSrcTopUrlVisitResponseBodyUrl400List &) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl400List(DescribeDomainSrcTopUrlVisitResponseBodyUrl400List &&) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl400List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcTopUrlVisitResponseBodyUrl400List() = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl400List& operator=(const DescribeDomainSrcTopUrlVisitResponseBodyUrl400List &) = default ;
    DescribeDomainSrcTopUrlVisitResponseBodyUrl400List& operator=(DescribeDomainSrcTopUrlVisitResponseBodyUrl400List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->urlList_ == nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl400ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl400ListUrlList>) };
    inline vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl400ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl400ListUrlList>) };
    inline DescribeDomainSrcTopUrlVisitResponseBodyUrl400List& setUrlList(const vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl400ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainSrcTopUrlVisitResponseBodyUrl400List& setUrlList(vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl400ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainSrcTopUrlVisitResponseBodyUrl400ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
