// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELPARTICIPANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELPARTICIPANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeChannelParticipantsResponseBodyUserList.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->timestamp_ != nullptr && this->totalNum_ != nullptr && this->totalPage_ != nullptr && this->userList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelParticipantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline DescribeChannelParticipantsResponseBody& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeChannelParticipantsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeChannelParticipantsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const DescribeChannelParticipantsResponseBodyUserList & userList() const { DARABONBA_PTR_GET_CONST(userList_, DescribeChannelParticipantsResponseBodyUserList) };
    inline DescribeChannelParticipantsResponseBodyUserList userList() { DARABONBA_PTR_GET(userList_, DescribeChannelParticipantsResponseBodyUserList) };
    inline DescribeChannelParticipantsResponseBody& setUserList(const DescribeChannelParticipantsResponseBodyUserList & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline DescribeChannelParticipantsResponseBody& setUserList(DescribeChannelParticipantsResponseBodyUserList && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> timestamp_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    std::shared_ptr<int32_t> totalPage_ = nullptr;
    std::shared_ptr<DescribeChannelParticipantsResponseBodyUserList> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
