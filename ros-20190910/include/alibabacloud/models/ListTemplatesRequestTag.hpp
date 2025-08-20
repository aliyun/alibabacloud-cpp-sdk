// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListTemplatesRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTemplatesRequestTag() = default ;
    ListTemplatesRequestTag(const ListTemplatesRequestTag &) = default ;
    ListTemplatesRequestTag(ListTemplatesRequestTag &&) = default ;
    ListTemplatesRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesRequestTag() = default ;
    ListTemplatesRequestTag& operator=(const ListTemplatesRequestTag &) = default ;
    ListTemplatesRequestTag& operator=(ListTemplatesRequestTag &&) = default ;
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
    inline ListTemplatesRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTemplatesRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. This parameter is effective only when ShareType is Private.  
    // 
    // A maximum of 20 tag keys are supported.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag. This parameter is effective only when ShareType is Private.  
    // 
    // A maximum of 20 tag values are supported.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
