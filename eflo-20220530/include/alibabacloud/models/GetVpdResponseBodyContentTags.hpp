// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPDRESPONSEBODYCONTENTTAGS_HPP_
#define ALIBABACLOUD_MODELS_GETVPDRESPONSEBODYCONTENTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVpdResponseBodyContentTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpdResponseBodyContentTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpdResponseBodyContentTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    GetVpdResponseBodyContentTags() = default ;
    GetVpdResponseBodyContentTags(const GetVpdResponseBodyContentTags &) = default ;
    GetVpdResponseBodyContentTags(GetVpdResponseBodyContentTags &&) = default ;
    GetVpdResponseBodyContentTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpdResponseBodyContentTags() = default ;
    GetVpdResponseBodyContentTags& operator=(const GetVpdResponseBodyContentTags &) = default ;
    GetVpdResponseBodyContentTags& operator=(GetVpdResponseBodyContentTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagKey_ == nullptr
        && return this->tagValue_ == nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline GetVpdResponseBodyContentTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline GetVpdResponseBodyContentTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The tag key.
    // 
    // You cannot specify an empty string as a tag key. It can be up to 64 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
    // 
    // You can specify at most 20 tag keys in each call.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The value of the tag that is added to the resource.
    // 
    // The tag value can be empty or a string of up to 128 characters. It cannot start with aliyun or acs:, and cannot contain http:// or https://.
    // 
    // Each key-value pair must be unique. You can specify values for at most 20 tag keys in each call.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
