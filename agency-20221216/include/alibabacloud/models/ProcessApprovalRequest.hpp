// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROCESSAPPROVALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROCESSAPPROVALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ProcessApprovalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProcessApprovalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationSheetId, applicationSheetId_);
      DARABONBA_PTR_TO_JSON(ApprovalAction, approvalAction_);
      DARABONBA_PTR_TO_JSON(ApprovalComments, approvalComments_);
    };
    friend void from_json(const Darabonba::Json& j, ProcessApprovalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationSheetId, applicationSheetId_);
      DARABONBA_PTR_FROM_JSON(ApprovalAction, approvalAction_);
      DARABONBA_PTR_FROM_JSON(ApprovalComments, approvalComments_);
    };
    ProcessApprovalRequest() = default ;
    ProcessApprovalRequest(const ProcessApprovalRequest &) = default ;
    ProcessApprovalRequest(ProcessApprovalRequest &&) = default ;
    ProcessApprovalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProcessApprovalRequest() = default ;
    ProcessApprovalRequest& operator=(const ProcessApprovalRequest &) = default ;
    ProcessApprovalRequest& operator=(ProcessApprovalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationSheetId_ == nullptr
        && this->approvalAction_ == nullptr && this->approvalComments_ == nullptr; };
    // applicationSheetId Field Functions 
    bool hasApplicationSheetId() const { return this->applicationSheetId_ != nullptr;};
    void deleteApplicationSheetId() { this->applicationSheetId_ = nullptr;};
    inline string getApplicationSheetId() const { DARABONBA_PTR_GET_DEFAULT(applicationSheetId_, "") };
    inline ProcessApprovalRequest& setApplicationSheetId(string applicationSheetId) { DARABONBA_PTR_SET_VALUE(applicationSheetId_, applicationSheetId) };


    // approvalAction Field Functions 
    bool hasApprovalAction() const { return this->approvalAction_ != nullptr;};
    void deleteApprovalAction() { this->approvalAction_ = nullptr;};
    inline string getApprovalAction() const { DARABONBA_PTR_GET_DEFAULT(approvalAction_, "") };
    inline ProcessApprovalRequest& setApprovalAction(string approvalAction) { DARABONBA_PTR_SET_VALUE(approvalAction_, approvalAction) };


    // approvalComments Field Functions 
    bool hasApprovalComments() const { return this->approvalComments_ != nullptr;};
    void deleteApprovalComments() { this->approvalComments_ = nullptr;};
    inline string getApprovalComments() const { DARABONBA_PTR_GET_DEFAULT(approvalComments_, "") };
    inline ProcessApprovalRequest& setApprovalComments(string approvalComments) { DARABONBA_PTR_SET_VALUE(approvalComments_, approvalComments) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationSheetId_ {};
    // This parameter is required.
    shared_ptr<string> approvalAction_ {};
    // This parameter is required.
    shared_ptr<string> approvalComments_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
