// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYALLURLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYALLURLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyAllUrlListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopUrlVisitResponseBodyAllUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUrlVisitResponseBodyAllUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUrlVisitResponseBodyAllUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainTopUrlVisitResponseBodyAllUrlList() = default ;
    DescribeDomainTopUrlVisitResponseBodyAllUrlList(const DescribeDomainTopUrlVisitResponseBodyAllUrlList &) = default ;
    DescribeDomainTopUrlVisitResponseBodyAllUrlList(DescribeDomainTopUrlVisitResponseBodyAllUrlList &&) = default ;
    DescribeDomainTopUrlVisitResponseBodyAllUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUrlVisitResponseBodyAllUrlList() = default ;
    DescribeDomainTopUrlVisitResponseBodyAllUrlList& operator=(const DescribeDomainTopUrlVisitResponseBodyAllUrlList &) = default ;
    DescribeDomainTopUrlVisitResponseBodyAllUrlList& operator=(DescribeDomainTopUrlVisitResponseBodyAllUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->urlList_ == nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDomainTopUrlVisitResponseBodyAllUrlListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyAllUrlListUrlList>) };
    inline vector<Models::DescribeDomainTopUrlVisitResponseBodyAllUrlListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyAllUrlListUrlList>) };
    inline DescribeDomainTopUrlVisitResponseBodyAllUrlList& setUrlList(const vector<Models::DescribeDomainTopUrlVisitResponseBodyAllUrlListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainTopUrlVisitResponseBodyAllUrlList& setUrlList(vector<Models::DescribeDomainTopUrlVisitResponseBodyAllUrlListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainTopUrlVisitResponseBodyAllUrlListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
