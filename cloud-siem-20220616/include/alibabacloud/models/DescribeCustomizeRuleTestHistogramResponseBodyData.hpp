// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULETESTHISTOGRAMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULETESTHISTOGRAMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCustomizeRuleTestHistogramResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeRuleTestHistogramResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeRuleTestHistogramResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    DescribeCustomizeRuleTestHistogramResponseBodyData() = default ;
    DescribeCustomizeRuleTestHistogramResponseBodyData(const DescribeCustomizeRuleTestHistogramResponseBodyData &) = default ;
    DescribeCustomizeRuleTestHistogramResponseBodyData(DescribeCustomizeRuleTestHistogramResponseBodyData &&) = default ;
    DescribeCustomizeRuleTestHistogramResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeRuleTestHistogramResponseBodyData() = default ;
    DescribeCustomizeRuleTestHistogramResponseBodyData& operator=(const DescribeCustomizeRuleTestHistogramResponseBodyData &) = default ;
    DescribeCustomizeRuleTestHistogramResponseBodyData& operator=(DescribeCustomizeRuleTestHistogramResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->from_ != nullptr && this->to_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeCustomizeRuleTestHistogramResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline DescribeCustomizeRuleTestHistogramResponseBodyData& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline DescribeCustomizeRuleTestHistogramResponseBodyData& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The number of alerts that are generated in the query time range.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The start of the time range for querying alerts. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> from_ = nullptr;
    // The end of the time range for querying alerts. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
