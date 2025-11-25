// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNPROTECTEDPORTTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNPROTECTEDPORTTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUnprotectedPortTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnprotectedPortTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnprotectedPortTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeUnprotectedPortTrendResponseBodyDataList() = default ;
    DescribeUnprotectedPortTrendResponseBodyDataList(const DescribeUnprotectedPortTrendResponseBodyDataList &) = default ;
    DescribeUnprotectedPortTrendResponseBodyDataList(DescribeUnprotectedPortTrendResponseBodyDataList &&) = default ;
    DescribeUnprotectedPortTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnprotectedPortTrendResponseBodyDataList() = default ;
    DescribeUnprotectedPortTrendResponseBodyDataList& operator=(const DescribeUnprotectedPortTrendResponseBodyDataList &) = default ;
    DescribeUnprotectedPortTrendResponseBodyDataList& operator=(DescribeUnprotectedPortTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->time_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeUnprotectedPortTrendResponseBodyDataList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeUnprotectedPortTrendResponseBodyDataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
