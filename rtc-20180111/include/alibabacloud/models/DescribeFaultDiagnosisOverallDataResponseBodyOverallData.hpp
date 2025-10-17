// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODYOVERALLDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODYOVERALLDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisOverallDataResponseBodyOverallData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisOverallDataResponseBodyOverallData& obj) { 
      DARABONBA_PTR_TO_JSON(FaultUserCount, faultUserCount_);
      DARABONBA_PTR_TO_JSON(FaultUserRatio, faultUserRatio_);
      DARABONBA_PTR_TO_JSON(TotalUserCount, totalUserCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisOverallDataResponseBodyOverallData& obj) { 
      DARABONBA_PTR_FROM_JSON(FaultUserCount, faultUserCount_);
      DARABONBA_PTR_FROM_JSON(FaultUserRatio, faultUserRatio_);
      DARABONBA_PTR_FROM_JSON(TotalUserCount, totalUserCount_);
    };
    DescribeFaultDiagnosisOverallDataResponseBodyOverallData() = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyOverallData(const DescribeFaultDiagnosisOverallDataResponseBodyOverallData &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyOverallData(DescribeFaultDiagnosisOverallDataResponseBodyOverallData &&) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyOverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisOverallDataResponseBodyOverallData() = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyOverallData& operator=(const DescribeFaultDiagnosisOverallDataResponseBodyOverallData &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyOverallData& operator=(DescribeFaultDiagnosisOverallDataResponseBodyOverallData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faultUserCount_ == nullptr
        && return this->faultUserRatio_ == nullptr && return this->totalUserCount_ == nullptr; };
    // faultUserCount Field Functions 
    bool hasFaultUserCount() const { return this->faultUserCount_ != nullptr;};
    void deleteFaultUserCount() { this->faultUserCount_ = nullptr;};
    inline int32_t faultUserCount() const { DARABONBA_PTR_GET_DEFAULT(faultUserCount_, 0) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyOverallData& setFaultUserCount(int32_t faultUserCount) { DARABONBA_PTR_SET_VALUE(faultUserCount_, faultUserCount) };


    // faultUserRatio Field Functions 
    bool hasFaultUserRatio() const { return this->faultUserRatio_ != nullptr;};
    void deleteFaultUserRatio() { this->faultUserRatio_ = nullptr;};
    inline float faultUserRatio() const { DARABONBA_PTR_GET_DEFAULT(faultUserRatio_, 0.0) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyOverallData& setFaultUserRatio(float faultUserRatio) { DARABONBA_PTR_SET_VALUE(faultUserRatio_, faultUserRatio) };


    // totalUserCount Field Functions 
    bool hasTotalUserCount() const { return this->totalUserCount_ != nullptr;};
    void deleteTotalUserCount() { this->totalUserCount_ = nullptr;};
    inline int32_t totalUserCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserCount_, 0) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyOverallData& setTotalUserCount(int32_t totalUserCount) { DARABONBA_PTR_SET_VALUE(totalUserCount_, totalUserCount) };


  protected:
    std::shared_ptr<int32_t> faultUserCount_ = nullptr;
    std::shared_ptr<float> faultUserRatio_ = nullptr;
    std::shared_ptr<int32_t> totalUserCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
