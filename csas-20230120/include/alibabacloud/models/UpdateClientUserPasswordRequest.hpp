// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLIENTUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLIENTUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateClientUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClientUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClientUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    UpdateClientUserPasswordRequest() = default ;
    UpdateClientUserPasswordRequest(const UpdateClientUserPasswordRequest &) = default ;
    UpdateClientUserPasswordRequest(UpdateClientUserPasswordRequest &&) = default ;
    UpdateClientUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClientUserPasswordRequest() = default ;
    UpdateClientUserPasswordRequest& operator=(const UpdateClientUserPasswordRequest &) = default ;
    UpdateClientUserPasswordRequest& operator=(UpdateClientUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->password_ != nullptr && this->username_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateClientUserPasswordRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateClientUserPasswordRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline UpdateClientUserPasswordRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
