// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDockerhubImageRiskStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDockerhubImageRiskStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskRankInfo, riskRankInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDockerhubImageRiskStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskRankInfo, riskRankInfo_);
    };
    GetDockerhubImageRiskStatisticResponseBody() = default ;
    GetDockerhubImageRiskStatisticResponseBody(const GetDockerhubImageRiskStatisticResponseBody &) = default ;
    GetDockerhubImageRiskStatisticResponseBody(GetDockerhubImageRiskStatisticResponseBody &&) = default ;
    GetDockerhubImageRiskStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDockerhubImageRiskStatisticResponseBody() = default ;
    GetDockerhubImageRiskStatisticResponseBody& operator=(const GetDockerhubImageRiskStatisticResponseBody &) = default ;
    GetDockerhubImageRiskStatisticResponseBody& operator=(GetDockerhubImageRiskStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->riskRankInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDockerhubImageRiskStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskRankInfo Field Functions 
    bool hasRiskRankInfo() const { return this->riskRankInfo_ != nullptr;};
    void deleteRiskRankInfo() { this->riskRankInfo_ = nullptr;};
    inline const GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo & riskRankInfo() const { DARABONBA_PTR_GET_CONST(riskRankInfo_, GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo) };
    inline GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo riskRankInfo() { DARABONBA_PTR_GET(riskRankInfo_, GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo) };
    inline GetDockerhubImageRiskStatisticResponseBody& setRiskRankInfo(const GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo & riskRankInfo) { DARABONBA_PTR_SET_VALUE(riskRankInfo_, riskRankInfo) };
    inline GetDockerhubImageRiskStatisticResponseBody& setRiskRankInfo(GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo && riskRankInfo) { DARABONBA_PTR_SET_RVALUE(riskRankInfo_, riskRankInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the risk source.
    std::shared_ptr<GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo> riskRankInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
