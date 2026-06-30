// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTINFO_HPP_
#define ALIBABACLOUD_MODELS_AGENTINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class AgentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InputType, inputType_);
      DARABONBA_PTR_TO_JSON(InstructionType, instructionType_);
      DARABONBA_PTR_TO_JSON(InstructionTypeParam, instructionTypeParam_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
    };
    friend void from_json(const Darabonba::Json& j, AgentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InputType, inputType_);
      DARABONBA_PTR_FROM_JSON(InstructionType, instructionType_);
      DARABONBA_PTR_FROM_JSON(InstructionTypeParam, instructionTypeParam_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
    };
    AgentInfo() = default ;
    AgentInfo(const AgentInfo &) = default ;
    AgentInfo(AgentInfo &&) = default ;
    AgentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentInfo() = default ;
    AgentInfo& operator=(const AgentInfo &) = default ;
    AgentInfo& operator=(AgentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstructionTypeParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstructionTypeParam& obj) { 
        DARABONBA_PTR_TO_JSON(CustomPromptParam, customPromptParam_);
        DARABONBA_PTR_TO_JSON(FieldsParam, fieldsParam_);
        DARABONBA_PTR_TO_JSON(ServiceInspectionParam, serviceInspectionParam_);
        DARABONBA_PTR_TO_JSON(TagCategoryParam, tagCategoryParam_);
      };
      friend void from_json(const Darabonba::Json& j, InstructionTypeParam& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomPromptParam, customPromptParam_);
        DARABONBA_PTR_FROM_JSON(FieldsParam, fieldsParam_);
        DARABONBA_PTR_FROM_JSON(ServiceInspectionParam, serviceInspectionParam_);
        DARABONBA_PTR_FROM_JSON(TagCategoryParam, tagCategoryParam_);
      };
      InstructionTypeParam() = default ;
      InstructionTypeParam(const InstructionTypeParam &) = default ;
      InstructionTypeParam(InstructionTypeParam &&) = default ;
      InstructionTypeParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstructionTypeParam() = default ;
      InstructionTypeParam& operator=(const InstructionTypeParam &) = default ;
      InstructionTypeParam& operator=(InstructionTypeParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagCategoryParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagCategoryParam& obj) { 
          DARABONBA_PTR_TO_JSON(NameDescPairList, nameDescPairList_);
        };
        friend void from_json(const Darabonba::Json& j, TagCategoryParam& obj) { 
          DARABONBA_PTR_FROM_JSON(NameDescPairList, nameDescPairList_);
        };
        TagCategoryParam() = default ;
        TagCategoryParam(const TagCategoryParam &) = default ;
        TagCategoryParam(TagCategoryParam &&) = default ;
        TagCategoryParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagCategoryParam() = default ;
        TagCategoryParam& operator=(const TagCategoryParam &) = default ;
        TagCategoryParam& operator=(TagCategoryParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NameDescPairList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NameDescPairList& obj) { 
            DARABONBA_PTR_TO_JSON(Desc, desc_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ValueList, valueList_);
          };
          friend void from_json(const Darabonba::Json& j, NameDescPairList& obj) { 
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
          };
          NameDescPairList() = default ;
          NameDescPairList(const NameDescPairList &) = default ;
          NameDescPairList(NameDescPairList &&) = default ;
          NameDescPairList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NameDescPairList() = default ;
          NameDescPairList& operator=(const NameDescPairList &) = default ;
          NameDescPairList& operator=(NameDescPairList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->name_ == nullptr && this->valueList_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline NameDescPairList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline NameDescPairList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // valueList Field Functions 
          bool hasValueList() const { return this->valueList_ != nullptr;};
          void deleteValueList() { this->valueList_ = nullptr;};
          inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
          inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
          inline NameDescPairList& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
          inline NameDescPairList& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


        protected:
          shared_ptr<string> desc_ {};
          shared_ptr<string> name_ {};
          shared_ptr<vector<string>> valueList_ {};
        };

        virtual bool empty() const override { return this->nameDescPairList_ == nullptr; };
        // nameDescPairList Field Functions 
        bool hasNameDescPairList() const { return this->nameDescPairList_ != nullptr;};
        void deleteNameDescPairList() { this->nameDescPairList_ = nullptr;};
        inline const vector<TagCategoryParam::NameDescPairList> & getNameDescPairList() const { DARABONBA_PTR_GET_CONST(nameDescPairList_, vector<TagCategoryParam::NameDescPairList>) };
        inline vector<TagCategoryParam::NameDescPairList> getNameDescPairList() { DARABONBA_PTR_GET(nameDescPairList_, vector<TagCategoryParam::NameDescPairList>) };
        inline TagCategoryParam& setNameDescPairList(const vector<TagCategoryParam::NameDescPairList> & nameDescPairList) { DARABONBA_PTR_SET_VALUE(nameDescPairList_, nameDescPairList) };
        inline TagCategoryParam& setNameDescPairList(vector<TagCategoryParam::NameDescPairList> && nameDescPairList) { DARABONBA_PTR_SET_RVALUE(nameDescPairList_, nameDescPairList) };


      protected:
        shared_ptr<vector<TagCategoryParam::NameDescPairList>> nameDescPairList_ {};
      };

      class ServiceInspectionParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceInspectionParam& obj) { 
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(SceneDescription, sceneDescription_);
          DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceInspectionParam& obj) { 
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(SceneDescription, sceneDescription_);
          DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        };
        ServiceInspectionParam() = default ;
        ServiceInspectionParam(const ServiceInspectionParam &) = default ;
        ServiceInspectionParam(ServiceInspectionParam &&) = default ;
        ServiceInspectionParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceInspectionParam() = default ;
        ServiceInspectionParam& operator=(const ServiceInspectionParam &) = default ;
        ServiceInspectionParam& operator=(ServiceInspectionParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Dimensions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
            DARABONBA_PTR_TO_JSON(Desc, desc_);
            DARABONBA_PTR_TO_JSON(Dimension, dimension_);
          };
          friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
            DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
          };
          Dimensions() = default ;
          Dimensions(const Dimensions &) = default ;
          Dimensions(Dimensions &&) = default ;
          Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Dimensions() = default ;
          Dimensions& operator=(const Dimensions &) = default ;
          Dimensions& operator=(Dimensions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->dimension_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline Dimensions& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // dimension Field Functions 
          bool hasDimension() const { return this->dimension_ != nullptr;};
          void deleteDimension() { this->dimension_ = nullptr;};
          inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
          inline Dimensions& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


        protected:
          shared_ptr<string> desc_ {};
          shared_ptr<string> dimension_ {};
        };

        virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->sceneDescription_ == nullptr && this->sceneName_ == nullptr; };
        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline const vector<ServiceInspectionParam::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<ServiceInspectionParam::Dimensions>) };
        inline vector<ServiceInspectionParam::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<ServiceInspectionParam::Dimensions>) };
        inline ServiceInspectionParam& setDimensions(const vector<ServiceInspectionParam::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
        inline ServiceInspectionParam& setDimensions(vector<ServiceInspectionParam::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


        // sceneDescription Field Functions 
        bool hasSceneDescription() const { return this->sceneDescription_ != nullptr;};
        void deleteSceneDescription() { this->sceneDescription_ = nullptr;};
        inline string getSceneDescription() const { DARABONBA_PTR_GET_DEFAULT(sceneDescription_, "") };
        inline ServiceInspectionParam& setSceneDescription(string sceneDescription) { DARABONBA_PTR_SET_VALUE(sceneDescription_, sceneDescription) };


        // sceneName Field Functions 
        bool hasSceneName() const { return this->sceneName_ != nullptr;};
        void deleteSceneName() { this->sceneName_ = nullptr;};
        inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
        inline ServiceInspectionParam& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      protected:
        shared_ptr<vector<ServiceInspectionParam::Dimensions>> dimensions_ {};
        shared_ptr<string> sceneDescription_ {};
        shared_ptr<string> sceneName_ {};
      };

      class FieldsParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FieldsParam& obj) { 
          DARABONBA_PTR_TO_JSON(NameDescPairList, nameDescPairList_);
        };
        friend void from_json(const Darabonba::Json& j, FieldsParam& obj) { 
          DARABONBA_PTR_FROM_JSON(NameDescPairList, nameDescPairList_);
        };
        FieldsParam() = default ;
        FieldsParam(const FieldsParam &) = default ;
        FieldsParam(FieldsParam &&) = default ;
        FieldsParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FieldsParam() = default ;
        FieldsParam& operator=(const FieldsParam &) = default ;
        FieldsParam& operator=(FieldsParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NameDescPairList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NameDescPairList& obj) { 
            DARABONBA_PTR_TO_JSON(Desc, desc_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, NameDescPairList& obj) { 
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          NameDescPairList() = default ;
          NameDescPairList(const NameDescPairList &) = default ;
          NameDescPairList(NameDescPairList &&) = default ;
          NameDescPairList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NameDescPairList() = default ;
          NameDescPairList& operator=(const NameDescPairList &) = default ;
          NameDescPairList& operator=(NameDescPairList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline NameDescPairList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline NameDescPairList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline NameDescPairList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> desc_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->nameDescPairList_ == nullptr; };
        // nameDescPairList Field Functions 
        bool hasNameDescPairList() const { return this->nameDescPairList_ != nullptr;};
        void deleteNameDescPairList() { this->nameDescPairList_ = nullptr;};
        inline const vector<FieldsParam::NameDescPairList> & getNameDescPairList() const { DARABONBA_PTR_GET_CONST(nameDescPairList_, vector<FieldsParam::NameDescPairList>) };
        inline vector<FieldsParam::NameDescPairList> getNameDescPairList() { DARABONBA_PTR_GET(nameDescPairList_, vector<FieldsParam::NameDescPairList>) };
        inline FieldsParam& setNameDescPairList(const vector<FieldsParam::NameDescPairList> & nameDescPairList) { DARABONBA_PTR_SET_VALUE(nameDescPairList_, nameDescPairList) };
        inline FieldsParam& setNameDescPairList(vector<FieldsParam::NameDescPairList> && nameDescPairList) { DARABONBA_PTR_SET_RVALUE(nameDescPairList_, nameDescPairList) };


      protected:
        shared_ptr<vector<FieldsParam::NameDescPairList>> nameDescPairList_ {};
      };

      class CustomPromptParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomPromptParam& obj) { 
          DARABONBA_PTR_TO_JSON(CustomPrompt, customPrompt_);
          DARABONBA_PTR_TO_JSON(NameDescPairList, nameDescPairList_);
        };
        friend void from_json(const Darabonba::Json& j, CustomPromptParam& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomPrompt, customPrompt_);
          DARABONBA_PTR_FROM_JSON(NameDescPairList, nameDescPairList_);
        };
        CustomPromptParam() = default ;
        CustomPromptParam(const CustomPromptParam &) = default ;
        CustomPromptParam(CustomPromptParam &&) = default ;
        CustomPromptParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomPromptParam() = default ;
        CustomPromptParam& operator=(const CustomPromptParam &) = default ;
        CustomPromptParam& operator=(CustomPromptParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NameDescPairList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NameDescPairList& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, NameDescPairList& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          NameDescPairList() = default ;
          NameDescPairList(const NameDescPairList &) = default ;
          NameDescPairList(NameDescPairList &&) = default ;
          NameDescPairList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NameDescPairList() = default ;
          NameDescPairList& operator=(const NameDescPairList &) = default ;
          NameDescPairList& operator=(NameDescPairList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline NameDescPairList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline NameDescPairList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->customPrompt_ == nullptr
        && this->nameDescPairList_ == nullptr; };
        // customPrompt Field Functions 
        bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
        void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
        inline string getCustomPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
        inline CustomPromptParam& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


        // nameDescPairList Field Functions 
        bool hasNameDescPairList() const { return this->nameDescPairList_ != nullptr;};
        void deleteNameDescPairList() { this->nameDescPairList_ = nullptr;};
        inline const vector<CustomPromptParam::NameDescPairList> & getNameDescPairList() const { DARABONBA_PTR_GET_CONST(nameDescPairList_, vector<CustomPromptParam::NameDescPairList>) };
        inline vector<CustomPromptParam::NameDescPairList> getNameDescPairList() { DARABONBA_PTR_GET(nameDescPairList_, vector<CustomPromptParam::NameDescPairList>) };
        inline CustomPromptParam& setNameDescPairList(const vector<CustomPromptParam::NameDescPairList> & nameDescPairList) { DARABONBA_PTR_SET_VALUE(nameDescPairList_, nameDescPairList) };
        inline CustomPromptParam& setNameDescPairList(vector<CustomPromptParam::NameDescPairList> && nameDescPairList) { DARABONBA_PTR_SET_RVALUE(nameDescPairList_, nameDescPairList) };


      protected:
        shared_ptr<string> customPrompt_ {};
        shared_ptr<vector<CustomPromptParam::NameDescPairList>> nameDescPairList_ {};
      };

      virtual bool empty() const override { return this->customPromptParam_ == nullptr
        && this->fieldsParam_ == nullptr && this->serviceInspectionParam_ == nullptr && this->tagCategoryParam_ == nullptr; };
      // customPromptParam Field Functions 
      bool hasCustomPromptParam() const { return this->customPromptParam_ != nullptr;};
      void deleteCustomPromptParam() { this->customPromptParam_ = nullptr;};
      inline const InstructionTypeParam::CustomPromptParam & getCustomPromptParam() const { DARABONBA_PTR_GET_CONST(customPromptParam_, InstructionTypeParam::CustomPromptParam) };
      inline InstructionTypeParam::CustomPromptParam getCustomPromptParam() { DARABONBA_PTR_GET(customPromptParam_, InstructionTypeParam::CustomPromptParam) };
      inline InstructionTypeParam& setCustomPromptParam(const InstructionTypeParam::CustomPromptParam & customPromptParam) { DARABONBA_PTR_SET_VALUE(customPromptParam_, customPromptParam) };
      inline InstructionTypeParam& setCustomPromptParam(InstructionTypeParam::CustomPromptParam && customPromptParam) { DARABONBA_PTR_SET_RVALUE(customPromptParam_, customPromptParam) };


      // fieldsParam Field Functions 
      bool hasFieldsParam() const { return this->fieldsParam_ != nullptr;};
      void deleteFieldsParam() { this->fieldsParam_ = nullptr;};
      inline const InstructionTypeParam::FieldsParam & getFieldsParam() const { DARABONBA_PTR_GET_CONST(fieldsParam_, InstructionTypeParam::FieldsParam) };
      inline InstructionTypeParam::FieldsParam getFieldsParam() { DARABONBA_PTR_GET(fieldsParam_, InstructionTypeParam::FieldsParam) };
      inline InstructionTypeParam& setFieldsParam(const InstructionTypeParam::FieldsParam & fieldsParam) { DARABONBA_PTR_SET_VALUE(fieldsParam_, fieldsParam) };
      inline InstructionTypeParam& setFieldsParam(InstructionTypeParam::FieldsParam && fieldsParam) { DARABONBA_PTR_SET_RVALUE(fieldsParam_, fieldsParam) };


      // serviceInspectionParam Field Functions 
      bool hasServiceInspectionParam() const { return this->serviceInspectionParam_ != nullptr;};
      void deleteServiceInspectionParam() { this->serviceInspectionParam_ = nullptr;};
      inline const InstructionTypeParam::ServiceInspectionParam & getServiceInspectionParam() const { DARABONBA_PTR_GET_CONST(serviceInspectionParam_, InstructionTypeParam::ServiceInspectionParam) };
      inline InstructionTypeParam::ServiceInspectionParam getServiceInspectionParam() { DARABONBA_PTR_GET(serviceInspectionParam_, InstructionTypeParam::ServiceInspectionParam) };
      inline InstructionTypeParam& setServiceInspectionParam(const InstructionTypeParam::ServiceInspectionParam & serviceInspectionParam) { DARABONBA_PTR_SET_VALUE(serviceInspectionParam_, serviceInspectionParam) };
      inline InstructionTypeParam& setServiceInspectionParam(InstructionTypeParam::ServiceInspectionParam && serviceInspectionParam) { DARABONBA_PTR_SET_RVALUE(serviceInspectionParam_, serviceInspectionParam) };


      // tagCategoryParam Field Functions 
      bool hasTagCategoryParam() const { return this->tagCategoryParam_ != nullptr;};
      void deleteTagCategoryParam() { this->tagCategoryParam_ = nullptr;};
      inline const InstructionTypeParam::TagCategoryParam & getTagCategoryParam() const { DARABONBA_PTR_GET_CONST(tagCategoryParam_, InstructionTypeParam::TagCategoryParam) };
      inline InstructionTypeParam::TagCategoryParam getTagCategoryParam() { DARABONBA_PTR_GET(tagCategoryParam_, InstructionTypeParam::TagCategoryParam) };
      inline InstructionTypeParam& setTagCategoryParam(const InstructionTypeParam::TagCategoryParam & tagCategoryParam) { DARABONBA_PTR_SET_VALUE(tagCategoryParam_, tagCategoryParam) };
      inline InstructionTypeParam& setTagCategoryParam(InstructionTypeParam::TagCategoryParam && tagCategoryParam) { DARABONBA_PTR_SET_RVALUE(tagCategoryParam_, tagCategoryParam) };


    protected:
      shared_ptr<InstructionTypeParam::CustomPromptParam> customPromptParam_ {};
      shared_ptr<InstructionTypeParam::FieldsParam> fieldsParam_ {};
      shared_ptr<InstructionTypeParam::ServiceInspectionParam> serviceInspectionParam_ {};
      shared_ptr<InstructionTypeParam::TagCategoryParam> tagCategoryParam_ {};
    };

    virtual bool empty() const override { return this->agentDescription_ == nullptr
        && this->agentName_ == nullptr && this->id_ == nullptr && this->inputType_ == nullptr && this->instructionType_ == nullptr && this->instructionTypeParam_ == nullptr
        && this->modelType_ == nullptr; };
    // agentDescription Field Functions 
    bool hasAgentDescription() const { return this->agentDescription_ != nullptr;};
    void deleteAgentDescription() { this->agentDescription_ = nullptr;};
    inline string getAgentDescription() const { DARABONBA_PTR_GET_DEFAULT(agentDescription_, "") };
    inline AgentInfo& setAgentDescription(string agentDescription) { DARABONBA_PTR_SET_VALUE(agentDescription_, agentDescription) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline AgentInfo& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AgentInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputType Field Functions 
    bool hasInputType() const { return this->inputType_ != nullptr;};
    void deleteInputType() { this->inputType_ = nullptr;};
    inline string getInputType() const { DARABONBA_PTR_GET_DEFAULT(inputType_, "") };
    inline AgentInfo& setInputType(string inputType) { DARABONBA_PTR_SET_VALUE(inputType_, inputType) };


    // instructionType Field Functions 
    bool hasInstructionType() const { return this->instructionType_ != nullptr;};
    void deleteInstructionType() { this->instructionType_ = nullptr;};
    inline string getInstructionType() const { DARABONBA_PTR_GET_DEFAULT(instructionType_, "") };
    inline AgentInfo& setInstructionType(string instructionType) { DARABONBA_PTR_SET_VALUE(instructionType_, instructionType) };


    // instructionTypeParam Field Functions 
    bool hasInstructionTypeParam() const { return this->instructionTypeParam_ != nullptr;};
    void deleteInstructionTypeParam() { this->instructionTypeParam_ = nullptr;};
    inline const AgentInfo::InstructionTypeParam & getInstructionTypeParam() const { DARABONBA_PTR_GET_CONST(instructionTypeParam_, AgentInfo::InstructionTypeParam) };
    inline AgentInfo::InstructionTypeParam getInstructionTypeParam() { DARABONBA_PTR_GET(instructionTypeParam_, AgentInfo::InstructionTypeParam) };
    inline AgentInfo& setInstructionTypeParam(const AgentInfo::InstructionTypeParam & instructionTypeParam) { DARABONBA_PTR_SET_VALUE(instructionTypeParam_, instructionTypeParam) };
    inline AgentInfo& setInstructionTypeParam(AgentInfo::InstructionTypeParam && instructionTypeParam) { DARABONBA_PTR_SET_RVALUE(instructionTypeParam_, instructionTypeParam) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline AgentInfo& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


  protected:
    shared_ptr<string> agentDescription_ {};
    shared_ptr<string> agentName_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> inputType_ {};
    shared_ptr<string> instructionType_ {};
    shared_ptr<AgentInfo::InstructionTypeParam> instructionTypeParam_ {};
    shared_ptr<string> modelType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
