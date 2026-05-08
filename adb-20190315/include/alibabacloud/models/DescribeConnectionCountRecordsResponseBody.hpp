// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONNECTIONCOUNTRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONNECTIONCOUNTRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeConnectionCountRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConnectionCountRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessIpRecords, accessIpRecords_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserRecords, userRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConnectionCountRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessIpRecords, accessIpRecords_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserRecords, userRecords_);
    };
    DescribeConnectionCountRecordsResponseBody() = default ;
    DescribeConnectionCountRecordsResponseBody(const DescribeConnectionCountRecordsResponseBody &) = default ;
    DescribeConnectionCountRecordsResponseBody(DescribeConnectionCountRecordsResponseBody &&) = default ;
    DescribeConnectionCountRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConnectionCountRecordsResponseBody() = default ;
    DescribeConnectionCountRecordsResponseBody& operator=(const DescribeConnectionCountRecordsResponseBody &) = default ;
    DescribeConnectionCountRecordsResponseBody& operator=(DescribeConnectionCountRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserRecords& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, UserRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      UserRecords() = default ;
      UserRecords(const UserRecords &) = default ;
      UserRecords(UserRecords &&) = default ;
      UserRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserRecords() = default ;
      UserRecords& operator=(const UserRecords &) = default ;
      UserRecords& operator=(UserRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->user_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline UserRecords& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline UserRecords& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The number of connections.
      shared_ptr<int64_t> count_ {};
      // The username of the database account.
      shared_ptr<string> user_ {};
    };

    class AccessIpRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessIpRecords& obj) { 
        DARABONBA_PTR_TO_JSON(AccessIp, accessIp_);
        DARABONBA_PTR_TO_JSON(Count, count_);
      };
      friend void from_json(const Darabonba::Json& j, AccessIpRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessIp, accessIp_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
      };
      AccessIpRecords() = default ;
      AccessIpRecords(const AccessIpRecords &) = default ;
      AccessIpRecords(AccessIpRecords &&) = default ;
      AccessIpRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessIpRecords() = default ;
      AccessIpRecords& operator=(const AccessIpRecords &) = default ;
      AccessIpRecords& operator=(AccessIpRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessIp_ == nullptr
        && this->count_ == nullptr; };
      // accessIp Field Functions 
      bool hasAccessIp() const { return this->accessIp_ != nullptr;};
      void deleteAccessIp() { this->accessIp_ = nullptr;};
      inline string getAccessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
      inline AccessIpRecords& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline AccessIpRecords& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    protected:
      // The IP address of the client.
      shared_ptr<string> accessIp_ {};
      // The number of connections.
      shared_ptr<int64_t> count_ {};
    };

    virtual bool empty() const override { return this->accessIpRecords_ == nullptr
        && this->DBClusterId_ == nullptr && this->requestId_ == nullptr && this->userRecords_ == nullptr; };
    // accessIpRecords Field Functions 
    bool hasAccessIpRecords() const { return this->accessIpRecords_ != nullptr;};
    void deleteAccessIpRecords() { this->accessIpRecords_ = nullptr;};
    inline const vector<DescribeConnectionCountRecordsResponseBody::AccessIpRecords> & getAccessIpRecords() const { DARABONBA_PTR_GET_CONST(accessIpRecords_, vector<DescribeConnectionCountRecordsResponseBody::AccessIpRecords>) };
    inline vector<DescribeConnectionCountRecordsResponseBody::AccessIpRecords> getAccessIpRecords() { DARABONBA_PTR_GET(accessIpRecords_, vector<DescribeConnectionCountRecordsResponseBody::AccessIpRecords>) };
    inline DescribeConnectionCountRecordsResponseBody& setAccessIpRecords(const vector<DescribeConnectionCountRecordsResponseBody::AccessIpRecords> & accessIpRecords) { DARABONBA_PTR_SET_VALUE(accessIpRecords_, accessIpRecords) };
    inline DescribeConnectionCountRecordsResponseBody& setAccessIpRecords(vector<DescribeConnectionCountRecordsResponseBody::AccessIpRecords> && accessIpRecords) { DARABONBA_PTR_SET_RVALUE(accessIpRecords_, accessIpRecords) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeConnectionCountRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConnectionCountRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userRecords Field Functions 
    bool hasUserRecords() const { return this->userRecords_ != nullptr;};
    void deleteUserRecords() { this->userRecords_ = nullptr;};
    inline const vector<DescribeConnectionCountRecordsResponseBody::UserRecords> & getUserRecords() const { DARABONBA_PTR_GET_CONST(userRecords_, vector<DescribeConnectionCountRecordsResponseBody::UserRecords>) };
    inline vector<DescribeConnectionCountRecordsResponseBody::UserRecords> getUserRecords() { DARABONBA_PTR_GET(userRecords_, vector<DescribeConnectionCountRecordsResponseBody::UserRecords>) };
    inline DescribeConnectionCountRecordsResponseBody& setUserRecords(const vector<DescribeConnectionCountRecordsResponseBody::UserRecords> & userRecords) { DARABONBA_PTR_SET_VALUE(userRecords_, userRecords) };
    inline DescribeConnectionCountRecordsResponseBody& setUserRecords(vector<DescribeConnectionCountRecordsResponseBody::UserRecords> && userRecords) { DARABONBA_PTR_SET_RVALUE(userRecords_, userRecords) };


  protected:
    // The queried client IP addresses.
    shared_ptr<vector<DescribeConnectionCountRecordsResponseBody::AccessIpRecords>> accessIpRecords_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried database accounts.
    shared_ptr<vector<DescribeConnectionCountRecordsResponseBody::UserRecords>> userRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
