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
    // The component name.
    shared_ptr<string> name_ {};
    // The component version.
    shared_ptr<string> version_ {};
    // The description of the component features.
    shared_ptr<string> description_ {};
    // Indicates whether the component is required by the cluster. Valid values:
    // 
    // - `true`: The component is required and must be installed when the cluster is created.
    // 
    // - `false`: The component is optional and can be installed through Component Management after the cluster is created.
    shared_ptr<string> required_ {};
    // Indicates whether default installation is disabled. When a cluster is created, in addition to the components required by the cluster, some logging or routing-related components (such as Ingress) are also installed by default. If you do not want to install them by default, you can set this field to disable default installation. Valid values:
    // 
    // - `true`: Default installation is disabled.
    // - `false`: Default installation is enabled.
    shared_ptr<bool> disabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
