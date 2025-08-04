// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISFACTORDISTRIBUTIONSTATRESPONSEBODYSTATLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISFACTORDISTRIBUTIONSTATRESPONSEBODYSTATLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList& obj) { 
      DARABONBA_PTR_TO_JSON(FactorId, factorId_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
      DARABONBA_PTR_TO_JSON(UserRatio, userRatio_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList& obj) { 
      DARABONBA_PTR_FROM_JSON(FactorId, factorId_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
      DARABONBA_PTR_FROM_JSON(UserRatio, userRatio_);
    };
    DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList() = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList(const DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList &) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList(DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList &&) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList() = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList& operator=(const DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList &) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList& operator=(DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->factorId_ != nullptr
        && this->userCount_ != nullptr && this->userRatio_ != nullptr; };
    // factorId Field Functions 
    bool hasFactorId() const { return this->factorId_ != nullptr;};
    void deleteFactorId() { this->factorId_ = nullptr;};
    inline string factorId() const { DARABONBA_PTR_GET_DEFAULT(factorId_, "") };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList& setFactorId(string factorId) { DARABONBA_PTR_SET_VALUE(factorId_, factorId) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t userCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


    // userRatio Field Functions 
    bool hasUserRatio() const { return this->userRatio_ != nullptr;};
    void deleteUserRatio() { this->userRatio_ = nullptr;};
    inline float userRatio() const { DARABONBA_PTR_GET_DEFAULT(userRatio_, 0.0) };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList& setUserRatio(float userRatio) { DARABONBA_PTR_SET_VALUE(userRatio_, userRatio) };


  protected:
    std::shared_ptr<string> factorId_ = nullptr;
    std::shared_ptr<int32_t> userCount_ = nullptr;
    std::shared_ptr<float> userRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
