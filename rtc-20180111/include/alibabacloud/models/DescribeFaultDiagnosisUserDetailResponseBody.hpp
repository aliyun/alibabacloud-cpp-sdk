// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyCallInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyFactorList.hpp>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData.hpp>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyUserDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_TO_JSON(FactorList, factorList_);
      DARABONBA_PTR_TO_JSON(FaultMetricData, faultMetricData_);
      DARABONBA_PTR_TO_JSON(NetworkOperators, networkOperators_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDetail, userDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_FROM_JSON(FactorList, factorList_);
      DARABONBA_PTR_FROM_JSON(FaultMetricData, faultMetricData_);
      DARABONBA_PTR_FROM_JSON(NetworkOperators, networkOperators_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDetail, userDetail_);
    };
    DescribeFaultDiagnosisUserDetailResponseBody() = default ;
    DescribeFaultDiagnosisUserDetailResponseBody(const DescribeFaultDiagnosisUserDetailResponseBody &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBody(DescribeFaultDiagnosisUserDetailResponseBody &&) = default ;
    DescribeFaultDiagnosisUserDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailResponseBody() = default ;
    DescribeFaultDiagnosisUserDetailResponseBody& operator=(const DescribeFaultDiagnosisUserDetailResponseBody &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBody& operator=(DescribeFaultDiagnosisUserDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callInfo_ != nullptr
        && this->factorList_ != nullptr && this->faultMetricData_ != nullptr && this->networkOperators_ != nullptr && this->requestId_ != nullptr && this->userDetail_ != nullptr; };
    // callInfo Field Functions 
    bool hasCallInfo() const { return this->callInfo_ != nullptr;};
    void deleteCallInfo() { this->callInfo_ = nullptr;};
    inline const DescribeFaultDiagnosisUserDetailResponseBodyCallInfo & callInfo() const { DARABONBA_PTR_GET_CONST(callInfo_, DescribeFaultDiagnosisUserDetailResponseBodyCallInfo) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyCallInfo callInfo() { DARABONBA_PTR_GET(callInfo_, DescribeFaultDiagnosisUserDetailResponseBodyCallInfo) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setCallInfo(const DescribeFaultDiagnosisUserDetailResponseBodyCallInfo & callInfo) { DARABONBA_PTR_SET_VALUE(callInfo_, callInfo) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setCallInfo(DescribeFaultDiagnosisUserDetailResponseBodyCallInfo && callInfo) { DARABONBA_PTR_SET_RVALUE(callInfo_, callInfo) };


    // factorList Field Functions 
    bool hasFactorList() const { return this->factorList_ != nullptr;};
    void deleteFactorList() { this->factorList_ = nullptr;};
    inline const vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList> & factorList() const { DARABONBA_PTR_GET_CONST(factorList_, vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList>) };
    inline vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList> factorList() { DARABONBA_PTR_GET(factorList_, vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList>) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setFactorList(const vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList> & factorList) { DARABONBA_PTR_SET_VALUE(factorList_, factorList) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setFactorList(vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList> && factorList) { DARABONBA_PTR_SET_RVALUE(factorList_, factorList) };


    // faultMetricData Field Functions 
    bool hasFaultMetricData() const { return this->faultMetricData_ != nullptr;};
    void deleteFaultMetricData() { this->faultMetricData_ = nullptr;};
    inline const DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData & faultMetricData() const { DARABONBA_PTR_GET_CONST(faultMetricData_, DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData faultMetricData() { DARABONBA_PTR_GET(faultMetricData_, DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setFaultMetricData(const DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData & faultMetricData) { DARABONBA_PTR_SET_VALUE(faultMetricData_, faultMetricData) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setFaultMetricData(DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData && faultMetricData) { DARABONBA_PTR_SET_RVALUE(faultMetricData_, faultMetricData) };


    // networkOperators Field Functions 
    bool hasNetworkOperators() const { return this->networkOperators_ != nullptr;};
    void deleteNetworkOperators() { this->networkOperators_ = nullptr;};
    inline const vector<string> & networkOperators() const { DARABONBA_PTR_GET_CONST(networkOperators_, vector<string>) };
    inline vector<string> networkOperators() { DARABONBA_PTR_GET(networkOperators_, vector<string>) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setNetworkOperators(const vector<string> & networkOperators) { DARABONBA_PTR_SET_VALUE(networkOperators_, networkOperators) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setNetworkOperators(vector<string> && networkOperators) { DARABONBA_PTR_SET_RVALUE(networkOperators_, networkOperators) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDetail Field Functions 
    bool hasUserDetail() const { return this->userDetail_ != nullptr;};
    void deleteUserDetail() { this->userDetail_ = nullptr;};
    inline const DescribeFaultDiagnosisUserDetailResponseBodyUserDetail & userDetail() const { DARABONBA_PTR_GET_CONST(userDetail_, DescribeFaultDiagnosisUserDetailResponseBodyUserDetail) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail userDetail() { DARABONBA_PTR_GET(userDetail_, DescribeFaultDiagnosisUserDetailResponseBodyUserDetail) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setUserDetail(const DescribeFaultDiagnosisUserDetailResponseBodyUserDetail & userDetail) { DARABONBA_PTR_SET_VALUE(userDetail_, userDetail) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setUserDetail(DescribeFaultDiagnosisUserDetailResponseBodyUserDetail && userDetail) { DARABONBA_PTR_SET_RVALUE(userDetail_, userDetail) };


  protected:
    std::shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyCallInfo> callInfo_ = nullptr;
    std::shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList>> factorList_ = nullptr;
    std::shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData> faultMetricData_ = nullptr;
    std::shared_ptr<vector<string>> networkOperators_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyUserDetail> userDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
