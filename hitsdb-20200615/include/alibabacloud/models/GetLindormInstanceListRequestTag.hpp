// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceListRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceListRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceListRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetLindormInstanceListRequestTag() = default ;
    GetLindormInstanceListRequestTag(const GetLindormInstanceListRequestTag &) = default ;
    GetLindormInstanceListRequestTag(GetLindormInstanceListRequestTag &&) = default ;
    GetLindormInstanceListRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceListRequestTag() = default ;
    GetLindormInstanceListRequestTag& operator=(const GetLindormInstanceListRequestTag &) = default ;
    GetLindormInstanceListRequestTag& operator=(GetLindormInstanceListRequestTag &&) = default ;
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
    inline GetLindormInstanceListRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetLindormInstanceListRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N of the instances you want to query. You can specify 1 to 20 tag keys.
    // 
    // > You can specify the keys of multiple tags. For example, you can specify the key of the first tag in the first key-value pair contained in the value of this parameter and specify the key of the second tag in the second key-value pair.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N of the instances you want to query. You can specify 1 to 20 tag values.
    // 
    // > You can specify the values of multiple tags. For example, you can specify the value of the first tag in the first key-value pair contained in the value of this parameter and specify the value of the second tag in the second key-value pair.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
