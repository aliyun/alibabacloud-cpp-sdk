// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINEDGELOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINEDGELOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail(const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail(DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
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
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    std::shared_ptr<int64_t> logCount_ = nullptr;
    std::shared_ptr<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    std::shared_ptr<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
