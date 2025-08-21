// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfoDetail, logInfoDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfoDetail, logInfoDetail_);
    };
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos(DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(const DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logInfoDetail_ != nullptr; };
    // logInfoDetail Field Functions 
    bool hasLogInfoDetail() const { return this->logInfoDetail_ != nullptr;};
    void deleteLogInfoDetail() { this->logInfoDetail_ = nullptr;};
    inline const vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail() const { DARABONBA_PTR_GET_CONST(logInfoDetail_, vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> logInfoDetail() { DARABONBA_PTR_GET(logInfoDetail_, vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(const vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail) { DARABONBA_PTR_SET_VALUE(logInfoDetail_, logInfoDetail) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> && logInfoDetail) { DARABONBA_PTR_SET_RVALUE(logInfoDetail_, logInfoDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>> logInfoDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
