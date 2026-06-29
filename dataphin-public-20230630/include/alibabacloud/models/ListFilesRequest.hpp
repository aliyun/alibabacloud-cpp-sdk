// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListFilesRequest() = default ;
    ListFilesRequest(const ListFilesRequest &) = default ;
    ListFilesRequest(ListFilesRequest &&) = default ;
    ListFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFilesRequest() = default ;
    ListFilesRequest& operator=(const ListFilesRequest &) = default ;
    ListFilesRequest& operator=(ListFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Recursive, recursive_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Recursive, recursive_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->directory_ == nullptr && this->env_ == nullptr && this->projectId_ == nullptr && this->recursive_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline ListQuery& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline ListQuery& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline ListQuery& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ListQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // recursive Field Functions 
      bool hasRecursive() const { return this->recursive_ != nullptr;};
      void deleteRecursive() { this->recursive_ = nullptr;};
      inline bool getRecursive() const { DARABONBA_PTR_GET_DEFAULT(recursive_, false) };
      inline ListQuery& setRecursive(bool recursive) { DARABONBA_PTR_SET_VALUE(recursive_, recursive) };


    protected:
      // Menu tree category
      // - Ad hoc query: tempCode
      // - Code task: codeManage
      // - Offline pipeline: offlinePipeline
      // - Pipeline custom component: offlinePipelineCustomPlugin
      // - Sync task: dataX
      // - Real-time meta table: streamMeta
      // - Real-time custom source: streamCustomDataSource
      // - Real-time computing template: streamTemplate
      // - Resource management: resourceManage
      // - Offline function: udfResource
      // - Real-time function: streamFunction
      // 
      // This parameter is required.
      shared_ptr<string> category_ {};
      // File directory
      // 
      // This parameter is required.
      shared_ptr<string> directory_ {};
      // Environment identifier
      // - DEV
      // - PROD
      // 
      // This parameter is required.
      shared_ptr<string> env_ {};
      // Project ID
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // Whether to recursively traverse and query
      // - true: Yes, returns all nodes under the directory
      // - false: No, returns only the first-level nodes under the directory
      // 
      // This parameter is required.
      shared_ptr<bool> recursive_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListFilesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListFilesRequest::ListQuery) };
    inline ListFilesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListFilesRequest::ListQuery) };
    inline ListFilesRequest& setListQuery(const ListFilesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListFilesRequest& setListQuery(ListFilesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListFilesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // Query conditions
    // 
    // This parameter is required.
    shared_ptr<ListFilesRequest::ListQuery> listQuery_ {};
    // Tenant ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
