// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULESEGMENTLISTSEGMENTVISAREMARK_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULESEGMENTLISTSEGMENTVISAREMARK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& obj) { 
      DARABONBA_PTR_TO_JSON(dep_city_visa_remark, depCityVisaRemark_);
      DARABONBA_PTR_TO_JSON(dep_city_visa_type, depCityVisaType_);
      DARABONBA_PTR_TO_JSON(stop_city_visa_remarks, stopCityVisaRemarks_);
      DARABONBA_PTR_TO_JSON(stop_city_visa_types, stopCityVisaTypes_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& obj) { 
      DARABONBA_PTR_FROM_JSON(dep_city_visa_remark, depCityVisaRemark_);
      DARABONBA_PTR_FROM_JSON(dep_city_visa_type, depCityVisaType_);
      DARABONBA_PTR_FROM_JSON(stop_city_visa_remarks, stopCityVisaRemarks_);
      DARABONBA_PTR_FROM_JSON(stop_city_visa_types, stopCityVisaTypes_);
    };
    IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark() = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark(const IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark &) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark(IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark &&) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark() = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& operator=(const IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark &) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& operator=(IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->depCityVisaRemark_ != nullptr
        && this->depCityVisaType_ != nullptr && this->stopCityVisaRemarks_ != nullptr && this->stopCityVisaTypes_ != nullptr; };
    // depCityVisaRemark Field Functions 
    bool hasDepCityVisaRemark() const { return this->depCityVisaRemark_ != nullptr;};
    void deleteDepCityVisaRemark() { this->depCityVisaRemark_ = nullptr;};
    inline string depCityVisaRemark() const { DARABONBA_PTR_GET_DEFAULT(depCityVisaRemark_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& setDepCityVisaRemark(string depCityVisaRemark) { DARABONBA_PTR_SET_VALUE(depCityVisaRemark_, depCityVisaRemark) };


    // depCityVisaType Field Functions 
    bool hasDepCityVisaType() const { return this->depCityVisaType_ != nullptr;};
    void deleteDepCityVisaType() { this->depCityVisaType_ = nullptr;};
    inline int32_t depCityVisaType() const { DARABONBA_PTR_GET_DEFAULT(depCityVisaType_, 0) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& setDepCityVisaType(int32_t depCityVisaType) { DARABONBA_PTR_SET_VALUE(depCityVisaType_, depCityVisaType) };


    // stopCityVisaRemarks Field Functions 
    bool hasStopCityVisaRemarks() const { return this->stopCityVisaRemarks_ != nullptr;};
    void deleteStopCityVisaRemarks() { this->stopCityVisaRemarks_ = nullptr;};
    inline const vector<string> & stopCityVisaRemarks() const { DARABONBA_PTR_GET_CONST(stopCityVisaRemarks_, vector<string>) };
    inline vector<string> stopCityVisaRemarks() { DARABONBA_PTR_GET(stopCityVisaRemarks_, vector<string>) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& setStopCityVisaRemarks(const vector<string> & stopCityVisaRemarks) { DARABONBA_PTR_SET_VALUE(stopCityVisaRemarks_, stopCityVisaRemarks) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& setStopCityVisaRemarks(vector<string> && stopCityVisaRemarks) { DARABONBA_PTR_SET_RVALUE(stopCityVisaRemarks_, stopCityVisaRemarks) };


    // stopCityVisaTypes Field Functions 
    bool hasStopCityVisaTypes() const { return this->stopCityVisaTypes_ != nullptr;};
    void deleteStopCityVisaTypes() { this->stopCityVisaTypes_ = nullptr;};
    inline const vector<int32_t> & stopCityVisaTypes() const { DARABONBA_PTR_GET_CONST(stopCityVisaTypes_, vector<int32_t>) };
    inline vector<int32_t> stopCityVisaTypes() { DARABONBA_PTR_GET(stopCityVisaTypes_, vector<int32_t>) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& setStopCityVisaTypes(const vector<int32_t> & stopCityVisaTypes) { DARABONBA_PTR_SET_VALUE(stopCityVisaTypes_, stopCityVisaTypes) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListSegmentVisaRemark& setStopCityVisaTypes(vector<int32_t> && stopCityVisaTypes) { DARABONBA_PTR_SET_RVALUE(stopCityVisaTypes_, stopCityVisaTypes) };


  protected:
    std::shared_ptr<string> depCityVisaRemark_ = nullptr;
    std::shared_ptr<int32_t> depCityVisaType_ = nullptr;
    std::shared_ptr<vector<string>> stopCityVisaRemarks_ = nullptr;
    std::shared_ptr<vector<int32_t>> stopCityVisaTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
