// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODYMETRICDATANODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODYMETRICDATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes& obj) { 
      DARABONBA_ANY_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes& obj) { 
      DARABONBA_ANY_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes() = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes(const DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes(DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes &&) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes() = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes& operator=(const DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes& operator=(DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ext_ == nullptr
        && return this->x_ == nullptr && return this->y_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline     const Darabonba::Json & ext() const { DARABONBA_GET(ext_) };
    Darabonba::Json & ext() { DARABONBA_GET(ext_) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes& setExt(Darabonba::Json & ext) { DARABONBA_SET_RVALUE(ext_, ext) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    Darabonba::Json ext_ = nullptr;
    std::shared_ptr<string> x_ = nullptr;
    std::shared_ptr<string> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
