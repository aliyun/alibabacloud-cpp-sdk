// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class UpdateUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(password, password_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(password, password_);
    };
    UpdateUserPasswordRequest() = default ;
    UpdateUserPasswordRequest(const UpdateUserPasswordRequest &) = default ;
    UpdateUserPasswordRequest(UpdateUserPasswordRequest &&) = default ;
    UpdateUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserPasswordRequest() = default ;
    UpdateUserPasswordRequest& operator=(const UpdateUserPasswordRequest &) = default ;
    UpdateUserPasswordRequest& operator=(UpdateUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateUserPasswordRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    shared_ptr<string> password_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
