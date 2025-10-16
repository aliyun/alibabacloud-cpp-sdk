// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSENSITIVESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSENSITIVESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifySensitiveSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySensitiveSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySensitiveSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
    };
    ModifySensitiveSwitchRequest() = default ;
    ModifySensitiveSwitchRequest(const ModifySensitiveSwitchRequest &) = default ;
    ModifySensitiveSwitchRequest(ModifySensitiveSwitchRequest &&) = default ;
    ModifySensitiveSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySensitiveSwitchRequest() = default ;
    ModifySensitiveSwitchRequest& operator=(const ModifySensitiveSwitchRequest &) = default ;
    ModifySensitiveSwitchRequest& operator=(ModifySensitiveSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->sensitiveCategory_ == nullptr && return this->switchStatus_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifySensitiveSwitchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sensitiveCategory Field Functions 
    bool hasSensitiveCategory() const { return this->sensitiveCategory_ != nullptr;};
    void deleteSensitiveCategory() { this->sensitiveCategory_ = nullptr;};
    inline string sensitiveCategory() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCategory_, "") };
    inline ModifySensitiveSwitchRequest& setSensitiveCategory(string sensitiveCategory) { DARABONBA_PTR_SET_VALUE(sensitiveCategory_, sensitiveCategory) };


    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline ModifySensitiveSwitchRequest& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> sensitiveCategory_ = nullptr;
    std::shared_ptr<string> switchStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
