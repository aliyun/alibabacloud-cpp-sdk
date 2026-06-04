// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METAENTITYDEF_HPP_
#define ALIBABACLOUD_MODELS_METAENTITYDEF_HPP_
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
  class MetaEntityDef : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetaEntityDef& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeDefs, attributeDefs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, MetaEntityDef& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeDefs, attributeDefs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    MetaEntityDef() = default ;
    MetaEntityDef(const MetaEntityDef &) = default ;
    MetaEntityDef(MetaEntityDef &&) = default ;
    MetaEntityDef(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetaEntityDef() = default ;
    MetaEntityDef& operator=(const MetaEntityDef &) = default ;
    MetaEntityDef& operator=(MetaEntityDef &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeDefs_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->entityType_ == nullptr && this->extend_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr; };
    // attributeDefs Field Functions 
    bool hasAttributeDefs() const { return this->attributeDefs_ != nullptr;};
    void deleteAttributeDefs() { this->attributeDefs_ = nullptr;};
    inline const vector<MetaEntityAttributeDef> & getAttributeDefs() const { DARABONBA_PTR_GET_CONST(attributeDefs_, vector<MetaEntityAttributeDef>) };
    inline vector<MetaEntityAttributeDef> getAttributeDefs() { DARABONBA_PTR_GET(attributeDefs_, vector<MetaEntityAttributeDef>) };
    inline MetaEntityDef& setAttributeDefs(const vector<MetaEntityAttributeDef> & attributeDefs) { DARABONBA_PTR_SET_VALUE(attributeDefs_, attributeDefs) };
    inline MetaEntityDef& setAttributeDefs(vector<MetaEntityAttributeDef> && attributeDefs) { DARABONBA_PTR_SET_RVALUE(attributeDefs_, attributeDefs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline MetaEntityDef& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MetaEntityDef& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline MetaEntityDef& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline MetaEntityDef& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline MetaEntityDef& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline MetaEntityDef& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MetaEntityDef& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<vector<MetaEntityAttributeDef>> attributeDefs_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<string> entityType_ {};
    shared_ptr<string> extend_ {};
    shared_ptr<int64_t> modifyTime_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
