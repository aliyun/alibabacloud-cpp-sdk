// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
    };
    GetApprovalRequest() = default ;
    GetApprovalRequest(const GetApprovalRequest &) = default ;
    GetApprovalRequest(GetApprovalRequest &&) = default ;
    GetApprovalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalRequest() = default ;
    GetApprovalRequest& operator=(const GetApprovalRequest &) = default ;
    GetApprovalRequest& operator=(GetApprovalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalId_ != nullptr; };
    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string approvalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline GetApprovalRequest& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> approvalId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
