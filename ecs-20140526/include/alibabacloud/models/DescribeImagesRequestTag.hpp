// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagesRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeImagesRequestTag() = default ;
    DescribeImagesRequestTag(const DescribeImagesRequestTag &) = default ;
    DescribeImagesRequestTag(DescribeImagesRequestTag &&) = default ;
    DescribeImagesRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesRequestTag() = default ;
    DescribeImagesRequestTag& operator=(const DescribeImagesRequestTag &) = default ;
    DescribeImagesRequestTag& operator=(DescribeImagesRequestTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeImagesRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeImagesRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag N key of the image. Valid values of N: 1 to 20.
    // 
    // Up to 1,000 resources that match the specified tags can be returned in the response. To query more than 1,000 resources that match the specified tags, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value of the image. Valid values of N: 1 to 20.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
