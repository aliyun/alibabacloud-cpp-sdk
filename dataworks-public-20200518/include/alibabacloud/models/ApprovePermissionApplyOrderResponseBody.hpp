// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEPERMISSIONAPPLYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPROVEPERMISSIONAPPLYORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ApprovePermissionApplyOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApprovePermissionApplyOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApproveSuccess, approveSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ApprovePermissionApplyOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApproveSuccess, approveSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ApprovePermissionApplyOrderResponseBody() = default ;
    ApprovePermissionApplyOrderResponseBody(const ApprovePermissionApplyOrderResponseBody &) = default ;
    ApprovePermissionApplyOrderResponseBody(ApprovePermissionApplyOrderResponseBody &&) = default ;
    ApprovePermissionApplyOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApprovePermissionApplyOrderResponseBody() = default ;
    ApprovePermissionApplyOrderResponseBody& operator=(const ApprovePermissionApplyOrderResponseBody &) = default ;
    ApprovePermissionApplyOrderResponseBody& operator=(ApprovePermissionApplyOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approveSuccess_ != nullptr
        && this->requestId_ != nullptr; };
    // approveSuccess Field Functions 
    bool hasApproveSuccess() const { return this->approveSuccess_ != nullptr;};
    void deleteApproveSuccess() { this->approveSuccess_ = nullptr;};
    inline bool approveSuccess() const { DARABONBA_PTR_GET_DEFAULT(approveSuccess_, false) };
    inline ApprovePermissionApplyOrderResponseBody& setApproveSuccess(bool approveSuccess) { DARABONBA_PTR_SET_VALUE(approveSuccess_, approveSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApprovePermissionApplyOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the permission request order is processed.
    std::shared_ptr<bool> approveSuccess_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
