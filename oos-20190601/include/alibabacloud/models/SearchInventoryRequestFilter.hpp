// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINVENTORYREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINVENTORYREQUESTFILTER_HPP_
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
  class SearchInventoryRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInventoryRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInventoryRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SearchInventoryRequestFilter() = default ;
    SearchInventoryRequestFilter(const SearchInventoryRequestFilter &) = default ;
    SearchInventoryRequestFilter(SearchInventoryRequestFilter &&) = default ;
    SearchInventoryRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInventoryRequestFilter() = default ;
    SearchInventoryRequestFilter& operator=(const SearchInventoryRequestFilter &) = default ;
    SearchInventoryRequestFilter& operator=(SearchInventoryRequestFilter &&) = default ;
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
    inline SearchInventoryRequestFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline SearchInventoryRequestFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline SearchInventoryRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline SearchInventoryRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The name of the component property. Valid values of N: 1 to 5. Different components have different property names. You can call the [GetInventorySchema](https://api.aliyun.com/#/?product=oos\\&version=2019-06-01\\&api=GetInventorySchema) operation to query the property names of different components. For example, the ACS:InstanceInformation component has the InstanceId property. Therefore, you can set this parameter to ACS:InstanceInformation.InstanceId.
    std::shared_ptr<string> name_ = nullptr;
    // The comparison operator that is used to filter property values. Valid values of N: 1 to 5. Valid values:
    // 
    // *   Equal
    // *   NotEqual
    // *   BeginWith
    // *   LessThan
    // *   GreaterThan
    std::shared_ptr<string> operator_ = nullptr;
    // The property values to query.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
