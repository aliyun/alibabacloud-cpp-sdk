// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeChannelUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InteractiveUserList, interactiveUserList_);
      DARABONBA_PTR_TO_JSON(InteractiveUserNumber, interactiveUserNumber_);
      DARABONBA_PTR_TO_JSON(IsChannelExists, isChannelExists_);
      DARABONBA_PTR_TO_JSON(LiveUserList, liveUserList_);
      DARABONBA_PTR_TO_JSON(LiveUserNumber, liveUserNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InteractiveUserList, interactiveUserList_);
      DARABONBA_PTR_FROM_JSON(InteractiveUserNumber, interactiveUserNumber_);
      DARABONBA_PTR_FROM_JSON(IsChannelExists, isChannelExists_);
      DARABONBA_PTR_FROM_JSON(LiveUserList, liveUserList_);
      DARABONBA_PTR_FROM_JSON(LiveUserNumber, liveUserNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
    virtual bool empty() const override { this->interactiveUserList_ != nullptr
        && this->interactiveUserNumber_ != nullptr && this->isChannelExists_ != nullptr && this->liveUserList_ != nullptr && this->liveUserNumber_ != nullptr && this->requestId_ != nullptr
        && this->timestamp_ != nullptr; };
    // interactiveUserList Field Functions 
    bool hasInteractiveUserList() const { return this->interactiveUserList_ != nullptr;};
    void deleteInteractiveUserList() { this->interactiveUserList_ = nullptr;};
    inline const vector<string> & interactiveUserList() const { DARABONBA_PTR_GET_CONST(interactiveUserList_, vector<string>) };
    inline vector<string> interactiveUserList() { DARABONBA_PTR_GET(interactiveUserList_, vector<string>) };
    inline DescribeChannelUsersResponseBody& setInteractiveUserList(const vector<string> & interactiveUserList) { DARABONBA_PTR_SET_VALUE(interactiveUserList_, interactiveUserList) };
    inline DescribeChannelUsersResponseBody& setInteractiveUserList(vector<string> && interactiveUserList) { DARABONBA_PTR_SET_RVALUE(interactiveUserList_, interactiveUserList) };


    // interactiveUserNumber Field Functions 
    bool hasInteractiveUserNumber() const { return this->interactiveUserNumber_ != nullptr;};
    void deleteInteractiveUserNumber() { this->interactiveUserNumber_ = nullptr;};
    inline int32_t interactiveUserNumber() const { DARABONBA_PTR_GET_DEFAULT(interactiveUserNumber_, 0) };
    inline DescribeChannelUsersResponseBody& setInteractiveUserNumber(int32_t interactiveUserNumber) { DARABONBA_PTR_SET_VALUE(interactiveUserNumber_, interactiveUserNumber) };


    // isChannelExists Field Functions 
    bool hasIsChannelExists() const { return this->isChannelExists_ != nullptr;};
    void deleteIsChannelExists() { this->isChannelExists_ = nullptr;};
    inline bool isChannelExists() const { DARABONBA_PTR_GET_DEFAULT(isChannelExists_, false) };
    inline DescribeChannelUsersResponseBody& setIsChannelExists(bool isChannelExists) { DARABONBA_PTR_SET_VALUE(isChannelExists_, isChannelExists) };


    // liveUserList Field Functions 
    bool hasLiveUserList() const { return this->liveUserList_ != nullptr;};
    void deleteLiveUserList() { this->liveUserList_ = nullptr;};
    inline const vector<string> & liveUserList() const { DARABONBA_PTR_GET_CONST(liveUserList_, vector<string>) };
    inline vector<string> liveUserList() { DARABONBA_PTR_GET(liveUserList_, vector<string>) };
    inline DescribeChannelUsersResponseBody& setLiveUserList(const vector<string> & liveUserList) { DARABONBA_PTR_SET_VALUE(liveUserList_, liveUserList) };
    inline DescribeChannelUsersResponseBody& setLiveUserList(vector<string> && liveUserList) { DARABONBA_PTR_SET_RVALUE(liveUserList_, liveUserList) };


    // liveUserNumber Field Functions 
    bool hasLiveUserNumber() const { return this->liveUserNumber_ != nullptr;};
    void deleteLiveUserNumber() { this->liveUserNumber_ = nullptr;};
    inline int32_t liveUserNumber() const { DARABONBA_PTR_GET_DEFAULT(liveUserNumber_, 0) };
    inline DescribeChannelUsersResponseBody& setLiveUserNumber(int32_t liveUserNumber) { DARABONBA_PTR_SET_VALUE(liveUserNumber_, liveUserNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeChannelUsersResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The list of streamers/co-streamers.
    std::shared_ptr<vector<string>> interactiveUserList_ = nullptr;
    // The number of co-streamers.
    std::shared_ptr<int32_t> interactiveUserNumber_ = nullptr;
    // Indicates whether the channel exists. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > After all users leave the channel, the system requires a few seconds to clear the cache. If you call the operation during this period, the value of this parameter is true, and the value of InteractiveUserNumber and LiveUserNumber is 0.
    std::shared_ptr<bool> isChannelExists_ = nullptr;
    // The list of viewers.
    std::shared_ptr<vector<string>> liveUserList_ = nullptr;
    // The number of viewers.
    std::shared_ptr<int32_t> liveUserNumber_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The UTC timestamp when the response is returned.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
