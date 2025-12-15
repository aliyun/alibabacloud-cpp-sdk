// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERSREQUESTUSER_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERSREQUESTUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DeleteUsersRequestUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUsersRequestUser& obj) { 
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUsersRequestUser& obj) { 
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DeleteUsersRequestUser() = default ;
    DeleteUsersRequestUser(const DeleteUsersRequestUser &) = default ;
    DeleteUsersRequestUser(DeleteUsersRequestUser &&) = default ;
    DeleteUsersRequestUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUsersRequestUser() = default ;
    DeleteUsersRequestUser& operator=(const DeleteUsersRequestUser &) = default ;
    DeleteUsersRequestUser& operator=(DeleteUsersRequestUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userName_ == nullptr; };
    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DeleteUsersRequestUser& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of user N that you want to delete.
    // 
    // Valid values of N: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
