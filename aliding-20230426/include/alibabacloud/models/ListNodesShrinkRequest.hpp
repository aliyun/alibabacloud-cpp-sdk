// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentNodeId, parentNodeId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(WithPermissionRole, withPermissionRole_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentNodeId, parentNodeId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(WithPermissionRole, withPermissionRole_);
    };
    ListNodesShrinkRequest() = default ;
    ListNodesShrinkRequest(const ListNodesShrinkRequest &) = default ;
    ListNodesShrinkRequest(ListNodesShrinkRequest &&) = default ;
    ListNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesShrinkRequest() = default ;
    ListNodesShrinkRequest& operator=(const ListNodesShrinkRequest &) = default ;
    ListNodesShrinkRequest& operator=(ListNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->parentNodeId_ == nullptr && this->tenantContextShrink_ == nullptr && this->withPermissionRole_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentNodeId Field Functions 
    bool hasParentNodeId() const { return this->parentNodeId_ != nullptr;};
    void deleteParentNodeId() { this->parentNodeId_ = nullptr;};
    inline string getParentNodeId() const { DARABONBA_PTR_GET_DEFAULT(parentNodeId_, "") };
    inline ListNodesShrinkRequest& setParentNodeId(string parentNodeId) { DARABONBA_PTR_SET_VALUE(parentNodeId_, parentNodeId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline ListNodesShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // withPermissionRole Field Functions 
    bool hasWithPermissionRole() const { return this->withPermissionRole_ != nullptr;};
    void deleteWithPermissionRole() { this->withPermissionRole_ = nullptr;};
    inline bool getWithPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(withPermissionRole_, false) };
    inline ListNodesShrinkRequest& setWithPermissionRole(bool withPermissionRole) { DARABONBA_PTR_SET_VALUE(withPermissionRole_, withPermissionRole) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> parentNodeId_ {};
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<bool> withPermissionRole_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
