// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVALIDATEAPPROVALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVALIDATEAPPROVALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class InvalidateApprovalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvalidateApprovalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
    };
    friend void from_json(const Darabonba::Json& j, InvalidateApprovalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
    };
    InvalidateApprovalRequest() = default ;
    InvalidateApprovalRequest(const InvalidateApprovalRequest &) = default ;
    InvalidateApprovalRequest(InvalidateApprovalRequest &&) = default ;
    InvalidateApprovalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvalidateApprovalRequest() = default ;
    InvalidateApprovalRequest& operator=(const InvalidateApprovalRequest &) = default ;
    InvalidateApprovalRequest& operator=(InvalidateApprovalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalId_ == nullptr; };
    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline InvalidateApprovalRequest& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


  protected:
    // The ID of the approval instance to immediately invalidate. You can call ListApprovals to query approval instance IDs. Only one approval instance ID under the current Alibaba Cloud account can be specified per request.
    // 
    // This parameter is required.
    shared_ptr<string> approvalId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
