// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEPROCESSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEPROCESSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ApproveProcessInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApproveProcessInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalAction, approvalAction_);
      DARABONBA_PTR_TO_JSON(ApprovalComment, approvalComment_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ApproveProcessInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalAction, approvalAction_);
      DARABONBA_PTR_FROM_JSON(ApprovalComment, approvalComment_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
    };
    ApproveProcessInstanceRequest() = default ;
    ApproveProcessInstanceRequest(const ApproveProcessInstanceRequest &) = default ;
    ApproveProcessInstanceRequest(ApproveProcessInstanceRequest &&) = default ;
    ApproveProcessInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApproveProcessInstanceRequest() = default ;
    ApproveProcessInstanceRequest& operator=(const ApproveProcessInstanceRequest &) = default ;
    ApproveProcessInstanceRequest& operator=(ApproveProcessInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalAction_ == nullptr
        && this->approvalComment_ == nullptr && this->clientToken_ == nullptr && this->processInstanceId_ == nullptr; };
    // approvalAction Field Functions 
    bool hasApprovalAction() const { return this->approvalAction_ != nullptr;};
    void deleteApprovalAction() { this->approvalAction_ = nullptr;};
    inline string getApprovalAction() const { DARABONBA_PTR_GET_DEFAULT(approvalAction_, "") };
    inline ApproveProcessInstanceRequest& setApprovalAction(string approvalAction) { DARABONBA_PTR_SET_VALUE(approvalAction_, approvalAction) };


    // approvalComment Field Functions 
    bool hasApprovalComment() const { return this->approvalComment_ != nullptr;};
    void deleteApprovalComment() { this->approvalComment_ = nullptr;};
    inline string getApprovalComment() const { DARABONBA_PTR_GET_DEFAULT(approvalComment_, "") };
    inline ApproveProcessInstanceRequest& setApprovalComment(string approvalComment) { DARABONBA_PTR_SET_VALUE(approvalComment_, approvalComment) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ApproveProcessInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline ApproveProcessInstanceRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> approvalAction_ {};
    // This parameter is required.
    shared_ptr<string> approvalComment_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> processInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
