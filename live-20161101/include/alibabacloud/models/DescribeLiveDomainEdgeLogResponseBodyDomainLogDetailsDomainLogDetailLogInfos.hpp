// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINEDGELOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINEDGELOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfoDetail, logInfoDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfoDetail, logInfoDetail_);
    };
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& operator=(DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfoDetail_ == nullptr; };
    // logInfoDetail Field Functions 
    bool hasLogInfoDetail() const { return this->logInfoDetail_ != nullptr;};
    void deleteLogInfoDetail() { this->logInfoDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail() const { DARABONBA_PTR_GET_CONST(logInfoDetail_, vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> logInfoDetail() { DARABONBA_PTR_GET(logInfoDetail_, vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>) };
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(const vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> & logInfoDetail) { DARABONBA_PTR_SET_VALUE(logInfoDetail_, logInfoDetail) };
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos& setLogInfoDetail(vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> && logInfoDetail) { DARABONBA_PTR_SET_RVALUE(logInfoDetail_, logInfoDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>> logInfoDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
