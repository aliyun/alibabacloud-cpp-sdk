// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCensRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeCensRequestFilter() = default ;
    DescribeCensRequestFilter(const DescribeCensRequestFilter &) = default ;
    DescribeCensRequestFilter(DescribeCensRequestFilter &&) = default ;
    DescribeCensRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensRequestFilter() = default ;
    DescribeCensRequestFilter& operator=(const DescribeCensRequestFilter &) = default ;
    DescribeCensRequestFilter& operator=(DescribeCensRequestFilter &&) = default ;
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
    inline DescribeCensRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeCensRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeCensRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The key of the filter. Valid values:
    // 
    // *   **CenId**: the ID of a CEN instance.
    // *   **Name**: the name of a CEN instance.
    // 
    // By default, the logical operator among filter conditions is **AND**. Information about a CEN instance is returned only if the CEN instance matches all filter conditions.
    // 
    // You can specify at most five filter conditions in each call.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the filter condition.
    // 
    // Specify a filter value based on the **Key** parameter. You can specify multiple values for a filter **key**. The logical operator among multiple filter values is **OR**. If a CEN instance matches one or more of the values that you specify, the CEN instance matches the filter condition.
    // 
    // You can specify at most five values in each filter condition.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
