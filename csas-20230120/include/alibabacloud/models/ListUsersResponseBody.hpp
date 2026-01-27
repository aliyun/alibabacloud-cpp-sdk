// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(IdpName, idpName_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(IdpName, idpName_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->department_ == nullptr
        && this->email_ == nullptr && this->idpName_ == nullptr && this->phone_ == nullptr && this->saseUserId_ == nullptr && this->status_ == nullptr
        && this->username_ == nullptr; };
      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline Users& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // idpName Field Functions 
      bool hasIdpName() const { return this->idpName_ != nullptr;};
      void deleteIdpName() { this->idpName_ = nullptr;};
      inline string getIdpName() const { DARABONBA_PTR_GET_DEFAULT(idpName_, "") };
      inline Users& setIdpName(string idpName) { DARABONBA_PTR_SET_VALUE(idpName_, idpName) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Users& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // saseUserId Field Functions 
      bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
      void deleteSaseUserId() { this->saseUserId_ = nullptr;};
      inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
      inline Users& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Users& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Users& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> department_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> idpName_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> saseUserId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalNum_ == nullptr && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListUsersResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersResponseBody::Users>) };
    inline vector<ListUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListUsersResponseBody::Users>) };
    inline ListUsersResponseBody& setUsers(const vector<ListUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersResponseBody& setUsers(vector<ListUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalNum_ {};
    shared_ptr<vector<ListUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
