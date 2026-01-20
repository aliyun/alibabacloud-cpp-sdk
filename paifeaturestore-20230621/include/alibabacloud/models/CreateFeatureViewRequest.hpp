// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATUREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATUREVIEWREQUEST_HPP_
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
  class CreateFeatureViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegisterDatasourceId, registerDatasourceId_);
      DARABONBA_PTR_TO_JSON(RegisterTable, registerTable_);
      DARABONBA_PTR_TO_JSON(SyncOnlineTable, syncOnlineTable_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WriteMethod, writeMethod_);
      DARABONBA_PTR_TO_JSON(WriteToFeatureDB, writeToFeatureDB_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegisterDatasourceId, registerDatasourceId_);
      DARABONBA_PTR_FROM_JSON(RegisterTable, registerTable_);
      DARABONBA_PTR_FROM_JSON(SyncOnlineTable, syncOnlineTable_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WriteMethod, writeMethod_);
      DARABONBA_PTR_FROM_JSON(WriteToFeatureDB, writeToFeatureDB_);
    };
    CreateFeatureViewRequest() = default ;
    CreateFeatureViewRequest(const CreateFeatureViewRequest &) = default ;
    CreateFeatureViewRequest(CreateFeatureViewRequest &&) = default ;
    CreateFeatureViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureViewRequest() = default ;
    CreateFeatureViewRequest& operator=(const CreateFeatureViewRequest &) = default ;
    CreateFeatureViewRequest& operator=(CreateFeatureViewRequest &&) = default ;
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
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Input& obj) { 
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
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
          shared_ptr<string> name_ {};
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
        shared_ptr<vector<Transform::Input>> input_ {};
        shared_ptr<int32_t> LLMConfigId_ {};
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
      shared_ptr<vector<string>> attributes_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Fields::Transform>> transform_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->featureEntityId_ == nullptr && this->fields_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->registerDatasourceId_ == nullptr
        && this->registerTable_ == nullptr && this->syncOnlineTable_ == nullptr && this->TTL_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr
        && this->writeMethod_ == nullptr && this->writeToFeatureDB_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateFeatureViewRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // featureEntityId Field Functions 
    bool hasFeatureEntityId() const { return this->featureEntityId_ != nullptr;};
    void deleteFeatureEntityId() { this->featureEntityId_ = nullptr;};
    inline string getFeatureEntityId() const { DARABONBA_PTR_GET_DEFAULT(featureEntityId_, "") };
    inline CreateFeatureViewRequest& setFeatureEntityId(string featureEntityId) { DARABONBA_PTR_SET_VALUE(featureEntityId_, featureEntityId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<CreateFeatureViewRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<CreateFeatureViewRequest::Fields>) };
    inline vector<CreateFeatureViewRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<CreateFeatureViewRequest::Fields>) };
    inline CreateFeatureViewRequest& setFields(const vector<CreateFeatureViewRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline CreateFeatureViewRequest& setFields(vector<CreateFeatureViewRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFeatureViewRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateFeatureViewRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // registerDatasourceId Field Functions 
    bool hasRegisterDatasourceId() const { return this->registerDatasourceId_ != nullptr;};
    void deleteRegisterDatasourceId() { this->registerDatasourceId_ = nullptr;};
    inline string getRegisterDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceId_, "") };
    inline CreateFeatureViewRequest& setRegisterDatasourceId(string registerDatasourceId) { DARABONBA_PTR_SET_VALUE(registerDatasourceId_, registerDatasourceId) };


    // registerTable Field Functions 
    bool hasRegisterTable() const { return this->registerTable_ != nullptr;};
    void deleteRegisterTable() { this->registerTable_ = nullptr;};
    inline string getRegisterTable() const { DARABONBA_PTR_GET_DEFAULT(registerTable_, "") };
    inline CreateFeatureViewRequest& setRegisterTable(string registerTable) { DARABONBA_PTR_SET_VALUE(registerTable_, registerTable) };


    // syncOnlineTable Field Functions 
    bool hasSyncOnlineTable() const { return this->syncOnlineTable_ != nullptr;};
    void deleteSyncOnlineTable() { this->syncOnlineTable_ = nullptr;};
    inline bool getSyncOnlineTable() const { DARABONBA_PTR_GET_DEFAULT(syncOnlineTable_, false) };
    inline CreateFeatureViewRequest& setSyncOnlineTable(bool syncOnlineTable) { DARABONBA_PTR_SET_VALUE(syncOnlineTable_, syncOnlineTable) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int32_t getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
    inline CreateFeatureViewRequest& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline CreateFeatureViewRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateFeatureViewRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateFeatureViewRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // writeMethod Field Functions 
    bool hasWriteMethod() const { return this->writeMethod_ != nullptr;};
    void deleteWriteMethod() { this->writeMethod_ = nullptr;};
    inline string getWriteMethod() const { DARABONBA_PTR_GET_DEFAULT(writeMethod_, "") };
    inline CreateFeatureViewRequest& setWriteMethod(string writeMethod) { DARABONBA_PTR_SET_VALUE(writeMethod_, writeMethod) };


    // writeToFeatureDB Field Functions 
    bool hasWriteToFeatureDB() const { return this->writeToFeatureDB_ != nullptr;};
    void deleteWriteToFeatureDB() { this->writeToFeatureDB_ = nullptr;};
    inline bool getWriteToFeatureDB() const { DARABONBA_PTR_GET_DEFAULT(writeToFeatureDB_, false) };
    inline CreateFeatureViewRequest& setWriteToFeatureDB(bool writeToFeatureDB) { DARABONBA_PTR_SET_VALUE(writeToFeatureDB_, writeToFeatureDB) };


  protected:
    shared_ptr<string> config_ {};
    shared_ptr<string> featureEntityId_ {};
    shared_ptr<vector<CreateFeatureViewRequest::Fields>> fields_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    shared_ptr<string> registerDatasourceId_ {};
    shared_ptr<string> registerTable_ {};
    // This parameter is required.
    shared_ptr<bool> syncOnlineTable_ {};
    shared_ptr<int32_t> TTL_ {};
    shared_ptr<vector<string>> tags_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    // This parameter is required.
    shared_ptr<string> writeMethod_ {};
    shared_ptr<bool> writeToFeatureDB_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
