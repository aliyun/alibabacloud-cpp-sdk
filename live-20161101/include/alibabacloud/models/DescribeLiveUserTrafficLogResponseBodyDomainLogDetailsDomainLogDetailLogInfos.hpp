// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERTRAFFICLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERTRAFFICLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfoDetail, logInfoDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfoDetail, logInfoDetail_);
    };
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(const DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfoDetail_ == nullptr; };
    // logInfoDetail Field Functions 
    bool hasLogInfoDetail() const { return this->logInfoDetail_ != nullptr;};
    void deleteLogInfoDetail() { this->logInfoDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail() const { DARABONBA_PTR_GET_CONST(logInfoDetail_, vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> logInfoDetail() { DARABONBA_PTR_GET(logInfoDetail_, vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(const vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail) { DARABONBA_PTR_SET_VALUE(logInfoDetail_, logInfoDetail) };
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> && logInfoDetail) { DARABONBA_PTR_SET_RVALUE(logInfoDetail_, logInfoDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>> logInfoDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
