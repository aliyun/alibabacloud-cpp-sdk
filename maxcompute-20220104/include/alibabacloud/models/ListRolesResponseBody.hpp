// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODY_HPP_
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
  class ListRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRolesResponseBody() = default ;
    ListRolesResponseBody(const ListRolesResponseBody &) = default ;
    ListRolesResponseBody(ListRolesResponseBody &&) = default ;
    ListRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBody() = default ;
    ListRolesResponseBody& operator=(const ListRolesResponseBody &) = default ;
    ListRolesResponseBody& operator=(ListRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(roles, roles_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(roles, roles_);
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
      class Roles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Roles& obj) { 
          DARABONBA_PTR_TO_JSON(acl, acl_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(policy, policy_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Roles& obj) { 
          DARABONBA_PTR_FROM_JSON(acl, acl_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(policy, policy_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Roles() = default ;
        Roles(const Roles &) = default ;
        Roles(Roles &&) = default ;
        Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Roles() = default ;
        Roles& operator=(const Roles &) = default ;
        Roles& operator=(Roles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Acl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Acl& obj) { 
            DARABONBA_PTR_TO_JSON(function, function_);
            DARABONBA_PTR_TO_JSON(instance, instance_);
            DARABONBA_PTR_TO_JSON(package, package_);
            DARABONBA_PTR_TO_JSON(project, project_);
            DARABONBA_PTR_TO_JSON(resource, resource_);
            DARABONBA_PTR_TO_JSON(table, table_);
          };
          friend void from_json(const Darabonba::Json& j, Acl& obj) { 
            DARABONBA_PTR_FROM_JSON(function, function_);
            DARABONBA_PTR_FROM_JSON(instance, instance_);
            DARABONBA_PTR_FROM_JSON(package, package_);
            DARABONBA_PTR_FROM_JSON(project, project_);
            DARABONBA_PTR_FROM_JSON(resource, resource_);
            DARABONBA_PTR_FROM_JSON(table, table_);
          };
          Acl() = default ;
          Acl(const Acl &) = default ;
          Acl(Acl &&) = default ;
          Acl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Acl() = default ;
          Acl& operator=(const Acl &) = default ;
          Acl& operator=(Acl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Table : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Table& obj) { 
              DARABONBA_PTR_TO_JSON(actions, actions_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Table& obj) { 
              DARABONBA_PTR_FROM_JSON(actions, actions_);
              DARABONBA_PTR_FROM_JSON(name, name_);
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
        && this->name_ == nullptr; };
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


          protected:
            shared_ptr<vector<string>> actions_ {};
            shared_ptr<string> name_ {};
          };

          class Resource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Resource& obj) { 
              DARABONBA_PTR_TO_JSON(actions, actions_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Resource& obj) { 
              DARABONBA_PTR_FROM_JSON(actions, actions_);
              DARABONBA_PTR_FROM_JSON(name, name_);
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
        && this->name_ == nullptr; };
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


          protected:
            shared_ptr<vector<string>> actions_ {};
            shared_ptr<string> name_ {};
          };

          class Project : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Project& obj) { 
              DARABONBA_PTR_TO_JSON(actions, actions_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Project& obj) { 
              DARABONBA_PTR_FROM_JSON(actions, actions_);
              DARABONBA_PTR_FROM_JSON(name, name_);
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
        && this->name_ == nullptr; };
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


          protected:
            shared_ptr<vector<string>> actions_ {};
            shared_ptr<string> name_ {};
          };

          class Package : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Package& obj) { 
              DARABONBA_PTR_TO_JSON(actions, actions_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Package& obj) { 
              DARABONBA_PTR_FROM_JSON(actions, actions_);
              DARABONBA_PTR_FROM_JSON(name, name_);
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
        && this->name_ == nullptr; };
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


          protected:
            shared_ptr<vector<string>> actions_ {};
            shared_ptr<string> name_ {};
          };

          class Instance : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Instance& obj) { 
              DARABONBA_PTR_TO_JSON(actions, actions_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Instance& obj) { 
              DARABONBA_PTR_FROM_JSON(actions, actions_);
              DARABONBA_PTR_FROM_JSON(name, name_);
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
        && this->name_ == nullptr; };
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


          protected:
            shared_ptr<vector<string>> actions_ {};
            shared_ptr<string> name_ {};
          };

          class Function : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Function& obj) { 
              DARABONBA_PTR_TO_JSON(actions, actions_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Function& obj) { 
              DARABONBA_PTR_FROM_JSON(actions, actions_);
              DARABONBA_PTR_FROM_JSON(name, name_);
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
        && this->name_ == nullptr; };
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


          protected:
            shared_ptr<vector<string>> actions_ {};
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->function_ == nullptr
        && this->instance_ == nullptr && this->package_ == nullptr && this->project_ == nullptr && this->resource_ == nullptr && this->table_ == nullptr; };
          // function Field Functions 
          bool hasFunction() const { return this->function_ != nullptr;};
          void deleteFunction() { this->function_ = nullptr;};
          inline const vector<Acl::Function> & getFunction() const { DARABONBA_PTR_GET_CONST(function_, vector<Acl::Function>) };
          inline vector<Acl::Function> getFunction() { DARABONBA_PTR_GET(function_, vector<Acl::Function>) };
          inline Acl& setFunction(const vector<Acl::Function> & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
          inline Acl& setFunction(vector<Acl::Function> && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


          // instance Field Functions 
          bool hasInstance() const { return this->instance_ != nullptr;};
          void deleteInstance() { this->instance_ = nullptr;};
          inline const vector<Acl::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Acl::Instance>) };
          inline vector<Acl::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Acl::Instance>) };
          inline Acl& setInstance(const vector<Acl::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
          inline Acl& setInstance(vector<Acl::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


          // package Field Functions 
          bool hasPackage() const { return this->package_ != nullptr;};
          void deletePackage() { this->package_ = nullptr;};
          inline const vector<Acl::Package> & getPackage() const { DARABONBA_PTR_GET_CONST(package_, vector<Acl::Package>) };
          inline vector<Acl::Package> getPackage() { DARABONBA_PTR_GET(package_, vector<Acl::Package>) };
          inline Acl& setPackage(const vector<Acl::Package> & package) { DARABONBA_PTR_SET_VALUE(package_, package) };
          inline Acl& setPackage(vector<Acl::Package> && package) { DARABONBA_PTR_SET_RVALUE(package_, package) };


          // project Field Functions 
          bool hasProject() const { return this->project_ != nullptr;};
          void deleteProject() { this->project_ = nullptr;};
          inline const vector<Acl::Project> & getProject() const { DARABONBA_PTR_GET_CONST(project_, vector<Acl::Project>) };
          inline vector<Acl::Project> getProject() { DARABONBA_PTR_GET(project_, vector<Acl::Project>) };
          inline Acl& setProject(const vector<Acl::Project> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
          inline Acl& setProject(vector<Acl::Project> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


          // resource Field Functions 
          bool hasResource() const { return this->resource_ != nullptr;};
          void deleteResource() { this->resource_ = nullptr;};
          inline const vector<Acl::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Acl::Resource>) };
          inline vector<Acl::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Acl::Resource>) };
          inline Acl& setResource(const vector<Acl::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
          inline Acl& setResource(vector<Acl::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


          // table Field Functions 
          bool hasTable() const { return this->table_ != nullptr;};
          void deleteTable() { this->table_ = nullptr;};
          inline const vector<Acl::Table> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<Acl::Table>) };
          inline vector<Acl::Table> getTable() { DARABONBA_PTR_GET(table_, vector<Acl::Table>) };
          inline Acl& setTable(const vector<Acl::Table> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
          inline Acl& setTable(vector<Acl::Table> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


        protected:
          shared_ptr<vector<Acl::Function>> function_ {};
          shared_ptr<vector<Acl::Instance>> instance_ {};
          shared_ptr<vector<Acl::Package>> package_ {};
          shared_ptr<vector<Acl::Project>> project_ {};
          shared_ptr<vector<Acl::Resource>> resource_ {};
          shared_ptr<vector<Acl::Table>> table_ {};
        };

        virtual bool empty() const override { return this->acl_ == nullptr
        && this->name_ == nullptr && this->policy_ == nullptr && this->type_ == nullptr; };
        // acl Field Functions 
        bool hasAcl() const { return this->acl_ != nullptr;};
        void deleteAcl() { this->acl_ = nullptr;};
        inline const Roles::Acl & getAcl() const { DARABONBA_PTR_GET_CONST(acl_, Roles::Acl) };
        inline Roles::Acl getAcl() { DARABONBA_PTR_GET(acl_, Roles::Acl) };
        inline Roles& setAcl(const Roles::Acl & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
        inline Roles& setAcl(Roles::Acl && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Roles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline Roles& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Roles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<Roles::Acl> acl_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> policy_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->roles_ == nullptr; };
      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<Data::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Data::Roles>) };
      inline vector<Data::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<Data::Roles>) };
      inline Data& setRoles(const vector<Data::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Data& setRoles(vector<Data::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    protected:
      shared_ptr<vector<Data::Roles>> roles_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRolesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRolesResponseBody::Data) };
    inline ListRolesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRolesResponseBody::Data) };
    inline ListRolesResponseBody& setData(const ListRolesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRolesResponseBody& setData(ListRolesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListRolesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
