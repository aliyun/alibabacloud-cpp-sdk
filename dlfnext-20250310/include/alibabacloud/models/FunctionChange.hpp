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
        && return this->comment_ == nullptr && return this->definition_ == nullptr && return this->key_ == nullptr && return this->name_ == nullptr && return this->value_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline FunctionChange& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline FunctionChange& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline const FunctionDefinition & definition() const { DARABONBA_PTR_GET_CONST(definition_, FunctionDefinition) };
    inline FunctionDefinition definition() { DARABONBA_PTR_GET(definition_, FunctionDefinition) };
    inline FunctionChange& setDefinition(const FunctionDefinition & definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };
    inline FunctionChange& setDefinition(FunctionDefinition && definition) { DARABONBA_PTR_SET_RVALUE(definition_, definition) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline FunctionChange& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FunctionChange& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline FunctionChange& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    // required in UpdateFunctionComment
    std::shared_ptr<string> comment_ = nullptr;
    // required in AddDefinition/UpdateDefinition
    std::shared_ptr<FunctionDefinition> definition_ = nullptr;
    // required in SetFunctionOption/RemoveFunctionOption
    std::shared_ptr<string> key_ = nullptr;
    // required in AddDefinition/UpdateDefinition/DropDefinition
    std::shared_ptr<string> name_ = nullptr;
    // required in SetFunctionOption
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
