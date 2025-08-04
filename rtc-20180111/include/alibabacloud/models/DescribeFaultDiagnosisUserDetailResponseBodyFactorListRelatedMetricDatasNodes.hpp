// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFACTORLISTRELATEDMETRICDATASNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFACTORLISTRELATEDMETRICDATASNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes& obj) { 
      DARABONBA_ANY_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes& obj) { 
      DARABONBA_ANY_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes(const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes(DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes &&) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes& operator=(const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes& operator=(DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ext_ != nullptr
        && this->x_ != nullptr && this->y_ != nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline     const Darabonba::Json & ext() const { DARABONBA_GET(ext_) };
    Darabonba::Json & ext() { DARABONBA_GET(ext_) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes& setExt(Darabonba::Json & ext) { DARABONBA_SET_RVALUE(ext_, ext) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    Darabonba::Json ext_ = nullptr;
    std::shared_ptr<string> x_ = nullptr;
    std::shared_ptr<string> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
