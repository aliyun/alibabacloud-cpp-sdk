// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODYSITELOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODYSITELOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteLogsResponseBodySiteLogDetailsLogInfos.hpp>
#include <alibabacloud/models/DescribeSiteLogsResponseBodySiteLogDetailsPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteLogsResponseBodySiteLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteLogsResponseBodySiteLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteLogsResponseBodySiteLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
    };
    DescribeSiteLogsResponseBodySiteLogDetails() = default ;
    DescribeSiteLogsResponseBodySiteLogDetails(const DescribeSiteLogsResponseBodySiteLogDetails &) = default ;
    DescribeSiteLogsResponseBodySiteLogDetails(DescribeSiteLogsResponseBodySiteLogDetails &&) = default ;
    DescribeSiteLogsResponseBodySiteLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteLogsResponseBodySiteLogDetails() = default ;
    DescribeSiteLogsResponseBodySiteLogDetails& operator=(const DescribeSiteLogsResponseBodySiteLogDetails &) = default ;
    DescribeSiteLogsResponseBodySiteLogDetails& operator=(DescribeSiteLogsResponseBodySiteLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logCount_ != nullptr
        && this->logInfos_ != nullptr && this->pageInfos_ != nullptr && this->siteId_ != nullptr && this->siteName_ != nullptr; };
    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int32_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0) };
    inline DescribeSiteLogsResponseBodySiteLogDetails& setLogCount(int32_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const vector<Models::DescribeSiteLogsResponseBodySiteLogDetailsLogInfos> & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, vector<Models::DescribeSiteLogsResponseBodySiteLogDetailsLogInfos>) };
    inline vector<Models::DescribeSiteLogsResponseBodySiteLogDetailsLogInfos> logInfos() { DARABONBA_PTR_GET(logInfos_, vector<Models::DescribeSiteLogsResponseBodySiteLogDetailsLogInfos>) };
    inline DescribeSiteLogsResponseBodySiteLogDetails& setLogInfos(const vector<Models::DescribeSiteLogsResponseBodySiteLogDetailsLogInfos> & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeSiteLogsResponseBodySiteLogDetails& setLogInfos(vector<Models::DescribeSiteLogsResponseBodySiteLogDetailsLogInfos> && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeSiteLogsResponseBodySiteLogDetailsPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeSiteLogsResponseBodySiteLogDetailsPageInfos) };
    inline Models::DescribeSiteLogsResponseBodySiteLogDetailsPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeSiteLogsResponseBodySiteLogDetailsPageInfos) };
    inline DescribeSiteLogsResponseBodySiteLogDetails& setPageInfos(const Models::DescribeSiteLogsResponseBodySiteLogDetailsPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeSiteLogsResponseBodySiteLogDetails& setPageInfos(Models::DescribeSiteLogsResponseBodySiteLogDetailsPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DescribeSiteLogsResponseBodySiteLogDetails& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline DescribeSiteLogsResponseBodySiteLogDetails& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


  protected:
    std::shared_ptr<int32_t> logCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSiteLogsResponseBodySiteLogDetailsLogInfos>> logInfos_ = nullptr;
    std::shared_ptr<Models::DescribeSiteLogsResponseBodySiteLogDetailsPageInfos> pageInfos_ = nullptr;
    std::shared_ptr<int64_t> siteId_ = nullptr;
    std::shared_ptr<string> siteName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
