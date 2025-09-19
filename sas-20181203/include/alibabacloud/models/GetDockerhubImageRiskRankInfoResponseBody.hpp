// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDockerhubImageRiskRankInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDockerhubImageRiskRankInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskRankInfo, riskRankInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDockerhubImageRiskRankInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskRankInfo, riskRankInfo_);
    };
    GetDockerhubImageRiskRankInfoResponseBody() = default ;
    GetDockerhubImageRiskRankInfoResponseBody(const GetDockerhubImageRiskRankInfoResponseBody &) = default ;
    GetDockerhubImageRiskRankInfoResponseBody(GetDockerhubImageRiskRankInfoResponseBody &&) = default ;
    GetDockerhubImageRiskRankInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDockerhubImageRiskRankInfoResponseBody() = default ;
    GetDockerhubImageRiskRankInfoResponseBody& operator=(const GetDockerhubImageRiskRankInfoResponseBody &) = default ;
    GetDockerhubImageRiskRankInfoResponseBody& operator=(GetDockerhubImageRiskRankInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->riskRankInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskRankInfo Field Functions 
    bool hasRiskRankInfo() const { return this->riskRankInfo_ != nullptr;};
    void deleteRiskRankInfo() { this->riskRankInfo_ = nullptr;};
    inline const GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo & riskRankInfo() const { DARABONBA_PTR_GET_CONST(riskRankInfo_, GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo) };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo riskRankInfo() { DARABONBA_PTR_GET(riskRankInfo_, GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo) };
    inline GetDockerhubImageRiskRankInfoResponseBody& setRiskRankInfo(const GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo & riskRankInfo) { DARABONBA_PTR_SET_VALUE(riskRankInfo_, riskRankInfo) };
    inline GetDockerhubImageRiskRankInfoResponseBody& setRiskRankInfo(GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo && riskRankInfo) { DARABONBA_PTR_SET_RVALUE(riskRankInfo_, riskRankInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The risk information.
    std::shared_ptr<GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo> riskRankInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
