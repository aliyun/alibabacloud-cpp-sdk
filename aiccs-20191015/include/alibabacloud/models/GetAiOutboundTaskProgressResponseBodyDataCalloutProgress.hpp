// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSRESPONSEBODYDATACALLOUTPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSRESPONSEBODYDATACALLOUTPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskProgressResponseBodyDataCalloutProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& obj) { 
      DARABONBA_PTR_TO_JSON(CallLossCount, callLossCount_);
      DARABONBA_PTR_TO_JSON(CallLossRate, callLossRate_);
      DARABONBA_PTR_TO_JSON(CallOutConnectCount, callOutConnectCount_);
      DARABONBA_PTR_TO_JSON(CallOutConnectRate, callOutConnectRate_);
      DARABONBA_PTR_TO_JSON(CallOutCount, callOutCount_);
      DARABONBA_PTR_TO_JSON(CallOutServicerPickupCount, callOutServicerPickupCount_);
      DARABONBA_PTR_TO_JSON(CallOutServicerPickupRate, callOutServicerPickupRate_);
      DARABONBA_PTR_TO_JSON(CallOutUserPickupCount, callOutUserPickupCount_);
      DARABONBA_PTR_TO_JSON(CallOutUserPickupRate, callOutUserPickupRate_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(CallLossCount, callLossCount_);
      DARABONBA_PTR_FROM_JSON(CallLossRate, callLossRate_);
      DARABONBA_PTR_FROM_JSON(CallOutConnectCount, callOutConnectCount_);
      DARABONBA_PTR_FROM_JSON(CallOutConnectRate, callOutConnectRate_);
      DARABONBA_PTR_FROM_JSON(CallOutCount, callOutCount_);
      DARABONBA_PTR_FROM_JSON(CallOutServicerPickupCount, callOutServicerPickupCount_);
      DARABONBA_PTR_FROM_JSON(CallOutServicerPickupRate, callOutServicerPickupRate_);
      DARABONBA_PTR_FROM_JSON(CallOutUserPickupCount, callOutUserPickupCount_);
      DARABONBA_PTR_FROM_JSON(CallOutUserPickupRate, callOutUserPickupRate_);
    };
    GetAiOutboundTaskProgressResponseBodyDataCalloutProgress() = default ;
    GetAiOutboundTaskProgressResponseBodyDataCalloutProgress(const GetAiOutboundTaskProgressResponseBodyDataCalloutProgress &) = default ;
    GetAiOutboundTaskProgressResponseBodyDataCalloutProgress(GetAiOutboundTaskProgressResponseBodyDataCalloutProgress &&) = default ;
    GetAiOutboundTaskProgressResponseBodyDataCalloutProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskProgressResponseBodyDataCalloutProgress() = default ;
    GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& operator=(const GetAiOutboundTaskProgressResponseBodyDataCalloutProgress &) = default ;
    GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& operator=(GetAiOutboundTaskProgressResponseBodyDataCalloutProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callLossCount_ != nullptr
        && this->callLossRate_ != nullptr && this->callOutConnectCount_ != nullptr && this->callOutConnectRate_ != nullptr && this->callOutCount_ != nullptr && this->callOutServicerPickupCount_ != nullptr
        && this->callOutServicerPickupRate_ != nullptr && this->callOutUserPickupCount_ != nullptr && this->callOutUserPickupRate_ != nullptr; };
    // callLossCount Field Functions 
    bool hasCallLossCount() const { return this->callLossCount_ != nullptr;};
    void deleteCallLossCount() { this->callLossCount_ = nullptr;};
    inline int32_t callLossCount() const { DARABONBA_PTR_GET_DEFAULT(callLossCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallLossCount(int32_t callLossCount) { DARABONBA_PTR_SET_VALUE(callLossCount_, callLossCount) };


    // callLossRate Field Functions 
    bool hasCallLossRate() const { return this->callLossRate_ != nullptr;};
    void deleteCallLossRate() { this->callLossRate_ = nullptr;};
    inline float callLossRate() const { DARABONBA_PTR_GET_DEFAULT(callLossRate_, 0.0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallLossRate(float callLossRate) { DARABONBA_PTR_SET_VALUE(callLossRate_, callLossRate) };


    // callOutConnectCount Field Functions 
    bool hasCallOutConnectCount() const { return this->callOutConnectCount_ != nullptr;};
    void deleteCallOutConnectCount() { this->callOutConnectCount_ = nullptr;};
    inline int32_t callOutConnectCount() const { DARABONBA_PTR_GET_DEFAULT(callOutConnectCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallOutConnectCount(int32_t callOutConnectCount) { DARABONBA_PTR_SET_VALUE(callOutConnectCount_, callOutConnectCount) };


    // callOutConnectRate Field Functions 
    bool hasCallOutConnectRate() const { return this->callOutConnectRate_ != nullptr;};
    void deleteCallOutConnectRate() { this->callOutConnectRate_ = nullptr;};
    inline float callOutConnectRate() const { DARABONBA_PTR_GET_DEFAULT(callOutConnectRate_, 0.0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallOutConnectRate(float callOutConnectRate) { DARABONBA_PTR_SET_VALUE(callOutConnectRate_, callOutConnectRate) };


    // callOutCount Field Functions 
    bool hasCallOutCount() const { return this->callOutCount_ != nullptr;};
    void deleteCallOutCount() { this->callOutCount_ = nullptr;};
    inline int32_t callOutCount() const { DARABONBA_PTR_GET_DEFAULT(callOutCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallOutCount(int32_t callOutCount) { DARABONBA_PTR_SET_VALUE(callOutCount_, callOutCount) };


    // callOutServicerPickupCount Field Functions 
    bool hasCallOutServicerPickupCount() const { return this->callOutServicerPickupCount_ != nullptr;};
    void deleteCallOutServicerPickupCount() { this->callOutServicerPickupCount_ = nullptr;};
    inline int32_t callOutServicerPickupCount() const { DARABONBA_PTR_GET_DEFAULT(callOutServicerPickupCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallOutServicerPickupCount(int32_t callOutServicerPickupCount) { DARABONBA_PTR_SET_VALUE(callOutServicerPickupCount_, callOutServicerPickupCount) };


    // callOutServicerPickupRate Field Functions 
    bool hasCallOutServicerPickupRate() const { return this->callOutServicerPickupRate_ != nullptr;};
    void deleteCallOutServicerPickupRate() { this->callOutServicerPickupRate_ = nullptr;};
    inline float callOutServicerPickupRate() const { DARABONBA_PTR_GET_DEFAULT(callOutServicerPickupRate_, 0.0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallOutServicerPickupRate(float callOutServicerPickupRate) { DARABONBA_PTR_SET_VALUE(callOutServicerPickupRate_, callOutServicerPickupRate) };


    // callOutUserPickupCount Field Functions 
    bool hasCallOutUserPickupCount() const { return this->callOutUserPickupCount_ != nullptr;};
    void deleteCallOutUserPickupCount() { this->callOutUserPickupCount_ = nullptr;};
    inline int32_t callOutUserPickupCount() const { DARABONBA_PTR_GET_DEFAULT(callOutUserPickupCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallOutUserPickupCount(int32_t callOutUserPickupCount) { DARABONBA_PTR_SET_VALUE(callOutUserPickupCount_, callOutUserPickupCount) };


    // callOutUserPickupRate Field Functions 
    bool hasCallOutUserPickupRate() const { return this->callOutUserPickupRate_ != nullptr;};
    void deleteCallOutUserPickupRate() { this->callOutUserPickupRate_ = nullptr;};
    inline float callOutUserPickupRate() const { DARABONBA_PTR_GET_DEFAULT(callOutUserPickupRate_, 0.0) };
    inline GetAiOutboundTaskProgressResponseBodyDataCalloutProgress& setCallOutUserPickupRate(float callOutUserPickupRate) { DARABONBA_PTR_SET_VALUE(callOutUserPickupRate_, callOutUserPickupRate) };


  protected:
    std::shared_ptr<int32_t> callLossCount_ = nullptr;
    std::shared_ptr<float> callLossRate_ = nullptr;
    std::shared_ptr<int32_t> callOutConnectCount_ = nullptr;
    std::shared_ptr<float> callOutConnectRate_ = nullptr;
    std::shared_ptr<int32_t> callOutCount_ = nullptr;
    std::shared_ptr<int32_t> callOutServicerPickupCount_ = nullptr;
    std::shared_ptr<float> callOutServicerPickupRate_ = nullptr;
    std::shared_ptr<int32_t> callOutUserPickupCount_ = nullptr;
    std::shared_ptr<float> callOutUserPickupRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
