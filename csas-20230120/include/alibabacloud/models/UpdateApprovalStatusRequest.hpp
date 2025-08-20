// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateApprovalStatusRequest() = default ;
    UpdateApprovalStatusRequest(const UpdateApprovalStatusRequest &) = default ;
    UpdateApprovalStatusRequest(UpdateApprovalStatusRequest &&) = default ;
    UpdateApprovalStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalStatusRequest() = default ;
    UpdateApprovalStatusRequest& operator=(const UpdateApprovalStatusRequest &) = default ;
    UpdateApprovalStatusRequest& operator=(UpdateApprovalStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalId_ != nullptr
        && this->status_ != nullptr; };
    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string approvalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline UpdateApprovalStatusRequest& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateApprovalStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> approvalId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
