// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELPARTICIPANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELPARTICIPANTSRESPONSEBODY_HPP_
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
  class DescribeChannelParticipantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelParticipantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Times, times_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelParticipantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->times_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr && this->userList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelParticipantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int64_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0L) };
    inline DescribeChannelParticipantsResponseBody& setTimes(int64_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


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
    inline const vector<string> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<string>) };
    inline vector<string> getUserList() { DARABONBA_PTR_GET(userList_, vector<string>) };
    inline DescribeChannelParticipantsResponseBody& setUserList(const vector<string> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline DescribeChannelParticipantsResponseBody& setUserList(vector<string> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The time elapsed until the result was returned. Unit: seconds. The value is a UNIX timestamp.
    shared_ptr<int64_t> times_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalNum_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> totalPage_ {};
    // The list of user IDs.
    shared_ptr<vector<string>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
