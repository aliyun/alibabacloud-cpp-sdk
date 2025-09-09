// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPLIERREGISTRATIONSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPLIERREGISTRATIONSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListSupplierRegistrationsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupplierRegistrationsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupplierRegistrationsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListSupplierRegistrationsRequestFilter() = default ;
    ListSupplierRegistrationsRequestFilter(const ListSupplierRegistrationsRequestFilter &) = default ;
    ListSupplierRegistrationsRequestFilter(ListSupplierRegistrationsRequestFilter &&) = default ;
    ListSupplierRegistrationsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupplierRegistrationsRequestFilter() = default ;
    ListSupplierRegistrationsRequestFilter& operator=(const ListSupplierRegistrationsRequestFilter &) = default ;
    ListSupplierRegistrationsRequestFilter& operator=(ListSupplierRegistrationsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSupplierRegistrationsRequestFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListSupplierRegistrationsRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListSupplierRegistrationsRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // Name of the filter field. Allowed values:
    // 
    // - SupplierUid: The aliUid of supplier.
    // - SupplierName: The name of supplier.
    // - RegistrationId: Registration ID.
    // 
    // - Status: Registration status. Allowed values: Submitted, Approved, Rejected.
    std::shared_ptr<string> name_ = nullptr;
    // Filter value.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
