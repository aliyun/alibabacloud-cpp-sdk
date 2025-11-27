// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODYCREATERESULTCREATEDUSERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODYCREATERESULTCREATEDUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateUsersResponseBodyCreateResultCreatedUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersResponseBodyCreateResultCreatedUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersResponseBodyCreateResultCreatedUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    CreateUsersResponseBodyCreateResultCreatedUsers() = default ;
    CreateUsersResponseBodyCreateResultCreatedUsers(const CreateUsersResponseBodyCreateResultCreatedUsers &) = default ;
    CreateUsersResponseBodyCreateResultCreatedUsers(CreateUsersResponseBodyCreateResultCreatedUsers &&) = default ;
    CreateUsersResponseBodyCreateResultCreatedUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersResponseBodyCreateResultCreatedUsers() = default ;
    CreateUsersResponseBodyCreateResultCreatedUsers& operator=(const CreateUsersResponseBodyCreateResultCreatedUsers &) = default ;
    CreateUsersResponseBodyCreateResultCreatedUsers& operator=(CreateUsersResponseBodyCreateResultCreatedUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->endUserId_ == nullptr && return this->phone_ == nullptr && return this->realNickName_ == nullptr && return this->remark_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateUsersResponseBodyCreateResultCreatedUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CreateUsersResponseBodyCreateResultCreatedUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateUsersResponseBodyCreateResultCreatedUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realNickName Field Functions 
    bool hasRealNickName() const { return this->realNickName_ != nullptr;};
    void deleteRealNickName() { this->realNickName_ = nullptr;};
    inline string realNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
    inline CreateUsersResponseBodyCreateResultCreatedUsers& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateUsersResponseBodyCreateResultCreatedUsers& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The email address of the end user.
    std::shared_ptr<string> email_ = nullptr;
    // The name of the end user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The mobile number of the end user.
    std::shared_ptr<string> phone_ = nullptr;
    // The display name of the end user.
    std::shared_ptr<string> realNickName_ = nullptr;
    // The remarks of the end user.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
