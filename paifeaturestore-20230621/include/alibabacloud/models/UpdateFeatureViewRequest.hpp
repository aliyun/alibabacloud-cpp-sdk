// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFEATUREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFEATUREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class UpdateFeatureViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFeatureViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFeatureViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
    };
    UpdateFeatureViewRequest() = default ;
    UpdateFeatureViewRequest(const UpdateFeatureViewRequest &) = default ;
    UpdateFeatureViewRequest(UpdateFeatureViewRequest &&) = default ;
    UpdateFeatureViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFeatureViewRequest() = default ;
    UpdateFeatureViewRequest& operator=(const UpdateFeatureViewRequest &) = default ;
    UpdateFeatureViewRequest& operator=(UpdateFeatureViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Transform, transform_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Transform, transform_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Transform : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Transform& obj) { 
          DARABONBA_PTR_TO_JSON(Input, input_);
          DARABONBA_PTR_TO_JSON(LLMConfigId, LLMConfigId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Transform& obj) { 
          DARABONBA_PTR_FROM_JSON(Input, input_);
          DARABONBA_PTR_FROM_JSON(LLMConfigId, LLMConfigId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Transform() = default ;
        Transform(const Transform &) = default ;
        Transform(Transform &&) = default ;
        Transform(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Transform() = default ;
        Transform& operator=(const Transform &) = default ;
        Transform& operator=(Transform &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Input : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Input& obj) { 
            DARABONBA_PTR_TO_JSON(Modality, modality_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Input& obj) { 
            DARABONBA_PTR_FROM_JSON(Modality, modality_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Input() = default ;
          Input(const Input &) = default ;
          Input(Input &&) = default ;
          Input(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Input() = default ;
          Input& operator=(const Input &) = default ;
          Input& operator=(Input &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modality_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // modality Field Functions 
          bool hasModality() const { return this->modality_ != nullptr;};
          void deleteModality() { this->modality_ = nullptr;};
          inline string getModality() const { DARABONBA_PTR_GET_DEFAULT(modality_, "") };
          inline Input& setModality(string modality) { DARABONBA_PTR_SET_VALUE(modality_, modality) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Input& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The modality of the input, such as text or image.
          shared_ptr<string> modality_ {};
          // The name of the input field.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
          // The data type of the input field.
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->input_ == nullptr
        && this->LLMConfigId_ == nullptr && this->type_ == nullptr; };
        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline const vector<Transform::Input> & getInput() const { DARABONBA_PTR_GET_CONST(input_, vector<Transform::Input>) };
        inline vector<Transform::Input> getInput() { DARABONBA_PTR_GET(input_, vector<Transform::Input>) };
        inline Transform& setInput(const vector<Transform::Input> & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
        inline Transform& setInput(vector<Transform::Input> && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


        // LLMConfigId Field Functions 
        bool hasLLMConfigId() const { return this->LLMConfigId_ != nullptr;};
        void deleteLLMConfigId() { this->LLMConfigId_ = nullptr;};
        inline int32_t getLLMConfigId() const { DARABONBA_PTR_GET_DEFAULT(LLMConfigId_, 0) };
        inline Transform& setLLMConfigId(int32_t LLMConfigId) { DARABONBA_PTR_SET_VALUE(LLMConfigId_, LLMConfigId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Transform& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The input fields.
        // 
        // This parameter is required.
        shared_ptr<vector<Transform::Input>> input_ {};
        // The ID of the LLM configuration.
        // 
        // This parameter is required.
        shared_ptr<int32_t> LLMConfigId_ {};
        // The type of feature generation.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->name_ == nullptr && this->transform_ == nullptr && this->type_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
      inline vector<string> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
      inline Fields& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Fields& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // transform Field Functions 
      bool hasTransform() const { return this->transform_ != nullptr;};
      void deleteTransform() { this->transform_ = nullptr;};
      inline const vector<Fields::Transform> & getTransform() const { DARABONBA_PTR_GET_CONST(transform_, vector<Fields::Transform>) };
      inline vector<Fields::Transform> getTransform() { DARABONBA_PTR_GET(transform_, vector<Fields::Transform>) };
      inline Fields& setTransform(const vector<Fields::Transform> & transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };
      inline Fields& setTransform(vector<Fields::Transform> && transform) { DARABONBA_PTR_SET_RVALUE(transform_, transform) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // A list of field attributes. Valid values:
      // 
      // - `Partition`: Indicates that the field is a partition field.
      // 
      // - `PrimaryKey`: Indicates that the field is a primary key.
      // 
      // - `EventTime`: Indicates that the field is the event time.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> attributes_ {};
      // The name of the field.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The feature generation configuration.
      shared_ptr<vector<Fields::Transform>> transform_ {};
      // The data type of the field.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->fields_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<UpdateFeatureViewRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<UpdateFeatureViewRequest::Fields>) };
    inline vector<UpdateFeatureViewRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<UpdateFeatureViewRequest::Fields>) };
    inline UpdateFeatureViewRequest& setFields(const vector<UpdateFeatureViewRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline UpdateFeatureViewRequest& setFields(vector<UpdateFeatureViewRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


  protected:
    // A list of fields.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateFeatureViewRequest::Fields>> fields_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
