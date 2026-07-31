// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDINGCONFIGAGENTSINTENTFEWSHOTCONFIGVALUE_HPP_
#define ALIBABACLOUD_MODELS_BINDINGCONFIGAGENTSINTENTFEWSHOTCONFIGVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class BindingConfigAgentsIntentFewShotConfigValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindingConfigAgentsIntentFewShotConfigValue& obj) { 
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, BindingConfigAgentsIntentFewShotConfigValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
    };
    BindingConfigAgentsIntentFewShotConfigValue() = default ;
    BindingConfigAgentsIntentFewShotConfigValue(const BindingConfigAgentsIntentFewShotConfigValue &) = default ;
    BindingConfigAgentsIntentFewShotConfigValue(BindingConfigAgentsIntentFewShotConfigValue &&) = default ;
    BindingConfigAgentsIntentFewShotConfigValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindingConfigAgentsIntentFewShotConfigValue() = default ;
    BindingConfigAgentsIntentFewShotConfigValue& operator=(const BindingConfigAgentsIntentFewShotConfigValue &) = default ;
    BindingConfigAgentsIntentFewShotConfigValue& operator=(BindingConfigAgentsIntentFewShotConfigValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->query_ == nullptr
        && this->parameters_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline BindingConfigAgentsIntentFewShotConfigValue& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline BindingConfigAgentsIntentFewShotConfigValue& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline BindingConfigAgentsIntentFewShotConfigValue& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


  protected:
    shared_ptr<string> query_ {};
    Darabonba::Json parameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
