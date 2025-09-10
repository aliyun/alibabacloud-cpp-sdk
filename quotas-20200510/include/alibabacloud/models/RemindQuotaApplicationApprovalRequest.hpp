// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMINDQUOTAAPPLICATIONAPPROVALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMINDQUOTAAPPLICATIONAPPROVALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class RemindQuotaApplicationApprovalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemindQuotaApplicationApprovalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, RemindQuotaApplicationApprovalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    RemindQuotaApplicationApprovalRequest() = default ;
    RemindQuotaApplicationApprovalRequest(const RemindQuotaApplicationApprovalRequest &) = default ;
    RemindQuotaApplicationApprovalRequest(RemindQuotaApplicationApprovalRequest &&) = default ;
    RemindQuotaApplicationApprovalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemindQuotaApplicationApprovalRequest() = default ;
    RemindQuotaApplicationApprovalRequest& operator=(const RemindQuotaApplicationApprovalRequest &) = default ;
    RemindQuotaApplicationApprovalRequest& operator=(RemindQuotaApplicationApprovalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RemindQuotaApplicationApprovalRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    // The quota application ID.
    // 
    // For more information about how to obtain the ID of a quota application, see [ListQuotaApplications](https://help.aliyun.com/document_detail/440568.html).
    std::shared_ptr<string> applicationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
