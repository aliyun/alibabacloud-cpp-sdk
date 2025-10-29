// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos.hpp>
#include <alibabacloud/models/DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
    };
    DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail(const DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail(DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail() = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(const DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail &) = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& operator=(DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail &&) = default ;
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
    inline DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos logInfos() { DARABONBA_PTR_GET(logInfos_, Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos) };
    inline DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(const Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& setLogInfos(Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // pageInfos Field Functions 
    bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
    void deletePageInfos() { this->pageInfos_ = nullptr;};
    inline const Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos pageInfos() { DARABONBA_PTR_GET(pageInfos_, Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos) };
    inline DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(const Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
    inline DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail& setPageInfos(Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


  protected:
    // The total number of entries returned on the current page.
    std::shared_ptr<int64_t> logCount_ = nullptr;
    // Details about the logs.
    std::shared_ptr<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos_ = nullptr;
    // The page information.
    std::shared_ptr<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
