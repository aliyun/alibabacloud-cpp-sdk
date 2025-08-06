// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODEDITINGUSAGEDATARESPONSEBODYEDITINGDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODEDITINGUSAGEDATARESPONSEBODYEDITINGDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodEditingUsageDataResponseBodyEditingData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodEditingUsageDataResponseBodyEditingData& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodEditingUsageDataResponseBodyEditingData& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodEditingUsageDataResponseBodyEditingData() = default ;
    DescribeVodEditingUsageDataResponseBodyEditingData(const DescribeVodEditingUsageDataResponseBodyEditingData &) = default ;
    DescribeVodEditingUsageDataResponseBodyEditingData(DescribeVodEditingUsageDataResponseBodyEditingData &&) = default ;
    DescribeVodEditingUsageDataResponseBodyEditingData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodEditingUsageDataResponseBodyEditingData() = default ;
    DescribeVodEditingUsageDataResponseBodyEditingData& operator=(const DescribeVodEditingUsageDataResponseBodyEditingData &) = default ;
    DescribeVodEditingUsageDataResponseBodyEditingData& operator=(DescribeVodEditingUsageDataResponseBodyEditingData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->region_ != nullptr && this->specification_ != nullptr && this->timeStamp_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeVodEditingUsageDataResponseBodyEditingData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVodEditingUsageDataResponseBodyEditingData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline DescribeVodEditingUsageDataResponseBodyEditingData& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodEditingUsageDataResponseBodyEditingData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> specification_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
