// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMERCIALSTATUSRESPONSEBODYUSERANDCOMMODITYSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMERCIALSTATUSRESPONSEBODYUSERANDCOMMODITYSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetCommercialStatusResponseBodyUserAndCommodityStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommercialStatusResponseBodyUserAndCommodityStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Basic, basic_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(FreeDays, freeDays_);
      DARABONBA_PTR_TO_JSON(Lable, lable_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommercialStatusResponseBodyUserAndCommodityStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Basic, basic_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(FreeDays, freeDays_);
      DARABONBA_PTR_FROM_JSON(Lable, lable_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetCommercialStatusResponseBodyUserAndCommodityStatus() = default ;
    GetCommercialStatusResponseBodyUserAndCommodityStatus(const GetCommercialStatusResponseBodyUserAndCommodityStatus &) = default ;
    GetCommercialStatusResponseBodyUserAndCommodityStatus(GetCommercialStatusResponseBodyUserAndCommodityStatus &&) = default ;
    GetCommercialStatusResponseBodyUserAndCommodityStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommercialStatusResponseBodyUserAndCommodityStatus() = default ;
    GetCommercialStatusResponseBodyUserAndCommodityStatus& operator=(const GetCommercialStatusResponseBodyUserAndCommodityStatus &) = default ;
    GetCommercialStatusResponseBodyUserAndCommodityStatus& operator=(GetCommercialStatusResponseBodyUserAndCommodityStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->basic_ != nullptr
        && this->chargeType_ != nullptr && this->enable_ != nullptr && this->extraInfo_ != nullptr && this->freeDays_ != nullptr && this->lable_ != nullptr
        && this->status_ != nullptr; };
    // basic Field Functions 
    bool hasBasic() const { return this->basic_ != nullptr;};
    void deleteBasic() { this->basic_ = nullptr;};
    inline bool basic() const { DARABONBA_PTR_GET_DEFAULT(basic_, false) };
    inline GetCommercialStatusResponseBodyUserAndCommodityStatus& setBasic(bool basic) { DARABONBA_PTR_SET_VALUE(basic_, basic) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetCommercialStatusResponseBodyUserAndCommodityStatus& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetCommercialStatusResponseBodyUserAndCommodityStatus& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & extraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & extraInfo() { DARABONBA_GET(extraInfo_) };
    inline GetCommercialStatusResponseBodyUserAndCommodityStatus& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline GetCommercialStatusResponseBodyUserAndCommodityStatus& setExtraInfo(Darabonba::Json & extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // freeDays Field Functions 
    bool hasFreeDays() const { return this->freeDays_ != nullptr;};
    void deleteFreeDays() { this->freeDays_ = nullptr;};
    inline int64_t freeDays() const { DARABONBA_PTR_GET_DEFAULT(freeDays_, 0L) };
    inline GetCommercialStatusResponseBodyUserAndCommodityStatus& setFreeDays(int64_t freeDays) { DARABONBA_PTR_SET_VALUE(freeDays_, freeDays) };


    // lable Field Functions 
    bool hasLable() const { return this->lable_ != nullptr;};
    void deleteLable() { this->lable_ = nullptr;};
    inline string lable() const { DARABONBA_PTR_GET_DEFAULT(lable_, "") };
    inline GetCommercialStatusResponseBodyUserAndCommodityStatus& setLable(string lable) { DARABONBA_PTR_SET_VALUE(lable_, lable) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCommercialStatusResponseBodyUserAndCommodityStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether you are using the Basic Edition.
    std::shared_ptr<bool> basic_ = nullptr;
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // Indicates whether the service is activated.
    std::shared_ptr<bool> enable_ = nullptr;
    // The additional information.
    Darabonba::Json extraInfo_ = nullptr;
    // The number of days during which the service is free of charge.
    std::shared_ptr<int64_t> freeDays_ = nullptr;
    // The tags.
    std::shared_ptr<string> lable_ = nullptr;
    // The commercialization status.
    // 
    // Valid values:
    // 
    // *   Normal: The service is activated.
    // *   Abnormal: An exception occurs during activation.
    // *   Free: The service is not activated.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
