// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFACTORLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFACTORLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas.hpp>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailResponseBodyFactorList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailResponseBodyFactorList& obj) { 
      DARABONBA_PTR_TO_JSON(FactorId, factorId_);
      DARABONBA_PTR_TO_JSON(FaultSource, faultSource_);
      DARABONBA_PTR_TO_JSON(RelatedEventDatas, relatedEventDatas_);
      DARABONBA_PTR_TO_JSON(RelatedMetricDatas, relatedMetricDatas_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailResponseBodyFactorList& obj) { 
      DARABONBA_PTR_FROM_JSON(FactorId, factorId_);
      DARABONBA_PTR_FROM_JSON(FaultSource, faultSource_);
      DARABONBA_PTR_FROM_JSON(RelatedEventDatas, relatedEventDatas_);
      DARABONBA_PTR_FROM_JSON(RelatedMetricDatas, relatedMetricDatas_);
    };
    DescribeFaultDiagnosisUserDetailResponseBodyFactorList() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorList(const DescribeFaultDiagnosisUserDetailResponseBodyFactorList &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorList(DescribeFaultDiagnosisUserDetailResponseBodyFactorList &&) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorList() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorList& operator=(const DescribeFaultDiagnosisUserDetailResponseBodyFactorList &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorList& operator=(DescribeFaultDiagnosisUserDetailResponseBodyFactorList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->factorId_ != nullptr
        && this->faultSource_ != nullptr && this->relatedEventDatas_ != nullptr && this->relatedMetricDatas_ != nullptr; };
    // factorId Field Functions 
    bool hasFactorId() const { return this->factorId_ != nullptr;};
    void deleteFactorId() { this->factorId_ = nullptr;};
    inline string factorId() const { DARABONBA_PTR_GET_DEFAULT(factorId_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorList& setFactorId(string factorId) { DARABONBA_PTR_SET_VALUE(factorId_, factorId) };


    // faultSource Field Functions 
    bool hasFaultSource() const { return this->faultSource_ != nullptr;};
    void deleteFaultSource() { this->faultSource_ = nullptr;};
    inline string faultSource() const { DARABONBA_PTR_GET_DEFAULT(faultSource_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorList& setFaultSource(string faultSource) { DARABONBA_PTR_SET_VALUE(faultSource_, faultSource) };


    // relatedEventDatas Field Functions 
    bool hasRelatedEventDatas() const { return this->relatedEventDatas_ != nullptr;};
    void deleteRelatedEventDatas() { this->relatedEventDatas_ = nullptr;};
    inline const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas> & relatedEventDatas() const { DARABONBA_PTR_GET_CONST(relatedEventDatas_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas>) };
    inline vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas> relatedEventDatas() { DARABONBA_PTR_GET(relatedEventDatas_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas>) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorList& setRelatedEventDatas(const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas> & relatedEventDatas) { DARABONBA_PTR_SET_VALUE(relatedEventDatas_, relatedEventDatas) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorList& setRelatedEventDatas(vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas> && relatedEventDatas) { DARABONBA_PTR_SET_RVALUE(relatedEventDatas_, relatedEventDatas) };


    // relatedMetricDatas Field Functions 
    bool hasRelatedMetricDatas() const { return this->relatedMetricDatas_ != nullptr;};
    void deleteRelatedMetricDatas() { this->relatedMetricDatas_ = nullptr;};
    inline const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas> & relatedMetricDatas() const { DARABONBA_PTR_GET_CONST(relatedMetricDatas_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas>) };
    inline vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas> relatedMetricDatas() { DARABONBA_PTR_GET(relatedMetricDatas_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas>) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorList& setRelatedMetricDatas(const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas> & relatedMetricDatas) { DARABONBA_PTR_SET_VALUE(relatedMetricDatas_, relatedMetricDatas) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorList& setRelatedMetricDatas(vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas> && relatedMetricDatas) { DARABONBA_PTR_SET_RVALUE(relatedMetricDatas_, relatedMetricDatas) };


  protected:
    std::shared_ptr<string> factorId_ = nullptr;
    std::shared_ptr<string> faultSource_ = nullptr;
    std::shared_ptr<vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas>> relatedEventDatas_ = nullptr;
    std::shared_ptr<vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas>> relatedMetricDatas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
