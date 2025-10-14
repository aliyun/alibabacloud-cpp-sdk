// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONCONFIGVARIABLESCONFIGVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONCONFIGVARIABLESCONFIGVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(secure, secure_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(secure, secure_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->secure_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // secure Field Functions 
    bool hasSecure() const { return this->secure_ != nullptr;};
    void deleteSecure() { this->secure_ = nullptr;};
    inline bool secure() const { DARABONBA_PTR_GET_DEFAULT(secure_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables& setSecure(bool secure) { DARABONBA_PTR_SET_VALUE(secure_, secure) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> secure_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
