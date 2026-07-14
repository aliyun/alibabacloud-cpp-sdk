// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWHATSAPPUSERNAMESUGGESTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWHATSAPPUSERNAMESUGGESTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetWhatsappUserNameSuggestionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWhatsappUserNameSuggestionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetWhatsappUserNameSuggestionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
    };
    GetWhatsappUserNameSuggestionsRequest() = default ;
    GetWhatsappUserNameSuggestionsRequest(const GetWhatsappUserNameSuggestionsRequest &) = default ;
    GetWhatsappUserNameSuggestionsRequest(GetWhatsappUserNameSuggestionsRequest &&) = default ;
    GetWhatsappUserNameSuggestionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWhatsappUserNameSuggestionsRequest() = default ;
    GetWhatsappUserNameSuggestionsRequest& operator=(const GetWhatsappUserNameSuggestionsRequest &) = default ;
    GetWhatsappUserNameSuggestionsRequest& operator=(GetWhatsappUserNameSuggestionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->phoneNumber_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline GetWhatsappUserNameSuggestionsRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetWhatsappUserNameSuggestionsRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


  protected:
    // The space ID of the ISV sub-customer or the instance ID of the direct customer. You can view the Space ID on the
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
