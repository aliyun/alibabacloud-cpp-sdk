// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMULTIDIMTABLEREQUESTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_ADDMULTIDIMTABLEREQUESTFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddMultiDimTableRequestFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMultiDimTableRequestFields& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddMultiDimTableRequestFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddMultiDimTableRequestFields() = default ;
    AddMultiDimTableRequestFields(const AddMultiDimTableRequestFields &) = default ;
    AddMultiDimTableRequestFields(AddMultiDimTableRequestFields &&) = default ;
    AddMultiDimTableRequestFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMultiDimTableRequestFields() = default ;
    AddMultiDimTableRequestFields& operator=(const AddMultiDimTableRequestFields &) = default ;
    AddMultiDimTableRequestFields& operator=(AddMultiDimTableRequestFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->property_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMultiDimTableRequestFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline     const Darabonba::Json & property() const { DARABONBA_GET(property_) };
    Darabonba::Json & property() { DARABONBA_GET(property_) };
    inline AddMultiDimTableRequestFields& setProperty(const Darabonba::Json & property) { DARABONBA_SET_VALUE(property_, property) };
    inline AddMultiDimTableRequestFields& setProperty(Darabonba::Json & property) { DARABONBA_SET_RVALUE(property_, property) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddMultiDimTableRequestFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json property_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
