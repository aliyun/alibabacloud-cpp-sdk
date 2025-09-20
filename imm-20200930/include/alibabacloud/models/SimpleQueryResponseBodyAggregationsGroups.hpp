// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEQUERYRESPONSEBODYAGGREGATIONSGROUPS_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEQUERYRESPONSEBODYAGGREGATIONSGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimpleQueryResponseBodyAggregationsGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleQueryResponseBodyAggregationsGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleQueryResponseBodyAggregationsGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SimpleQueryResponseBodyAggregationsGroups() = default ;
    SimpleQueryResponseBodyAggregationsGroups(const SimpleQueryResponseBodyAggregationsGroups &) = default ;
    SimpleQueryResponseBodyAggregationsGroups(SimpleQueryResponseBodyAggregationsGroups &&) = default ;
    SimpleQueryResponseBodyAggregationsGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleQueryResponseBodyAggregationsGroups() = default ;
    SimpleQueryResponseBodyAggregationsGroups& operator=(const SimpleQueryResponseBodyAggregationsGroups &) = default ;
    SimpleQueryResponseBodyAggregationsGroups& operator=(SimpleQueryResponseBodyAggregationsGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->value_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline SimpleQueryResponseBodyAggregationsGroups& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SimpleQueryResponseBodyAggregationsGroups& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The number of results in the grouped aggregation.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The value for the grouped aggregation.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
