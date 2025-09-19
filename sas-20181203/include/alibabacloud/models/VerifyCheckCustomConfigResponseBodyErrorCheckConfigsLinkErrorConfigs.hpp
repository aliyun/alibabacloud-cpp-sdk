// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODYERRORCHECKCONFIGSLINKERRORCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGRESPONSEBODYERRORCHECKCONFIGSLINKERRORCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs() = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs(const VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs &) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs(VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs &&) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs() = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs& operator=(const VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs &) = default ;
    VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs& operator=(VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->showName_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline VerifyCheckCustomConfigResponseBodyErrorCheckConfigsLinkErrorConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Name of the check item configuration, unique within the same check item.
    std::shared_ptr<string> name_ = nullptr;
    // Display name of the user\\"s check configuration.
    std::shared_ptr<string> showName_ = nullptr;
    // The type of the parameter that caused the error:
    // - repair: Repair parameter
    // - custom: Custom configuration parameter
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
