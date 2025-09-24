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
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->ownerId_ != nullptr && this->status_ != nullptr && this->stopMode_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline SetResellerUserStatusRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SetResellerUserStatusRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetResellerUserStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopMode Field Functions 
    bool hasStopMode() const { return this->stopMode_ != nullptr;};
    void deleteStopMode() { this->stopMode_ = nullptr;};
    inline string stopMode() const { DARABONBA_PTR_GET_DEFAULT(stopMode_, "") };
    inline SetResellerUserStatusRequest& setStopMode(string stopMode) { DARABONBA_PTR_SET_VALUE(stopMode_, stopMode) };


  protected:
    // The type of the business. Valid values: FREEZE: the frozen business of the account. TRUSTEESHIP: the hosted business of the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The account status that you want to set. Valid values: Freeze: The account is frozen. Thaw: The account is unfrozen. Trusteeship: The account is hosted. TrusteeshipCancel: The account is not hosted.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // 停机模式
    // 取值：
    //     0：普通停机
    //     1：立即停机
    std::shared_ptr<string> stopMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
