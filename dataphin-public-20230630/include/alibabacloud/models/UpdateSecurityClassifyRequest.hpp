// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECURITYCLASSIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECURITYCLASSIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateSecurityClassifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecurityClassifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecurityClassifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateSecurityClassifyRequest() = default ;
    UpdateSecurityClassifyRequest(const UpdateSecurityClassifyRequest &) = default ;
    UpdateSecurityClassifyRequest(UpdateSecurityClassifyRequest &&) = default ;
    UpdateSecurityClassifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecurityClassifyRequest() = default ;
    UpdateSecurityClassifyRequest& operator=(const UpdateSecurityClassifyRequest &) = default ;
    UpdateSecurityClassifyRequest& operator=(UpdateSecurityClassifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Abbreviation, abbreviation_);
        DARABONBA_PTR_TO_JSON(AdvancedConditionList, advancedConditionList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FeatureNameList, featureNameList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LevelName, levelName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentPath, parentPath_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Abbreviation, abbreviation_);
        DARABONBA_PTR_FROM_JSON(AdvancedConditionList, advancedConditionList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FeatureNameList, featureNameList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LevelName, levelName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentPath, parentPath_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdvancedConditionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvancedConditionList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Operate, operate_);
          DARABONBA_PTR_TO_JSON(OptionList, optionList_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Property, property_);
          DARABONBA_PTR_TO_JSON(Relation, relation_);
          DARABONBA_PTR_TO_JSON(ValueList, valueList_);
        };
        friend void from_json(const Darabonba::Json& j, AdvancedConditionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Operate, operate_);
          DARABONBA_PTR_FROM_JSON(OptionList, optionList_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Property, property_);
          DARABONBA_PTR_FROM_JSON(Relation, relation_);
          DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
        };
        AdvancedConditionList() = default ;
        AdvancedConditionList(const AdvancedConditionList &) = default ;
        AdvancedConditionList(AdvancedConditionList &&) = default ;
        AdvancedConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdvancedConditionList() = default ;
        AdvancedConditionList& operator=(const AdvancedConditionList &) = default ;
        AdvancedConditionList& operator=(AdvancedConditionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OptionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OptionList& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, OptionList& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          OptionList() = default ;
          OptionList(const OptionList &) = default ;
          OptionList(OptionList &&) = default ;
          OptionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OptionList() = default ;
          OptionList& operator=(const OptionList &) = default ;
          OptionList& operator=(OptionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline OptionList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline OptionList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // This parameter is required.
          shared_ptr<string> key_ {};
          // This parameter is required.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->operate_ == nullptr && this->optionList_ == nullptr && this->parentId_ == nullptr && this->property_ == nullptr && this->relation_ == nullptr
        && this->valueList_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AdvancedConditionList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // operate Field Functions 
        bool hasOperate() const { return this->operate_ != nullptr;};
        void deleteOperate() { this->operate_ = nullptr;};
        inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
        inline AdvancedConditionList& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


        // optionList Field Functions 
        bool hasOptionList() const { return this->optionList_ != nullptr;};
        void deleteOptionList() { this->optionList_ = nullptr;};
        inline const vector<AdvancedConditionList::OptionList> & getOptionList() const { DARABONBA_PTR_GET_CONST(optionList_, vector<AdvancedConditionList::OptionList>) };
        inline vector<AdvancedConditionList::OptionList> getOptionList() { DARABONBA_PTR_GET(optionList_, vector<AdvancedConditionList::OptionList>) };
        inline AdvancedConditionList& setOptionList(const vector<AdvancedConditionList::OptionList> & optionList) { DARABONBA_PTR_SET_VALUE(optionList_, optionList) };
        inline AdvancedConditionList& setOptionList(vector<AdvancedConditionList::OptionList> && optionList) { DARABONBA_PTR_SET_RVALUE(optionList_, optionList) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline AdvancedConditionList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // property Field Functions 
        bool hasProperty() const { return this->property_ != nullptr;};
        void deleteProperty() { this->property_ = nullptr;};
        inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
        inline AdvancedConditionList& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


        // relation Field Functions 
        bool hasRelation() const { return this->relation_ != nullptr;};
        void deleteRelation() { this->relation_ = nullptr;};
        inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
        inline AdvancedConditionList& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


        // valueList Field Functions 
        bool hasValueList() const { return this->valueList_ != nullptr;};
        void deleteValueList() { this->valueList_ = nullptr;};
        inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
        inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
        inline AdvancedConditionList& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
        inline AdvancedConditionList& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


      protected:
        // This parameter is required.
        shared_ptr<string> id_ {};
        // This parameter is required.
        shared_ptr<string> operate_ {};
        shared_ptr<vector<AdvancedConditionList::OptionList>> optionList_ {};
        shared_ptr<string> parentId_ {};
        shared_ptr<string> property_ {};
        // This parameter is required.
        shared_ptr<string> relation_ {};
        shared_ptr<vector<string>> valueList_ {};
      };

      virtual bool empty() const override { return this->abbreviation_ == nullptr
        && this->advancedConditionList_ == nullptr && this->description_ == nullptr && this->featureNameList_ == nullptr && this->id_ == nullptr && this->levelName_ == nullptr
        && this->name_ == nullptr && this->parentPath_ == nullptr && this->priority_ == nullptr && this->status_ == nullptr; };
      // abbreviation Field Functions 
      bool hasAbbreviation() const { return this->abbreviation_ != nullptr;};
      void deleteAbbreviation() { this->abbreviation_ = nullptr;};
      inline string getAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(abbreviation_, "") };
      inline UpdateCommand& setAbbreviation(string abbreviation) { DARABONBA_PTR_SET_VALUE(abbreviation_, abbreviation) };


      // advancedConditionList Field Functions 
      bool hasAdvancedConditionList() const { return this->advancedConditionList_ != nullptr;};
      void deleteAdvancedConditionList() { this->advancedConditionList_ = nullptr;};
      inline const vector<UpdateCommand::AdvancedConditionList> & getAdvancedConditionList() const { DARABONBA_PTR_GET_CONST(advancedConditionList_, vector<UpdateCommand::AdvancedConditionList>) };
      inline vector<UpdateCommand::AdvancedConditionList> getAdvancedConditionList() { DARABONBA_PTR_GET(advancedConditionList_, vector<UpdateCommand::AdvancedConditionList>) };
      inline UpdateCommand& setAdvancedConditionList(const vector<UpdateCommand::AdvancedConditionList> & advancedConditionList) { DARABONBA_PTR_SET_VALUE(advancedConditionList_, advancedConditionList) };
      inline UpdateCommand& setAdvancedConditionList(vector<UpdateCommand::AdvancedConditionList> && advancedConditionList) { DARABONBA_PTR_SET_RVALUE(advancedConditionList_, advancedConditionList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // featureNameList Field Functions 
      bool hasFeatureNameList() const { return this->featureNameList_ != nullptr;};
      void deleteFeatureNameList() { this->featureNameList_ = nullptr;};
      inline const vector<string> & getFeatureNameList() const { DARABONBA_PTR_GET_CONST(featureNameList_, vector<string>) };
      inline vector<string> getFeatureNameList() { DARABONBA_PTR_GET(featureNameList_, vector<string>) };
      inline UpdateCommand& setFeatureNameList(const vector<string> & featureNameList) { DARABONBA_PTR_SET_VALUE(featureNameList_, featureNameList) };
      inline UpdateCommand& setFeatureNameList(vector<string> && featureNameList) { DARABONBA_PTR_SET_RVALUE(featureNameList_, featureNameList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // levelName Field Functions 
      bool hasLevelName() const { return this->levelName_ != nullptr;};
      void deleteLevelName() { this->levelName_ = nullptr;};
      inline string getLevelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
      inline UpdateCommand& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentPath Field Functions 
      bool hasParentPath() const { return this->parentPath_ != nullptr;};
      void deleteParentPath() { this->parentPath_ = nullptr;};
      inline string getParentPath() const { DARABONBA_PTR_GET_DEFAULT(parentPath_, "") };
      inline UpdateCommand& setParentPath(string parentPath) { DARABONBA_PTR_SET_VALUE(parentPath_, parentPath) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline UpdateCommand& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UpdateCommand& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> abbreviation_ {};
      shared_ptr<vector<UpdateCommand::AdvancedConditionList>> advancedConditionList_ {};
      shared_ptr<string> description_ {};
      shared_ptr<vector<string>> featureNameList_ {};
      shared_ptr<int64_t> id_ {};
      // This parameter is required.
      shared_ptr<string> levelName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> parentPath_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateSecurityClassifyRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateSecurityClassifyRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateSecurityClassifyRequest::UpdateCommand) };
    inline UpdateSecurityClassifyRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateSecurityClassifyRequest::UpdateCommand) };
    inline UpdateSecurityClassifyRequest& setUpdateCommand(const UpdateSecurityClassifyRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateSecurityClassifyRequest& setUpdateCommand(UpdateSecurityClassifyRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateSecurityClassifyRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
