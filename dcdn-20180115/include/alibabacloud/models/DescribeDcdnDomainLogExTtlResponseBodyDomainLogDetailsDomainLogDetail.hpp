// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail(const DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail(DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
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
    inline DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int64_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
    inline DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> logCount_ = nullptr;
    std::shared_ptr<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    std::shared_ptr<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
