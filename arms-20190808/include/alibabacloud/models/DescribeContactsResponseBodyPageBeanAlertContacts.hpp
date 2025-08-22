// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTSRESPONSEBODYPAGEBEANALERTCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTSRESPONSEBODYPAGEBEANALERTCONTACTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeContactsResponseBodyPageBeanAlertContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactsResponseBodyPageBeanAlertContacts& obj) { 
      DARABONBA_PTR_TO_JSON(ArmsContactId, armsContactId_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IsEmailVerify, isEmailVerify_);
      DARABONBA_PTR_TO_JSON(IsVerify, isVerify_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ReissueSendNotice, reissueSendNotice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactsResponseBodyPageBeanAlertContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(ArmsContactId, armsContactId_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IsEmailVerify, isEmailVerify_);
      DARABONBA_PTR_FROM_JSON(IsVerify, isVerify_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ReissueSendNotice, reissueSendNotice_);
    };
    DescribeContactsResponseBodyPageBeanAlertContacts() = default ;
    DescribeContactsResponseBodyPageBeanAlertContacts(const DescribeContactsResponseBodyPageBeanAlertContacts &) = default ;
    DescribeContactsResponseBodyPageBeanAlertContacts(DescribeContactsResponseBodyPageBeanAlertContacts &&) = default ;
    DescribeContactsResponseBodyPageBeanAlertContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactsResponseBodyPageBeanAlertContacts() = default ;
    DescribeContactsResponseBodyPageBeanAlertContacts& operator=(const DescribeContactsResponseBodyPageBeanAlertContacts &) = default ;
    DescribeContactsResponseBodyPageBeanAlertContacts& operator=(DescribeContactsResponseBodyPageBeanAlertContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->armsContactId_ != nullptr
        && this->contactId_ != nullptr && this->contactName_ != nullptr && this->email_ != nullptr && this->isEmailVerify_ != nullptr && this->isVerify_ != nullptr
        && this->phone_ != nullptr && this->reissueSendNotice_ != nullptr; };
    // armsContactId Field Functions 
    bool hasArmsContactId() const { return this->armsContactId_ != nullptr;};
    void deleteArmsContactId() { this->armsContactId_ = nullptr;};
    inline int64_t armsContactId() const { DARABONBA_PTR_GET_DEFAULT(armsContactId_, 0L) };
    inline DescribeContactsResponseBodyPageBeanAlertContacts& setArmsContactId(int64_t armsContactId) { DARABONBA_PTR_SET_VALUE(armsContactId_, armsContactId) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline float contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0.0) };
    inline DescribeContactsResponseBodyPageBeanAlertContacts& setContactId(float contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline DescribeContactsResponseBodyPageBeanAlertContacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeContactsResponseBodyPageBeanAlertContacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // isEmailVerify Field Functions 
    bool hasIsEmailVerify() const { return this->isEmailVerify_ != nullptr;};
    void deleteIsEmailVerify() { this->isEmailVerify_ = nullptr;};
    inline bool isEmailVerify() const { DARABONBA_PTR_GET_DEFAULT(isEmailVerify_, false) };
    inline DescribeContactsResponseBodyPageBeanAlertContacts& setIsEmailVerify(bool isEmailVerify) { DARABONBA_PTR_SET_VALUE(isEmailVerify_, isEmailVerify) };


    // isVerify Field Functions 
    bool hasIsVerify() const { return this->isVerify_ != nullptr;};
    void deleteIsVerify() { this->isVerify_ = nullptr;};
    inline bool isVerify() const { DARABONBA_PTR_GET_DEFAULT(isVerify_, false) };
    inline DescribeContactsResponseBodyPageBeanAlertContacts& setIsVerify(bool isVerify) { DARABONBA_PTR_SET_VALUE(isVerify_, isVerify) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DescribeContactsResponseBodyPageBeanAlertContacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // reissueSendNotice Field Functions 
    bool hasReissueSendNotice() const { return this->reissueSendNotice_ != nullptr;};
    void deleteReissueSendNotice() { this->reissueSendNotice_ = nullptr;};
    inline int64_t reissueSendNotice() const { DARABONBA_PTR_GET_DEFAULT(reissueSendNotice_, 0L) };
    inline DescribeContactsResponseBodyPageBeanAlertContacts& setReissueSendNotice(int64_t reissueSendNotice) { DARABONBA_PTR_SET_VALUE(reissueSendNotice_, reissueSendNotice) };


  protected:
    // The ID of the alert contact.
    std::shared_ptr<int64_t> armsContactId_ = nullptr;
    // The ID of the alert contact.
    std::shared_ptr<float> contactId_ = nullptr;
    // The name of the alert contact.
    std::shared_ptr<string> contactName_ = nullptr;
    // The email address of the alert contact.
    std::shared_ptr<string> email_ = nullptr;
    // Indicates whether the email address was verified.
    std::shared_ptr<bool> isEmailVerify_ = nullptr;
    // Indicates whether the mobile number was verified. Valid values:
    // 
    // *   `false`: no
    // *   `true`: yes
    std::shared_ptr<bool> isVerify_ = nullptr;
    // The mobile number of the alert contact.
    std::shared_ptr<string> phone_ = nullptr;
    // The operation that you want to perform if phone calls fail to be answered. Valid values:
    // 
    // *   0: No operation is performed.
    // *   1: A phone call is made again.
    // *   2: A text message is sent.
    // *   3 (default value): The global default value is used.
    std::shared_ptr<int64_t> reissueSendNotice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
