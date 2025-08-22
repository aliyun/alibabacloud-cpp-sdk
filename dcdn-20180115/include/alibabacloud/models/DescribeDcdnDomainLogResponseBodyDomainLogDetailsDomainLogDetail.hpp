// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail(DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logCount_ != nullptr
        && this->logInfos_ != nullptr && this->pageInfos_ != nullptr; };
    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int64_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    // The total number of entries returned on the current page.
    std::shared_ptr<int64_t> logCount_ = nullptr;
    // Details about the logs.
    std::shared_ptr<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    // The page information.
    std::shared_ptr<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
