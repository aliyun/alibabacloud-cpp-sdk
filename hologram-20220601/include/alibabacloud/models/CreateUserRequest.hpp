// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class CreateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(superUser, superUser_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(superUser, superUser_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    CreateUserRequest() = default ;
    CreateUserRequest(const CreateUserRequest &) = default ;
    CreateUserRequest(CreateUserRequest &&) = default ;
    CreateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserRequest() = default ;
    CreateUserRequest& operator=(const CreateUserRequest &) = default ;
    CreateUserRequest& operator=(CreateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->superUser_ == nullptr
        && this->userName_ == nullptr; };
    // superUser Field Functions 
    bool hasSuperUser() const { return this->superUser_ != nullptr;};
    void deleteSuperUser() { this->superUser_ = nullptr;};
    inline bool getSuperUser() const { DARABONBA_PTR_GET_DEFAULT(superUser_, false) };
    inline CreateUserRequest& setSuperUser(bool superUser) { DARABONBA_PTR_SET_VALUE(superUser_, superUser) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<bool> superUser_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
