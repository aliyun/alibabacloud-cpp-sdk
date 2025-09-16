// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULEREQUESTRESPONSEHEADERMODIFICATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULEREQUESTRESPONSEHEADERMODIFICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification() = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification(const CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification &) = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification(CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification &&) = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification() = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification& operator=(const CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification &) = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification& operator=(CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->operation_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequestResponseHeaderModification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
