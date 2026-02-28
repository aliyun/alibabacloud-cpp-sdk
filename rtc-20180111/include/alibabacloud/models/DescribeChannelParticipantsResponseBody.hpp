// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELPARTICIPANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELPARTICIPANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelParticipantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelParticipantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelParticipantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    DescribeChannelParticipantsResponseBody() = default ;
    DescribeChannelParticipantsResponseBody(const DescribeChannelParticipantsResponseBody &) = default ;
    DescribeChannelParticipantsResponseBody(DescribeChannelParticipantsResponseBody &&) = default ;
    DescribeChannelParticipantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelParticipantsResponseBody() = default ;
    DescribeChannelParticipantsResponseBody& operator=(const DescribeChannelParticipantsResponseBody &) = default ;
    DescribeChannelParticipantsResponseBody& operator=(DescribeChannelParticipantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      UserList() = default ;
      UserList(const UserList &) = default ;
      UserList(UserList &&) = default ;
      UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserList() = default ;
      UserList& operator=(const UserList &) = default ;
      UserList& operator=(UserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->user_ == nullptr; };
      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline const vector<string> & getUser() const { DARABONBA_PTR_GET_CONST(user_, vector<string>) };
      inline vector<string> getUser() { DARABONBA_PTR_GET(user_, vector<string>) };
      inline UserList& setUser(const vector<string> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
      inline UserList& setUser(vector<string> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


    protected:
      shared_ptr<vector<string>> user_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timestamp_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr && this->userList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelParticipantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline DescribeChannelParticipantsResponseBody& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeChannelParticipantsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeChannelParticipantsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const DescribeChannelParticipantsResponseBody::UserList & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, DescribeChannelParticipantsResponseBody::UserList) };
    inline DescribeChannelParticipantsResponseBody::UserList getUserList() { DARABONBA_PTR_GET(userList_, DescribeChannelParticipantsResponseBody::UserList) };
    inline DescribeChannelParticipantsResponseBody& setUserList(const DescribeChannelParticipantsResponseBody::UserList & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline DescribeChannelParticipantsResponseBody& setUserList(DescribeChannelParticipantsResponseBody::UserList && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> timestamp_ {};
    shared_ptr<int32_t> totalNum_ {};
    shared_ptr<int32_t> totalPage_ {};
    shared_ptr<DescribeChannelParticipantsResponseBody::UserList> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
