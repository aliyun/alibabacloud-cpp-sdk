// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetPermissionApplyOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyOrderDetail, applyOrderDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyOrderDetail, applyOrderDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPermissionApplyOrderDetailResponseBody() = default ;
    GetPermissionApplyOrderDetailResponseBody(const GetPermissionApplyOrderDetailResponseBody &) = default ;
    GetPermissionApplyOrderDetailResponseBody(GetPermissionApplyOrderDetailResponseBody &&) = default ;
    GetPermissionApplyOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionApplyOrderDetailResponseBody() = default ;
    GetPermissionApplyOrderDetailResponseBody& operator=(const GetPermissionApplyOrderDetailResponseBody &) = default ;
    GetPermissionApplyOrderDetailResponseBody& operator=(GetPermissionApplyOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyOrderDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // applyOrderDetail Field Functions 
    bool hasApplyOrderDetail() const { return this->applyOrderDetail_ != nullptr;};
    void deleteApplyOrderDetail() { this->applyOrderDetail_ = nullptr;};
    inline const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail & applyOrderDetail() const { DARABONBA_PTR_GET_CONST(applyOrderDetail_, GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail applyOrderDetail() { DARABONBA_PTR_GET(applyOrderDetail_, GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail) };
    inline GetPermissionApplyOrderDetailResponseBody& setApplyOrderDetail(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail & applyOrderDetail) { DARABONBA_PTR_SET_VALUE(applyOrderDetail_, applyOrderDetail) };
    inline GetPermissionApplyOrderDetailResponseBody& setApplyOrderDetail(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail && applyOrderDetail) { DARABONBA_PTR_SET_RVALUE(applyOrderDetail_, applyOrderDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPermissionApplyOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the permission request order.
    std::shared_ptr<GetPermissionApplyOrderDetailResponseBodyApplyOrderDetail> applyOrderDetail_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
