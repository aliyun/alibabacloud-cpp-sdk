// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFLOGSRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFLOGSRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafLogsResponseBodyDomainLogDetailsLogInfos.hpp>
#include <alibabacloud/models/DescribeDcdnWafLogsResponseBodyDomainLogDetailsPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafLogsResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafLogsResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafLogsResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeDcdnWafLogsResponseBodyDomainLogDetails() = default ;
    DescribeDcdnWafLogsResponseBodyDomainLogDetails(const DescribeDcdnWafLogsResponseBodyDomainLogDetails &) = default ;
    DescribeDcdnWafLogsResponseBodyDomainLogDetails(DescribeDcdnWafLogsResponseBodyDomainLogDetails &&) = default ;
    DescribeDcdnWafLogsResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafLogsResponseBodyDomainLogDetails() = default ;
    DescribeDcdnWafLogsResponseBodyDomainLogDetails& operator=(const DescribeDcdnWafLogsResponseBodyDomainLogDetails &) = default ;
    DescribeDcdnWafLogsResponseBodyDomainLogDetails& operator=(DescribeDcdnWafLogsResponseBodyDomainLogDetails &&) = default ;
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
    inline DescribeDcdnWafLogsResponseBodyDomainLogDetails& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int64_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
    inline DescribeDcdnWafLogsResponseBodyDomainLogDetails& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsLogInfos> & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, vector<Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsLogInfos>) };
    inline vector<Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsLogInfos> logInfos() { DARABONBA_PTR_GET(logInfos_, vector<Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsLogInfos>) };
    inline DescribeDcdnWafLogsResponseBodyDomainLogDetails& setLogInfos(const vector<Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsLogInfos> & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeDcdnWafLogsResponseBodyDomainLogDetails& setLogInfos(vector<Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsLogInfos> && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsPageInfos) };
    inline Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsPageInfos) };
    inline DescribeDcdnWafLogsResponseBodyDomainLogDetails& setPageInfos(const Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeDcdnWafLogsResponseBodyDomainLogDetails& setPageInfos(Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    // The WAF domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The total number of entries returned on the current page.
    std::shared_ptr<int64_t> logCount_ = nullptr;
    // The log information.
    std::shared_ptr<vector<Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsLogInfos>> logInfos_ = nullptr;
    // The page information.
    std::shared_ptr<Models::DescribeDcdnWafLogsResponseBodyDomainLogDetailsPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
