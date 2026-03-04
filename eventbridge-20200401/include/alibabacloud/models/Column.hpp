// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMN_HPP_
#define ALIBABACLOUD_MODELS_COLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class Column : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Column& obj) { 
      DARABONBA_PTR_TO_JSON(IsNull, isNull_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, Column& obj) { 
      DARABONBA_PTR_FROM_JSON(IsNull, isNull_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    Column() = default ;
    Column(const Column &) = default ;
    Column(Column &&) = default ;
    Column(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Column() = default ;
    Column& operator=(const Column &) = default ;
    Column& operator=(Column &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isNull_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
    // isNull Field Functions 
    bool hasIsNull() const { return this->isNull_ != nullptr;};
    void deleteIsNull() { this->isNull_ = nullptr;};
    inline bool getIsNull() const { DARABONBA_PTR_GET_DEFAULT(isNull_, false) };
    inline Column& setIsNull(bool isNull) { DARABONBA_PTR_SET_VALUE(isNull_, isNull) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Column& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Column& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline Column& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<bool> isNull_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
