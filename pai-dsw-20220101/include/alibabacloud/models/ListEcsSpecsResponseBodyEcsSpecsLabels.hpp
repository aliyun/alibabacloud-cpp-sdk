// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODYECSSPECSLABELS_HPP_
#define ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODYECSSPECSLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListEcsSpecsResponseBodyEcsSpecsLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsSpecsResponseBodyEcsSpecsLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsSpecsResponseBodyEcsSpecsLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListEcsSpecsResponseBodyEcsSpecsLabels() = default ;
    ListEcsSpecsResponseBodyEcsSpecsLabels(const ListEcsSpecsResponseBodyEcsSpecsLabels &) = default ;
    ListEcsSpecsResponseBodyEcsSpecsLabels(ListEcsSpecsResponseBodyEcsSpecsLabels &&) = default ;
    ListEcsSpecsResponseBodyEcsSpecsLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsSpecsResponseBodyEcsSpecsLabels() = default ;
    ListEcsSpecsResponseBodyEcsSpecsLabels& operator=(const ListEcsSpecsResponseBodyEcsSpecsLabels &) = default ;
    ListEcsSpecsResponseBodyEcsSpecsLabels& operator=(ListEcsSpecsResponseBodyEcsSpecsLabels &&) = default ;
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
    inline ListEcsSpecsResponseBodyEcsSpecsLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListEcsSpecsResponseBodyEcsSpecsLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The label key added to the ECS specification.
    std::shared_ptr<string> key_ = nullptr;
    // The label value added to the ECS specification.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
