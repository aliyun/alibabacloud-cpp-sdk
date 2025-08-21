// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysTags() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysTags(const DescribeNatGatewaysResponseBodyNatGatewaysTags &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysTags(DescribeNatGatewaysResponseBodyNatGatewaysTags &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysTags() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysTags& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysTags &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysTags& operator=(DescribeNatGatewaysResponseBodyNatGatewaysTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->tagKey_ != nullptr && this->tagValue_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> tagKey_ = nullptr;
    std::shared_ptr<string> tagValue_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
