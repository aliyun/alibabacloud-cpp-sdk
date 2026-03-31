// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROLEACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRoleAclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleAclResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleAclResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRoleAclResponseBody() = default ;
    GetRoleAclResponseBody(const GetRoleAclResponseBody &) = default ;
    GetRoleAclResponseBody(GetRoleAclResponseBody &&) = default ;
    GetRoleAclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleAclResponseBody() = default ;
    GetRoleAclResponseBody& operator=(const GetRoleAclResponseBody &) = default ;
    GetRoleAclResponseBody& operator=(GetRoleAclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(function, function_);
        DARABONBA_PTR_TO_JSON(instance, instance_);
        DARABONBA_PTR_TO_JSON(package, package_);
        DARABONBA_PTR_TO_JSON(project, project_);
        DARABONBA_PTR_TO_JSON(resource, resource_);
        DARABONBA_PTR_TO_JSON(table, table_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(function, function_);
        DARABONBA_PTR_FROM_JSON(instance, instance_);
        DARABONBA_PTR_FROM_JSON(package, package_);
        DARABONBA_PTR_FROM_JSON(project, project_);
        DARABONBA_PTR_FROM_JSON(resource, resource_);
        DARABONBA_PTR_FROM_JSON(table, table_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Table : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Table& obj) { 
          DARABONBA_PTR_TO_JSON(actions, actions_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
        };
        friend void from_json(const Darabonba::Json& j, Table& obj) { 
          DARABONBA_PTR_FROM_JSON(actions, actions_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
        };
        Table() = default ;
        Table(const Table &) = default ;
        Table(Table &&) = default ;
        Table(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Table() = default ;
        Table& operator=(const Table &) = default ;
        Table& operator=(Table &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actions_ == nullptr
        && this->name_ == nullptr && this->schemaName_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
        inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
        inline Table& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
        inline Table& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Table& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Table& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      protected:
        // The operations that were performed on the table.
        shared_ptr<vector<string>> actions_ {};
        // The name of the table.
        shared_ptr<string> name_ {};
        // The Schema name.
        shared_ptr<string> schemaName_ {};
      };

      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(actions, actions_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(actions, actions_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
        };
        Resource() = default ;
        Resource(const Resource &) = default ;
        Resource(Resource &&) = default ;
        Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resource() = default ;
        Resource& operator=(const Resource &) = default ;
        Resource& operator=(Resource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actions_ == nullptr
        && this->name_ == nullptr && this->schemaName_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
        inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
        inline Resource& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
        inline Resource& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Resource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Resource& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      protected:
        // The operations that were performed on the resource.
        shared_ptr<vector<string>> actions_ {};
        // The name of the resource.
        shared_ptr<string> name_ {};
        // The Schema name.
        shared_ptr<string> schemaName_ {};
      };

      class Project : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Project& obj) { 
          DARABONBA_PTR_TO_JSON(actions, actions_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
        };
        friend void from_json(const Darabonba::Json& j, Project& obj) { 
          DARABONBA_PTR_FROM_JSON(actions, actions_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
        };
        Project() = default ;
        Project(const Project &) = default ;
        Project(Project &&) = default ;
        Project(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Project() = default ;
        Project& operator=(const Project &) = default ;
        Project& operator=(Project &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actions_ == nullptr
        && this->name_ == nullptr && this->schemaName_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
        inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
        inline Project& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
        inline Project& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Project& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Project& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      protected:
        // The operations that were performed on the project.
        shared_ptr<vector<string>> actions_ {};
        // The name of the MaxCompute project.
        shared_ptr<string> name_ {};
        // The Schema name.
        shared_ptr<string> schemaName_ {};
      };

      class Package : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Package& obj) { 
          DARABONBA_PTR_TO_JSON(actions, actions_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
        };
        friend void from_json(const Darabonba::Json& j, Package& obj) { 
          DARABONBA_PTR_FROM_JSON(actions, actions_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
        };
        Package() = default ;
        Package(const Package &) = default ;
        Package(Package &&) = default ;
        Package(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Package() = default ;
        Package& operator=(const Package &) = default ;
        Package& operator=(Package &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actions_ == nullptr
        && this->name_ == nullptr && this->schemaName_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
        inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
        inline Package& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
        inline Package& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Package& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Package& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      protected:
        // The operations that were performed on the package.
        shared_ptr<vector<string>> actions_ {};
        // The name of the package.
        shared_ptr<string> name_ {};
        // The Schema name.
        shared_ptr<string> schemaName_ {};
      };

      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(actions, actions_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(actions, actions_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actions_ == nullptr
        && this->name_ == nullptr && this->schemaName_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
        inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
        inline Instance& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
        inline Instance& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Instance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Instance& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      protected:
        // The operations that were performed on the instance.
        shared_ptr<vector<string>> actions_ {};
        // The name of the instance.
        shared_ptr<string> name_ {};
        // The Schema name.
        shared_ptr<string> schemaName_ {};
      };

      class Function : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Function& obj) { 
          DARABONBA_PTR_TO_JSON(actions, actions_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
        };
        friend void from_json(const Darabonba::Json& j, Function& obj) { 
          DARABONBA_PTR_FROM_JSON(actions, actions_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
        };
        Function() = default ;
        Function(const Function &) = default ;
        Function(Function &&) = default ;
        Function(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Function() = default ;
        Function& operator=(const Function &) = default ;
        Function& operator=(Function &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actions_ == nullptr
        && this->name_ == nullptr && this->schemaName_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
        inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
        inline Function& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
        inline Function& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Function& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Function& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      protected:
        // The operations that were performed on the function.
        shared_ptr<vector<string>> actions_ {};
        // The name of the function.
        shared_ptr<string> name_ {};
        // The Schema name.
        shared_ptr<string> schemaName_ {};
      };

      virtual bool empty() const override { return this->function_ == nullptr
        && this->instance_ == nullptr && this->package_ == nullptr && this->project_ == nullptr && this->resource_ == nullptr && this->table_ == nullptr; };
      // function Field Functions 
      bool hasFunction() const { return this->function_ != nullptr;};
      void deleteFunction() { this->function_ = nullptr;};
      inline const vector<Data::Function> & getFunction() const { DARABONBA_PTR_GET_CONST(function_, vector<Data::Function>) };
      inline vector<Data::Function> getFunction() { DARABONBA_PTR_GET(function_, vector<Data::Function>) };
      inline Data& setFunction(const vector<Data::Function> & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
      inline Data& setFunction(vector<Data::Function> && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<Data::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Data::Instance>) };
      inline vector<Data::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Data::Instance>) };
      inline Data& setInstance(const vector<Data::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Data& setInstance(vector<Data::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


      // package Field Functions 
      bool hasPackage() const { return this->package_ != nullptr;};
      void deletePackage() { this->package_ = nullptr;};
      inline const vector<Data::Package> & getPackage() const { DARABONBA_PTR_GET_CONST(package_, vector<Data::Package>) };
      inline vector<Data::Package> getPackage() { DARABONBA_PTR_GET(package_, vector<Data::Package>) };
      inline Data& setPackage(const vector<Data::Package> & package) { DARABONBA_PTR_SET_VALUE(package_, package) };
      inline Data& setPackage(vector<Data::Package> && package) { DARABONBA_PTR_SET_RVALUE(package_, package) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline const vector<Data::Project> & getProject() const { DARABONBA_PTR_GET_CONST(project_, vector<Data::Project>) };
      inline vector<Data::Project> getProject() { DARABONBA_PTR_GET(project_, vector<Data::Project>) };
      inline Data& setProject(const vector<Data::Project> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
      inline Data& setProject(vector<Data::Project> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const vector<Data::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Data::Resource>) };
      inline vector<Data::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Data::Resource>) };
      inline Data& setResource(const vector<Data::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Data& setResource(vector<Data::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline const vector<Data::Table> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<Data::Table>) };
      inline vector<Data::Table> getTable() { DARABONBA_PTR_GET(table_, vector<Data::Table>) };
      inline Data& setTable(const vector<Data::Table> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
      inline Data& setTable(vector<Data::Table> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    protected:
      // The function.
      shared_ptr<vector<Data::Function>> function_ {};
      // The instance.
      shared_ptr<vector<Data::Instance>> instance_ {};
      // The package.
      shared_ptr<vector<Data::Package>> package_ {};
      // The project.
      shared_ptr<vector<Data::Project>> project_ {};
      // The resource.
      shared_ptr<vector<Data::Resource>> resource_ {};
      // The table.
      shared_ptr<vector<Data::Table>> table_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRoleAclResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRoleAclResponseBody::Data) };
    inline GetRoleAclResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRoleAclResponseBody::Data) };
    inline GetRoleAclResponseBody& setData(const GetRoleAclResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRoleAclResponseBody& setData(GetRoleAclResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetRoleAclResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetRoleAclResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetRoleAclResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoleAclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetRoleAclResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
