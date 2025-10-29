// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfoDetail, logInfoDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfoDetail, logInfoDetail_);
    };
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos(DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfoDetail_ == nullptr; };
    // logInfoDetail Field Functions 
    bool hasLogInfoDetail() const { return this->logInfoDetail_ != nullptr;};
    void deleteLogInfoDetail() { this->logInfoDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail() const { DARABONBA_PTR_GET_CONST(logInfoDetail_, vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> logInfoDetail() { DARABONBA_PTR_GET(logInfoDetail_, vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(const vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail) { DARABONBA_PTR_SET_VALUE(logInfoDetail_, logInfoDetail) };
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> && logInfoDetail) { DARABONBA_PTR_SET_RVALUE(logInfoDetail_, logInfoDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>> logInfoDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
