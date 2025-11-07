// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECTCOLUMNITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECTCOLUMNITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems(const DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems(DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems &&) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems& operator=(const DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems& operator=(DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->count_ == nullptr && return this->rate_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline string rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
    inline DescribeVerifyFailStatisticsResponseBodyResultObjectColumnItems& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


  protected:
    // Error code.
    std::shared_ptr<string> code_ = nullptr;
    // Failure count.
    std::shared_ptr<int64_t> count_ = nullptr;
    // Date: Date
    std::shared_ptr<string> rate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
