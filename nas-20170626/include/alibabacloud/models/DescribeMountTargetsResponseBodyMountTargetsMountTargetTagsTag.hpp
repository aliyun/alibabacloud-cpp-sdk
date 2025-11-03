// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGETTAGSTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGETTAGSTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag(const DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag(DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag &&) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag& operator=(const DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag& operator=(DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag &&) = default ;
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
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. Limits:
    // 
    // *   The tag key cannot be null or an empty string.
    // *   The tag key can be up to 128 characters in length.
    // *   The key value cannot start with aliyun or acs:.
    // *   The key value cannot contain http:// or https://.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    // 
    // Limits:
    // 
    // *   The tag value can be up to 128 characters in length.
    // *   The tag value cannot contain http:// or https://.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
