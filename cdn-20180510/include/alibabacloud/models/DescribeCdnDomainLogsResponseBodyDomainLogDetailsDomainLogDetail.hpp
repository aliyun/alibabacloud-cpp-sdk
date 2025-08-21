// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail(const DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail(DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
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
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int64_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The total number of entries returned on the current page.
    std::shared_ptr<int64_t> logCount_ = nullptr;
    // A set of LogInfoDetail data.
    std::shared_ptr<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    // A set of PageInfoDetail data.
    std::shared_ptr<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
