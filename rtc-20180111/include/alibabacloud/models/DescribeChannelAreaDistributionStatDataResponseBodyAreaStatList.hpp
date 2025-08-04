// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELAREADISTRIBUTIONSTATDATARESPONSEBODYAREASTATLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELAREADISTRIBUTIONSTATDATARESPONSEBODYAREASTATLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& obj) { 
      DARABONBA_PTR_TO_JSON(AreaName, areaName_);
      DARABONBA_PTR_TO_JSON(CallUserCount, callUserCount_);
      DARABONBA_PTR_TO_JSON(HighQualityTransmissionRate, highQualityTransmissionRate_);
      DARABONBA_PTR_TO_JSON(PubUserCount, pubUserCount_);
      DARABONBA_PTR_TO_JSON(SubUserCount, subUserCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
      DARABONBA_PTR_FROM_JSON(CallUserCount, callUserCount_);
      DARABONBA_PTR_FROM_JSON(HighQualityTransmissionRate, highQualityTransmissionRate_);
      DARABONBA_PTR_FROM_JSON(PubUserCount, pubUserCount_);
      DARABONBA_PTR_FROM_JSON(SubUserCount, subUserCount_);
    };
    DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList() = default ;
    DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList(const DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList &) = default ;
    DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList(DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList &&) = default ;
    DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList() = default ;
    DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& operator=(const DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList &) = default ;
    DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& operator=(DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->areaName_ != nullptr
        && this->callUserCount_ != nullptr && this->highQualityTransmissionRate_ != nullptr && this->pubUserCount_ != nullptr && this->subUserCount_ != nullptr; };
    // areaName Field Functions 
    bool hasAreaName() const { return this->areaName_ != nullptr;};
    void deleteAreaName() { this->areaName_ = nullptr;};
    inline string areaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
    inline DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


    // callUserCount Field Functions 
    bool hasCallUserCount() const { return this->callUserCount_ != nullptr;};
    void deleteCallUserCount() { this->callUserCount_ = nullptr;};
    inline int32_t callUserCount() const { DARABONBA_PTR_GET_DEFAULT(callUserCount_, 0) };
    inline DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& setCallUserCount(int32_t callUserCount) { DARABONBA_PTR_SET_VALUE(callUserCount_, callUserCount) };


    // highQualityTransmissionRate Field Functions 
    bool hasHighQualityTransmissionRate() const { return this->highQualityTransmissionRate_ != nullptr;};
    void deleteHighQualityTransmissionRate() { this->highQualityTransmissionRate_ = nullptr;};
    inline string highQualityTransmissionRate() const { DARABONBA_PTR_GET_DEFAULT(highQualityTransmissionRate_, "") };
    inline DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& setHighQualityTransmissionRate(string highQualityTransmissionRate) { DARABONBA_PTR_SET_VALUE(highQualityTransmissionRate_, highQualityTransmissionRate) };


    // pubUserCount Field Functions 
    bool hasPubUserCount() const { return this->pubUserCount_ != nullptr;};
    void deletePubUserCount() { this->pubUserCount_ = nullptr;};
    inline int32_t pubUserCount() const { DARABONBA_PTR_GET_DEFAULT(pubUserCount_, 0) };
    inline DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& setPubUserCount(int32_t pubUserCount) { DARABONBA_PTR_SET_VALUE(pubUserCount_, pubUserCount) };


    // subUserCount Field Functions 
    bool hasSubUserCount() const { return this->subUserCount_ != nullptr;};
    void deleteSubUserCount() { this->subUserCount_ = nullptr;};
    inline int32_t subUserCount() const { DARABONBA_PTR_GET_DEFAULT(subUserCount_, 0) };
    inline DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList& setSubUserCount(int32_t subUserCount) { DARABONBA_PTR_SET_VALUE(subUserCount_, subUserCount) };


  protected:
    std::shared_ptr<string> areaName_ = nullptr;
    std::shared_ptr<int32_t> callUserCount_ = nullptr;
    std::shared_ptr<string> highQualityTransmissionRate_ = nullptr;
    std::shared_ptr<int32_t> pubUserCount_ = nullptr;
    std::shared_ptr<int32_t> subUserCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
