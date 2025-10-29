// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail(DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logCount_ == nullptr
        && return this->logInfos_ == nullptr && return this->pageInfos_ == nullptr; };
    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int64_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
    inline DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    // The total number of entries returned on the current page.
    std::shared_ptr<int64_t> logCount_ = nullptr;
    // Details about the logs.
    std::shared_ptr<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    // The page information.
    std::shared_ptr<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
