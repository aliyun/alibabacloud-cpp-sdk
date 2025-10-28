// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOOKCONFIGURATIONRESPONSEBODYHOOKSCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOOKCONFIGURATIONRESPONSEBODYHOOKSCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateHookConfigurationResponseBodyHooksConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHookConfigurationResponseBodyHooksConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreFail, ignoreFail_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Script, script_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHookConfigurationResponseBodyHooksConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreFail, ignoreFail_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
    };
    UpdateHookConfigurationResponseBodyHooksConfiguration() = default ;
    UpdateHookConfigurationResponseBodyHooksConfiguration(const UpdateHookConfigurationResponseBodyHooksConfiguration &) = default ;
    UpdateHookConfigurationResponseBodyHooksConfiguration(UpdateHookConfigurationResponseBodyHooksConfiguration &&) = default ;
    UpdateHookConfigurationResponseBodyHooksConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHookConfigurationResponseBodyHooksConfiguration() = default ;
    UpdateHookConfigurationResponseBodyHooksConfiguration& operator=(const UpdateHookConfigurationResponseBodyHooksConfiguration &) = default ;
    UpdateHookConfigurationResponseBodyHooksConfiguration& operator=(UpdateHookConfigurationResponseBodyHooksConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreFail_ == nullptr
        && return this->name_ == nullptr && return this->script_ == nullptr; };
    // ignoreFail Field Functions 
    bool hasIgnoreFail() const { return this->ignoreFail_ != nullptr;};
    void deleteIgnoreFail() { this->ignoreFail_ = nullptr;};
    inline bool ignoreFail() const { DARABONBA_PTR_GET_DEFAULT(ignoreFail_, false) };
    inline UpdateHookConfigurationResponseBodyHooksConfiguration& setIgnoreFail(bool ignoreFail) { DARABONBA_PTR_SET_VALUE(ignoreFail_, ignoreFail) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateHookConfigurationResponseBodyHooksConfiguration& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline UpdateHookConfigurationResponseBodyHooksConfiguration& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


  protected:
    // Indicates whether a mount failure is ignored. Valid values:
    // 
    // *   **true**: A mount failure is ignored.
    // *   **false**: A mount failure is not ignored.
    std::shared_ptr<bool> ignoreFail_ = nullptr;
    // The name of the mounted script.
    std::shared_ptr<string> name_ = nullptr;
    // The content of the mounted script.
    std::shared_ptr<string> script_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
