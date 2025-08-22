// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYALLURLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTOPURLVISITRESPONSEBODYALLURLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList(const DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList(DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList &&) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList() = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList& operator=(const DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList &) = default ;
    DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList& operator=(DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->urlList_ != nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlListUrlList>) };
    inline vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlListUrlList>) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList& setUrlList(const vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlList& setUrlList(vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainTopUrlVisitResponseBodyAllUrlListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
