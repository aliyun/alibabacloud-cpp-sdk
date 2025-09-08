// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTCOUNTBYTHREATLEVELRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTCOUNTBYTHREATLEVELRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEventCountByThreatLevelResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventCountByThreatLevelResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventNum, eventNum_);
      DARABONBA_PTR_TO_JSON(HighLevelEventNum, highLevelEventNum_);
      DARABONBA_PTR_TO_JSON(LowLevelEventNum, lowLevelEventNum_);
      DARABONBA_PTR_TO_JSON(MediumLevelEventNum, mediumLevelEventNum_);
      DARABONBA_PTR_TO_JSON(UndealEventNum, undealEventNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventCountByThreatLevelResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventNum, eventNum_);
      DARABONBA_PTR_FROM_JSON(HighLevelEventNum, highLevelEventNum_);
      DARABONBA_PTR_FROM_JSON(LowLevelEventNum, lowLevelEventNum_);
      DARABONBA_PTR_FROM_JSON(MediumLevelEventNum, mediumLevelEventNum_);
      DARABONBA_PTR_FROM_JSON(UndealEventNum, undealEventNum_);
    };
    DescribeEventCountByThreatLevelResponseBodyData() = default ;
    DescribeEventCountByThreatLevelResponseBodyData(const DescribeEventCountByThreatLevelResponseBodyData &) = default ;
    DescribeEventCountByThreatLevelResponseBodyData(DescribeEventCountByThreatLevelResponseBodyData &&) = default ;
    DescribeEventCountByThreatLevelResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventCountByThreatLevelResponseBodyData() = default ;
    DescribeEventCountByThreatLevelResponseBodyData& operator=(const DescribeEventCountByThreatLevelResponseBodyData &) = default ;
    DescribeEventCountByThreatLevelResponseBodyData& operator=(DescribeEventCountByThreatLevelResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventNum_ != nullptr
        && this->highLevelEventNum_ != nullptr && this->lowLevelEventNum_ != nullptr && this->mediumLevelEventNum_ != nullptr && this->undealEventNum_ != nullptr; };
    // eventNum Field Functions 
    bool hasEventNum() const { return this->eventNum_ != nullptr;};
    void deleteEventNum() { this->eventNum_ = nullptr;};
    inline int64_t eventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, 0L) };
    inline DescribeEventCountByThreatLevelResponseBodyData& setEventNum(int64_t eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


    // highLevelEventNum Field Functions 
    bool hasHighLevelEventNum() const { return this->highLevelEventNum_ != nullptr;};
    void deleteHighLevelEventNum() { this->highLevelEventNum_ = nullptr;};
    inline int64_t highLevelEventNum() const { DARABONBA_PTR_GET_DEFAULT(highLevelEventNum_, 0L) };
    inline DescribeEventCountByThreatLevelResponseBodyData& setHighLevelEventNum(int64_t highLevelEventNum) { DARABONBA_PTR_SET_VALUE(highLevelEventNum_, highLevelEventNum) };


    // lowLevelEventNum Field Functions 
    bool hasLowLevelEventNum() const { return this->lowLevelEventNum_ != nullptr;};
    void deleteLowLevelEventNum() { this->lowLevelEventNum_ = nullptr;};
    inline int64_t lowLevelEventNum() const { DARABONBA_PTR_GET_DEFAULT(lowLevelEventNum_, 0L) };
    inline DescribeEventCountByThreatLevelResponseBodyData& setLowLevelEventNum(int64_t lowLevelEventNum) { DARABONBA_PTR_SET_VALUE(lowLevelEventNum_, lowLevelEventNum) };


    // mediumLevelEventNum Field Functions 
    bool hasMediumLevelEventNum() const { return this->mediumLevelEventNum_ != nullptr;};
    void deleteMediumLevelEventNum() { this->mediumLevelEventNum_ = nullptr;};
    inline int64_t mediumLevelEventNum() const { DARABONBA_PTR_GET_DEFAULT(mediumLevelEventNum_, 0L) };
    inline DescribeEventCountByThreatLevelResponseBodyData& setMediumLevelEventNum(int64_t mediumLevelEventNum) { DARABONBA_PTR_SET_VALUE(mediumLevelEventNum_, mediumLevelEventNum) };


    // undealEventNum Field Functions 
    bool hasUndealEventNum() const { return this->undealEventNum_ != nullptr;};
    void deleteUndealEventNum() { this->undealEventNum_ = nullptr;};
    inline int64_t undealEventNum() const { DARABONBA_PTR_GET_DEFAULT(undealEventNum_, 0L) };
    inline DescribeEventCountByThreatLevelResponseBodyData& setUndealEventNum(int64_t undealEventNum) { DARABONBA_PTR_SET_VALUE(undealEventNum_, undealEventNum) };


  protected:
    // The total number of events.
    std::shared_ptr<int64_t> eventNum_ = nullptr;
    // The number of high-risk events.
    std::shared_ptr<int64_t> highLevelEventNum_ = nullptr;
    // The number of low-risk events.
    std::shared_ptr<int64_t> lowLevelEventNum_ = nullptr;
    // The number of medium-risk events.
    std::shared_ptr<int64_t> mediumLevelEventNum_ = nullptr;
    // The number of unhandled events.
    std::shared_ptr<int64_t> undealEventNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
