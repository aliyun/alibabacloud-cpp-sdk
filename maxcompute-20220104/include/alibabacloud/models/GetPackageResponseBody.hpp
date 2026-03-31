// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGERESPONSEBODY_HPP_
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
  class GetPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPackageResponseBody() = default ;
    GetPackageResponseBody(const GetPackageResponseBody &) = default ;
    GetPackageResponseBody(GetPackageResponseBody &&) = default ;
    GetPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageResponseBody() = default ;
    GetPackageResponseBody& operator=(const GetPackageResponseBody &) = default ;
    GetPackageResponseBody& operator=(GetPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(allowedProjectList, allowedProjectList_);
        DARABONBA_PTR_TO_JSON(resourceList, resourceList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(allowedProjectList, allowedProjectList_);
        DARABONBA_PTR_FROM_JSON(resourceList, resourceList_);
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
      class ResourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
          DARABONBA_PTR_TO_JSON(function, function_);
          DARABONBA_PTR_TO_JSON(resource, resource_);
          DARABONBA_PTR_TO_JSON(table, table_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(function, function_);
          DARABONBA_PTR_FROM_JSON(resource, resource_);
          DARABONBA_PTR_FROM_JSON(table, table_);
        };
        ResourceList() = default ;
        ResourceList(const ResourceList &) = default ;
        ResourceList(ResourceList &&) = default ;
        ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceList() = default ;
        ResourceList& operator=(const ResourceList &) = default ;
        ResourceList& operator=(ResourceList &&) = default ;
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
          // The name of schema.
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
          // The name of schema.
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
          // The name of schema.
          shared_ptr<string> schemaName_ {};
        };

        virtual bool empty() const override { return this->function_ == nullptr
        && this->resource_ == nullptr && this->table_ == nullptr; };
        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline const vector<ResourceList::Function> & getFunction() const { DARABONBA_PTR_GET_CONST(function_, vector<ResourceList::Function>) };
        inline vector<ResourceList::Function> getFunction() { DARABONBA_PTR_GET(function_, vector<ResourceList::Function>) };
        inline ResourceList& setFunction(const vector<ResourceList::Function> & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
        inline ResourceList& setFunction(vector<ResourceList::Function> && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline const vector<ResourceList::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<ResourceList::Resource>) };
        inline vector<ResourceList::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<ResourceList::Resource>) };
        inline ResourceList& setResource(const vector<ResourceList::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
        inline ResourceList& setResource(vector<ResourceList::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


        // table Field Functions 
        bool hasTable() const { return this->table_ != nullptr;};
        void deleteTable() { this->table_ = nullptr;};
        inline const vector<ResourceList::Table> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<ResourceList::Table>) };
        inline vector<ResourceList::Table> getTable() { DARABONBA_PTR_GET(table_, vector<ResourceList::Table>) };
        inline ResourceList& setTable(const vector<ResourceList::Table> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
        inline ResourceList& setTable(vector<ResourceList::Table> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


      protected:
        // The functions.
        shared_ptr<vector<ResourceList::Function>> function_ {};
        // The resources.
        shared_ptr<vector<ResourceList::Resource>> resource_ {};
        // The tables.
        shared_ptr<vector<ResourceList::Table>> table_ {};
      };

      class AllowedProjectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllowedProjectList& obj) { 
          DARABONBA_PTR_TO_JSON(label, label_);
          DARABONBA_PTR_TO_JSON(project, project_);
        };
        friend void from_json(const Darabonba::Json& j, AllowedProjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(label, label_);
          DARABONBA_PTR_FROM_JSON(project, project_);
        };
        AllowedProjectList() = default ;
        AllowedProjectList(const AllowedProjectList &) = default ;
        AllowedProjectList(AllowedProjectList &&) = default ;
        AllowedProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllowedProjectList() = default ;
        AllowedProjectList& operator=(const AllowedProjectList &) = default ;
        AllowedProjectList& operator=(AllowedProjectList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->project_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline AllowedProjectList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline AllowedProjectList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      protected:
        // The security level for sensitive data.
        shared_ptr<string> label_ {};
        // The name of the MaxCompute project.
        shared_ptr<string> project_ {};
      };

      virtual bool empty() const override { return this->allowedProjectList_ == nullptr
        && this->resourceList_ == nullptr; };
      // allowedProjectList Field Functions 
      bool hasAllowedProjectList() const { return this->allowedProjectList_ != nullptr;};
      void deleteAllowedProjectList() { this->allowedProjectList_ = nullptr;};
      inline const vector<Data::AllowedProjectList> & getAllowedProjectList() const { DARABONBA_PTR_GET_CONST(allowedProjectList_, vector<Data::AllowedProjectList>) };
      inline vector<Data::AllowedProjectList> getAllowedProjectList() { DARABONBA_PTR_GET(allowedProjectList_, vector<Data::AllowedProjectList>) };
      inline Data& setAllowedProjectList(const vector<Data::AllowedProjectList> & allowedProjectList) { DARABONBA_PTR_SET_VALUE(allowedProjectList_, allowedProjectList) };
      inline Data& setAllowedProjectList(vector<Data::AllowedProjectList> && allowedProjectList) { DARABONBA_PTR_SET_RVALUE(allowedProjectList_, allowedProjectList) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const Data::ResourceList & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, Data::ResourceList) };
      inline Data::ResourceList getResourceList() { DARABONBA_PTR_GET(resourceList_, Data::ResourceList) };
      inline Data& setResourceList(const Data::ResourceList & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline Data& setResourceList(Data::ResourceList && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    protected:
      // The projects in which the package is installed.
      shared_ptr<vector<Data::AllowedProjectList>> allowedProjectList_ {};
      // The details of the resources that are included in the package.
      shared_ptr<Data::ResourceList> resourceList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPackageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPackageResponseBody::Data) };
    inline GetPackageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPackageResponseBody::Data) };
    inline GetPackageResponseBody& setData(const GetPackageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPackageResponseBody& setData(GetPackageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPackageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetPackageResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetPackageResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetPackageResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // Indicates whether the request was successful. If this parameter was not empty and the value of this parameter was not 200, the request failed.
    shared_ptr<int32_t> httpCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
