// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSPOLICIESPROTOCOLS_HPP_
#define ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSPOLICIESPROTOCOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AddonMetaEnvironmentsPoliciesProtocols : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddonMetaEnvironmentsPoliciesProtocols& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, AddonMetaEnvironmentsPoliciesProtocols& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    AddonMetaEnvironmentsPoliciesProtocols() = default ;
    AddonMetaEnvironmentsPoliciesProtocols(const AddonMetaEnvironmentsPoliciesProtocols &) = default ;
    AddonMetaEnvironmentsPoliciesProtocols(AddonMetaEnvironmentsPoliciesProtocols &&) = default ;
    AddonMetaEnvironmentsPoliciesProtocols(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddonMetaEnvironmentsPoliciesProtocols() = default ;
    AddonMetaEnvironmentsPoliciesProtocols& operator=(const AddonMetaEnvironmentsPoliciesProtocols &) = default ;
    AddonMetaEnvironmentsPoliciesProtocols& operator=(AddonMetaEnvironmentsPoliciesProtocols &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->icon_ != nullptr && this->label_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddonMetaEnvironmentsPoliciesProtocols& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline AddonMetaEnvironmentsPoliciesProtocols& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline AddonMetaEnvironmentsPoliciesProtocols& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddonMetaEnvironmentsPoliciesProtocols& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
