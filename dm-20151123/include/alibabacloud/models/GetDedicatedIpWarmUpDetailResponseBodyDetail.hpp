// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPDETAILRESPONSEBODYDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPDETAILRESPONSEBODYDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetDedicatedIpWarmUpDetailResponseBodyDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDedicatedIpWarmUpDetailResponseBodyDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DayMark, dayMark_);
      DARABONBA_PTR_TO_JSON(DeliverCounts, deliverCounts_);
      DARABONBA_PTR_TO_JSON(Esp, esp_);
      DARABONBA_PTR_TO_JSON(SendCounts, sendCounts_);
    };
    friend void from_json(const Darabonba::Json& j, GetDedicatedIpWarmUpDetailResponseBodyDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DayMark, dayMark_);
      DARABONBA_PTR_FROM_JSON(DeliverCounts, deliverCounts_);
      DARABONBA_PTR_FROM_JSON(Esp, esp_);
      DARABONBA_PTR_FROM_JSON(SendCounts, sendCounts_);
    };
    GetDedicatedIpWarmUpDetailResponseBodyDetail() = default ;
    GetDedicatedIpWarmUpDetailResponseBodyDetail(const GetDedicatedIpWarmUpDetailResponseBodyDetail &) = default ;
    GetDedicatedIpWarmUpDetailResponseBodyDetail(GetDedicatedIpWarmUpDetailResponseBodyDetail &&) = default ;
    GetDedicatedIpWarmUpDetailResponseBodyDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDedicatedIpWarmUpDetailResponseBodyDetail() = default ;
    GetDedicatedIpWarmUpDetailResponseBodyDetail& operator=(const GetDedicatedIpWarmUpDetailResponseBodyDetail &) = default ;
    GetDedicatedIpWarmUpDetailResponseBodyDetail& operator=(GetDedicatedIpWarmUpDetailResponseBodyDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dayMark_ != nullptr
        && this->deliverCounts_ != nullptr && this->esp_ != nullptr && this->sendCounts_ != nullptr; };
    // dayMark Field Functions 
    bool hasDayMark() const { return this->dayMark_ != nullptr;};
    void deleteDayMark() { this->dayMark_ = nullptr;};
    inline int64_t dayMark() const { DARABONBA_PTR_GET_DEFAULT(dayMark_, 0L) };
    inline GetDedicatedIpWarmUpDetailResponseBodyDetail& setDayMark(int64_t dayMark) { DARABONBA_PTR_SET_VALUE(dayMark_, dayMark) };


    // deliverCounts Field Functions 
    bool hasDeliverCounts() const { return this->deliverCounts_ != nullptr;};
    void deleteDeliverCounts() { this->deliverCounts_ = nullptr;};
    inline int64_t deliverCounts() const { DARABONBA_PTR_GET_DEFAULT(deliverCounts_, 0L) };
    inline GetDedicatedIpWarmUpDetailResponseBodyDetail& setDeliverCounts(int64_t deliverCounts) { DARABONBA_PTR_SET_VALUE(deliverCounts_, deliverCounts) };


    // esp Field Functions 
    bool hasEsp() const { return this->esp_ != nullptr;};
    void deleteEsp() { this->esp_ = nullptr;};
    inline string esp() const { DARABONBA_PTR_GET_DEFAULT(esp_, "") };
    inline GetDedicatedIpWarmUpDetailResponseBodyDetail& setEsp(string esp) { DARABONBA_PTR_SET_VALUE(esp_, esp) };


    // sendCounts Field Functions 
    bool hasSendCounts() const { return this->sendCounts_ != nullptr;};
    void deleteSendCounts() { this->sendCounts_ = nullptr;};
    inline int64_t sendCounts() const { DARABONBA_PTR_GET_DEFAULT(sendCounts_, 0L) };
    inline GetDedicatedIpWarmUpDetailResponseBodyDetail& setSendCounts(int64_t sendCounts) { DARABONBA_PTR_SET_VALUE(sendCounts_, sendCounts) };


  protected:
    std::shared_ptr<int64_t> dayMark_ = nullptr;
    std::shared_ptr<int64_t> deliverCounts_ = nullptr;
    std::shared_ptr<string> esp_ = nullptr;
    std::shared_ptr<int64_t> sendCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
