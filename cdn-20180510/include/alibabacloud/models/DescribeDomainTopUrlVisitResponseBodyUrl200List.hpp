// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYURL200LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYURL200LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyUrl200ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopUrlVisitResponseBodyUrl200List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUrlVisitResponseBodyUrl200List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUrlVisitResponseBodyUrl200List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainTopUrlVisitResponseBodyUrl200List() = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl200List(const DescribeDomainTopUrlVisitResponseBodyUrl200List &) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl200List(DescribeDomainTopUrlVisitResponseBodyUrl200List &&) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl200List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUrlVisitResponseBodyUrl200List() = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl200List& operator=(const DescribeDomainTopUrlVisitResponseBodyUrl200List &) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl200List& operator=(DescribeDomainTopUrlVisitResponseBodyUrl200List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->urlList_ == nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl200ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl200ListUrlList>) };
    inline vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl200ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl200ListUrlList>) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl200List& setUrlList(const vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl200ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl200List& setUrlList(vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl200ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl200ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
