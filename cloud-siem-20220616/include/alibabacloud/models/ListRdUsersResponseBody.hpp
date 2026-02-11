// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRDUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRDUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListRdUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRdUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRdUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRdUsersResponseBody() = default ;
    ListRdUsersResponseBody(const ListRdUsersResponseBody &) = default ;
    ListRdUsersResponseBody(ListRdUsersResponseBody &&) = default ;
    ListRdUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRdUsersResponseBody() = default ;
    ListRdUsersResponseBody& operator=(const ListRdUsersResponseBody &) = default ;
    ListRdUsersResponseBody& operator=(ListRdUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DelegatedOrNot, delegatedOrNot_);
        DARABONBA_PTR_TO_JSON(Joined, joined_);
        DARABONBA_PTR_TO_JSON(JoinedTime, joinedTime_);
        DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DelegatedOrNot, delegatedOrNot_);
        DARABONBA_PTR_FROM_JSON(Joined, joined_);
        DARABONBA_PTR_FROM_JSON(JoinedTime, joinedTime_);
        DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
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
      virtual bool empty() const override { return this->delegatedOrNot_ == nullptr
        && this->joined_ == nullptr && this->joinedTime_ == nullptr && this->mainUserId_ == nullptr && this->subUserId_ == nullptr && this->subUserName_ == nullptr; };
      // delegatedOrNot Field Functions 
      bool hasDelegatedOrNot() const { return this->delegatedOrNot_ != nullptr;};
      void deleteDelegatedOrNot() { this->delegatedOrNot_ = nullptr;};
      inline bool getDelegatedOrNot() const { DARABONBA_PTR_GET_DEFAULT(delegatedOrNot_, false) };
      inline Data& setDelegatedOrNot(bool delegatedOrNot) { DARABONBA_PTR_SET_VALUE(delegatedOrNot_, delegatedOrNot) };


      // joined Field Functions 
      bool hasJoined() const { return this->joined_ != nullptr;};
      void deleteJoined() { this->joined_ = nullptr;};
      inline bool getJoined() const { DARABONBA_PTR_GET_DEFAULT(joined_, false) };
      inline Data& setJoined(bool joined) { DARABONBA_PTR_SET_VALUE(joined_, joined) };


      // joinedTime Field Functions 
      bool hasJoinedTime() const { return this->joinedTime_ != nullptr;};
      void deleteJoinedTime() { this->joinedTime_ = nullptr;};
      inline string getJoinedTime() const { DARABONBA_PTR_GET_DEFAULT(joinedTime_, "") };
      inline Data& setJoinedTime(string joinedTime) { DARABONBA_PTR_SET_VALUE(joinedTime_, joinedTime) };


      // mainUserId Field Functions 
      bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
      void deleteMainUserId() { this->mainUserId_ = nullptr;};
      inline int64_t getMainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
      inline Data& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


      // subUserId Field Functions 
      bool hasSubUserId() const { return this->subUserId_ != nullptr;};
      void deleteSubUserId() { this->subUserId_ = nullptr;};
      inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
      inline Data& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


      // subUserName Field Functions 
      bool hasSubUserName() const { return this->subUserName_ != nullptr;};
      void deleteSubUserName() { this->subUserName_ = nullptr;};
      inline string getSubUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
      inline Data& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


    protected:
      // Indicates whether the account can be used to view the logs and alerts within the account.
      shared_ptr<bool> delegatedOrNot_ {};
      // Indicates whether the account is added to the threat analysis feature for centralized management. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> joined_ {};
      // The time when the account was added to the threat analysis feature.
      shared_ptr<string> joinedTime_ {};
      // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
      shared_ptr<int64_t> mainUserId_ {};
      // The ID of the Alibaba Cloud account that is used to perform operations supported by the threat analysis feature.
      shared_ptr<int64_t> subUserId_ {};
      // The username of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
      shared_ptr<string> subUserName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListRdUsersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListRdUsersResponseBody::Data>) };
    inline vector<ListRdUsersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListRdUsersResponseBody::Data>) };
    inline ListRdUsersResponseBody& setData(const vector<ListRdUsersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRdUsersResponseBody& setData(vector<ListRdUsersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRdUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListRdUsersResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
