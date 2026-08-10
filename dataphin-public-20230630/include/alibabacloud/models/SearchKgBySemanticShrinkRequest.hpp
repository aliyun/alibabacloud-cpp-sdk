// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHKGBYSEMANTICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHKGBYSEMANTICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SearchKgBySemanticShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchKgBySemanticShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SearchCommand, searchCommandShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchKgBySemanticShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SearchCommand, searchCommandShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SearchKgBySemanticShrinkRequest() = default ;
    SearchKgBySemanticShrinkRequest(const SearchKgBySemanticShrinkRequest &) = default ;
    SearchKgBySemanticShrinkRequest(SearchKgBySemanticShrinkRequest &&) = default ;
    SearchKgBySemanticShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchKgBySemanticShrinkRequest() = default ;
    SearchKgBySemanticShrinkRequest& operator=(const SearchKgBySemanticShrinkRequest &) = default ;
    SearchKgBySemanticShrinkRequest& operator=(SearchKgBySemanticShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->searchCommandShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SearchKgBySemanticShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // searchCommandShrink Field Functions 
    bool hasSearchCommandShrink() const { return this->searchCommandShrink_ != nullptr;};
    void deleteSearchCommandShrink() { this->searchCommandShrink_ = nullptr;};
    inline string getSearchCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(searchCommandShrink_, "") };
    inline SearchKgBySemanticShrinkRequest& setSearchCommandShrink(string searchCommandShrink) { DARABONBA_PTR_SET_VALUE(searchCommandShrink_, searchCommandShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SearchKgBySemanticShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The search command.
    // 
    // This parameter is required.
    shared_ptr<string> searchCommandShrink_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
