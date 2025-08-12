// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEQUERYQUERIESAPMFILTERS_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEQUERYQUERIESAPMFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleQueryQueriesApmFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleQueryQueriesApmFilters& obj) { 
      DARABONBA_PTR_TO_JSON(dim, dim_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleQueryQueriesApmFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(dim, dim_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AlertRuleQueryQueriesApmFilters() = default ;
    AlertRuleQueryQueriesApmFilters(const AlertRuleQueryQueriesApmFilters &) = default ;
    AlertRuleQueryQueriesApmFilters(AlertRuleQueryQueriesApmFilters &&) = default ;
    AlertRuleQueryQueriesApmFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleQueryQueriesApmFilters() = default ;
    AlertRuleQueryQueriesApmFilters& operator=(const AlertRuleQueryQueriesApmFilters &) = default ;
    AlertRuleQueryQueriesApmFilters& operator=(AlertRuleQueryQueriesApmFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dim_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // dim Field Functions 
    bool hasDim() const { return this->dim_ != nullptr;};
    void deleteDim() { this->dim_ = nullptr;};
    inline string dim() const { DARABONBA_PTR_GET_DEFAULT(dim_, "") };
    inline AlertRuleQueryQueriesApmFilters& setDim(string dim) { DARABONBA_PTR_SET_VALUE(dim_, dim) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleQueryQueriesApmFilters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AlertRuleQueryQueriesApmFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> dim_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
