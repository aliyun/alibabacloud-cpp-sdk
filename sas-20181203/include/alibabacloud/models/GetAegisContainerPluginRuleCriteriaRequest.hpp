// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULECRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULECRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAegisContainerPluginRuleCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAegisContainerPluginRuleCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAegisContainerPluginRuleCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetAegisContainerPluginRuleCriteriaRequest() = default ;
    GetAegisContainerPluginRuleCriteriaRequest(const GetAegisContainerPluginRuleCriteriaRequest &) = default ;
    GetAegisContainerPluginRuleCriteriaRequest(GetAegisContainerPluginRuleCriteriaRequest &&) = default ;
    GetAegisContainerPluginRuleCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAegisContainerPluginRuleCriteriaRequest() = default ;
    GetAegisContainerPluginRuleCriteriaRequest& operator=(const GetAegisContainerPluginRuleCriteriaRequest &) = default ;
    GetAegisContainerPluginRuleCriteriaRequest& operator=(GetAegisContainerPluginRuleCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->value_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAegisContainerPluginRuleCriteriaRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAegisContainerPluginRuleCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The value of the search condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
