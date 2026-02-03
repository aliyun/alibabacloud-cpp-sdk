// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTIONCHANGE_HPP_
#define ALIBABACLOUD_MODELS_FUNCTIONCHANGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FunctionDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class FunctionChange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FunctionChange& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(definition, definition_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, FunctionChange& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(definition, definition_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    FunctionChange() = default ;
    FunctionChange(const FunctionChange &) = default ;
    FunctionChange(FunctionChange &&) = default ;
    FunctionChange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FunctionChange() = default ;
    FunctionChange& operator=(const FunctionChange &) = default ;
    FunctionChange& operator=(FunctionChange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->comment_ == nullptr && this->definition_ == nullptr && this->key_ == nullptr && this->name_ == nullptr && this->value_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline FunctionChange& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline FunctionChange& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline const FunctionDefinition & getDefinition() const { DARABONBA_PTR_GET_CONST(definition_, FunctionDefinition) };
    inline FunctionDefinition getDefinition() { DARABONBA_PTR_GET(definition_, FunctionDefinition) };
    inline FunctionChange& setDefinition(const FunctionDefinition & definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };
    inline FunctionChange& setDefinition(FunctionDefinition && definition) { DARABONBA_PTR_SET_RVALUE(definition_, definition) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline FunctionChange& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FunctionChange& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline FunctionChange& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> action_ {};
    // required in UpdateFunctionComment
    shared_ptr<string> comment_ {};
    // required in AddDefinition/UpdateDefinition
    shared_ptr<FunctionDefinition> definition_ {};
    // required in SetFunctionOption/RemoveFunctionOption
    shared_ptr<string> key_ {};
    // required in AddDefinition/UpdateDefinition/DropDefinition
    shared_ptr<string> name_ {};
    // required in SetFunctionOption
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
