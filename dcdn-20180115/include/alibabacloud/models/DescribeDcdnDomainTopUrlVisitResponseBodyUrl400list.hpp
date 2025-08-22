// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYURL400LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYURL400LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainTopUrlVisitResponseBodyUrl400ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List(const DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List(DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List &&) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List& operator=(const DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List& operator=(DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl400ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl400ListUrlList>) };
    inline vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl400ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl400ListUrlList>) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List& setUrlList(const vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl400ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl400List& setUrlList(vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl400ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl400ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
