// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIGREWRITEOP_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIGREWRITEOP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7ConfigRewriteOp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7ConfigRewriteOp& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueVariable, valueVariable_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7ConfigRewriteOp& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueVariable, valueVariable_);
    };
    PAL7ConfigRewriteOp() = default ;
    PAL7ConfigRewriteOp(const PAL7ConfigRewriteOp &) = default ;
    PAL7ConfigRewriteOp(PAL7ConfigRewriteOp &&) = default ;
    PAL7ConfigRewriteOp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7ConfigRewriteOp() = default ;
    PAL7ConfigRewriteOp& operator=(const PAL7ConfigRewriteOp &) = default ;
    PAL7ConfigRewriteOp& operator=(PAL7ConfigRewriteOp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->oldValue_ == nullptr && this->op_ == nullptr && this->value_ == nullptr && this->valueVariable_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PAL7ConfigRewriteOp& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline string getOldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
    inline PAL7ConfigRewriteOp& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline PAL7ConfigRewriteOp& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PAL7ConfigRewriteOp& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueVariable Field Functions 
    bool hasValueVariable() const { return this->valueVariable_ != nullptr;};
    void deleteValueVariable() { this->valueVariable_ = nullptr;};
    inline string getValueVariable() const { DARABONBA_PTR_GET_DEFAULT(valueVariable_, "") };
    inline PAL7ConfigRewriteOp& setValueVariable(string valueVariable) { DARABONBA_PTR_SET_VALUE(valueVariable_, valueVariable) };


  protected:
    shared_ptr<string> key_ {};
    shared_ptr<string> oldValue_ {};
    shared_ptr<string> op_ {};
    shared_ptr<string> value_ {};
    shared_ptr<string> valueVariable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
