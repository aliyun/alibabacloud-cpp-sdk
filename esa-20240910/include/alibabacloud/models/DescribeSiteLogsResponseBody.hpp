// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteLogsResponseBodySiteLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteLogDetails, siteLogDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteLogDetails, siteLogDetails_);
    };
    DescribeSiteLogsResponseBody() = default ;
    DescribeSiteLogsResponseBody(const DescribeSiteLogsResponseBody &) = default ;
    DescribeSiteLogsResponseBody(DescribeSiteLogsResponseBody &&) = default ;
    DescribeSiteLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteLogsResponseBody() = default ;
    DescribeSiteLogsResponseBody& operator=(const DescribeSiteLogsResponseBody &) = default ;
    DescribeSiteLogsResponseBody& operator=(DescribeSiteLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->siteLogDetails_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteLogDetails Field Functions 
    bool hasSiteLogDetails() const { return this->siteLogDetails_ != nullptr;};
    void deleteSiteLogDetails() { this->siteLogDetails_ = nullptr;};
    inline const vector<DescribeSiteLogsResponseBodySiteLogDetails> & siteLogDetails() const { DARABONBA_PTR_GET_CONST(siteLogDetails_, vector<DescribeSiteLogsResponseBodySiteLogDetails>) };
    inline vector<DescribeSiteLogsResponseBodySiteLogDetails> siteLogDetails() { DARABONBA_PTR_GET(siteLogDetails_, vector<DescribeSiteLogsResponseBodySiteLogDetails>) };
    inline DescribeSiteLogsResponseBody& setSiteLogDetails(const vector<DescribeSiteLogsResponseBodySiteLogDetails> & siteLogDetails) { DARABONBA_PTR_SET_VALUE(siteLogDetails_, siteLogDetails) };
    inline DescribeSiteLogsResponseBody& setSiteLogDetails(vector<DescribeSiteLogsResponseBodySiteLogDetails> && siteLogDetails) { DARABONBA_PTR_SET_RVALUE(siteLogDetails_, siteLogDetails) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSiteLogsResponseBodySiteLogDetails>> siteLogDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
