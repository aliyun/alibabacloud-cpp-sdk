// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTSERVICEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTSERVICEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetRecallManagementServiceVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecallManagementServiceVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IsEffective, isEffective_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecallManagementServiceVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IsEffective, isEffective_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRecallManagementServiceVersionResponseBody() = default ;
    GetRecallManagementServiceVersionResponseBody(const GetRecallManagementServiceVersionResponseBody &) = default ;
    GetRecallManagementServiceVersionResponseBody(GetRecallManagementServiceVersionResponseBody &&) = default ;
    GetRecallManagementServiceVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecallManagementServiceVersionResponseBody() = default ;
    GetRecallManagementServiceVersionResponseBody& operator=(const GetRecallManagementServiceVersionResponseBody &) = default ;
    GetRecallManagementServiceVersionResponseBody& operator=(GetRecallManagementServiceVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(MergeConfig, mergeConfig_);
        DARABONBA_PTR_TO_JSON(RecallConfigs, recallConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(MergeConfig, mergeConfig_);
        DARABONBA_PTR_FROM_JSON(RecallConfigs, recallConfigs_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecallConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecallConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfig_);
          DARABONBA_PTR_TO_JSON(ItemConditionArray, itemConditionArray_);
          DARABONBA_PTR_TO_JSON(ItemConditionExpression, itemConditionExpression_);
          DARABONBA_PTR_TO_JSON(ItemVectorField, itemVectorField_);
          DARABONBA_PTR_TO_JSON(ItemVectorRecallManagementTableId, itemVectorRecallManagementTableId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Operators, operators_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionConfigId, recallManagementServiceVersionConfigId_);
          DARABONBA_PTR_TO_JSON(RecallManagementTableId, recallManagementTableId_);
          DARABONBA_PTR_TO_JSON(RecallType, recallType_);
          DARABONBA_PTR_TO_JSON(UserVectorField, userVectorField_);
          DARABONBA_PTR_TO_JSON(UserVectorRecallManagementTableId, userVectorRecallManagementTableId_);
        };
        friend void from_json(const Darabonba::Json& j, RecallConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfig_);
          DARABONBA_PTR_FROM_JSON(ItemConditionArray, itemConditionArray_);
          DARABONBA_PTR_FROM_JSON(ItemConditionExpression, itemConditionExpression_);
          DARABONBA_PTR_FROM_JSON(ItemVectorField, itemVectorField_);
          DARABONBA_PTR_FROM_JSON(ItemVectorRecallManagementTableId, itemVectorRecallManagementTableId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Operators, operators_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionConfigId, recallManagementServiceVersionConfigId_);
          DARABONBA_PTR_FROM_JSON(RecallManagementTableId, recallManagementTableId_);
          DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
          DARABONBA_PTR_FROM_JSON(UserVectorField, userVectorField_);
          DARABONBA_PTR_FROM_JSON(UserVectorRecallManagementTableId, userVectorRecallManagementTableId_);
        };
        RecallConfigs() = default ;
        RecallConfigs(const RecallConfigs &) = default ;
        RecallConfigs(RecallConfigs &&) = default ;
        RecallConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecallConfigs() = default ;
        RecallConfigs& operator=(const RecallConfigs &) = default ;
        RecallConfigs& operator=(RecallConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Operators : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Operators& obj) { 
            DARABONBA_PTR_TO_JSON(FeatureConfig, featureConfig_);
            DARABONBA_PTR_TO_JSON(FilterConfig, filterConfig_);
            DARABONBA_PTR_TO_JSON(JoinConfig, joinConfig_);
            DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
            DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
          };
          friend void from_json(const Darabonba::Json& j, Operators& obj) { 
            DARABONBA_PTR_FROM_JSON(FeatureConfig, featureConfig_);
            DARABONBA_PTR_FROM_JSON(FilterConfig, filterConfig_);
            DARABONBA_PTR_FROM_JSON(JoinConfig, joinConfig_);
            DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
            DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
          };
          Operators() = default ;
          Operators(const Operators &) = default ;
          Operators(Operators &&) = default ;
          Operators(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Operators() = default ;
          Operators& operator=(const Operators &) = default ;
          Operators& operator=(Operators &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TriggerConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TriggerConfig& obj) { 
              DARABONBA_PTR_TO_JSON(Field, field_);
              DARABONBA_PTR_TO_JSON(FieldQuantityLimit, fieldQuantityLimit_);
              DARABONBA_PTR_TO_JSON(IsRandSort, isRandSort_);
              DARABONBA_PTR_TO_JSON(SortField, sortField_);
            };
            friend void from_json(const Darabonba::Json& j, TriggerConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(Field, field_);
              DARABONBA_PTR_FROM_JSON(FieldQuantityLimit, fieldQuantityLimit_);
              DARABONBA_PTR_FROM_JSON(IsRandSort, isRandSort_);
              DARABONBA_PTR_FROM_JSON(SortField, sortField_);
            };
            TriggerConfig() = default ;
            TriggerConfig(const TriggerConfig &) = default ;
            TriggerConfig(TriggerConfig &&) = default ;
            TriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TriggerConfig() = default ;
            TriggerConfig& operator=(const TriggerConfig &) = default ;
            TriggerConfig& operator=(TriggerConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->field_ == nullptr
        && this->fieldQuantityLimit_ == nullptr && this->isRandSort_ == nullptr && this->sortField_ == nullptr; };
            // field Field Functions 
            bool hasField() const { return this->field_ != nullptr;};
            void deleteField() { this->field_ = nullptr;};
            inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
            inline TriggerConfig& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


            // fieldQuantityLimit Field Functions 
            bool hasFieldQuantityLimit() const { return this->fieldQuantityLimit_ != nullptr;};
            void deleteFieldQuantityLimit() { this->fieldQuantityLimit_ = nullptr;};
            inline string getFieldQuantityLimit() const { DARABONBA_PTR_GET_DEFAULT(fieldQuantityLimit_, "") };
            inline TriggerConfig& setFieldQuantityLimit(string fieldQuantityLimit) { DARABONBA_PTR_SET_VALUE(fieldQuantityLimit_, fieldQuantityLimit) };


            // isRandSort Field Functions 
            bool hasIsRandSort() const { return this->isRandSort_ != nullptr;};
            void deleteIsRandSort() { this->isRandSort_ = nullptr;};
            inline string getIsRandSort() const { DARABONBA_PTR_GET_DEFAULT(isRandSort_, "") };
            inline TriggerConfig& setIsRandSort(string isRandSort) { DARABONBA_PTR_SET_VALUE(isRandSort_, isRandSort) };


            // sortField Field Functions 
            bool hasSortField() const { return this->sortField_ != nullptr;};
            void deleteSortField() { this->sortField_ = nullptr;};
            inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
            inline TriggerConfig& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


          protected:
            shared_ptr<string> field_ {};
            shared_ptr<string> fieldQuantityLimit_ {};
            shared_ptr<string> isRandSort_ {};
            shared_ptr<string> sortField_ {};
          };

          class JoinConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const JoinConfig& obj) { 
              DARABONBA_PTR_TO_JSON(Field, field_);
              DARABONBA_PTR_TO_JSON(OutputFields, outputFields_);
              DARABONBA_PTR_TO_JSON(RecallManagementTableId, recallManagementTableId_);
            };
            friend void from_json(const Darabonba::Json& j, JoinConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(Field, field_);
              DARABONBA_PTR_FROM_JSON(OutputFields, outputFields_);
              DARABONBA_PTR_FROM_JSON(RecallManagementTableId, recallManagementTableId_);
            };
            JoinConfig() = default ;
            JoinConfig(const JoinConfig &) = default ;
            JoinConfig(JoinConfig &&) = default ;
            JoinConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~JoinConfig() = default ;
            JoinConfig& operator=(const JoinConfig &) = default ;
            JoinConfig& operator=(JoinConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->field_ == nullptr
        && this->outputFields_ == nullptr && this->recallManagementTableId_ == nullptr; };
            // field Field Functions 
            bool hasField() const { return this->field_ != nullptr;};
            void deleteField() { this->field_ = nullptr;};
            inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
            inline JoinConfig& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


            // outputFields Field Functions 
            bool hasOutputFields() const { return this->outputFields_ != nullptr;};
            void deleteOutputFields() { this->outputFields_ = nullptr;};
            inline const vector<string> & getOutputFields() const { DARABONBA_PTR_GET_CONST(outputFields_, vector<string>) };
            inline vector<string> getOutputFields() { DARABONBA_PTR_GET(outputFields_, vector<string>) };
            inline JoinConfig& setOutputFields(const vector<string> & outputFields) { DARABONBA_PTR_SET_VALUE(outputFields_, outputFields) };
            inline JoinConfig& setOutputFields(vector<string> && outputFields) { DARABONBA_PTR_SET_RVALUE(outputFields_, outputFields) };


            // recallManagementTableId Field Functions 
            bool hasRecallManagementTableId() const { return this->recallManagementTableId_ != nullptr;};
            void deleteRecallManagementTableId() { this->recallManagementTableId_ = nullptr;};
            inline string getRecallManagementTableId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableId_, "") };
            inline JoinConfig& setRecallManagementTableId(string recallManagementTableId) { DARABONBA_PTR_SET_VALUE(recallManagementTableId_, recallManagementTableId) };


          protected:
            shared_ptr<string> field_ {};
            shared_ptr<vector<string>> outputFields_ {};
            shared_ptr<string> recallManagementTableId_ {};
          };

          class FilterConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FilterConfig& obj) { 
              DARABONBA_PTR_TO_JSON(Experession, experession_);
            };
            friend void from_json(const Darabonba::Json& j, FilterConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(Experession, experession_);
            };
            FilterConfig() = default ;
            FilterConfig(const FilterConfig &) = default ;
            FilterConfig(FilterConfig &&) = default ;
            FilterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FilterConfig() = default ;
            FilterConfig& operator=(const FilterConfig &) = default ;
            FilterConfig& operator=(FilterConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->experession_ == nullptr; };
            // experession Field Functions 
            bool hasExperession() const { return this->experession_ != nullptr;};
            void deleteExperession() { this->experession_ = nullptr;};
            inline string getExperession() const { DARABONBA_PTR_GET_DEFAULT(experession_, "") };
            inline FilterConfig& setExperession(string experession) { DARABONBA_PTR_SET_VALUE(experession_, experession) };


          protected:
            shared_ptr<string> experession_ {};
          };

          class FeatureConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FeatureConfig& obj) { 
              DARABONBA_PTR_TO_JSON(Expression, expression_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, FeatureConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(Expression, expression_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            FeatureConfig() = default ;
            FeatureConfig(const FeatureConfig &) = default ;
            FeatureConfig(FeatureConfig &&) = default ;
            FeatureConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FeatureConfig() = default ;
            FeatureConfig& operator=(const FeatureConfig &) = default ;
            FeatureConfig& operator=(FeatureConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->expression_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
            // expression Field Functions 
            bool hasExpression() const { return this->expression_ != nullptr;};
            void deleteExpression() { this->expression_ = nullptr;};
            inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
            inline FeatureConfig& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline FeatureConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline FeatureConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> expression_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->featureConfig_ == nullptr
        && this->filterConfig_ == nullptr && this->joinConfig_ == nullptr && this->operatorType_ == nullptr && this->triggerConfig_ == nullptr; };
          // featureConfig Field Functions 
          bool hasFeatureConfig() const { return this->featureConfig_ != nullptr;};
          void deleteFeatureConfig() { this->featureConfig_ = nullptr;};
          inline const Operators::FeatureConfig & getFeatureConfig() const { DARABONBA_PTR_GET_CONST(featureConfig_, Operators::FeatureConfig) };
          inline Operators::FeatureConfig getFeatureConfig() { DARABONBA_PTR_GET(featureConfig_, Operators::FeatureConfig) };
          inline Operators& setFeatureConfig(const Operators::FeatureConfig & featureConfig) { DARABONBA_PTR_SET_VALUE(featureConfig_, featureConfig) };
          inline Operators& setFeatureConfig(Operators::FeatureConfig && featureConfig) { DARABONBA_PTR_SET_RVALUE(featureConfig_, featureConfig) };


          // filterConfig Field Functions 
          bool hasFilterConfig() const { return this->filterConfig_ != nullptr;};
          void deleteFilterConfig() { this->filterConfig_ = nullptr;};
          inline const Operators::FilterConfig & getFilterConfig() const { DARABONBA_PTR_GET_CONST(filterConfig_, Operators::FilterConfig) };
          inline Operators::FilterConfig getFilterConfig() { DARABONBA_PTR_GET(filterConfig_, Operators::FilterConfig) };
          inline Operators& setFilterConfig(const Operators::FilterConfig & filterConfig) { DARABONBA_PTR_SET_VALUE(filterConfig_, filterConfig) };
          inline Operators& setFilterConfig(Operators::FilterConfig && filterConfig) { DARABONBA_PTR_SET_RVALUE(filterConfig_, filterConfig) };


          // joinConfig Field Functions 
          bool hasJoinConfig() const { return this->joinConfig_ != nullptr;};
          void deleteJoinConfig() { this->joinConfig_ = nullptr;};
          inline const Operators::JoinConfig & getJoinConfig() const { DARABONBA_PTR_GET_CONST(joinConfig_, Operators::JoinConfig) };
          inline Operators::JoinConfig getJoinConfig() { DARABONBA_PTR_GET(joinConfig_, Operators::JoinConfig) };
          inline Operators& setJoinConfig(const Operators::JoinConfig & joinConfig) { DARABONBA_PTR_SET_VALUE(joinConfig_, joinConfig) };
          inline Operators& setJoinConfig(Operators::JoinConfig && joinConfig) { DARABONBA_PTR_SET_RVALUE(joinConfig_, joinConfig) };


          // operatorType Field Functions 
          bool hasOperatorType() const { return this->operatorType_ != nullptr;};
          void deleteOperatorType() { this->operatorType_ = nullptr;};
          inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
          inline Operators& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


          // triggerConfig Field Functions 
          bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
          void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
          inline const Operators::TriggerConfig & getTriggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, Operators::TriggerConfig) };
          inline Operators::TriggerConfig getTriggerConfig() { DARABONBA_PTR_GET(triggerConfig_, Operators::TriggerConfig) };
          inline Operators& setTriggerConfig(const Operators::TriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
          inline Operators& setTriggerConfig(Operators::TriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


        protected:
          shared_ptr<Operators::FeatureConfig> featureConfig_ {};
          shared_ptr<Operators::FilterConfig> filterConfig_ {};
          shared_ptr<Operators::JoinConfig> joinConfig_ {};
          shared_ptr<string> operatorType_ {};
          shared_ptr<Operators::TriggerConfig> triggerConfig_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->extendedConfig_ == nullptr && this->itemConditionArray_ == nullptr && this->itemConditionExpression_ == nullptr && this->itemVectorField_ == nullptr && this->itemVectorRecallManagementTableId_ == nullptr
        && this->name_ == nullptr && this->operators_ == nullptr && this->priority_ == nullptr && this->recallManagementServiceVersionConfigId_ == nullptr && this->recallManagementTableId_ == nullptr
        && this->recallType_ == nullptr && this->userVectorField_ == nullptr && this->userVectorRecallManagementTableId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RecallConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // extendedConfig Field Functions 
        bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
        void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
        inline string getExtendedConfig() const { DARABONBA_PTR_GET_DEFAULT(extendedConfig_, "") };
        inline RecallConfigs& setExtendedConfig(string extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };


        // itemConditionArray Field Functions 
        bool hasItemConditionArray() const { return this->itemConditionArray_ != nullptr;};
        void deleteItemConditionArray() { this->itemConditionArray_ = nullptr;};
        inline string getItemConditionArray() const { DARABONBA_PTR_GET_DEFAULT(itemConditionArray_, "") };
        inline RecallConfigs& setItemConditionArray(string itemConditionArray) { DARABONBA_PTR_SET_VALUE(itemConditionArray_, itemConditionArray) };


        // itemConditionExpression Field Functions 
        bool hasItemConditionExpression() const { return this->itemConditionExpression_ != nullptr;};
        void deleteItemConditionExpression() { this->itemConditionExpression_ = nullptr;};
        inline string getItemConditionExpression() const { DARABONBA_PTR_GET_DEFAULT(itemConditionExpression_, "") };
        inline RecallConfigs& setItemConditionExpression(string itemConditionExpression) { DARABONBA_PTR_SET_VALUE(itemConditionExpression_, itemConditionExpression) };


        // itemVectorField Field Functions 
        bool hasItemVectorField() const { return this->itemVectorField_ != nullptr;};
        void deleteItemVectorField() { this->itemVectorField_ = nullptr;};
        inline string getItemVectorField() const { DARABONBA_PTR_GET_DEFAULT(itemVectorField_, "") };
        inline RecallConfigs& setItemVectorField(string itemVectorField) { DARABONBA_PTR_SET_VALUE(itemVectorField_, itemVectorField) };


        // itemVectorRecallManagementTableId Field Functions 
        bool hasItemVectorRecallManagementTableId() const { return this->itemVectorRecallManagementTableId_ != nullptr;};
        void deleteItemVectorRecallManagementTableId() { this->itemVectorRecallManagementTableId_ = nullptr;};
        inline string getItemVectorRecallManagementTableId() const { DARABONBA_PTR_GET_DEFAULT(itemVectorRecallManagementTableId_, "") };
        inline RecallConfigs& setItemVectorRecallManagementTableId(string itemVectorRecallManagementTableId) { DARABONBA_PTR_SET_VALUE(itemVectorRecallManagementTableId_, itemVectorRecallManagementTableId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RecallConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operators Field Functions 
        bool hasOperators() const { return this->operators_ != nullptr;};
        void deleteOperators() { this->operators_ = nullptr;};
        inline const vector<RecallConfigs::Operators> & getOperators() const { DARABONBA_PTR_GET_CONST(operators_, vector<RecallConfigs::Operators>) };
        inline vector<RecallConfigs::Operators> getOperators() { DARABONBA_PTR_GET(operators_, vector<RecallConfigs::Operators>) };
        inline RecallConfigs& setOperators(const vector<RecallConfigs::Operators> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
        inline RecallConfigs& setOperators(vector<RecallConfigs::Operators> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
        inline RecallConfigs& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // recallManagementServiceVersionConfigId Field Functions 
        bool hasRecallManagementServiceVersionConfigId() const { return this->recallManagementServiceVersionConfigId_ != nullptr;};
        void deleteRecallManagementServiceVersionConfigId() { this->recallManagementServiceVersionConfigId_ = nullptr;};
        inline string getRecallManagementServiceVersionConfigId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionConfigId_, "") };
        inline RecallConfigs& setRecallManagementServiceVersionConfigId(string recallManagementServiceVersionConfigId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionConfigId_, recallManagementServiceVersionConfigId) };


        // recallManagementTableId Field Functions 
        bool hasRecallManagementTableId() const { return this->recallManagementTableId_ != nullptr;};
        void deleteRecallManagementTableId() { this->recallManagementTableId_ = nullptr;};
        inline string getRecallManagementTableId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableId_, "") };
        inline RecallConfigs& setRecallManagementTableId(string recallManagementTableId) { DARABONBA_PTR_SET_VALUE(recallManagementTableId_, recallManagementTableId) };


        // recallType Field Functions 
        bool hasRecallType() const { return this->recallType_ != nullptr;};
        void deleteRecallType() { this->recallType_ = nullptr;};
        inline string getRecallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, "") };
        inline RecallConfigs& setRecallType(string recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


        // userVectorField Field Functions 
        bool hasUserVectorField() const { return this->userVectorField_ != nullptr;};
        void deleteUserVectorField() { this->userVectorField_ = nullptr;};
        inline string getUserVectorField() const { DARABONBA_PTR_GET_DEFAULT(userVectorField_, "") };
        inline RecallConfigs& setUserVectorField(string userVectorField) { DARABONBA_PTR_SET_VALUE(userVectorField_, userVectorField) };


        // userVectorRecallManagementTableId Field Functions 
        bool hasUserVectorRecallManagementTableId() const { return this->userVectorRecallManagementTableId_ != nullptr;};
        void deleteUserVectorRecallManagementTableId() { this->userVectorRecallManagementTableId_ = nullptr;};
        inline string getUserVectorRecallManagementTableId() const { DARABONBA_PTR_GET_DEFAULT(userVectorRecallManagementTableId_, "") };
        inline RecallConfigs& setUserVectorRecallManagementTableId(string userVectorRecallManagementTableId) { DARABONBA_PTR_SET_VALUE(userVectorRecallManagementTableId_, userVectorRecallManagementTableId) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> extendedConfig_ {};
        shared_ptr<string> itemConditionArray_ {};
        shared_ptr<string> itemConditionExpression_ {};
        shared_ptr<string> itemVectorField_ {};
        shared_ptr<string> itemVectorRecallManagementTableId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<RecallConfigs::Operators>> operators_ {};
        shared_ptr<int64_t> priority_ {};
        shared_ptr<string> recallManagementServiceVersionConfigId_ {};
        shared_ptr<string> recallManagementTableId_ {};
        shared_ptr<string> recallType_ {};
        shared_ptr<string> userVectorField_ {};
        shared_ptr<string> userVectorRecallManagementTableId_ {};
      };

      class MergeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MergeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfig_);
          DARABONBA_PTR_TO_JSON(FilterExpression, filterExpression_);
          DARABONBA_PTR_TO_JSON(FilterRecallManagementTableIds, filterRecallManagementTableIds_);
          DARABONBA_PTR_TO_JSON(ItemRecallManagementTableId, itemRecallManagementTableId_);
          DARABONBA_PTR_TO_JSON(ItemTableFields, itemTableFields_);
          DARABONBA_PTR_TO_JSON(MergeType, mergeType_);
          DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionConfigId, recallManagementServiceVersionConfigId_);
        };
        friend void from_json(const Darabonba::Json& j, MergeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfig_);
          DARABONBA_PTR_FROM_JSON(FilterExpression, filterExpression_);
          DARABONBA_PTR_FROM_JSON(FilterRecallManagementTableIds, filterRecallManagementTableIds_);
          DARABONBA_PTR_FROM_JSON(ItemRecallManagementTableId, itemRecallManagementTableId_);
          DARABONBA_PTR_FROM_JSON(ItemTableFields, itemTableFields_);
          DARABONBA_PTR_FROM_JSON(MergeType, mergeType_);
          DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionConfigId, recallManagementServiceVersionConfigId_);
        };
        MergeConfig() = default ;
        MergeConfig(const MergeConfig &) = default ;
        MergeConfig(MergeConfig &&) = default ;
        MergeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MergeConfig() = default ;
        MergeConfig& operator=(const MergeConfig &) = default ;
        MergeConfig& operator=(MergeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extendedConfig_ == nullptr
        && this->filterExpression_ == nullptr && this->filterRecallManagementTableIds_ == nullptr && this->itemRecallManagementTableId_ == nullptr && this->itemTableFields_ == nullptr && this->mergeType_ == nullptr
        && this->recallManagementServiceVersionConfigId_ == nullptr; };
        // extendedConfig Field Functions 
        bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
        void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
        inline string getExtendedConfig() const { DARABONBA_PTR_GET_DEFAULT(extendedConfig_, "") };
        inline MergeConfig& setExtendedConfig(string extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };


        // filterExpression Field Functions 
        bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
        void deleteFilterExpression() { this->filterExpression_ = nullptr;};
        inline string getFilterExpression() const { DARABONBA_PTR_GET_DEFAULT(filterExpression_, "") };
        inline MergeConfig& setFilterExpression(string filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };


        // filterRecallManagementTableIds Field Functions 
        bool hasFilterRecallManagementTableIds() const { return this->filterRecallManagementTableIds_ != nullptr;};
        void deleteFilterRecallManagementTableIds() { this->filterRecallManagementTableIds_ = nullptr;};
        inline const vector<string> & getFilterRecallManagementTableIds() const { DARABONBA_PTR_GET_CONST(filterRecallManagementTableIds_, vector<string>) };
        inline vector<string> getFilterRecallManagementTableIds() { DARABONBA_PTR_GET(filterRecallManagementTableIds_, vector<string>) };
        inline MergeConfig& setFilterRecallManagementTableIds(const vector<string> & filterRecallManagementTableIds) { DARABONBA_PTR_SET_VALUE(filterRecallManagementTableIds_, filterRecallManagementTableIds) };
        inline MergeConfig& setFilterRecallManagementTableIds(vector<string> && filterRecallManagementTableIds) { DARABONBA_PTR_SET_RVALUE(filterRecallManagementTableIds_, filterRecallManagementTableIds) };


        // itemRecallManagementTableId Field Functions 
        bool hasItemRecallManagementTableId() const { return this->itemRecallManagementTableId_ != nullptr;};
        void deleteItemRecallManagementTableId() { this->itemRecallManagementTableId_ = nullptr;};
        inline string getItemRecallManagementTableId() const { DARABONBA_PTR_GET_DEFAULT(itemRecallManagementTableId_, "") };
        inline MergeConfig& setItemRecallManagementTableId(string itemRecallManagementTableId) { DARABONBA_PTR_SET_VALUE(itemRecallManagementTableId_, itemRecallManagementTableId) };


        // itemTableFields Field Functions 
        bool hasItemTableFields() const { return this->itemTableFields_ != nullptr;};
        void deleteItemTableFields() { this->itemTableFields_ = nullptr;};
        inline const vector<string> & getItemTableFields() const { DARABONBA_PTR_GET_CONST(itemTableFields_, vector<string>) };
        inline vector<string> getItemTableFields() { DARABONBA_PTR_GET(itemTableFields_, vector<string>) };
        inline MergeConfig& setItemTableFields(const vector<string> & itemTableFields) { DARABONBA_PTR_SET_VALUE(itemTableFields_, itemTableFields) };
        inline MergeConfig& setItemTableFields(vector<string> && itemTableFields) { DARABONBA_PTR_SET_RVALUE(itemTableFields_, itemTableFields) };


        // mergeType Field Functions 
        bool hasMergeType() const { return this->mergeType_ != nullptr;};
        void deleteMergeType() { this->mergeType_ = nullptr;};
        inline string getMergeType() const { DARABONBA_PTR_GET_DEFAULT(mergeType_, "") };
        inline MergeConfig& setMergeType(string mergeType) { DARABONBA_PTR_SET_VALUE(mergeType_, mergeType) };


        // recallManagementServiceVersionConfigId Field Functions 
        bool hasRecallManagementServiceVersionConfigId() const { return this->recallManagementServiceVersionConfigId_ != nullptr;};
        void deleteRecallManagementServiceVersionConfigId() { this->recallManagementServiceVersionConfigId_ = nullptr;};
        inline string getRecallManagementServiceVersionConfigId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionConfigId_, "") };
        inline MergeConfig& setRecallManagementServiceVersionConfigId(string recallManagementServiceVersionConfigId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionConfigId_, recallManagementServiceVersionConfigId) };


      protected:
        shared_ptr<string> extendedConfig_ {};
        shared_ptr<string> filterExpression_ {};
        shared_ptr<vector<string>> filterRecallManagementTableIds_ {};
        shared_ptr<string> itemRecallManagementTableId_ {};
        shared_ptr<vector<string>> itemTableFields_ {};
        shared_ptr<string> mergeType_ {};
        shared_ptr<string> recallManagementServiceVersionConfigId_ {};
      };

      virtual bool empty() const override { return this->mergeConfig_ == nullptr
        && this->recallConfigs_ == nullptr; };
      // mergeConfig Field Functions 
      bool hasMergeConfig() const { return this->mergeConfig_ != nullptr;};
      void deleteMergeConfig() { this->mergeConfig_ = nullptr;};
      inline const Configs::MergeConfig & getMergeConfig() const { DARABONBA_PTR_GET_CONST(mergeConfig_, Configs::MergeConfig) };
      inline Configs::MergeConfig getMergeConfig() { DARABONBA_PTR_GET(mergeConfig_, Configs::MergeConfig) };
      inline Configs& setMergeConfig(const Configs::MergeConfig & mergeConfig) { DARABONBA_PTR_SET_VALUE(mergeConfig_, mergeConfig) };
      inline Configs& setMergeConfig(Configs::MergeConfig && mergeConfig) { DARABONBA_PTR_SET_RVALUE(mergeConfig_, mergeConfig) };


      // recallConfigs Field Functions 
      bool hasRecallConfigs() const { return this->recallConfigs_ != nullptr;};
      void deleteRecallConfigs() { this->recallConfigs_ = nullptr;};
      inline const vector<Configs::RecallConfigs> & getRecallConfigs() const { DARABONBA_PTR_GET_CONST(recallConfigs_, vector<Configs::RecallConfigs>) };
      inline vector<Configs::RecallConfigs> getRecallConfigs() { DARABONBA_PTR_GET(recallConfigs_, vector<Configs::RecallConfigs>) };
      inline Configs& setRecallConfigs(const vector<Configs::RecallConfigs> & recallConfigs) { DARABONBA_PTR_SET_VALUE(recallConfigs_, recallConfigs) };
      inline Configs& setRecallConfigs(vector<Configs::RecallConfigs> && recallConfigs) { DARABONBA_PTR_SET_RVALUE(recallConfigs_, recallConfigs) };


    protected:
      shared_ptr<Configs::MergeConfig> mergeConfig_ {};
      shared_ptr<vector<Configs::RecallConfigs>> recallConfigs_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->isDefault_ == nullptr && this->isEffective_ == nullptr && this->name_ == nullptr
        && this->recallManagementServiceVersionId_ == nullptr && this->requestId_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const GetRecallManagementServiceVersionResponseBody::Configs & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, GetRecallManagementServiceVersionResponseBody::Configs) };
    inline GetRecallManagementServiceVersionResponseBody::Configs getConfigs() { DARABONBA_PTR_GET(configs_, GetRecallManagementServiceVersionResponseBody::Configs) };
    inline GetRecallManagementServiceVersionResponseBody& setConfigs(const GetRecallManagementServiceVersionResponseBody::Configs & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline GetRecallManagementServiceVersionResponseBody& setConfigs(GetRecallManagementServiceVersionResponseBody::Configs && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetRecallManagementServiceVersionResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetRecallManagementServiceVersionResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline GetRecallManagementServiceVersionResponseBody& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isEffective Field Functions 
    bool hasIsEffective() const { return this->isEffective_ != nullptr;};
    void deleteIsEffective() { this->isEffective_ = nullptr;};
    inline bool getIsEffective() const { DARABONBA_PTR_GET_DEFAULT(isEffective_, false) };
    inline GetRecallManagementServiceVersionResponseBody& setIsEffective(bool isEffective) { DARABONBA_PTR_SET_VALUE(isEffective_, isEffective) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRecallManagementServiceVersionResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recallManagementServiceVersionId Field Functions 
    bool hasRecallManagementServiceVersionId() const { return this->recallManagementServiceVersionId_ != nullptr;};
    void deleteRecallManagementServiceVersionId() { this->recallManagementServiceVersionId_ = nullptr;};
    inline string getRecallManagementServiceVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionId_, "") };
    inline GetRecallManagementServiceVersionResponseBody& setRecallManagementServiceVersionId(string recallManagementServiceVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionId_, recallManagementServiceVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecallManagementServiceVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetRecallManagementServiceVersionResponseBody::Configs> configs_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> isDefault_ {};
    shared_ptr<bool> isEffective_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> recallManagementServiceVersionId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
