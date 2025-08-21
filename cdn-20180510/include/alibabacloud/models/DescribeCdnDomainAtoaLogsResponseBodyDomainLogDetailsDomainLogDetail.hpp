// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINATOALOGSRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINATOALOGSRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail(const DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail(DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
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
    inline DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int64_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
    inline DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> logCount_ = nullptr;
    std::shared_ptr<Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    std::shared_ptr<Models::DescribeCdnDomainAtoaLogsResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
