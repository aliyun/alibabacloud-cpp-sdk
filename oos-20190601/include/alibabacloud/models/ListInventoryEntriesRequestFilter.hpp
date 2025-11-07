// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVENTORYENTRIESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTINVENTORYENTRIESREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInventoryEntriesRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInventoryEntriesRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListInventoryEntriesRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListInventoryEntriesRequestFilter() = default ;
    ListInventoryEntriesRequestFilter(const ListInventoryEntriesRequestFilter &) = default ;
    ListInventoryEntriesRequestFilter(ListInventoryEntriesRequestFilter &&) = default ;
    ListInventoryEntriesRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInventoryEntriesRequestFilter() = default ;
    ListInventoryEntriesRequestFilter& operator=(const ListInventoryEntriesRequestFilter &) = default ;
    ListInventoryEntriesRequestFilter& operator=(ListInventoryEntriesRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->operator_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInventoryEntriesRequestFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListInventoryEntriesRequestFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListInventoryEntriesRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListInventoryEntriesRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The name of the component property. Valid values of N: 1 to 5.
    std::shared_ptr<string> name_ = nullptr;
    // The comparison operator that is used to filter property values. Valid values of N: 1 to 5. Valid values:
    // 
    // *   Equal
    // *   NotEqual
    // *   BeginWith
    // *   LessThan
    // *   GreaterThan
    std::shared_ptr<string> operator_ = nullptr;
    // The values of properties. Valid values of the first N: 1 to 5. Valid values of the second N: 1 to 20.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
