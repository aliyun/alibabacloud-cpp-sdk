// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail(DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->logCount_ != nullptr && this->logInfos_ != nullptr && this->pageInfos_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int64_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
    inline DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The total number of entries returned on the current page.
    std::shared_ptr<int64_t> logCount_ = nullptr;
    // The queried CDN logs.
    std::shared_ptr<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    // The pagination information.
    std::shared_ptr<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
