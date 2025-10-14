// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGHISTOGRAMRESPONSEBODYALERTLOGHISTOGRAMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGHISTOGRAMRESPONSEBODYALERTLOGHISTOGRAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogHistogramResponseBodyAlertLogHistogramList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogHistogramResponseBodyAlertLogHistogramList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogHistogramResponseBodyAlertLogHistogramList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    DescribeAlertLogHistogramResponseBodyAlertLogHistogramList() = default ;
    DescribeAlertLogHistogramResponseBodyAlertLogHistogramList(const DescribeAlertLogHistogramResponseBodyAlertLogHistogramList &) = default ;
    DescribeAlertLogHistogramResponseBodyAlertLogHistogramList(DescribeAlertLogHistogramResponseBodyAlertLogHistogramList &&) = default ;
    DescribeAlertLogHistogramResponseBodyAlertLogHistogramList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogHistogramResponseBodyAlertLogHistogramList() = default ;
    DescribeAlertLogHistogramResponseBodyAlertLogHistogramList& operator=(const DescribeAlertLogHistogramResponseBodyAlertLogHistogramList &) = default ;
    DescribeAlertLogHistogramResponseBodyAlertLogHistogramList& operator=(DescribeAlertLogHistogramResponseBodyAlertLogHistogramList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->from_ == nullptr && return this->to_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeAlertLogHistogramResponseBodyAlertLogHistogramList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline DescribeAlertLogHistogramResponseBodyAlertLogHistogramList& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline DescribeAlertLogHistogramResponseBodyAlertLogHistogramList& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The number of alert logs.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The start timestamp of the queried alert logs.
    // 
    // Unit: seconds.
    std::shared_ptr<int64_t> from_ = nullptr;
    // The end timestamp of the queried alert logs.
    // 
    // Unit: seconds.
    std::shared_ptr<int64_t> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
