// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODYVENDORSINSTANCETYPESINSTANCESUBTYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODYVENDORSINSTANCETYPESINSTANCESUBTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes() = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes(const ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes &) = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes(ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes &&) = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes() = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes& operator=(const ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes &) = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes& operator=(ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the asset subtype.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the asset subtype.
    std::shared_ptr<int32_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
