// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHTEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHTEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBatchTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ListQuery, listQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ListQuery, listQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListBatchTemplatesShrinkRequest() = default ;
    ListBatchTemplatesShrinkRequest(const ListBatchTemplatesShrinkRequest &) = default ;
    ListBatchTemplatesShrinkRequest(ListBatchTemplatesShrinkRequest &&) = default ;
    ListBatchTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchTemplatesShrinkRequest() = default ;
    ListBatchTemplatesShrinkRequest& operator=(const ListBatchTemplatesShrinkRequest &) = default ;
    ListBatchTemplatesShrinkRequest& operator=(ListBatchTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->listQueryShrink_ == nullptr && this->opTenantId_ == nullptr && this->projectId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListBatchTemplatesShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // listQueryShrink Field Functions 
    bool hasListQueryShrink() const { return this->listQueryShrink_ != nullptr;};
    void deleteListQueryShrink() { this->listQueryShrink_ = nullptr;};
    inline string getListQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(listQueryShrink_, "") };
    inline ListBatchTemplatesShrinkRequest& setListQueryShrink(string listQueryShrink) { DARABONBA_PTR_SET_VALUE(listQueryShrink_, listQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListBatchTemplatesShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListBatchTemplatesShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The runtime environment. Default value: PROD.
    shared_ptr<string> env_ {};
    // The paged query conditions.
    shared_ptr<string> listQueryShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
