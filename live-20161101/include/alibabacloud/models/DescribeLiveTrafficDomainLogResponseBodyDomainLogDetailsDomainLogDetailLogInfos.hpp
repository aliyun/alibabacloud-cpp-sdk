// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVETRAFFICDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVETRAFFICDOMAINLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfoDetail, logInfoDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfoDetail, logInfoDetail_);
    };
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfoDetail_ == nullptr; };
    // logInfoDetail Field Functions 
    bool hasLogInfoDetail() const { return this->logInfoDetail_ != nullptr;};
    void deleteLogInfoDetail() { this->logInfoDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail() const { DARABONBA_PTR_GET_CONST(logInfoDetail_, vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> logInfoDetail() { DARABONBA_PTR_GET(logInfoDetail_, vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(const vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail) { DARABONBA_PTR_SET_VALUE(logInfoDetail_, logInfoDetail) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> && logInfoDetail) { DARABONBA_PTR_SET_RVALUE(logInfoDetail_, logInfoDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>> logInfoDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
