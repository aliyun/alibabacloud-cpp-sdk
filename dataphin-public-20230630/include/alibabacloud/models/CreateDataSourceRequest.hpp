// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
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
  class CreateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateDataSourceRequest() = default ;
    CreateDataSourceRequest(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest(CreateDataSourceRequest &&) = default ;
    CreateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequest() = default ;
    CreateDataSourceRequest& operator=(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest& operator=(CreateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(DevDataSourceCreate, devDataSourceCreate_);
        DARABONBA_PTR_TO_JSON(ProdDataSourceCreate, prodDataSourceCreate_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(DevDataSourceCreate, devDataSourceCreate_);
        DARABONBA_PTR_FROM_JSON(ProdDataSourceCreate, prodDataSourceCreate_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProdDataSourceCreate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProdDataSourceCreate& obj) { 
          DARABONBA_PTR_TO_JSON(CheckActivity, checkActivity_);
          DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ProdDataSourceCreate& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckActivity, checkActivity_);
          DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ProdDataSourceCreate() = default ;
        ProdDataSourceCreate(const ProdDataSourceCreate &) = default ;
        ProdDataSourceCreate(ProdDataSourceCreate &&) = default ;
        ProdDataSourceCreate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProdDataSourceCreate() = default ;
        ProdDataSourceCreate& operator=(const ProdDataSourceCreate &) = default ;
        ProdDataSourceCreate& operator=(ProdDataSourceCreate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConfigItemList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigItemList& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigItemList& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ConfigItemList() = default ;
          ConfigItemList(const ConfigItemList &) = default ;
          ConfigItemList(ConfigItemList &&) = default ;
          ConfigItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigItemList() = default ;
          ConfigItemList& operator=(const ConfigItemList &) = default ;
          ConfigItemList& operator=(ConfigItemList &&) = default ;
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
          inline ConfigItemList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ConfigItemList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // This parameter is required.
          shared_ptr<string> key_ {};
          // This parameter is required.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->checkActivity_ == nullptr
        && this->configItemList_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // checkActivity Field Functions 
        bool hasCheckActivity() const { return this->checkActivity_ != nullptr;};
        void deleteCheckActivity() { this->checkActivity_ = nullptr;};
        inline bool getCheckActivity() const { DARABONBA_PTR_GET_DEFAULT(checkActivity_, false) };
        inline ProdDataSourceCreate& setCheckActivity(bool checkActivity) { DARABONBA_PTR_SET_VALUE(checkActivity_, checkActivity) };


        // configItemList Field Functions 
        bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
        void deleteConfigItemList() { this->configItemList_ = nullptr;};
        inline const vector<ProdDataSourceCreate::ConfigItemList> & getConfigItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<ProdDataSourceCreate::ConfigItemList>) };
        inline vector<ProdDataSourceCreate::ConfigItemList> getConfigItemList() { DARABONBA_PTR_GET(configItemList_, vector<ProdDataSourceCreate::ConfigItemList>) };
        inline ProdDataSourceCreate& setConfigItemList(const vector<ProdDataSourceCreate::ConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
        inline ProdDataSourceCreate& setConfigItemList(vector<ProdDataSourceCreate::ConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ProdDataSourceCreate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ProdDataSourceCreate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ProdDataSourceCreate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<bool> checkActivity_ {};
        // This parameter is required.
        shared_ptr<vector<ProdDataSourceCreate::ConfigItemList>> configItemList_ {};
        shared_ptr<string> description_ {};
        // This parameter is required.
        shared_ptr<string> name_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class DevDataSourceCreate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DevDataSourceCreate& obj) { 
          DARABONBA_PTR_TO_JSON(DataSourceCreate, dataSourceCreate_);
          DARABONBA_PTR_TO_JSON(ProdDataSourceId, prodDataSourceId_);
        };
        friend void from_json(const Darabonba::Json& j, DevDataSourceCreate& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSourceCreate, dataSourceCreate_);
          DARABONBA_PTR_FROM_JSON(ProdDataSourceId, prodDataSourceId_);
        };
        DevDataSourceCreate() = default ;
        DevDataSourceCreate(const DevDataSourceCreate &) = default ;
        DevDataSourceCreate(DevDataSourceCreate &&) = default ;
        DevDataSourceCreate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DevDataSourceCreate() = default ;
        DevDataSourceCreate& operator=(const DevDataSourceCreate &) = default ;
        DevDataSourceCreate& operator=(DevDataSourceCreate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataSourceCreate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSourceCreate& obj) { 
            DARABONBA_PTR_TO_JSON(CheckActivity, checkActivity_);
            DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DataSourceCreate& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckActivity, checkActivity_);
            DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          DataSourceCreate() = default ;
          DataSourceCreate(const DataSourceCreate &) = default ;
          DataSourceCreate(DataSourceCreate &&) = default ;
          DataSourceCreate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSourceCreate() = default ;
          DataSourceCreate& operator=(const DataSourceCreate &) = default ;
          DataSourceCreate& operator=(DataSourceCreate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConfigItemList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConfigItemList& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ConfigItemList& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            ConfigItemList() = default ;
            ConfigItemList(const ConfigItemList &) = default ;
            ConfigItemList(ConfigItemList &&) = default ;
            ConfigItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConfigItemList() = default ;
            ConfigItemList& operator=(const ConfigItemList &) = default ;
            ConfigItemList& operator=(ConfigItemList &&) = default ;
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
            inline ConfigItemList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ConfigItemList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // This parameter is required.
            shared_ptr<string> key_ {};
            // This parameter is required.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->checkActivity_ == nullptr
        && this->configItemList_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
          // checkActivity Field Functions 
          bool hasCheckActivity() const { return this->checkActivity_ != nullptr;};
          void deleteCheckActivity() { this->checkActivity_ = nullptr;};
          inline bool getCheckActivity() const { DARABONBA_PTR_GET_DEFAULT(checkActivity_, false) };
          inline DataSourceCreate& setCheckActivity(bool checkActivity) { DARABONBA_PTR_SET_VALUE(checkActivity_, checkActivity) };


          // configItemList Field Functions 
          bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
          void deleteConfigItemList() { this->configItemList_ = nullptr;};
          inline const vector<DataSourceCreate::ConfigItemList> & getConfigItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<DataSourceCreate::ConfigItemList>) };
          inline vector<DataSourceCreate::ConfigItemList> getConfigItemList() { DARABONBA_PTR_GET(configItemList_, vector<DataSourceCreate::ConfigItemList>) };
          inline DataSourceCreate& setConfigItemList(const vector<DataSourceCreate::ConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
          inline DataSourceCreate& setConfigItemList(vector<DataSourceCreate::ConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline DataSourceCreate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DataSourceCreate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DataSourceCreate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<bool> checkActivity_ {};
          // This parameter is required.
          shared_ptr<vector<DataSourceCreate::ConfigItemList>> configItemList_ {};
          shared_ptr<string> description_ {};
          // This parameter is required.
          shared_ptr<string> name_ {};
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->dataSourceCreate_ == nullptr
        && this->prodDataSourceId_ == nullptr; };
        // dataSourceCreate Field Functions 
        bool hasDataSourceCreate() const { return this->dataSourceCreate_ != nullptr;};
        void deleteDataSourceCreate() { this->dataSourceCreate_ = nullptr;};
        inline const DevDataSourceCreate::DataSourceCreate & getDataSourceCreate() const { DARABONBA_PTR_GET_CONST(dataSourceCreate_, DevDataSourceCreate::DataSourceCreate) };
        inline DevDataSourceCreate::DataSourceCreate getDataSourceCreate() { DARABONBA_PTR_GET(dataSourceCreate_, DevDataSourceCreate::DataSourceCreate) };
        inline DevDataSourceCreate& setDataSourceCreate(const DevDataSourceCreate::DataSourceCreate & dataSourceCreate) { DARABONBA_PTR_SET_VALUE(dataSourceCreate_, dataSourceCreate) };
        inline DevDataSourceCreate& setDataSourceCreate(DevDataSourceCreate::DataSourceCreate && dataSourceCreate) { DARABONBA_PTR_SET_RVALUE(dataSourceCreate_, dataSourceCreate) };


        // prodDataSourceId Field Functions 
        bool hasProdDataSourceId() const { return this->prodDataSourceId_ != nullptr;};
        void deleteProdDataSourceId() { this->prodDataSourceId_ = nullptr;};
        inline int64_t getProdDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(prodDataSourceId_, 0L) };
        inline DevDataSourceCreate& setProdDataSourceId(int64_t prodDataSourceId) { DARABONBA_PTR_SET_VALUE(prodDataSourceId_, prodDataSourceId) };


      protected:
        // 数据源创建结构体
        shared_ptr<DevDataSourceCreate::DataSourceCreate> dataSourceCreate_ {};
        shared_ptr<int64_t> prodDataSourceId_ {};
      };

      virtual bool empty() const override { return this->devDataSourceCreate_ == nullptr
        && this->prodDataSourceCreate_ == nullptr; };
      // devDataSourceCreate Field Functions 
      bool hasDevDataSourceCreate() const { return this->devDataSourceCreate_ != nullptr;};
      void deleteDevDataSourceCreate() { this->devDataSourceCreate_ = nullptr;};
      inline const CreateCommand::DevDataSourceCreate & getDevDataSourceCreate() const { DARABONBA_PTR_GET_CONST(devDataSourceCreate_, CreateCommand::DevDataSourceCreate) };
      inline CreateCommand::DevDataSourceCreate getDevDataSourceCreate() { DARABONBA_PTR_GET(devDataSourceCreate_, CreateCommand::DevDataSourceCreate) };
      inline CreateCommand& setDevDataSourceCreate(const CreateCommand::DevDataSourceCreate & devDataSourceCreate) { DARABONBA_PTR_SET_VALUE(devDataSourceCreate_, devDataSourceCreate) };
      inline CreateCommand& setDevDataSourceCreate(CreateCommand::DevDataSourceCreate && devDataSourceCreate) { DARABONBA_PTR_SET_RVALUE(devDataSourceCreate_, devDataSourceCreate) };


      // prodDataSourceCreate Field Functions 
      bool hasProdDataSourceCreate() const { return this->prodDataSourceCreate_ != nullptr;};
      void deleteProdDataSourceCreate() { this->prodDataSourceCreate_ = nullptr;};
      inline const CreateCommand::ProdDataSourceCreate & getProdDataSourceCreate() const { DARABONBA_PTR_GET_CONST(prodDataSourceCreate_, CreateCommand::ProdDataSourceCreate) };
      inline CreateCommand::ProdDataSourceCreate getProdDataSourceCreate() { DARABONBA_PTR_GET(prodDataSourceCreate_, CreateCommand::ProdDataSourceCreate) };
      inline CreateCommand& setProdDataSourceCreate(const CreateCommand::ProdDataSourceCreate & prodDataSourceCreate) { DARABONBA_PTR_SET_VALUE(prodDataSourceCreate_, prodDataSourceCreate) };
      inline CreateCommand& setProdDataSourceCreate(CreateCommand::ProdDataSourceCreate && prodDataSourceCreate) { DARABONBA_PTR_SET_RVALUE(prodDataSourceCreate_, prodDataSourceCreate) };


    protected:
      shared_ptr<CreateCommand::DevDataSourceCreate> devDataSourceCreate_ {};
      // 数据源创建结构体
      shared_ptr<CreateCommand::ProdDataSourceCreate> prodDataSourceCreate_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateDataSourceRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateDataSourceRequest::CreateCommand) };
    inline CreateDataSourceRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateDataSourceRequest::CreateCommand) };
    inline CreateDataSourceRequest& setCreateCommand(const CreateDataSourceRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateDataSourceRequest& setCreateCommand(CreateDataSourceRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateDataSourceRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<CreateDataSourceRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
