// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPINSTANCEFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPINSTANCEFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RefundAppInstanceForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundAppInstanceForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(RefundReason, refundReason_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RefundAppInstanceForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(RefundReason, refundReason_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RefundAppInstanceForPartnerRequest() = default ;
    RefundAppInstanceForPartnerRequest(const RefundAppInstanceForPartnerRequest &) = default ;
    RefundAppInstanceForPartnerRequest(RefundAppInstanceForPartnerRequest &&) = default ;
    RefundAppInstanceForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundAppInstanceForPartnerRequest() = default ;
    RefundAppInstanceForPartnerRequest& operator=(const RefundAppInstanceForPartnerRequest &) = default ;
    RefundAppInstanceForPartnerRequest& operator=(RefundAppInstanceForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->refundReason_ == nullptr && this->userId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RefundAppInstanceForPartnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline RefundAppInstanceForPartnerRequest& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RefundAppInstanceForPartnerRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> refundReason_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
