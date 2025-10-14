// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULECOUNTRESPONSEBODYMETRICRULECOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULECOUNTRESPONSEBODYMETRICRULECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleCountResponseBodyMetricRuleCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleCountResponseBodyMetricRuleCount& obj) { 
      DARABONBA_PTR_TO_JSON(Alarm, alarm_);
      DARABONBA_PTR_TO_JSON(Disable, disable_);
      DARABONBA_PTR_TO_JSON(Nodata, nodata_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleCountResponseBodyMetricRuleCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarm, alarm_);
      DARABONBA_PTR_FROM_JSON(Disable, disable_);
      DARABONBA_PTR_FROM_JSON(Nodata, nodata_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMetricRuleCountResponseBodyMetricRuleCount() = default ;
    DescribeMetricRuleCountResponseBodyMetricRuleCount(const DescribeMetricRuleCountResponseBodyMetricRuleCount &) = default ;
    DescribeMetricRuleCountResponseBodyMetricRuleCount(DescribeMetricRuleCountResponseBodyMetricRuleCount &&) = default ;
    DescribeMetricRuleCountResponseBodyMetricRuleCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleCountResponseBodyMetricRuleCount() = default ;
    DescribeMetricRuleCountResponseBodyMetricRuleCount& operator=(const DescribeMetricRuleCountResponseBodyMetricRuleCount &) = default ;
    DescribeMetricRuleCountResponseBodyMetricRuleCount& operator=(DescribeMetricRuleCountResponseBodyMetricRuleCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarm_ == nullptr
        && return this->disable_ == nullptr && return this->nodata_ == nullptr && return this->ok_ == nullptr && return this->total_ == nullptr; };
    // alarm Field Functions 
    bool hasAlarm() const { return this->alarm_ != nullptr;};
    void deleteAlarm() { this->alarm_ = nullptr;};
    inline int32_t alarm() const { DARABONBA_PTR_GET_DEFAULT(alarm_, 0) };
    inline DescribeMetricRuleCountResponseBodyMetricRuleCount& setAlarm(int32_t alarm) { DARABONBA_PTR_SET_VALUE(alarm_, alarm) };


    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline int32_t disable() const { DARABONBA_PTR_GET_DEFAULT(disable_, 0) };
    inline DescribeMetricRuleCountResponseBodyMetricRuleCount& setDisable(int32_t disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // nodata Field Functions 
    bool hasNodata() const { return this->nodata_ != nullptr;};
    void deleteNodata() { this->nodata_ = nullptr;};
    inline int32_t nodata() const { DARABONBA_PTR_GET_DEFAULT(nodata_, 0) };
    inline DescribeMetricRuleCountResponseBodyMetricRuleCount& setNodata(int32_t nodata) { DARABONBA_PTR_SET_VALUE(nodata_, nodata) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline int32_t ok() const { DARABONBA_PTR_GET_DEFAULT(ok_, 0) };
    inline DescribeMetricRuleCountResponseBodyMetricRuleCount& setOk(int32_t ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMetricRuleCountResponseBodyMetricRuleCount& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The number of alert rules with active alerts.
    std::shared_ptr<int32_t> alarm_ = nullptr;
    // The number of disabled alert rules.
    std::shared_ptr<int32_t> disable_ = nullptr;
    // The number of alert rules without data.
    std::shared_ptr<int32_t> nodata_ = nullptr;
    // The number of alert rules without active alerts.
    std::shared_ptr<int32_t> ok_ = nullptr;
    // The total number of alert rules.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
