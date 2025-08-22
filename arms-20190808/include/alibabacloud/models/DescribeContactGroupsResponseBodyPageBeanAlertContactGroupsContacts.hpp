// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPSRESPONSEBODYPAGEBEANALERTCONTACTGROUPSCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPSRESPONSEBODYPAGEBEANALERTCONTACTGROUPSCONTACTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& obj) { 
      DARABONBA_PTR_TO_JSON(ArmsContactId, armsContactId_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(ArmsContactId, armsContactId_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
    };
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts() = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts(const DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts &) = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts(DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts &&) = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts() = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& operator=(const DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts &) = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& operator=(DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->armsContactId_ != nullptr
        && this->contactId_ != nullptr && this->contactName_ != nullptr && this->email_ != nullptr && this->phone_ != nullptr; };
    // armsContactId Field Functions 
    bool hasArmsContactId() const { return this->armsContactId_ != nullptr;};
    void deleteArmsContactId() { this->armsContactId_ = nullptr;};
    inline int64_t armsContactId() const { DARABONBA_PTR_GET_DEFAULT(armsContactId_, 0L) };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& setArmsContactId(int64_t armsContactId) { DARABONBA_PTR_SET_VALUE(armsContactId_, armsContactId) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline float contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0.0) };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& setContactId(float contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    // The ID of the alert contact.
    std::shared_ptr<int64_t> armsContactId_ = nullptr;
    // The ID of the alert contact.
    std::shared_ptr<float> contactId_ = nullptr;
    // The name of the alert contact.
    std::shared_ptr<string> contactName_ = nullptr;
    // The email address of the alert contact.
    std::shared_ptr<string> email_ = nullptr;
    // The mobile number of the alert contact.
    std::shared_ptr<string> phone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
