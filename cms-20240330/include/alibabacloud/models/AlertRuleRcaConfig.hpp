// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULERCACONFIG_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULERCACONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleRcaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleRcaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(enableRca, enableRca_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleRcaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(enableRca, enableRca_);
    };
    AlertRuleRcaConfig() = default ;
    AlertRuleRcaConfig(const AlertRuleRcaConfig &) = default ;
    AlertRuleRcaConfig(AlertRuleRcaConfig &&) = default ;
    AlertRuleRcaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleRcaConfig() = default ;
    AlertRuleRcaConfig& operator=(const AlertRuleRcaConfig &) = default ;
    AlertRuleRcaConfig& operator=(AlertRuleRcaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digitalEmployeeName_ == nullptr
        && this->enableRca_ == nullptr; };
    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline AlertRuleRcaConfig& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // enableRca Field Functions 
    bool hasEnableRca() const { return this->enableRca_ != nullptr;};
    void deleteEnableRca() { this->enableRca_ = nullptr;};
    inline bool getEnableRca() const { DARABONBA_PTR_GET_DEFAULT(enableRca_, false) };
    inline AlertRuleRcaConfig& setEnableRca(bool enableRca) { DARABONBA_PTR_SET_VALUE(enableRca_, enableRca) };


  protected:
    shared_ptr<string> digitalEmployeeName_ {};
    shared_ptr<bool> enableRca_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
