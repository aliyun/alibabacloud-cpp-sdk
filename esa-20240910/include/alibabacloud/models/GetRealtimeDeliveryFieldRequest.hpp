// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMEDELIVERYFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMEDELIVERYFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRealtimeDeliveryFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeDeliveryFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeDeliveryFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetRealtimeDeliveryFieldRequest() = default ;
    GetRealtimeDeliveryFieldRequest(const GetRealtimeDeliveryFieldRequest &) = default ;
    GetRealtimeDeliveryFieldRequest(GetRealtimeDeliveryFieldRequest &&) = default ;
    GetRealtimeDeliveryFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeDeliveryFieldRequest() = default ;
    GetRealtimeDeliveryFieldRequest& operator=(const GetRealtimeDeliveryFieldRequest &) = default ;
    GetRealtimeDeliveryFieldRequest& operator=(GetRealtimeDeliveryFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->siteId_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetRealtimeDeliveryFieldRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline GetRealtimeDeliveryFieldRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The business type. Valid values:
    // 
    // - **dcdn_log_access_l1** (default): Access logs.
    // - **dcdn_log_er**: Edge Routine logs.
    // - **dcdn_log_waf**: security protection logs.
    // - **dcdn_log_ipa**: Layer 4 acceleration logs.
    // 
    // This parameter is required.
    shared_ptr<string> businessType_ {};
    // The site ID.
    shared_ptr<string> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
