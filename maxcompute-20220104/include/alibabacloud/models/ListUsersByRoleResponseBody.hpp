// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSBYROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSBYROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListUsersByRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersByRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersByRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListUsersByRoleResponseBody() = default ;
    ListUsersByRoleResponseBody(const ListUsersByRoleResponseBody &) = default ;
    ListUsersByRoleResponseBody(ListUsersByRoleResponseBody &&) = default ;
    ListUsersByRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersByRoleResponseBody() = default ;
    ListUsersByRoleResponseBody& operator=(const ListUsersByRoleResponseBody &) = default ;
    ListUsersByRoleResponseBody& operator=(ListUsersByRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(users, users_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(users, users_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Users : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Users& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Users& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
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
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Users& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->users_ == nullptr; };
      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<Data::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<Data::Users>) };
      inline vector<Data::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<Data::Users>) };
      inline Data& setUsers(const vector<Data::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline Data& setUsers(vector<Data::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      shared_ptr<vector<Data::Users>> users_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListUsersByRoleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListUsersByRoleResponseBody::Data) };
    inline ListUsersByRoleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListUsersByRoleResponseBody::Data) };
    inline ListUsersByRoleResponseBody& setData(const ListUsersByRoleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUsersByRoleResponseBody& setData(ListUsersByRoleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersByRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListUsersByRoleResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
