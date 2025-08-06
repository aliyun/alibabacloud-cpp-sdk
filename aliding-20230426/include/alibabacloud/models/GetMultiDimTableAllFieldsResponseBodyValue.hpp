// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLFIELDSRESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLFIELDSRESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableAllFieldsResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableAllFieldsResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableAllFieldsResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetMultiDimTableAllFieldsResponseBodyValue() = default ;
    GetMultiDimTableAllFieldsResponseBodyValue(const GetMultiDimTableAllFieldsResponseBodyValue &) = default ;
    GetMultiDimTableAllFieldsResponseBodyValue(GetMultiDimTableAllFieldsResponseBodyValue &&) = default ;
    GetMultiDimTableAllFieldsResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableAllFieldsResponseBodyValue() = default ;
    GetMultiDimTableAllFieldsResponseBodyValue& operator=(const GetMultiDimTableAllFieldsResponseBodyValue &) = default ;
    GetMultiDimTableAllFieldsResponseBodyValue& operator=(GetMultiDimTableAllFieldsResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->property_ != nullptr && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetMultiDimTableAllFieldsResponseBodyValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMultiDimTableAllFieldsResponseBodyValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline     const Darabonba::Json & property() const { DARABONBA_GET(property_) };
    Darabonba::Json & property() { DARABONBA_GET(property_) };
    inline GetMultiDimTableAllFieldsResponseBodyValue& setProperty(const Darabonba::Json & property) { DARABONBA_SET_VALUE(property_, property) };
    inline GetMultiDimTableAllFieldsResponseBodyValue& setProperty(Darabonba::Json & property) { DARABONBA_SET_RVALUE(property_, property) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetMultiDimTableAllFieldsResponseBodyValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json property_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
