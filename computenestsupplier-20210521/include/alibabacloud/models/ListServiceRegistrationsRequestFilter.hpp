// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEREGISTRATIONSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEREGISTRATIONSREQUESTFILTER_HPP_
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
  class ListServiceRegistrationsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceRegistrationsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceRegistrationsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListServiceRegistrationsRequestFilter() = default ;
    ListServiceRegistrationsRequestFilter(const ListServiceRegistrationsRequestFilter &) = default ;
    ListServiceRegistrationsRequestFilter(ListServiceRegistrationsRequestFilter &&) = default ;
    ListServiceRegistrationsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceRegistrationsRequestFilter() = default ;
    ListServiceRegistrationsRequestFilter& operator=(const ListServiceRegistrationsRequestFilter &) = default ;
    ListServiceRegistrationsRequestFilter& operator=(ListServiceRegistrationsRequestFilter &&) = default ;
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
    inline ListServiceRegistrationsRequestFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListServiceRegistrationsRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListServiceRegistrationsRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // Name of the filter field. Allowed values:
    // 
    // - ServiceId: Service ID.
    // 
    // - RegistrationId: Registration ID.
    // 
    // - Status: Registration status. Allowed values: Submitted, Approved, Rejected, Canceled, and Executed.
    std::shared_ptr<string> name_ = nullptr;
    // List of filter values.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
