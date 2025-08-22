// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYURL300LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYURL300LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainTopUrlVisitResponseBodyUrl300ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List(const DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List(DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List &&) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List& operator=(const DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List& operator=(DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl300ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl300ListUrlList>) };
    inline vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl300ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl300ListUrlList>) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List& setUrlList(const vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl300ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyUrl300List& setUrlList(vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl300ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyUrl300ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
