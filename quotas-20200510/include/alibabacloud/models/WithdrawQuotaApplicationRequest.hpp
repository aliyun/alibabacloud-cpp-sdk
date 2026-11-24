// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WITHDRAWQUOTAAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WITHDRAWQUOTAAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class WithdrawQuotaApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WithdrawQuotaApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, WithdrawQuotaApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    WithdrawQuotaApplicationRequest() = default ;
    WithdrawQuotaApplicationRequest(const WithdrawQuotaApplicationRequest &) = default ;
    WithdrawQuotaApplicationRequest(WithdrawQuotaApplicationRequest &&) = default ;
    WithdrawQuotaApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WithdrawQuotaApplicationRequest() = default ;
    WithdrawQuotaApplicationRequest& operator=(const WithdrawQuotaApplicationRequest &) = default ;
    WithdrawQuotaApplicationRequest& operator=(WithdrawQuotaApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->reason_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline WithdrawQuotaApplicationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline WithdrawQuotaApplicationRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The ID of the quota application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The reason for withdrawing the quota increase request.
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
