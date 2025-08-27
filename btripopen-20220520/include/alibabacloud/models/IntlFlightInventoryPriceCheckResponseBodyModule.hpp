// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightInventoryPriceCheckResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightInventoryPriceCheckResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(check_success, checkSuccess_);
      DARABONBA_PTR_TO_JSON(fail_type, failType_);
      DARABONBA_PTR_TO_JSON(passenger_changed_price_info_list, passengerChangedPriceInfoList_);
      DARABONBA_PTR_TO_JSON(render_key, renderKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightInventoryPriceCheckResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(check_success, checkSuccess_);
      DARABONBA_PTR_FROM_JSON(fail_type, failType_);
      DARABONBA_PTR_FROM_JSON(passenger_changed_price_info_list, passengerChangedPriceInfoList_);
      DARABONBA_PTR_FROM_JSON(render_key, renderKey_);
    };
    IntlFlightInventoryPriceCheckResponseBodyModule() = default ;
    IntlFlightInventoryPriceCheckResponseBodyModule(const IntlFlightInventoryPriceCheckResponseBodyModule &) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModule(IntlFlightInventoryPriceCheckResponseBodyModule &&) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightInventoryPriceCheckResponseBodyModule() = default ;
    IntlFlightInventoryPriceCheckResponseBodyModule& operator=(const IntlFlightInventoryPriceCheckResponseBodyModule &) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModule& operator=(IntlFlightInventoryPriceCheckResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkSuccess_ != nullptr
        && this->failType_ != nullptr && this->passengerChangedPriceInfoList_ != nullptr && this->renderKey_ != nullptr; };
    // checkSuccess Field Functions 
    bool hasCheckSuccess() const { return this->checkSuccess_ != nullptr;};
    void deleteCheckSuccess() { this->checkSuccess_ = nullptr;};
    inline bool checkSuccess() const { DARABONBA_PTR_GET_DEFAULT(checkSuccess_, false) };
    inline IntlFlightInventoryPriceCheckResponseBodyModule& setCheckSuccess(bool checkSuccess) { DARABONBA_PTR_SET_VALUE(checkSuccess_, checkSuccess) };


    // failType Field Functions 
    bool hasFailType() const { return this->failType_ != nullptr;};
    void deleteFailType() { this->failType_ = nullptr;};
    inline int32_t failType() const { DARABONBA_PTR_GET_DEFAULT(failType_, 0) };
    inline IntlFlightInventoryPriceCheckResponseBodyModule& setFailType(int32_t failType) { DARABONBA_PTR_SET_VALUE(failType_, failType) };


    // passengerChangedPriceInfoList Field Functions 
    bool hasPassengerChangedPriceInfoList() const { return this->passengerChangedPriceInfoList_ != nullptr;};
    void deletePassengerChangedPriceInfoList() { this->passengerChangedPriceInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList> & passengerChangedPriceInfoList() const { DARABONBA_PTR_GET_CONST(passengerChangedPriceInfoList_, vector<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList>) };
    inline vector<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList> passengerChangedPriceInfoList() { DARABONBA_PTR_GET(passengerChangedPriceInfoList_, vector<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList>) };
    inline IntlFlightInventoryPriceCheckResponseBodyModule& setPassengerChangedPriceInfoList(const vector<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList> & passengerChangedPriceInfoList) { DARABONBA_PTR_SET_VALUE(passengerChangedPriceInfoList_, passengerChangedPriceInfoList) };
    inline IntlFlightInventoryPriceCheckResponseBodyModule& setPassengerChangedPriceInfoList(vector<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList> && passengerChangedPriceInfoList) { DARABONBA_PTR_SET_RVALUE(passengerChangedPriceInfoList_, passengerChangedPriceInfoList) };


    // renderKey Field Functions 
    bool hasRenderKey() const { return this->renderKey_ != nullptr;};
    void deleteRenderKey() { this->renderKey_ = nullptr;};
    inline string renderKey() const { DARABONBA_PTR_GET_DEFAULT(renderKey_, "") };
    inline IntlFlightInventoryPriceCheckResponseBodyModule& setRenderKey(string renderKey) { DARABONBA_PTR_SET_VALUE(renderKey_, renderKey) };


  protected:
    std::shared_ptr<bool> checkSuccess_ = nullptr;
    std::shared_ptr<int32_t> failType_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList>> passengerChangedPriceInfoList_ = nullptr;
    std::shared_ptr<string> renderKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
