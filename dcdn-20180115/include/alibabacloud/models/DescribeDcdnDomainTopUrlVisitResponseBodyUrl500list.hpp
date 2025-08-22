// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYURL500LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYURL500LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainTopUrlVisitResponseBodyUrl500ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List(const DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List(DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List &&) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List& operator=(const DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List& operator=(DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl500ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl500ListUrlList>) };
    inline vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl500ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl500ListUrlList>) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List& setUrlList(const vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl500ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl500List& setUrlList(vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl500ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl500ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
