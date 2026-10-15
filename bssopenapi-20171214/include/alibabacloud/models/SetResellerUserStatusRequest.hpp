// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETRESELLERUSERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETRESELLERUSERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class SetResellerUserStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetResellerUserStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StopMode, stopMode_);
    };
    friend void from_json(const Darabonba::Json& j, SetResellerUserStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StopMode, stopMode_);
    };
    SetResellerUserStatusRequest() = default ;
    SetResellerUserStatusRequest(const SetResellerUserStatusRequest &) = default ;
    SetResellerUserStatusRequest(SetResellerUserStatusRequest &&) = default ;
    SetResellerUserStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetResellerUserStatusRequest() = default ;
    SetResellerUserStatusRequest& operator=(const SetResellerUserStatusRequest &) = default ;
    SetResellerUserStatusRequest& operator=(SetResellerUserStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->ownerId_ == nullptr && this->status_ == nullptr && this->stopMode_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline SetResellerUserStatusRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SetResellerUserStatusRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetResellerUserStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopMode Field Functions 
    bool hasStopMode() const { return this->stopMode_ != nullptr;};
    void deleteStopMode() { this->stopMode_ = nullptr;};
    inline string getStopMode() const { DARABONBA_PTR_GET_DEFAULT(stopMode_, "") };
    inline SetResellerUserStatusRequest& setStopMode(string stopMode) { DARABONBA_PTR_SET_VALUE(stopMode_, stopMode) };


  protected:
    // The type of business operation. Valid values:
    // FREEZE: Freeze operations.
    // TRUSTEESHIP: Hosting operations.
    // 
    // This parameter is required.
    shared_ptr<string> businessType_ {};
    // This parameter is required.
    shared_ptr<string> ownerId_ {};
    // The status to set for the user account. Valid values:
    // Freeze: The user account is frozen.
    // Thaw: The user account is restored.
    // Trusteeship: The user account is hosted.
    // TrusteeshipCancel: The user account is not hosted.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
    // The stopping mode. Valid values:
    // 0: Normal shutdown.
    // 1: Immediate shutdown.
    shared_ptr<string> stopMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
