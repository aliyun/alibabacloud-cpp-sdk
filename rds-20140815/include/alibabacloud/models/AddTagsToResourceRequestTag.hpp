// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTAGSTORESOURCEREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_ADDTAGSTORESOURCEREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AddTagsToResourceRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTagsToResourceRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AddTagsToResourceRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AddTagsToResourceRequestTag() = default ;
    AddTagsToResourceRequestTag(const AddTagsToResourceRequestTag &) = default ;
    AddTagsToResourceRequestTag(AddTagsToResourceRequestTag &&) = default ;
    AddTagsToResourceRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTagsToResourceRequestTag() = default ;
    AddTagsToResourceRequestTag& operator=(const AddTagsToResourceRequestTag &) = default ;
    AddTagsToResourceRequestTag& operator=(AddTagsToResourceRequestTag &&) = default ;
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
    inline AddTagsToResourceRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AddTagsToResourceRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the first tag that you want to add. Each tag consists of a tag key and a tag value. You can specify up to five tags in a single request. You cannot specify an empty string as the tag key. You can specify an empty string as the tag value.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value of the first tag that you want to add. Each tag consists of a tag key and a tag value. You can specify up to five tags in a single request. You cannot specify an empty string as the tag key. You can specify an empty string as the tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
