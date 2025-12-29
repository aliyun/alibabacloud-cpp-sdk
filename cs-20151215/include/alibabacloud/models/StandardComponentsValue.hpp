// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STANDARDCOMPONENTSVALUE_HPP_
#define ALIBABACLOUD_MODELS_STANDARDCOMPONENTSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class StandardComponentsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StandardComponentsValue& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(disabled, disabled_);
    };
    friend void from_json(const Darabonba::Json& j, StandardComponentsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(disabled, disabled_);
    };
    StandardComponentsValue() = default ;
    StandardComponentsValue(const StandardComponentsValue &) = default ;
    StandardComponentsValue(StandardComponentsValue &&) = default ;
    StandardComponentsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StandardComponentsValue() = default ;
    StandardComponentsValue& operator=(const StandardComponentsValue &) = default ;
    StandardComponentsValue& operator=(StandardComponentsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->version_ == nullptr && this->description_ == nullptr && this->required_ == nullptr && this->disabled_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StandardComponentsValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline StandardComponentsValue& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline StandardComponentsValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline string getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, "") };
    inline StandardComponentsValue& setRequired(string required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline StandardComponentsValue& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


  protected:
    // The name of the component.
    shared_ptr<string> name_ {};
    // The version of the component.
    shared_ptr<string> version_ {};
    // The description of the component.
    shared_ptr<string> description_ {};
    // Indicates whether the component is a required component. Valid values:
    // 
    // *   `true`: The component is required and must be installed when a cluster is created.
    // *   `false`: The component is optional. After a cluster is created, you can go to the `Add-ons` page to install the component.
    shared_ptr<string> required_ {};
    // Indicates whether the automatic installation of the component is disabled. By default, some optional components, such as components for logging and Ingresses, are installed when a cluster is created. You can set this parameter to disable automatic component installation. Valid values:
    // 
    // *   `true`: disables automatic component installation.
    // *   `false`: enables automatic component installation.
    shared_ptr<bool> disabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
