// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTCONTACTINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTCONTACTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class CreateJobRequestContactInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestContactInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Ding, ding_);
      DARABONBA_PTR_TO_JSON(UserMail, userMail_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserPhone, userPhone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestContactInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Ding, ding_);
      DARABONBA_PTR_FROM_JSON(UserMail, userMail_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserPhone, userPhone_);
    };
    CreateJobRequestContactInfo() = default ;
    CreateJobRequestContactInfo(const CreateJobRequestContactInfo &) = default ;
    CreateJobRequestContactInfo(CreateJobRequestContactInfo &&) = default ;
    CreateJobRequestContactInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestContactInfo() = default ;
    CreateJobRequestContactInfo& operator=(const CreateJobRequestContactInfo &) = default ;
    CreateJobRequestContactInfo& operator=(CreateJobRequestContactInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ding_ == nullptr
        && return this->userMail_ == nullptr && return this->userName_ == nullptr && return this->userPhone_ == nullptr; };
    // ding Field Functions 
    bool hasDing() const { return this->ding_ != nullptr;};
    void deleteDing() { this->ding_ = nullptr;};
    inline string ding() const { DARABONBA_PTR_GET_DEFAULT(ding_, "") };
    inline CreateJobRequestContactInfo& setDing(string ding) { DARABONBA_PTR_SET_VALUE(ding_, ding) };


    // userMail Field Functions 
    bool hasUserMail() const { return this->userMail_ != nullptr;};
    void deleteUserMail() { this->userMail_ = nullptr;};
    inline string userMail() const { DARABONBA_PTR_GET_DEFAULT(userMail_, "") };
    inline CreateJobRequestContactInfo& setUserMail(string userMail) { DARABONBA_PTR_SET_VALUE(userMail_, userMail) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateJobRequestContactInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userPhone Field Functions 
    bool hasUserPhone() const { return this->userPhone_ != nullptr;};
    void deleteUserPhone() { this->userPhone_ = nullptr;};
    inline string userPhone() const { DARABONBA_PTR_GET_DEFAULT(userPhone_, "") };
    inline CreateJobRequestContactInfo& setUserPhone(string userPhone) { DARABONBA_PTR_SET_VALUE(userPhone_, userPhone) };


  protected:
    // The webhook URL of the DingTalk chatbot.[](https://open.dingtalk.com/document/org/application-types)
    std::shared_ptr<string> ding_ = nullptr;
    // The email address of the alert contact.
    std::shared_ptr<string> userMail_ = nullptr;
    // The name of the alert contact.
    std::shared_ptr<string> userName_ = nullptr;
    // The mobile number of the alert contact.
    std::shared_ptr<string> userPhone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
