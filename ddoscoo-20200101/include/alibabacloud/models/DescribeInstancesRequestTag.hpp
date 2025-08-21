// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstancesRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeInstancesRequestTag() = default ;
    DescribeInstancesRequestTag(const DescribeInstancesRequestTag &) = default ;
    DescribeInstancesRequestTag(DescribeInstancesRequestTag &&) = default ;
    DescribeInstancesRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequestTag() = default ;
    DescribeInstancesRequestTag& operator=(const DescribeInstancesRequestTag &) = default ;
    DescribeInstancesRequestTag& operator=(DescribeInstancesRequestTag &&) = default ;
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
    inline DescribeInstancesRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeInstancesRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag that is added to the instance to query. You can specify up to 200 tag keys. When you specify tags, take note of the following rules:
    // 
    // *   Each tag consists of a key (**Key**) and a value (**Value**), which are separated with a comma (,).
    // *   Separate multiple tags with commas (,).
    // 
    // >  The tag key (**Key**) and tag value (**Value**) must be specified in pairs.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag that is added to the instance to query. You can specify up to 200 tag values. When you specify tags, take note of the following rules:
    // 
    // *   Each tag consists of a key (**Key**) and a value (**Value**), which are separated with a comma (,).
    // *   Separate multiple tags with commas (,).
    // 
    // >  The tag key (**Key**) and tag value (**Value**) must be specified in pairs.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
