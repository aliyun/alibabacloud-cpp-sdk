// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETAENTITYDEFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETAENTITYDEFREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetaEntityAttributeDef.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateMetaEntityDefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaEntityDefRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(NewAttributeDefs, newAttributeDefs_);
      DARABONBA_PTR_TO_JSON(UpdateAttributeDefs, updateAttributeDefs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaEntityDefRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(NewAttributeDefs, newAttributeDefs_);
      DARABONBA_PTR_FROM_JSON(UpdateAttributeDefs, updateAttributeDefs_);
    };
    UpdateMetaEntityDefRequest() = default ;
    UpdateMetaEntityDefRequest(const UpdateMetaEntityDefRequest &) = default ;
    UpdateMetaEntityDefRequest(UpdateMetaEntityDefRequest &&) = default ;
    UpdateMetaEntityDefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaEntityDefRequest() = default ;
    UpdateMetaEntityDefRequest& operator=(const UpdateMetaEntityDefRequest &) = default ;
    UpdateMetaEntityDefRequest& operator=(UpdateMetaEntityDefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->entityType_ == nullptr && this->newAttributeDefs_ == nullptr && this->updateAttributeDefs_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMetaEntityDefRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateMetaEntityDefRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline UpdateMetaEntityDefRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // newAttributeDefs Field Functions 
    bool hasNewAttributeDefs() const { return this->newAttributeDefs_ != nullptr;};
    void deleteNewAttributeDefs() { this->newAttributeDefs_ = nullptr;};
    inline const vector<MetaEntityAttributeDef> & getNewAttributeDefs() const { DARABONBA_PTR_GET_CONST(newAttributeDefs_, vector<MetaEntityAttributeDef>) };
    inline vector<MetaEntityAttributeDef> getNewAttributeDefs() { DARABONBA_PTR_GET(newAttributeDefs_, vector<MetaEntityAttributeDef>) };
    inline UpdateMetaEntityDefRequest& setNewAttributeDefs(const vector<MetaEntityAttributeDef> & newAttributeDefs) { DARABONBA_PTR_SET_VALUE(newAttributeDefs_, newAttributeDefs) };
    inline UpdateMetaEntityDefRequest& setNewAttributeDefs(vector<MetaEntityAttributeDef> && newAttributeDefs) { DARABONBA_PTR_SET_RVALUE(newAttributeDefs_, newAttributeDefs) };


    // updateAttributeDefs Field Functions 
    bool hasUpdateAttributeDefs() const { return this->updateAttributeDefs_ != nullptr;};
    void deleteUpdateAttributeDefs() { this->updateAttributeDefs_ = nullptr;};
    inline const vector<MetaEntityAttributeDef> & getUpdateAttributeDefs() const { DARABONBA_PTR_GET_CONST(updateAttributeDefs_, vector<MetaEntityAttributeDef>) };
    inline vector<MetaEntityAttributeDef> getUpdateAttributeDefs() { DARABONBA_PTR_GET(updateAttributeDefs_, vector<MetaEntityAttributeDef>) };
    inline UpdateMetaEntityDefRequest& setUpdateAttributeDefs(const vector<MetaEntityAttributeDef> & updateAttributeDefs) { DARABONBA_PTR_SET_VALUE(updateAttributeDefs_, updateAttributeDefs) };
    inline UpdateMetaEntityDefRequest& setUpdateAttributeDefs(vector<MetaEntityAttributeDef> && updateAttributeDefs) { DARABONBA_PTR_SET_RVALUE(updateAttributeDefs_, updateAttributeDefs) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    // This parameter is required.
    shared_ptr<string> entityType_ {};
    shared_ptr<vector<MetaEntityAttributeDef>> newAttributeDefs_ {};
    shared_ptr<vector<MetaEntityAttributeDef>> updateAttributeDefs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
