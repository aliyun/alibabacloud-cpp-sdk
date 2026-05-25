// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTER_HPP_
#define ALIBABACLOUD_MODELS_FILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Filter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class Filter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Filter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(SubFilters, subFilters_);
      DARABONBA_ANY_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, Filter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(SubFilters, subFilters_);
      DARABONBA_ANY_FROM_JSON(Values, values_);
    };
    Filter() = default ;
    Filter(const Filter &) = default ;
    Filter(Filter &&) = default ;
    Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Filter() = default ;
    Filter& operator=(const Filter &) = default ;
    Filter& operator=(Filter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->subFilters_ == nullptr && this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline Filter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // subFilters Field Functions 
    bool hasSubFilters() const { return this->subFilters_ != nullptr;};
    void deleteSubFilters() { this->subFilters_ = nullptr;};
    inline const vector<Filter> & getSubFilters() const { DARABONBA_PTR_GET_CONST(subFilters_, vector<Filter>) };
    inline vector<Filter> getSubFilters() { DARABONBA_PTR_GET(subFilters_, vector<Filter>) };
    inline Filter& setSubFilters(const vector<Filter> & subFilters) { DARABONBA_PTR_SET_VALUE(subFilters_, subFilters) };
    inline Filter& setSubFilters(vector<Filter> && subFilters) { DARABONBA_PTR_SET_RVALUE(subFilters_, subFilters) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline     const Darabonba::Json & getValues() const { DARABONBA_GET(values_) };
    Darabonba::Json & getValues() { DARABONBA_GET(values_) };
    inline Filter& setValues(const Darabonba::Json & values) { DARABONBA_SET_VALUE(values_, values) };
    inline Filter& setValues(Darabonba::Json && values) { DARABONBA_SET_RVALUE(values_, values) };


  protected:
    // key
    shared_ptr<string> key_ {};
    // operator
    shared_ptr<string> operator_ {};
    // subFillter
    shared_ptr<vector<Filter>> subFilters_ {};
    // values
    Darabonba::Json values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
