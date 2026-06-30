// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTPROMOTIONOFFERFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTPROMOTIONOFFERFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GrantPromotionOfferForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantPromotionOfferForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(BelongId, belongId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(EmployeeCode, employeeCode_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, GrantPromotionOfferForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(BelongId, belongId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(EmployeeCode, employeeCode_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    GrantPromotionOfferForPartnerRequest() = default ;
    GrantPromotionOfferForPartnerRequest(const GrantPromotionOfferForPartnerRequest &) = default ;
    GrantPromotionOfferForPartnerRequest(GrantPromotionOfferForPartnerRequest &&) = default ;
    GrantPromotionOfferForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantPromotionOfferForPartnerRequest() = default ;
    GrantPromotionOfferForPartnerRequest& operator=(const GrantPromotionOfferForPartnerRequest &) = default ;
    GrantPromotionOfferForPartnerRequest& operator=(GrantPromotionOfferForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityCode_ == nullptr
        && this->activityId_ == nullptr && this->belongId_ == nullptr && this->channel_ == nullptr && this->employeeCode_ == nullptr && this->remark_ == nullptr; };
    // activityCode Field Functions 
    bool hasActivityCode() const { return this->activityCode_ != nullptr;};
    void deleteActivityCode() { this->activityCode_ = nullptr;};
    inline string getActivityCode() const { DARABONBA_PTR_GET_DEFAULT(activityCode_, "") };
    inline GrantPromotionOfferForPartnerRequest& setActivityCode(string activityCode) { DARABONBA_PTR_SET_VALUE(activityCode_, activityCode) };


    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline GrantPromotionOfferForPartnerRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // belongId Field Functions 
    bool hasBelongId() const { return this->belongId_ != nullptr;};
    void deleteBelongId() { this->belongId_ = nullptr;};
    inline string getBelongId() const { DARABONBA_PTR_GET_DEFAULT(belongId_, "") };
    inline GrantPromotionOfferForPartnerRequest& setBelongId(string belongId) { DARABONBA_PTR_SET_VALUE(belongId_, belongId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GrantPromotionOfferForPartnerRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // employeeCode Field Functions 
    bool hasEmployeeCode() const { return this->employeeCode_ != nullptr;};
    void deleteEmployeeCode() { this->employeeCode_ = nullptr;};
    inline string getEmployeeCode() const { DARABONBA_PTR_GET_DEFAULT(employeeCode_, "") };
    inline GrantPromotionOfferForPartnerRequest& setEmployeeCode(string employeeCode) { DARABONBA_PTR_SET_VALUE(employeeCode_, employeeCode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GrantPromotionOfferForPartnerRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    shared_ptr<string> activityCode_ {};
    // The activity ID.
    shared_ptr<string> activityId_ {};
    // The user ID.
    shared_ptr<string> belongId_ {};
    // The channel.
    shared_ptr<string> channel_ {};
    // The employee code.
    shared_ptr<string> employeeCode_ {};
    // The operation remarks (audit information).
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
