// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList.hpp>
#include <alibabacloud/models/GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent.hpp>
#include <alibabacloud/models/GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyBaseId, applyBaseId_);
      DARABONBA_PTR_TO_JSON(ApplyTimestamp, applyTimestamp_);
      DARABONBA_PTR_TO_JSON(ApproveAccountList, approveAccountList_);
      DARABONBA_PTR_TO_JSON(ApproveContent, approveContent_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowStatus, flowStatus_);
      DARABONBA_PTR_TO_JSON(GranteeObjectList, granteeObjectList_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyBaseId, applyBaseId_);
      DARABONBA_PTR_FROM_JSON(ApplyTimestamp, applyTimestamp_);
      DARABONBA_PTR_FROM_JSON(ApproveAccountList, approveAccountList_);
      DARABONBA_PTR_FROM_JSON(ApproveContent, approveContent_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowStatus, flowStatus_);
      DARABONBA_PTR_FROM_JSON(GranteeObjectList, granteeObjectList_);
    };
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail &&) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& operator=(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& operator=(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyBaseId_ != nullptr
        && this->applyTimestamp_ != nullptr && this->approveAccountList_ != nullptr && this->approveContent_ != nullptr && this->flowId_ != nullptr && this->flowStatus_ != nullptr
        && this->granteeObjectList_ != nullptr; };
    // applyBaseId Field Functions 
    bool hasApplyBaseId() const { return this->applyBaseId_ != nullptr;};
    void deleteApplyBaseId() { this->applyBaseId_ = nullptr;};
    inline string applyBaseId() const { DARABONBA_PTR_GET_DEFAULT(applyBaseId_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setApplyBaseId(string applyBaseId) { DARABONBA_PTR_SET_VALUE(applyBaseId_, applyBaseId) };


    // applyTimestamp Field Functions 
    bool hasApplyTimestamp() const { return this->applyTimestamp_ != nullptr;};
    void deleteApplyTimestamp() { this->applyTimestamp_ = nullptr;};
    inline int64_t applyTimestamp() const { DARABONBA_PTR_GET_DEFAULT(applyTimestamp_, 0L) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setApplyTimestamp(int64_t applyTimestamp) { DARABONBA_PTR_SET_VALUE(applyTimestamp_, applyTimestamp) };


    // approveAccountList Field Functions 
    bool hasApproveAccountList() const { return this->approveAccountList_ != nullptr;};
    void deleteApproveAccountList() { this->approveAccountList_ = nullptr;};
    inline const vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList> & approveAccountList() const { DARABONBA_PTR_GET_CONST(approveAccountList_, vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList>) };
    inline vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList> approveAccountList() { DARABONBA_PTR_GET(approveAccountList_, vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList>) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setApproveAccountList(const vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList> & approveAccountList) { DARABONBA_PTR_SET_VALUE(approveAccountList_, approveAccountList) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setApproveAccountList(vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList> && approveAccountList) { DARABONBA_PTR_SET_RVALUE(approveAccountList_, approveAccountList) };


    // approveContent Field Functions 
    bool hasApproveContent() const { return this->approveContent_ != nullptr;};
    void deleteApproveContent() { this->approveContent_ = nullptr;};
    inline const Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent & approveContent() const { DARABONBA_PTR_GET_CONST(approveContent_, Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent) };
    inline Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent approveContent() { DARABONBA_PTR_GET(approveContent_, Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setApproveContent(const Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent & approveContent) { DARABONBA_PTR_SET_VALUE(approveContent_, approveContent) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setApproveContent(Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent && approveContent) { DARABONBA_PTR_SET_RVALUE(approveContent_, approveContent) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowStatus Field Functions 
    bool hasFlowStatus() const { return this->flowStatus_ != nullptr;};
    void deleteFlowStatus() { this->flowStatus_ = nullptr;};
    inline int32_t flowStatus() const { DARABONBA_PTR_GET_DEFAULT(flowStatus_, 0) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setFlowStatus(int32_t flowStatus) { DARABONBA_PTR_SET_VALUE(flowStatus_, flowStatus) };


    // granteeObjectList Field Functions 
    bool hasGranteeObjectList() const { return this->granteeObjectList_ != nullptr;};
    void deleteGranteeObjectList() { this->granteeObjectList_ = nullptr;};
    inline const vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList> & granteeObjectList() const { DARABONBA_PTR_GET_CONST(granteeObjectList_, vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList>) };
    inline vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList> granteeObjectList() { DARABONBA_PTR_GET(granteeObjectList_, vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList>) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setGranteeObjectList(const vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList> & granteeObjectList) { DARABONBA_PTR_SET_VALUE(granteeObjectList_, granteeObjectList) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail& setGranteeObjectList(vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList> && granteeObjectList) { DARABONBA_PTR_SET_RVALUE(granteeObjectList_, granteeObjectList) };


  protected:
    // The ID of the Alibaba Cloud account that was used to submit the permission request order.
    std::shared_ptr<string> applyBaseId_ = nullptr;
    // The time when the permission request order was submitted. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> applyTimestamp_ = nullptr;
    // The list of Alibaba Cloud accounts that are used to process the permission request order.
    std::shared_ptr<vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList>> approveAccountList_ = nullptr;
    // The content of the permission request.
    std::shared_ptr<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContent> approveContent_ = nullptr;
    // The ID of the permission request order.
    std::shared_ptr<string> flowId_ = nullptr;
    // The status of the permission request order. Valid values:
    // 
    // *   1: to be processed
    // *   2: approved and authorized
    // *   3: approved but authorization failed
    // *   4: rejected
    std::shared_ptr<int32_t> flowStatus_ = nullptr;
    // The information about the account that is used to request permissions.
    std::shared_ptr<vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList>> granteeObjectList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
