// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTCOUNTRESPONSEBODYCUSTOMEVENTCOUNTSCUSTOMEVENTCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTCOUNTRESPONSEBODYCUSTOMEVENTCOUNTSCUSTOMEVENTCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount() = default ;
    DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount(const DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount &) = default ;
    DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount(DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount &&) = default ;
    DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount() = default ;
    DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount& operator=(const DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount &) = default ;
    DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount& operator=(DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->num_ == nullptr && return this->time_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The event name.
    std::shared_ptr<string> name_ = nullptr;
    // The number of times that the custom event occurred.
    std::shared_ptr<int32_t> num_ = nullptr;
    // The time when the event occurred.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
