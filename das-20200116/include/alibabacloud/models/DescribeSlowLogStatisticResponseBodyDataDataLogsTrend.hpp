// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGSTREND_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGSTREND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogStatisticResponseBodyDataDataLogsTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogStatisticResponseBodyDataDataLogsTrend& obj) { 
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogStatisticResponseBodyDataDataLogsTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    DescribeSlowLogStatisticResponseBodyDataDataLogsTrend() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsTrend(const DescribeSlowLogStatisticResponseBodyDataDataLogsTrend &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsTrend(DescribeSlowLogStatisticResponseBodyDataDataLogsTrend &&) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogStatisticResponseBodyDataDataLogsTrend() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsTrend& operator=(const DescribeSlowLogStatisticResponseBodyDataDataLogsTrend &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsTrend& operator=(DescribeSlowLogStatisticResponseBodyDataDataLogsTrend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timestamp_ == nullptr
        && return this->value_ == nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsTrend& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsTrend& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsTrend& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
