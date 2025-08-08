// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSETMODELPROFILE_HPP_
#define ALIBABACLOUD_MODELS_MODELSETMODELPROFILE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelSetModelProfileProps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelSetModelProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelSetModelProfile& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(props, props_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModelSetModelProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(props, props_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ModelSetModelProfile() = default ;
    ModelSetModelProfile(const ModelSetModelProfile &) = default ;
    ModelSetModelProfile(ModelSetModelProfile &&) = default ;
    ModelSetModelProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelSetModelProfile() = default ;
    ModelSetModelProfile& operator=(const ModelSetModelProfile &) = default ;
    ModelSetModelProfile& operator=(ModelSetModelProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->displayName_ != nullptr && this->enabled_ != nullptr && this->name_ != nullptr && this->props_ != nullptr && this->sourceType_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModelSetModelProfile& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ModelSetModelProfile& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModelSetModelProfile& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelSetModelProfile& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // props Field Functions 
    bool hasProps() const { return this->props_ != nullptr;};
    void deleteProps() { this->props_ = nullptr;};
    inline const ModelSetModelProfileProps & props() const { DARABONBA_PTR_GET_CONST(props_, ModelSetModelProfileProps) };
    inline ModelSetModelProfileProps props() { DARABONBA_PTR_GET(props_, ModelSetModelProfileProps) };
    inline ModelSetModelProfile& setProps(const ModelSetModelProfileProps & props) { DARABONBA_PTR_SET_VALUE(props_, props) };
    inline ModelSetModelProfile& setProps(ModelSetModelProfileProps && props) { DARABONBA_PTR_SET_RVALUE(props_, props) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModelSetModelProfile& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<ModelSetModelProfileProps> props_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
