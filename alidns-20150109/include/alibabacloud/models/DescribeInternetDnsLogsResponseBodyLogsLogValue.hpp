// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODYLOGSLOGVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODYLOGSLOGVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInternetDnsLogsResponseBodyLogsLogValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDnsLogsResponseBodyLogsLogValue& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDnsLogsResponseBodyLogsLogValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeInternetDnsLogsResponseBodyLogsLogValue() = default ;
    DescribeInternetDnsLogsResponseBodyLogsLogValue(const DescribeInternetDnsLogsResponseBodyLogsLogValue &) = default ;
    DescribeInternetDnsLogsResponseBodyLogsLogValue(DescribeInternetDnsLogsResponseBodyLogsLogValue &&) = default ;
    DescribeInternetDnsLogsResponseBodyLogsLogValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDnsLogsResponseBodyLogsLogValue() = default ;
    DescribeInternetDnsLogsResponseBodyLogsLogValue& operator=(const DescribeInternetDnsLogsResponseBodyLogsLogValue &) = default ;
    DescribeInternetDnsLogsResponseBodyLogsLogValue& operator=(DescribeInternetDnsLogsResponseBodyLogsLogValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeInternetDnsLogsResponseBodyLogsLogValue& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeInternetDnsLogsResponseBodyLogsLogValue& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
