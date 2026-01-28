// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListComponentsResponseBody() = default ;
    ListComponentsResponseBody(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody(ListComponentsResponseBody &&) = default ;
    ListComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBody() = default ;
    ListComponentsResponseBody& operator=(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody& operator=(ListComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentActions, componentActions_);
        DARABONBA_PTR_TO_JSON(ComponentAlias, componentAlias_);
        DARABONBA_PTR_TO_JSON(ComponentAssetConfigs, componentAssetConfigs_);
        DARABONBA_PTR_TO_JSON(ComponentDescription, componentDescription_);
        DARABONBA_PTR_TO_JSON(ComponentExtension, componentExtension_);
        DARABONBA_PTR_TO_JSON(ComponentLogo, componentLogo_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentActions, componentActions_);
        DARABONBA_PTR_FROM_JSON(ComponentAlias, componentAlias_);
        DARABONBA_PTR_FROM_JSON(ComponentAssetConfigs, componentAssetConfigs_);
        DARABONBA_PTR_FROM_JSON(ComponentDescription, componentDescription_);
        DARABONBA_PTR_FROM_JSON(ComponentExtension, componentExtension_);
        DARABONBA_PTR_FROM_JSON(ComponentLogo, componentLogo_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ComponentAssetConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentAssetConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
          DARABONBA_PTR_TO_JSON(Required, required_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentAssetConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
          DARABONBA_PTR_FROM_JSON(Required, required_);
        };
        ComponentAssetConfigs() = default ;
        ComponentAssetConfigs(const ComponentAssetConfigs &) = default ;
        ComponentAssetConfigs(ComponentAssetConfigs &&) = default ;
        ComponentAssetConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentAssetConfigs() = default ;
        ComponentAssetConfigs& operator=(const ComponentAssetConfigs &) = default ;
        ComponentAssetConfigs& operator=(ComponentAssetConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->encrypted_ == nullptr && this->fieldDescription_ == nullptr && this->fieldName_ == nullptr && this->fieldType_ == nullptr && this->required_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline ComponentAssetConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
        inline ComponentAssetConfigs& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // fieldDescription Field Functions 
        bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
        void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
        inline string getFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
        inline ComponentAssetConfigs& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline ComponentAssetConfigs& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline ComponentAssetConfigs& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline ComponentAssetConfigs& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      protected:
        // Default value.
        shared_ptr<string> defaultValue_ {};
        // Whether the field value needs to be encrypted. The range of values is as follows:
        // 
        // - true: Encrypted.
        // - false: Not encrypted.
        // 
        // Default value: false.
        shared_ptr<bool> encrypted_ {};
        // Description of the field.
        shared_ptr<string> fieldDescription_ {};
        // Field name.
        shared_ptr<string> fieldName_ {};
        // Field type, with the following values:
        // 
        // - **String**: String.
        // - **Long**: Long integer.
        // - **Integer**: Integer.
        // - **Double**: Double.
        // - **Boolean**: Boolean.
        // - **Complex**: Key-value pair.
        shared_ptr<string> fieldType_ {};
        // Whether this parameter is required.
        // 
        // - **true**: Required.
        // - **false**: Not required.
        shared_ptr<bool> required_ {};
      };

      class ComponentActions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentActions& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentActionDescription, componentActionDescription_);
          DARABONBA_PTR_TO_JSON(ComponentActionName, componentActionName_);
          DARABONBA_PTR_TO_JSON(InputConfigs, inputConfigs_);
          DARABONBA_PTR_TO_JSON(OutputConfigs, outputConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentActions& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentActionDescription, componentActionDescription_);
          DARABONBA_PTR_FROM_JSON(ComponentActionName, componentActionName_);
          DARABONBA_PTR_FROM_JSON(InputConfigs, inputConfigs_);
          DARABONBA_PTR_FROM_JSON(OutputConfigs, outputConfigs_);
        };
        ComponentActions() = default ;
        ComponentActions(const ComponentActions &) = default ;
        ComponentActions(ComponentActions &&) = default ;
        ComponentActions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentActions() = default ;
        ComponentActions& operator=(const ComponentActions &) = default ;
        ComponentActions& operator=(ComponentActions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OutputConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
            DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
          };
          friend void from_json(const Darabonba::Json& j, OutputConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
            DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
          };
          OutputConfigs() = default ;
          OutputConfigs(const OutputConfigs &) = default ;
          OutputConfigs(OutputConfigs &&) = default ;
          OutputConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputConfigs() = default ;
          OutputConfigs& operator=(const OutputConfigs &) = default ;
          OutputConfigs& operator=(OutputConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldType_ == nullptr; };
          // fieldName Field Functions 
          bool hasFieldName() const { return this->fieldName_ != nullptr;};
          void deleteFieldName() { this->fieldName_ = nullptr;};
          inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
          inline OutputConfigs& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


          // fieldType Field Functions 
          bool hasFieldType() const { return this->fieldType_ != nullptr;};
          void deleteFieldType() { this->fieldType_ = nullptr;};
          inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
          inline OutputConfigs& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        protected:
          // Field name.
          shared_ptr<string> fieldName_ {};
          // Field type, with the following values:
          // 
          // - **String**: String.
          // - **Long**: Long integer.
          // - **Integer**: Integer.
          // - **Double**: Double.
          // - **Boolean**: Boolean.
          // - **Complex**: Key-value pair.
          shared_ptr<string> fieldType_ {};
        };

        class InputConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
            DARABONBA_PTR_TO_JSON(FieldDisplayConfig, fieldDisplayConfig_);
            DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
            DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
            DARABONBA_PTR_TO_JSON(Required, required_);
          };
          friend void from_json(const Darabonba::Json& j, InputConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
            DARABONBA_PTR_FROM_JSON(FieldDisplayConfig, fieldDisplayConfig_);
            DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
            DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
            DARABONBA_PTR_FROM_JSON(Required, required_);
          };
          InputConfigs() = default ;
          InputConfigs(const InputConfigs &) = default ;
          InputConfigs(InputConfigs &&) = default ;
          InputConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputConfigs() = default ;
          InputConfigs& operator=(const InputConfigs &) = default ;
          InputConfigs& operator=(InputConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->fieldDescription_ == nullptr && this->fieldDisplayConfig_ == nullptr && this->fieldName_ == nullptr && this->fieldType_ == nullptr && this->required_ == nullptr; };
          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline InputConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // fieldDescription Field Functions 
          bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
          void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
          inline string getFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
          inline InputConfigs& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


          // fieldDisplayConfig Field Functions 
          bool hasFieldDisplayConfig() const { return this->fieldDisplayConfig_ != nullptr;};
          void deleteFieldDisplayConfig() { this->fieldDisplayConfig_ = nullptr;};
          inline string getFieldDisplayConfig() const { DARABONBA_PTR_GET_DEFAULT(fieldDisplayConfig_, "") };
          inline InputConfigs& setFieldDisplayConfig(string fieldDisplayConfig) { DARABONBA_PTR_SET_VALUE(fieldDisplayConfig_, fieldDisplayConfig) };


          // fieldName Field Functions 
          bool hasFieldName() const { return this->fieldName_ != nullptr;};
          void deleteFieldName() { this->fieldName_ = nullptr;};
          inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
          inline InputConfigs& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


          // fieldType Field Functions 
          bool hasFieldType() const { return this->fieldType_ != nullptr;};
          void deleteFieldType() { this->fieldType_ = nullptr;};
          inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
          inline InputConfigs& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
          inline InputConfigs& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        protected:
          // Default value.
          shared_ptr<string> defaultValue_ {};
          // Field description information.
          shared_ptr<string> fieldDescription_ {};
          // Field display configuration.
          shared_ptr<string> fieldDisplayConfig_ {};
          // Field name.
          shared_ptr<string> fieldName_ {};
          // Field type, with the following values:
          // 
          // - **String**: String.
          // - **Long**: Long integer.
          // - **Integer**: Integer.
          // - **Double**: Double.
          // - **Boolean**: Boolean.
          // - **Complex**: Key-value pair.
          shared_ptr<string> fieldType_ {};
          // Whether this parameter is required.
          // 
          // - **true**: Required.
          // - **false**: Not required.
          shared_ptr<bool> required_ {};
        };

        virtual bool empty() const override { return this->componentActionDescription_ == nullptr
        && this->componentActionName_ == nullptr && this->inputConfigs_ == nullptr && this->outputConfigs_ == nullptr; };
        // componentActionDescription Field Functions 
        bool hasComponentActionDescription() const { return this->componentActionDescription_ != nullptr;};
        void deleteComponentActionDescription() { this->componentActionDescription_ = nullptr;};
        inline string getComponentActionDescription() const { DARABONBA_PTR_GET_DEFAULT(componentActionDescription_, "") };
        inline ComponentActions& setComponentActionDescription(string componentActionDescription) { DARABONBA_PTR_SET_VALUE(componentActionDescription_, componentActionDescription) };


        // componentActionName Field Functions 
        bool hasComponentActionName() const { return this->componentActionName_ != nullptr;};
        void deleteComponentActionName() { this->componentActionName_ = nullptr;};
        inline string getComponentActionName() const { DARABONBA_PTR_GET_DEFAULT(componentActionName_, "") };
        inline ComponentActions& setComponentActionName(string componentActionName) { DARABONBA_PTR_SET_VALUE(componentActionName_, componentActionName) };


        // inputConfigs Field Functions 
        bool hasInputConfigs() const { return this->inputConfigs_ != nullptr;};
        void deleteInputConfigs() { this->inputConfigs_ = nullptr;};
        inline const vector<ComponentActions::InputConfigs> & getInputConfigs() const { DARABONBA_PTR_GET_CONST(inputConfigs_, vector<ComponentActions::InputConfigs>) };
        inline vector<ComponentActions::InputConfigs> getInputConfigs() { DARABONBA_PTR_GET(inputConfigs_, vector<ComponentActions::InputConfigs>) };
        inline ComponentActions& setInputConfigs(const vector<ComponentActions::InputConfigs> & inputConfigs) { DARABONBA_PTR_SET_VALUE(inputConfigs_, inputConfigs) };
        inline ComponentActions& setInputConfigs(vector<ComponentActions::InputConfigs> && inputConfigs) { DARABONBA_PTR_SET_RVALUE(inputConfigs_, inputConfigs) };


        // outputConfigs Field Functions 
        bool hasOutputConfigs() const { return this->outputConfigs_ != nullptr;};
        void deleteOutputConfigs() { this->outputConfigs_ = nullptr;};
        inline const vector<ComponentActions::OutputConfigs> & getOutputConfigs() const { DARABONBA_PTR_GET_CONST(outputConfigs_, vector<ComponentActions::OutputConfigs>) };
        inline vector<ComponentActions::OutputConfigs> getOutputConfigs() { DARABONBA_PTR_GET(outputConfigs_, vector<ComponentActions::OutputConfigs>) };
        inline ComponentActions& setOutputConfigs(const vector<ComponentActions::OutputConfigs> & outputConfigs) { DARABONBA_PTR_SET_VALUE(outputConfigs_, outputConfigs) };
        inline ComponentActions& setOutputConfigs(vector<ComponentActions::OutputConfigs> && outputConfigs) { DARABONBA_PTR_SET_RVALUE(outputConfigs_, outputConfigs) };


      protected:
        // The description of the component action name.
        shared_ptr<string> componentActionDescription_ {};
        // The name of the component action.
        shared_ptr<string> componentActionName_ {};
        // Configuration of input parameters for the action.
        shared_ptr<vector<ComponentActions::InputConfigs>> inputConfigs_ {};
        // Action output parameter configuration.
        shared_ptr<vector<ComponentActions::OutputConfigs>> outputConfigs_ {};
      };

      virtual bool empty() const override { return this->componentActions_ == nullptr
        && this->componentAlias_ == nullptr && this->componentAssetConfigs_ == nullptr && this->componentDescription_ == nullptr && this->componentExtension_ == nullptr && this->componentLogo_ == nullptr
        && this->componentName_ == nullptr && this->createTime_ == nullptr && this->updateTime_ == nullptr; };
      // componentActions Field Functions 
      bool hasComponentActions() const { return this->componentActions_ != nullptr;};
      void deleteComponentActions() { this->componentActions_ = nullptr;};
      inline const vector<Components::ComponentActions> & getComponentActions() const { DARABONBA_PTR_GET_CONST(componentActions_, vector<Components::ComponentActions>) };
      inline vector<Components::ComponentActions> getComponentActions() { DARABONBA_PTR_GET(componentActions_, vector<Components::ComponentActions>) };
      inline Components& setComponentActions(const vector<Components::ComponentActions> & componentActions) { DARABONBA_PTR_SET_VALUE(componentActions_, componentActions) };
      inline Components& setComponentActions(vector<Components::ComponentActions> && componentActions) { DARABONBA_PTR_SET_RVALUE(componentActions_, componentActions) };


      // componentAlias Field Functions 
      bool hasComponentAlias() const { return this->componentAlias_ != nullptr;};
      void deleteComponentAlias() { this->componentAlias_ = nullptr;};
      inline string getComponentAlias() const { DARABONBA_PTR_GET_DEFAULT(componentAlias_, "") };
      inline Components& setComponentAlias(string componentAlias) { DARABONBA_PTR_SET_VALUE(componentAlias_, componentAlias) };


      // componentAssetConfigs Field Functions 
      bool hasComponentAssetConfigs() const { return this->componentAssetConfigs_ != nullptr;};
      void deleteComponentAssetConfigs() { this->componentAssetConfigs_ = nullptr;};
      inline const vector<Components::ComponentAssetConfigs> & getComponentAssetConfigs() const { DARABONBA_PTR_GET_CONST(componentAssetConfigs_, vector<Components::ComponentAssetConfigs>) };
      inline vector<Components::ComponentAssetConfigs> getComponentAssetConfigs() { DARABONBA_PTR_GET(componentAssetConfigs_, vector<Components::ComponentAssetConfigs>) };
      inline Components& setComponentAssetConfigs(const vector<Components::ComponentAssetConfigs> & componentAssetConfigs) { DARABONBA_PTR_SET_VALUE(componentAssetConfigs_, componentAssetConfigs) };
      inline Components& setComponentAssetConfigs(vector<Components::ComponentAssetConfigs> && componentAssetConfigs) { DARABONBA_PTR_SET_RVALUE(componentAssetConfigs_, componentAssetConfigs) };


      // componentDescription Field Functions 
      bool hasComponentDescription() const { return this->componentDescription_ != nullptr;};
      void deleteComponentDescription() { this->componentDescription_ = nullptr;};
      inline string getComponentDescription() const { DARABONBA_PTR_GET_DEFAULT(componentDescription_, "") };
      inline Components& setComponentDescription(string componentDescription) { DARABONBA_PTR_SET_VALUE(componentDescription_, componentDescription) };


      // componentExtension Field Functions 
      bool hasComponentExtension() const { return this->componentExtension_ != nullptr;};
      void deleteComponentExtension() { this->componentExtension_ = nullptr;};
      inline string getComponentExtension() const { DARABONBA_PTR_GET_DEFAULT(componentExtension_, "") };
      inline Components& setComponentExtension(string componentExtension) { DARABONBA_PTR_SET_VALUE(componentExtension_, componentExtension) };


      // componentLogo Field Functions 
      bool hasComponentLogo() const { return this->componentLogo_ != nullptr;};
      void deleteComponentLogo() { this->componentLogo_ = nullptr;};
      inline string getComponentLogo() const { DARABONBA_PTR_GET_DEFAULT(componentLogo_, "") };
      inline Components& setComponentLogo(string componentLogo) { DARABONBA_PTR_SET_VALUE(componentLogo_, componentLogo) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline Components& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Components& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Components& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // List of component actions.
      shared_ptr<vector<Components::ComponentActions>> componentActions_ {};
      // The alias of the component.
      shared_ptr<string> componentAlias_ {};
      // List of asset field configurations.
      shared_ptr<vector<Components::ComponentAssetConfigs>> componentAssetConfigs_ {};
      // The description of the component.
      shared_ptr<string> componentDescription_ {};
      // Extended information of the component.
      shared_ptr<string> componentExtension_ {};
      // The icon URL of the component.
      shared_ptr<string> componentLogo_ {};
      // The name of the component.
      shared_ptr<string> componentName_ {};
      // Creation time.
      shared_ptr<int64_t> createTime_ {};
      // Update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->components_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<ListComponentsResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<ListComponentsResponseBody::Components>) };
    inline vector<ListComponentsResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<ListComponentsResponseBody::Components>) };
    inline ListComponentsResponseBody& setComponents(const vector<ListComponentsResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline ListComponentsResponseBody& setComponents(vector<ListComponentsResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComponentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComponentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListComponentsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListComponentsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListComponentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of components.
    shared_ptr<vector<ListComponentsResponseBody::Components>> components_ {};
    // Maximum number of results returned in a single request. Range: 1~100.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the start of the next query.
    shared_ptr<string> nextToken_ {};
    // Page number for pagination, with a default value of 1.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of items per page for pagination. Range: 1~100.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier generated by Alibaba Cloud for this request, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // The total number of items found.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
