// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERSRESPONSEBODY_HPP_
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
  class DescribeChannelUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelProfile, channelProfile_);
      DARABONBA_PTR_TO_JSON(CommTotalNum, commTotalNum_);
      DARABONBA_PTR_TO_JSON(InteractiveUserList, interactiveUserList_);
      DARABONBA_PTR_TO_JSON(InteractiveUserNum, interactiveUserNum_);
      DARABONBA_PTR_TO_JSON(IsChannelExist, isChannelExist_);
      DARABONBA_PTR_TO_JSON(LiveUserList, liveUserList_);
      DARABONBA_PTR_TO_JSON(LiveUserNum, liveUserNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelProfile, channelProfile_);
      DARABONBA_PTR_FROM_JSON(CommTotalNum, commTotalNum_);
      DARABONBA_PTR_FROM_JSON(InteractiveUserList, interactiveUserList_);
      DARABONBA_PTR_FROM_JSON(InteractiveUserNum, interactiveUserNum_);
      DARABONBA_PTR_FROM_JSON(IsChannelExist, isChannelExist_);
      DARABONBA_PTR_FROM_JSON(LiveUserList, liveUserList_);
      DARABONBA_PTR_FROM_JSON(LiveUserNum, liveUserNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    DescribeChannelUsersResponseBody() = default ;
    DescribeChannelUsersResponseBody(const DescribeChannelUsersResponseBody &) = default ;
    DescribeChannelUsersResponseBody(DescribeChannelUsersResponseBody &&) = default ;
    DescribeChannelUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelUsersResponseBody() = default ;
    DescribeChannelUsersResponseBody& operator=(const DescribeChannelUsersResponseBody &) = default ;
    DescribeChannelUsersResponseBody& operator=(DescribeChannelUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelProfile_ == nullptr
        && return this->commTotalNum_ == nullptr && return this->interactiveUserList_ == nullptr && return this->interactiveUserNum_ == nullptr && return this->isChannelExist_ == nullptr && return this->liveUserList_ == nullptr
        && return this->liveUserNum_ == nullptr && return this->requestId_ == nullptr && return this->timestamp_ == nullptr && return this->userList_ == nullptr; };
    // channelProfile Field Functions 
    bool hasChannelProfile() const { return this->channelProfile_ != nullptr;};
    void deleteChannelProfile() { this->channelProfile_ = nullptr;};
    inline int32_t channelProfile() const { DARABONBA_PTR_GET_DEFAULT(channelProfile_, 0) };
    inline DescribeChannelUsersResponseBody& setChannelProfile(int32_t channelProfile) { DARABONBA_PTR_SET_VALUE(channelProfile_, channelProfile) };


    // commTotalNum Field Functions 
    bool hasCommTotalNum() const { return this->commTotalNum_ != nullptr;};
    void deleteCommTotalNum() { this->commTotalNum_ = nullptr;};
    inline int32_t commTotalNum() const { DARABONBA_PTR_GET_DEFAULT(commTotalNum_, 0) };
    inline DescribeChannelUsersResponseBody& setCommTotalNum(int32_t commTotalNum) { DARABONBA_PTR_SET_VALUE(commTotalNum_, commTotalNum) };


    // interactiveUserList Field Functions 
    bool hasInteractiveUserList() const { return this->interactiveUserList_ != nullptr;};
    void deleteInteractiveUserList() { this->interactiveUserList_ = nullptr;};
    inline const vector<string> & interactiveUserList() const { DARABONBA_PTR_GET_CONST(interactiveUserList_, vector<string>) };
    inline vector<string> interactiveUserList() { DARABONBA_PTR_GET(interactiveUserList_, vector<string>) };
    inline DescribeChannelUsersResponseBody& setInteractiveUserList(const vector<string> & interactiveUserList) { DARABONBA_PTR_SET_VALUE(interactiveUserList_, interactiveUserList) };
    inline DescribeChannelUsersResponseBody& setInteractiveUserList(vector<string> && interactiveUserList) { DARABONBA_PTR_SET_RVALUE(interactiveUserList_, interactiveUserList) };


    // interactiveUserNum Field Functions 
    bool hasInteractiveUserNum() const { return this->interactiveUserNum_ != nullptr;};
    void deleteInteractiveUserNum() { this->interactiveUserNum_ = nullptr;};
    inline int32_t interactiveUserNum() const { DARABONBA_PTR_GET_DEFAULT(interactiveUserNum_, 0) };
    inline DescribeChannelUsersResponseBody& setInteractiveUserNum(int32_t interactiveUserNum) { DARABONBA_PTR_SET_VALUE(interactiveUserNum_, interactiveUserNum) };


    // isChannelExist Field Functions 
    bool hasIsChannelExist() const { return this->isChannelExist_ != nullptr;};
    void deleteIsChannelExist() { this->isChannelExist_ = nullptr;};
    inline bool isChannelExist() const { DARABONBA_PTR_GET_DEFAULT(isChannelExist_, false) };
    inline DescribeChannelUsersResponseBody& setIsChannelExist(bool isChannelExist) { DARABONBA_PTR_SET_VALUE(isChannelExist_, isChannelExist) };


    // liveUserList Field Functions 
    bool hasLiveUserList() const { return this->liveUserList_ != nullptr;};
    void deleteLiveUserList() { this->liveUserList_ = nullptr;};
    inline const vector<string> & liveUserList() const { DARABONBA_PTR_GET_CONST(liveUserList_, vector<string>) };
    inline vector<string> liveUserList() { DARABONBA_PTR_GET(liveUserList_, vector<string>) };
    inline DescribeChannelUsersResponseBody& setLiveUserList(const vector<string> & liveUserList) { DARABONBA_PTR_SET_VALUE(liveUserList_, liveUserList) };
    inline DescribeChannelUsersResponseBody& setLiveUserList(vector<string> && liveUserList) { DARABONBA_PTR_SET_RVALUE(liveUserList_, liveUserList) };


    // liveUserNum Field Functions 
    bool hasLiveUserNum() const { return this->liveUserNum_ != nullptr;};
    void deleteLiveUserNum() { this->liveUserNum_ = nullptr;};
    inline int32_t liveUserNum() const { DARABONBA_PTR_GET_DEFAULT(liveUserNum_, 0) };
    inline DescribeChannelUsersResponseBody& setLiveUserNum(int32_t liveUserNum) { DARABONBA_PTR_SET_VALUE(liveUserNum_, liveUserNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline DescribeChannelUsersResponseBody& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<string> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<string>) };
    inline vector<string> userList() { DARABONBA_PTR_GET(userList_, vector<string>) };
    inline DescribeChannelUsersResponseBody& setUserList(const vector<string> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline DescribeChannelUsersResponseBody& setUserList(vector<string> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<int32_t> channelProfile_ = nullptr;
    std::shared_ptr<int32_t> commTotalNum_ = nullptr;
    std::shared_ptr<vector<string>> interactiveUserList_ = nullptr;
    std::shared_ptr<int32_t> interactiveUserNum_ = nullptr;
    std::shared_ptr<bool> isChannelExist_ = nullptr;
    std::shared_ptr<vector<string>> liveUserList_ = nullptr;
    std::shared_ptr<int32_t> liveUserNum_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> timestamp_ = nullptr;
    std::shared_ptr<vector<string>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
