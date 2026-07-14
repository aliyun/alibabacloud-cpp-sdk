// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHATSAPPUSERNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHATSAPPUSERNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdateWhatsappUserNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhatsappUserNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(TransferAction, transferAction_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhatsappUserNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(TransferAction, transferAction_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    UpdateWhatsappUserNameRequest() = default ;
    UpdateWhatsappUserNameRequest(const UpdateWhatsappUserNameRequest &) = default ;
    UpdateWhatsappUserNameRequest(UpdateWhatsappUserNameRequest &&) = default ;
    UpdateWhatsappUserNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhatsappUserNameRequest() = default ;
    UpdateWhatsappUserNameRequest& operator=(const UpdateWhatsappUserNameRequest &) = default ;
    UpdateWhatsappUserNameRequest& operator=(UpdateWhatsappUserNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->phoneNumber_ == nullptr && this->transferAction_ == nullptr && this->username_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline UpdateWhatsappUserNameRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdateWhatsappUserNameRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // transferAction Field Functions 
    bool hasTransferAction() const { return this->transferAction_ != nullptr;};
    void deleteTransferAction() { this->transferAction_ = nullptr;};
    inline string getTransferAction() const { DARABONBA_PTR_GET_DEFAULT(transferAction_, "") };
    inline UpdateWhatsappUserNameRequest& setTransferAction(string transferAction) { DARABONBA_PTR_SET_VALUE(transferAction_, transferAction) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline UpdateWhatsappUserNameRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The space ID of the ISV sub-customer or the instance ID of the direct customer. You can view the space ID on the
    // <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)
    // <props="intl">[Channel Management](https://chatapp.console.alibabacloud.com/CustomerList)
    // page.
    // 
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // The business phone number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // The transfer action that controls what happens when the requested username is currently used by another business phone number in the same business asset portfolio. For example, use this parameter when you want to move an existing username to another phone number. Valid values:
    // 
    //  - none (default): does not transfer the account. If another business phone number in the same business asset portfolio already uses this username, the request fails with error code 147005.
    // 
    //  - force_transfer: transfers the account from the other business phone number to this business phone number. The account is removed from the other phone number and assigned to this phone number.
    shared_ptr<string> transferAction_ {};
    // Whatsapp user name
    // 
    // This parameter is required.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
