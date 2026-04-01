// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTMASKINGPRIVILEGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTMASKINGPRIVILEGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAccountMaskingPrivilegeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountMaskingPrivilegeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountMaskingPrivilegeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountMaskingPrivilegeResponseBody() = default ;
    DescribeAccountMaskingPrivilegeResponseBody(const DescribeAccountMaskingPrivilegeResponseBody &) = default ;
    DescribeAccountMaskingPrivilegeResponseBody(DescribeAccountMaskingPrivilegeResponseBody &&) = default ;
    DescribeAccountMaskingPrivilegeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountMaskingPrivilegeResponseBody() = default ;
    DescribeAccountMaskingPrivilegeResponseBody& operator=(const DescribeAccountMaskingPrivilegeResponseBody &) = default ;
    DescribeAccountMaskingPrivilegeResponseBody& operator=(DescribeAccountMaskingPrivilegeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(UserPrivilege, userPrivilege_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(UserPrivilege, userPrivilege_);
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
      class UserPrivilege : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserPrivilege& obj) { 
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Privilege, privilege_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, UserPrivilege& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        UserPrivilege() = default ;
        UserPrivilege(const UserPrivilege &) = default ;
        UserPrivilege(UserPrivilege &&) = default ;
        UserPrivilege(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserPrivilege() = default ;
        UserPrivilege& operator=(const UserPrivilege &) = default ;
        UserPrivilege& operator=(UserPrivilege &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->privilege_ == nullptr && this->userName_ == nullptr; };
        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline UserPrivilege& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // privilege Field Functions 
        bool hasPrivilege() const { return this->privilege_ != nullptr;};
        void deletePrivilege() { this->privilege_ = nullptr;};
        inline string getPrivilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
        inline UserPrivilege& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline UserPrivilege& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> privilege_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->userPrivilege_ == nullptr; };
      // userPrivilege Field Functions 
      bool hasUserPrivilege() const { return this->userPrivilege_ != nullptr;};
      void deleteUserPrivilege() { this->userPrivilege_ = nullptr;};
      inline const vector<Data::UserPrivilege> & getUserPrivilege() const { DARABONBA_PTR_GET_CONST(userPrivilege_, vector<Data::UserPrivilege>) };
      inline vector<Data::UserPrivilege> getUserPrivilege() { DARABONBA_PTR_GET(userPrivilege_, vector<Data::UserPrivilege>) };
      inline Data& setUserPrivilege(const vector<Data::UserPrivilege> & userPrivilege) { DARABONBA_PTR_SET_VALUE(userPrivilege_, userPrivilege) };
      inline Data& setUserPrivilege(vector<Data::UserPrivilege> && userPrivilege) { DARABONBA_PTR_SET_RVALUE(userPrivilege_, userPrivilege) };


    protected:
      shared_ptr<vector<Data::UserPrivilege>> userPrivilege_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAccountMaskingPrivilegeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAccountMaskingPrivilegeResponseBody::Data) };
    inline DescribeAccountMaskingPrivilegeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAccountMaskingPrivilegeResponseBody::Data) };
    inline DescribeAccountMaskingPrivilegeResponseBody& setData(const DescribeAccountMaskingPrivilegeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAccountMaskingPrivilegeResponseBody& setData(DescribeAccountMaskingPrivilegeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountMaskingPrivilegeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAccountMaskingPrivilegeResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
