// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ChangeUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(NewPassword, newPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(NewPassword, newPassword_);
    };
    ChangeUserPasswordRequest() = default ;
    ChangeUserPasswordRequest(const ChangeUserPasswordRequest &) = default ;
    ChangeUserPasswordRequest(ChangeUserPasswordRequest &&) = default ;
    ChangeUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeUserPasswordRequest() = default ;
    ChangeUserPasswordRequest& operator=(const ChangeUserPasswordRequest &) = default ;
    ChangeUserPasswordRequest& operator=(ChangeUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endUserId_ != nullptr
        && this->newPassword_ != nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ChangeUserPasswordRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // newPassword Field Functions 
    bool hasNewPassword() const { return this->newPassword_ != nullptr;};
    void deleteNewPassword() { this->newPassword_ = nullptr;};
    inline string newPassword() const { DARABONBA_PTR_GET_DEFAULT(newPassword_, "") };
    inline ChangeUserPasswordRequest& setNewPassword(string newPassword) { DARABONBA_PTR_SET_VALUE(newPassword_, newPassword) };


  protected:
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> newPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
