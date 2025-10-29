// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVETRAFFICDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVETRAFFICDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail(DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
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
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    std::shared_ptr<int64_t> logCount_ = nullptr;
    std::shared_ptr<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    std::shared_ptr<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
