// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETAENTITYDEFSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETAENTITYDEFSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateMetaEntityDefShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaEntityDefShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(NewAttributeDefs, newAttributeDefsShrink_);
      DARABONBA_PTR_TO_JSON(UpdateAttributeDefs, updateAttributeDefsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaEntityDefShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(NewAttributeDefs, newAttributeDefsShrink_);
      DARABONBA_PTR_FROM_JSON(UpdateAttributeDefs, updateAttributeDefsShrink_);
    };
    UpdateMetaEntityDefShrinkRequest() = default ;
    UpdateMetaEntityDefShrinkRequest(const UpdateMetaEntityDefShrinkRequest &) = default ;
    UpdateMetaEntityDefShrinkRequest(UpdateMetaEntityDefShrinkRequest &&) = default ;
    UpdateMetaEntityDefShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaEntityDefShrinkRequest() = default ;
    UpdateMetaEntityDefShrinkRequest& operator=(const UpdateMetaEntityDefShrinkRequest &) = default ;
    UpdateMetaEntityDefShrinkRequest& operator=(UpdateMetaEntityDefShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->entityType_ == nullptr && this->newAttributeDefsShrink_ == nullptr && this->updateAttributeDefsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMetaEntityDefShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateMetaEntityDefShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline UpdateMetaEntityDefShrinkRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // newAttributeDefsShrink Field Functions 
    bool hasNewAttributeDefsShrink() const { return this->newAttributeDefsShrink_ != nullptr;};
    void deleteNewAttributeDefsShrink() { this->newAttributeDefsShrink_ = nullptr;};
    inline string getNewAttributeDefsShrink() const { DARABONBA_PTR_GET_DEFAULT(newAttributeDefsShrink_, "") };
    inline UpdateMetaEntityDefShrinkRequest& setNewAttributeDefsShrink(string newAttributeDefsShrink) { DARABONBA_PTR_SET_VALUE(newAttributeDefsShrink_, newAttributeDefsShrink) };


    // updateAttributeDefsShrink Field Functions 
    bool hasUpdateAttributeDefsShrink() const { return this->updateAttributeDefsShrink_ != nullptr;};
    void deleteUpdateAttributeDefsShrink() { this->updateAttributeDefsShrink_ = nullptr;};
    inline string getUpdateAttributeDefsShrink() const { DARABONBA_PTR_GET_DEFAULT(updateAttributeDefsShrink_, "") };
    inline UpdateMetaEntityDefShrinkRequest& setUpdateAttributeDefsShrink(string updateAttributeDefsShrink) { DARABONBA_PTR_SET_VALUE(updateAttributeDefsShrink_, updateAttributeDefsShrink) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    // This parameter is required.
    shared_ptr<string> entityType_ {};
    shared_ptr<string> newAttributeDefsShrink_ {};
    shared_ptr<string> updateAttributeDefsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
