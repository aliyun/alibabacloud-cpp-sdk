// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULECANCELINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULECANCELINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderDetailInfoResponseBodyModuleCancelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderDetailInfoResponseBodyModuleCancelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_end_time, cancelEndTime_);
      DARABONBA_PTR_TO_JSON(cancel_start_time, cancelStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderDetailInfoResponseBodyModuleCancelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_end_time, cancelEndTime_);
      DARABONBA_PTR_FROM_JSON(cancel_start_time, cancelStartTime_);
    };
    HotelOrderDetailInfoResponseBodyModuleCancelInfo() = default ;
    HotelOrderDetailInfoResponseBodyModuleCancelInfo(const HotelOrderDetailInfoResponseBodyModuleCancelInfo &) = default ;
    HotelOrderDetailInfoResponseBodyModuleCancelInfo(HotelOrderDetailInfoResponseBodyModuleCancelInfo &&) = default ;
    HotelOrderDetailInfoResponseBodyModuleCancelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderDetailInfoResponseBodyModuleCancelInfo() = default ;
    HotelOrderDetailInfoResponseBodyModuleCancelInfo& operator=(const HotelOrderDetailInfoResponseBodyModuleCancelInfo &) = default ;
    HotelOrderDetailInfoResponseBodyModuleCancelInfo& operator=(HotelOrderDetailInfoResponseBodyModuleCancelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelEndTime_ != nullptr
        && this->cancelStartTime_ != nullptr; };
    // cancelEndTime Field Functions 
    bool hasCancelEndTime() const { return this->cancelEndTime_ != nullptr;};
    void deleteCancelEndTime() { this->cancelEndTime_ = nullptr;};
    inline string cancelEndTime() const { DARABONBA_PTR_GET_DEFAULT(cancelEndTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleCancelInfo& setCancelEndTime(string cancelEndTime) { DARABONBA_PTR_SET_VALUE(cancelEndTime_, cancelEndTime) };


    // cancelStartTime Field Functions 
    bool hasCancelStartTime() const { return this->cancelStartTime_ != nullptr;};
    void deleteCancelStartTime() { this->cancelStartTime_ = nullptr;};
    inline string cancelStartTime() const { DARABONBA_PTR_GET_DEFAULT(cancelStartTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleCancelInfo& setCancelStartTime(string cancelStartTime) { DARABONBA_PTR_SET_VALUE(cancelStartTime_, cancelStartTime) };


  protected:
    std::shared_ptr<string> cancelEndTime_ = nullptr;
    std::shared_ptr<string> cancelStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
