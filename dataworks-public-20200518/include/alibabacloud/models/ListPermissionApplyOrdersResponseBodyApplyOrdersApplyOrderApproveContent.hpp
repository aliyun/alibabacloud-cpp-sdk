// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODYAPPLYORDERSAPPLYORDERAPPROVECONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODYAPPLYORDERSAPPLYORDERAPPROVECONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyReason, applyReason_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ProjectMeta, projectMeta_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyReason, applyReason_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ProjectMeta, projectMeta_);
    };
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent() = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent(const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent &) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent(ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent &&) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent() = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent& operator=(const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent &) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent& operator=(ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyReason_ != nullptr
        && this->orderType_ != nullptr && this->projectMeta_ != nullptr; };
    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string applyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // projectMeta Field Functions 
    bool hasProjectMeta() const { return this->projectMeta_ != nullptr;};
    void deleteProjectMeta() { this->projectMeta_ = nullptr;};
    inline const Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta & projectMeta() const { DARABONBA_PTR_GET_CONST(projectMeta_, Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta) };
    inline Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta projectMeta() { DARABONBA_PTR_GET(projectMeta_, Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent& setProjectMeta(const Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta & projectMeta) { DARABONBA_PTR_SET_VALUE(projectMeta_, projectMeta) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent& setProjectMeta(Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta && projectMeta) { DARABONBA_PTR_SET_RVALUE(projectMeta_, projectMeta) };


  protected:
    // The reason for your request. The administrator determines whether to approve the request based on the reason.
    std::shared_ptr<string> applyReason_ = nullptr;
    // The type of the permission request order. The parameter value is 1 and cannot be changed. This value indicates ACL-based authorization.
    std::shared_ptr<int32_t> orderType_ = nullptr;
    // The content of the object on which you requested permissions.
    std::shared_ptr<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta> projectMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
