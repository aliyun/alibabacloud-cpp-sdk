// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMEDELIVERYACCRESPONSEBODYREALTIMEDELIVERYACCDATAACCDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMEDELIVERYACCRESPONSEBODYREALTIMEDELIVERYACCDATAACCDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData& obj) { 
      DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
      DARABONBA_PTR_TO_JSON(SuccessNum, successNum_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
      DARABONBA_PTR_FROM_JSON(SuccessNum, successNum_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData() = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData(const DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData &) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData(DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData &&) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData() = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData& operator=(const DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData &) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData& operator=(DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedNum_ != nullptr
        && this->successNum_ != nullptr && this->timeStamp_ != nullptr; };
    // failedNum Field Functions 
    bool hasFailedNum() const { return this->failedNum_ != nullptr;};
    void deleteFailedNum() { this->failedNum_ = nullptr;};
    inline int32_t failedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0) };
    inline DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData& setFailedNum(int32_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


    // successNum Field Functions 
    bool hasSuccessNum() const { return this->successNum_ != nullptr;};
    void deleteSuccessNum() { this->successNum_ = nullptr;};
    inline int32_t successNum() const { DARABONBA_PTR_GET_DEFAULT(successNum_, 0) };
    inline DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData& setSuccessNum(int32_t successNum) { DARABONBA_PTR_SET_VALUE(successNum_, successNum) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of failed real-time log deliveries.
    std::shared_ptr<int32_t> failedNum_ = nullptr;
    // The number of successful real-time log deliveries.
    std::shared_ptr<int32_t> successNum_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
