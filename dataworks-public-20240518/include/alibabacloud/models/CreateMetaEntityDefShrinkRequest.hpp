// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETAENTITYDEFSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETAENTITYDEFSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateMetaEntityDefShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetaEntityDefShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeDefs, attributeDefsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetaEntityDefShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeDefs, attributeDefsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateMetaEntityDefShrinkRequest() = default ;
    CreateMetaEntityDefShrinkRequest(const CreateMetaEntityDefShrinkRequest &) = default ;
    CreateMetaEntityDefShrinkRequest(CreateMetaEntityDefShrinkRequest &&) = default ;
    CreateMetaEntityDefShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetaEntityDefShrinkRequest() = default ;
    CreateMetaEntityDefShrinkRequest& operator=(const CreateMetaEntityDefShrinkRequest &) = default ;
    CreateMetaEntityDefShrinkRequest& operator=(CreateMetaEntityDefShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeDefsShrink_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->extend_ == nullptr && this->name_ == nullptr; };
    // attributeDefsShrink Field Functions 
    bool hasAttributeDefsShrink() const { return this->attributeDefsShrink_ != nullptr;};
    void deleteAttributeDefsShrink() { this->attributeDefsShrink_ = nullptr;};
    inline string getAttributeDefsShrink() const { DARABONBA_PTR_GET_DEFAULT(attributeDefsShrink_, "") };
    inline CreateMetaEntityDefShrinkRequest& setAttributeDefsShrink(string attributeDefsShrink) { DARABONBA_PTR_SET_VALUE(attributeDefsShrink_, attributeDefsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMetaEntityDefShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateMetaEntityDefShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline CreateMetaEntityDefShrinkRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMetaEntityDefShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // A list of attribute definitions for the pure custom type. Do not specify this parameter if the `Extend` parameter is set to `TABLE`.
    shared_ptr<string> attributeDefsShrink_ {};
    // A description of the entity definition.
    shared_ptr<string> description_ {};
    // The display name. The maximum length is 32 characters.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The extension mode. Valid values:
    // 
    // - `NONE`: The default value. Specifies a pure custom type with user-defined attributes.
    // 
    // - `TABLE`: Specifies an extended table type that references an existing table type in Data Map. Attribute definitions are not required for this type. You can create corresponding `Database` and `Table` objects for it.
    shared_ptr<string> extend_ {};
    // The type definition name. For a pure custom type, the name must match `^[a-z0-9][a-z0-9_]*$`. For an extended table type, the name must match `^[a-z0-9][a-z0-9_]*-table$`.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
