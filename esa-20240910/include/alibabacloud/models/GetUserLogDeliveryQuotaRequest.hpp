// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERLOGDELIVERYQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERLOGDELIVERYQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUserLogDeliveryQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserLogDeliveryQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserLogDeliveryQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
    };
    GetUserLogDeliveryQuotaRequest() = default ;
    GetUserLogDeliveryQuotaRequest(const GetUserLogDeliveryQuotaRequest &) = default ;
    GetUserLogDeliveryQuotaRequest(GetUserLogDeliveryQuotaRequest &&) = default ;
    GetUserLogDeliveryQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserLogDeliveryQuotaRequest() = default ;
    GetUserLogDeliveryQuotaRequest& operator=(const GetUserLogDeliveryQuotaRequest &) = default ;
    GetUserLogDeliveryQuotaRequest& operator=(GetUserLogDeliveryQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetUserLogDeliveryQuotaRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


  protected:
    // The log category. Valid values:
    // 
    // *   dcdn_log_access_l1 (default): access logs.
    // *   dcdn_log_er: Edge Routine logs.
    // *   dcdn_log_waf: firewall logs.
    // *   dcdn_log_ipa: TCP/UDP proxy logs.
    // 
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
