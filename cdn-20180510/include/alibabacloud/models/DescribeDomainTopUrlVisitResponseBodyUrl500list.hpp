// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYURL500LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYURL500LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyUrl500ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopUrlVisitResponseBodyUrl500List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUrlVisitResponseBodyUrl500List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUrlVisitResponseBodyUrl500List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainTopUrlVisitResponseBodyUrl500List() = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl500List(const DescribeDomainTopUrlVisitResponseBodyUrl500List &) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl500List(DescribeDomainTopUrlVisitResponseBodyUrl500List &&) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl500List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUrlVisitResponseBodyUrl500List() = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl500List& operator=(const DescribeDomainTopUrlVisitResponseBodyUrl500List &) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl500List& operator=(DescribeDomainTopUrlVisitResponseBodyUrl500List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl500ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl500ListUrlList>) };
    inline vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl500ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl500ListUrlList>) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl500List& setUrlList(const vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl500ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl500List& setUrlList(vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl500ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl500ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
