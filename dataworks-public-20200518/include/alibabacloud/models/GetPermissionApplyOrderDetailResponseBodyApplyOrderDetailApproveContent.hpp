// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILAPPROVECONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILAPPROVECONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyReason, applyReason_);
      DARABONBA_PTR_TO_JSON(Deadline, deadline_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ProjectMeta, projectMeta_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyReason, applyReason_);
      DARABONBA_PTR_FROM_JSON(Deadline, deadline_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ProjectMeta, projectMeta_);
    };
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent &&) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& operator=(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& operator=(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyReason_ != nullptr
        && this->deadline_ != nullptr && this->orderType_ != nullptr && this->projectMeta_ != nullptr; };
    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string applyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // deadline Field Functions 
    bool hasDeadline() const { return this->deadline_ != nullptr;};
    void deleteDeadline() { this->deadline_ = nullptr;};
    inline int64_t deadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, 0L) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& setDeadline(int64_t deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // projectMeta Field Functions 
    bool hasProjectMeta() const { return this->projectMeta_ != nullptr;};
    void deleteProjectMeta() { this->projectMeta_ = nullptr;};
    inline const Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta & projectMeta() const { DARABONBA_PTR_GET_CONST(projectMeta_, Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta) };
    inline Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta projectMeta() { DARABONBA_PTR_GET(projectMeta_, Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& setProjectMeta(const Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta & projectMeta) { DARABONBA_PTR_SET_VALUE(projectMeta_, projectMeta) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent& setProjectMeta(Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta && projectMeta) { DARABONBA_PTR_SET_RVALUE(projectMeta_, projectMeta) };


  protected:
    // The reason of the permission request. The administrator processes the request based on the reason.
    std::shared_ptr<string> applyReason_ = nullptr;
    // The expiration time of the permissions that you request. The value is a UNIX timestamp. If LabelSecurity is disabled for the MaxCompute project in which you want to request permissions on the fields of a table, or the security level of the fields is 0 or is lower than or equal to the security level of the Alibaba Cloud account for which you want to request permissions, you can request only permanent permissions.
    std::shared_ptr<int64_t> deadline_ = nullptr;
    // The type of the permission request order. The parameter value is 1 and cannot be changed. This value indicates ACL-based authorization.
    std::shared_ptr<int32_t> orderType_ = nullptr;
    // The information about the project and workspace that are associated with the object on which you request permissions.
    std::shared_ptr<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta> projectMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
