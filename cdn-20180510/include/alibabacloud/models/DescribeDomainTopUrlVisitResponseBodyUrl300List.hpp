// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYURL300LIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODYURL300LIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyUrl300ListUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopUrlVisitResponseBodyUrl300List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUrlVisitResponseBodyUrl300List& obj) { 
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUrlVisitResponseBodyUrl300List& obj) { 
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainTopUrlVisitResponseBodyUrl300List() = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl300List(const DescribeDomainTopUrlVisitResponseBodyUrl300List &) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl300List(DescribeDomainTopUrlVisitResponseBodyUrl300List &&) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl300List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUrlVisitResponseBodyUrl300List() = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl300List& operator=(const DescribeDomainTopUrlVisitResponseBodyUrl300List &) = default ;
    DescribeDomainTopUrlVisitResponseBodyUrl300List& operator=(DescribeDomainTopUrlVisitResponseBodyUrl300List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->urlList_ == nullptr; };
    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl300ListUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl300ListUrlList>) };
    inline vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl300ListUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl300ListUrlList>) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl300List& setUrlList(const vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl300ListUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl300List& setUrlList(vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl300ListUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainTopUrlVisitResponseBodyUrl300ListUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
