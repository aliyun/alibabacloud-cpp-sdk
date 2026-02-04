// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDCDNUSERREALTIMEDELIVERYFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDCDNUSERREALTIMEDELIVERYFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class UpdateDcdnUserRealTimeDeliveryFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDcdnUserRealTimeDeliveryFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDcdnUserRealTimeDeliveryFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
    };
    UpdateDcdnUserRealTimeDeliveryFieldRequest() = default ;
    UpdateDcdnUserRealTimeDeliveryFieldRequest(const UpdateDcdnUserRealTimeDeliveryFieldRequest &) = default ;
    UpdateDcdnUserRealTimeDeliveryFieldRequest(UpdateDcdnUserRealTimeDeliveryFieldRequest &&) = default ;
    UpdateDcdnUserRealTimeDeliveryFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDcdnUserRealTimeDeliveryFieldRequest() = default ;
    UpdateDcdnUserRealTimeDeliveryFieldRequest& operator=(const UpdateDcdnUserRealTimeDeliveryFieldRequest &) = default ;
    UpdateDcdnUserRealTimeDeliveryFieldRequest& operator=(UpdateDcdnUserRealTimeDeliveryFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->fields_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline UpdateDcdnUserRealTimeDeliveryFieldRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string getFields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline UpdateDcdnUserRealTimeDeliveryFieldRequest& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


  protected:
    // The type of the collected logs. Default value: cdn_log_access_l1. Valid values:
    // 
    // *   **cdn_log_access_l1**: access logs of L1 Dynamic Route for CDN (DCDN) points of presence (POPs)
    // *   **cdn_log_origin**: back-to-origin logs
    // *   **cdn_log_er**: EdgeRoutine logs
    shared_ptr<string> businessType_ {};
    // The list of fields. Separate multiple fields with commas (,). For more information, see [Fields in a real-time log](https://help.aliyun.com/document_detail/324199.html).
    // 
    // This parameter is required.
    shared_ptr<string> fields_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
