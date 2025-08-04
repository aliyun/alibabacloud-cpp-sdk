// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISFACTORDISTRIBUTIONSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISFACTORDISTRIBUTIONSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisFactorDistributionStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisFactorDistributionStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatList, statList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisFactorDistributionStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatList, statList_);
    };
    DescribeFaultDiagnosisFactorDistributionStatResponseBody() = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody(const DescribeFaultDiagnosisFactorDistributionStatResponseBody &) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody(DescribeFaultDiagnosisFactorDistributionStatResponseBody &&) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisFactorDistributionStatResponseBody() = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody& operator=(const DescribeFaultDiagnosisFactorDistributionStatResponseBody &) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody& operator=(DescribeFaultDiagnosisFactorDistributionStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->statList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statList Field Functions 
    bool hasStatList() const { return this->statList_ != nullptr;};
    void deleteStatList() { this->statList_ = nullptr;};
    inline const vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList> & statList() const { DARABONBA_PTR_GET_CONST(statList_, vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList>) };
    inline vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList> statList() { DARABONBA_PTR_GET(statList_, vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList>) };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBody& setStatList(const vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList> & statList) { DARABONBA_PTR_SET_VALUE(statList_, statList) };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBody& setStatList(vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList> && statList) { DARABONBA_PTR_SET_RVALUE(statList_, statList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList>> statList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
