// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAGOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETAGOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateTagOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTagOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTagOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateTagOptionRequest() = default ;
    CreateTagOptionRequest(const CreateTagOptionRequest &) = default ;
    CreateTagOptionRequest(CreateTagOptionRequest &&) = default ;
    CreateTagOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTagOptionRequest() = default ;
    CreateTagOptionRequest& operator=(const CreateTagOptionRequest &) = default ;
    CreateTagOptionRequest& operator=(CreateTagOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateTagOptionRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateTagOptionRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag option.
    // 
    // The key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The value of the tag option.
    // 
    // The value can be up to 128 characters in length. It cannot start with `acs:`and cannot contain `http://` or `https://`.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
