// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIER2COUPONAPPROVALDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTIER2COUPONAPPROVALDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetTier2CouponApprovalDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTier2CouponApprovalDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationSheetId, applicationSheetId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTier2CouponApprovalDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationSheetId, applicationSheetId_);
    };
    GetTier2CouponApprovalDetailRequest() = default ;
    GetTier2CouponApprovalDetailRequest(const GetTier2CouponApprovalDetailRequest &) = default ;
    GetTier2CouponApprovalDetailRequest(GetTier2CouponApprovalDetailRequest &&) = default ;
    GetTier2CouponApprovalDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTier2CouponApprovalDetailRequest() = default ;
    GetTier2CouponApprovalDetailRequest& operator=(const GetTier2CouponApprovalDetailRequest &) = default ;
    GetTier2CouponApprovalDetailRequest& operator=(GetTier2CouponApprovalDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationSheetId_ == nullptr; };
    // applicationSheetId Field Functions 
    bool hasApplicationSheetId() const { return this->applicationSheetId_ != nullptr;};
    void deleteApplicationSheetId() { this->applicationSheetId_ = nullptr;};
    inline string getApplicationSheetId() const { DARABONBA_PTR_GET_DEFAULT(applicationSheetId_, "") };
    inline GetTier2CouponApprovalDetailRequest& setApplicationSheetId(string applicationSheetId) { DARABONBA_PTR_SET_VALUE(applicationSheetId_, applicationSheetId) };


  protected:
    shared_ptr<string> applicationSheetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
