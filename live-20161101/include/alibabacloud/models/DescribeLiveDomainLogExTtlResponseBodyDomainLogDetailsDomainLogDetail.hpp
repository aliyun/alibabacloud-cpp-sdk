// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail(const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail(DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
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
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    std::shared_ptr<int64_t> logCount_ = nullptr;
    std::shared_ptr<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    std::shared_ptr<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
