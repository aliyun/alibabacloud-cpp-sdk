// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERBUSINESSFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERBUSINESSFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class AddUserBusinessFormRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserBusinessFormRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Company, company_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(Website, website_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserBusinessFormRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Company, company_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(Website, website_);
    };
    AddUserBusinessFormRequest() = default ;
    AddUserBusinessFormRequest(const AddUserBusinessFormRequest &) = default ;
    AddUserBusinessFormRequest(AddUserBusinessFormRequest &&) = default ;
    AddUserBusinessFormRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserBusinessFormRequest() = default ;
    AddUserBusinessFormRequest& operator=(const AddUserBusinessFormRequest &) = default ;
    AddUserBusinessFormRequest& operator=(AddUserBusinessFormRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->company_ == nullptr
        && this->email_ == nullptr && this->phoneNumber_ == nullptr && this->position_ == nullptr && this->remark_ == nullptr && this->userName_ == nullptr
        && this->website_ == nullptr; };
    // company Field Functions 
    bool hasCompany() const { return this->company_ != nullptr;};
    void deleteCompany() { this->company_ = nullptr;};
    inline string getCompany() const { DARABONBA_PTR_GET_DEFAULT(company_, "") };
    inline AddUserBusinessFormRequest& setCompany(string company) { DARABONBA_PTR_SET_VALUE(company_, company) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline AddUserBusinessFormRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline AddUserBusinessFormRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline AddUserBusinessFormRequest& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddUserBusinessFormRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline AddUserBusinessFormRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // website Field Functions 
    bool hasWebsite() const { return this->website_ != nullptr;};
    void deleteWebsite() { this->website_ = nullptr;};
    inline string getWebsite() const { DARABONBA_PTR_GET_DEFAULT(website_, "") };
    inline AddUserBusinessFormRequest& setWebsite(string website) { DARABONBA_PTR_SET_VALUE(website_, website) };


  protected:
    // The company.
    // 
    // This parameter is required.
    shared_ptr<string> company_ {};
    // The email address.
    // 
    // This parameter is required.
    shared_ptr<string> email_ {};
    // The phone number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // The job title.
    // 
    // This parameter is required.
    shared_ptr<string> position_ {};
    // Additional remarks.
    shared_ptr<string> remark_ {};
    // The username.
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
    // The company website.
    shared_ptr<string> website_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
