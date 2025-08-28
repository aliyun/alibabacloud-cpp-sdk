// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeHaVipsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeHaVipsRequestFilter() = default ;
    DescribeHaVipsRequestFilter(const DescribeHaVipsRequestFilter &) = default ;
    DescribeHaVipsRequestFilter(DescribeHaVipsRequestFilter &&) = default ;
    DescribeHaVipsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsRequestFilter() = default ;
    DescribeHaVipsRequestFilter& operator=(const DescribeHaVipsRequestFilter &) = default ;
    DescribeHaVipsRequestFilter& operator=(DescribeHaVipsRequestFilter &&) = default ;
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
    inline DescribeHaVipsRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeHaVipsRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeHaVipsRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The filter keys. You can specify at most five filter keys. Valid values of **N**: **1 to 5**. The following filter keys are supported:
    // 
    // *   **VpcId**: virtual private cloud (VPC) ID
    // *   **VSwitchId**: vSwitch ID
    // *   **Status**: HaVip status
    // *   **HaVipId**: HaVip ID
    // *   **HaVipAddress**: HaVip IP address
    // 
    // You can specify multiple values for each filter key. The logical operator among multiple values is OR. If one value is matched, the filter key is matched.
    // 
    // The logical operator among multiple filter keys is AND. HaVips can be queried only if all filter keys are matched.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the filter key. Valid values of **N**: **1 to 5**.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
