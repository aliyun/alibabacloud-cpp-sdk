// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESMETRICPARAMDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESMETRICPARAMDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions(const SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions(SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions &&) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions& operator=(const SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions& operator=(SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the dimension. Valid values:
    // 
    // *   `rpc`: the name of the API
    // *   `rpcType`: the type of the API call, such as HTTP or DUBBO
    // *   `endpoint`: the name of the database
    // *   `rootIp`: the IP address of the host
    std::shared_ptr<string> key_ = nullptr;
    // The type of the dimension. Valid values:
    // 
    // *   `STATIC`: checks only the value of this dimension. In this case, you must set the **dimensions.value** parameter.
    // *   `ALL`: checks the values of all dimensions. The metrics of all API calls are checked. If an API call triggers an alert, the name of the API is displayed in the alert notification. In this case, you do not need to set the **dimensions.value** parameter.
    // *   `DISABLE`: aggregates the values of all dimensions. In this case, you do not need to set the **dimensions.value** parameter.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the dimension.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
