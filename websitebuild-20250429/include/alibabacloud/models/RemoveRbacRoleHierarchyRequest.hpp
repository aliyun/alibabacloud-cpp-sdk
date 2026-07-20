// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVERBACROLEHIERARCHYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVERBACROLEHIERARCHYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RemoveRbacRoleHierarchyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveRbacRoleHierarchyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ChildRoleId, childRoleId_);
      DARABONBA_PTR_TO_JSON(ParentRoleId, parentRoleId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveRbacRoleHierarchyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ChildRoleId, childRoleId_);
      DARABONBA_PTR_FROM_JSON(ParentRoleId, parentRoleId_);
    };
    RemoveRbacRoleHierarchyRequest() = default ;
    RemoveRbacRoleHierarchyRequest(const RemoveRbacRoleHierarchyRequest &) = default ;
    RemoveRbacRoleHierarchyRequest(RemoveRbacRoleHierarchyRequest &&) = default ;
    RemoveRbacRoleHierarchyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveRbacRoleHierarchyRequest() = default ;
    RemoveRbacRoleHierarchyRequest& operator=(const RemoveRbacRoleHierarchyRequest &) = default ;
    RemoveRbacRoleHierarchyRequest& operator=(RemoveRbacRoleHierarchyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->childRoleId_ == nullptr && this->parentRoleId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RemoveRbacRoleHierarchyRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // childRoleId Field Functions 
    bool hasChildRoleId() const { return this->childRoleId_ != nullptr;};
    void deleteChildRoleId() { this->childRoleId_ = nullptr;};
    inline string getChildRoleId() const { DARABONBA_PTR_GET_DEFAULT(childRoleId_, "") };
    inline RemoveRbacRoleHierarchyRequest& setChildRoleId(string childRoleId) { DARABONBA_PTR_SET_VALUE(childRoleId_, childRoleId) };


    // parentRoleId Field Functions 
    bool hasParentRoleId() const { return this->parentRoleId_ != nullptr;};
    void deleteParentRoleId() { this->parentRoleId_ = nullptr;};
    inline string getParentRoleId() const { DARABONBA_PTR_GET_DEFAULT(parentRoleId_, "") };
    inline RemoveRbacRoleHierarchyRequest& setParentRoleId(string parentRoleId) { DARABONBA_PTR_SET_VALUE(parentRoleId_, parentRoleId) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The child role ID.
    shared_ptr<string> childRoleId_ {};
    // The parent role ID.
    shared_ptr<string> parentRoleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
