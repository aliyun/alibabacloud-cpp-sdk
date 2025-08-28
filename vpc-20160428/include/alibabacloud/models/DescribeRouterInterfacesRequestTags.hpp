// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouterInterfacesRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfacesRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfacesRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeRouterInterfacesRequestTags() = default ;
    DescribeRouterInterfacesRequestTags(const DescribeRouterInterfacesRequestTags &) = default ;
    DescribeRouterInterfacesRequestTags(DescribeRouterInterfacesRequestTags &&) = default ;
    DescribeRouterInterfacesRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfacesRequestTags() = default ;
    DescribeRouterInterfacesRequestTags& operator=(const DescribeRouterInterfacesRequestTags &) = default ;
    DescribeRouterInterfacesRequestTags& operator=(DescribeRouterInterfacesRequestTags &&) = default ;
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
    inline DescribeRouterInterfacesRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeRouterInterfacesRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the resource tag. At least one tag key must be entered, and a maximum of 20 tag keys are supported. If this value needs to be passed in, it cannot be an empty string.
    // 
    // A tag key can support up to 128 characters, cannot start with \\"aliyun\\" or \\"acs:\\", and cannot contain \\"http://\\" or \\"https://\\".
    std::shared_ptr<string> key_ = nullptr;
    // The value of the resource tag. A maximum of 20 tag values can be entered. If this value needs to be passed in, an empty string can be entered.
    // 
    // A maximum of 128 characters are supported, it cannot start with \\"aliyun\\" or \\"acs:\\", and it cannot contain \\"http://\\" or \\"https://\\".
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
