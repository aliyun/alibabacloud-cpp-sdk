// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYSRESPONSEBODYTAGKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYSRESPONSEBODYTAGKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeTagKeysResponseBodyTagKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagKeysResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_TO_JSON(TagCount, tagCount_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagKeysResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(TagCount, tagCount_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    DescribeTagKeysResponseBodyTagKeys() = default ;
    DescribeTagKeysResponseBodyTagKeys(const DescribeTagKeysResponseBodyTagKeys &) = default ;
    DescribeTagKeysResponseBodyTagKeys(DescribeTagKeysResponseBodyTagKeys &&) = default ;
    DescribeTagKeysResponseBodyTagKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagKeysResponseBodyTagKeys() = default ;
    DescribeTagKeysResponseBodyTagKeys& operator=(const DescribeTagKeysResponseBodyTagKeys &) = default ;
    DescribeTagKeysResponseBodyTagKeys& operator=(DescribeTagKeysResponseBodyTagKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagCount_ == nullptr
        && return this->tagKey_ == nullptr; };
    // tagCount Field Functions 
    bool hasTagCount() const { return this->tagCount_ != nullptr;};
    void deleteTagCount() { this->tagCount_ = nullptr;};
    inline int32_t tagCount() const { DARABONBA_PTR_GET_DEFAULT(tagCount_, 0) };
    inline DescribeTagKeysResponseBodyTagKeys& setTagCount(int32_t tagCount) { DARABONBA_PTR_SET_VALUE(tagCount_, tagCount) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeTagKeysResponseBodyTagKeys& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


  protected:
    // The number of Anti-DDoS Proxy (Chinese Mainland) instances to which the tag key is added.
    std::shared_ptr<int32_t> tagCount_ = nullptr;
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
