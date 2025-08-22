// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERREALTIMEDELIVERYFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERREALTIMEDELIVERYFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserRealTimeDeliveryFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserRealTimeDeliveryFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserRealTimeDeliveryFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
    };
    DescribeDcdnUserRealTimeDeliveryFieldRequest() = default ;
    DescribeDcdnUserRealTimeDeliveryFieldRequest(const DescribeDcdnUserRealTimeDeliveryFieldRequest &) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldRequest(DescribeDcdnUserRealTimeDeliveryFieldRequest &&) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserRealTimeDeliveryFieldRequest() = default ;
    DescribeDcdnUserRealTimeDeliveryFieldRequest& operator=(const DescribeDcdnUserRealTimeDeliveryFieldRequest &) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldRequest& operator=(DescribeDcdnUserRealTimeDeliveryFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline DescribeDcdnUserRealTimeDeliveryFieldRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


  protected:
    // The type of the collected logs. Default value: cdn_log_access_l1. Valid values:
    // 
    // *   **cdn_log_access_l1**: access logs of L1 Dynamic Content Delivery Network (DCDN) points of presence (POPs)
    // *   **cdn_log_origin**: back-to-origin logs
    // *   **cdn_log_er**: EdgeRoutine logs
    std::shared_ptr<string> businessType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
