// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODYDATACAUSEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODYDATACAUSEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAlarmEventDetailResponseBodyDataCauseDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmEventDetailResponseBodyDataCauseDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmEventDetailResponseBodyDataCauseDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeAlarmEventDetailResponseBodyDataCauseDetails() = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetails(const DescribeAlarmEventDetailResponseBodyDataCauseDetails &) = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetails(DescribeAlarmEventDetailResponseBodyDataCauseDetails &&) = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmEventDetailResponseBodyDataCauseDetails() = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetails& operator=(const DescribeAlarmEventDetailResponseBodyDataCauseDetails &) = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetails& operator=(DescribeAlarmEventDetailResponseBodyDataCauseDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeAlarmEventDetailResponseBodyDataCauseDetails& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue>) };
    inline vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue> value() { DARABONBA_PTR_GET(value_, vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue>) };
    inline DescribeAlarmEventDetailResponseBodyDataCauseDetails& setValue(const vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeAlarmEventDetailResponseBodyDataCauseDetails& setValue(vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The key that is used to trace the alert event.
    std::shared_ptr<string> key_ = nullptr;
    // The value that is used to trace the alert event.
    std::shared_ptr<vector<Models::DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
