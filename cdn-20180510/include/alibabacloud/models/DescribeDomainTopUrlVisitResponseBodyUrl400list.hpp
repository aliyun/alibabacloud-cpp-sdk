// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYURL400LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYURL400LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyUrl400ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopUrlVisitResponseBodyUrl400List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUrlVisitResponseBodyUrl400List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUrlVisitResponseBodyUrl400List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainTopUrlVisitResponseBodyUrl400List() = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl400List(const DescribeDomainTopUrlVisitResponseBodyUrl400List &) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl400List(DescribeDomainTopUrlVisitResponseBodyUrl400List &&) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl400List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUrlVisitResponseBodyUrl400List() = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl400List& operator=(const DescribeDomainTopUrlVisitResponseBodyUrl400List &) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl400List& operator=(DescribeDomainTopUrlVisitResponseBodyUrl400List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl400ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl400ListUrlList>) };
    inline vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl400ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl400ListUrlList>) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl400List& setUrlList(const vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl400ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl400List& setUrlList(vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl400ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl400ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
