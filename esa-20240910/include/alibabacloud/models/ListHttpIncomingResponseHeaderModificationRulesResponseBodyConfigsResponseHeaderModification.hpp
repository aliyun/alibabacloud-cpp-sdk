// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULESRESPONSEBODYCONFIGSRESPONSEHEADERMODIFICATION_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULESRESPONSEBODYCONFIGSRESPONSEHEADERMODIFICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification() = default ;
    ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification(const ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification &) = default ;
    ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification(ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification &&) = default ;
    ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification() = default ;
    ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification& operator=(const ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification &) = default ;
    ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification& operator=(ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->operation_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListHttpIncomingResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the response header.
    std::shared_ptr<string> name_ = nullptr;
    // The action. Specifies whether to check the image used by the instance supports hot migration. Valid values:
    // 
    // *   add: adds a response header.
    // *   del: deletes a response header.
    // *   modify: modifies a response header.
    std::shared_ptr<string> operation_ = nullptr;
    // The type of the header. Valid values:
    // 
    // *   static
    // *   dynamic
    std::shared_ptr<string> type_ = nullptr;
    // The value of the response header.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
