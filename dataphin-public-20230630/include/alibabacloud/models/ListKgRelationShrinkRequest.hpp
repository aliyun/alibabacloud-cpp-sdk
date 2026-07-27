// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKGRELATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKGRELATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListKgRelationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKgRelationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKgRelationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListKgRelationShrinkRequest() = default ;
    ListKgRelationShrinkRequest(const ListKgRelationShrinkRequest &) = default ;
    ListKgRelationShrinkRequest(ListKgRelationShrinkRequest &&) = default ;
    ListKgRelationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKgRelationShrinkRequest() = default ;
    ListKgRelationShrinkRequest& operator=(const ListKgRelationShrinkRequest &) = default ;
    ListKgRelationShrinkRequest& operator=(ListKgRelationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listQueryShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->relationType_ == nullptr && this->workspaceId_ == nullptr; };
    // listQueryShrink Field Functions 
    bool hasListQueryShrink() const { return this->listQueryShrink_ != nullptr;};
    void deleteListQueryShrink() { this->listQueryShrink_ = nullptr;};
    inline string getListQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(listQueryShrink_, "") };
    inline ListKgRelationShrinkRequest& setListQueryShrink(string listQueryShrink) { DARABONBA_PTR_SET_VALUE(listQueryShrink_, listQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListKgRelationShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ListKgRelationShrinkRequest& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListKgRelationShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> listQueryShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> relationType_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
