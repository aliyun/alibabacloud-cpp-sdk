// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLLISTRESPONSEBODY_HPP_
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
  class DescribeCallListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallList, callList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallList, callList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeCallListResponseBody() = default ;
    DescribeCallListResponseBody(const DescribeCallListResponseBody &) = default ;
    DescribeCallListResponseBody(DescribeCallListResponseBody &&) = default ;
    DescribeCallListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallListResponseBody() = default ;
    DescribeCallListResponseBody& operator=(const DescribeCallListResponseBody &) = default ;
    DescribeCallListResponseBody& operator=(DescribeCallListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CallList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(BadExpUserCnt, badExpUserCnt_);
        DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(UserCnt, userCnt_);
      };
      friend void from_json(const Darabonba::Json& j, CallList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(BadExpUserCnt, badExpUserCnt_);
        DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(UserCnt, userCnt_);
      };
      CallList() = default ;
      CallList(const CallList &) = default ;
      CallList(CallList &&) = default ;
      CallList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallList() = default ;
      CallList& operator=(const CallList &) = default ;
      CallList& operator=(CallList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->badExpUserCnt_ == nullptr && this->callStatus_ == nullptr && this->channelId_ == nullptr && this->createdTs_ == nullptr && this->destroyedTs_ == nullptr
        && this->duration_ == nullptr && this->userCnt_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline CallList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // badExpUserCnt Field Functions 
      bool hasBadExpUserCnt() const { return this->badExpUserCnt_ != nullptr;};
      void deleteBadExpUserCnt() { this->badExpUserCnt_ = nullptr;};
      inline int32_t getBadExpUserCnt() const { DARABONBA_PTR_GET_DEFAULT(badExpUserCnt_, 0) };
      inline CallList& setBadExpUserCnt(int32_t badExpUserCnt) { DARABONBA_PTR_SET_VALUE(badExpUserCnt_, badExpUserCnt) };


      // callStatus Field Functions 
      bool hasCallStatus() const { return this->callStatus_ != nullptr;};
      void deleteCallStatus() { this->callStatus_ = nullptr;};
      inline string getCallStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
      inline CallList& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline CallList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline CallList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline CallList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline CallList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // userCnt Field Functions 
      bool hasUserCnt() const { return this->userCnt_ != nullptr;};
      void deleteUserCnt() { this->userCnt_ = nullptr;};
      inline int32_t getUserCnt() const { DARABONBA_PTR_GET_DEFAULT(userCnt_, 0) };
      inline CallList& setUserCnt(int32_t userCnt) { DARABONBA_PTR_SET_VALUE(userCnt_, userCnt) };


    protected:
      // App ID。
      shared_ptr<string> appId_ {};
      shared_ptr<int32_t> badExpUserCnt_ {};
      shared_ptr<string> callStatus_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int32_t> userCnt_ {};
    };

    virtual bool empty() const override { return this->callList_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCnt_ == nullptr; };
    // callList Field Functions 
    bool hasCallList() const { return this->callList_ != nullptr;};
    void deleteCallList() { this->callList_ = nullptr;};
    inline const vector<DescribeCallListResponseBody::CallList> & getCallList() const { DARABONBA_PTR_GET_CONST(callList_, vector<DescribeCallListResponseBody::CallList>) };
    inline vector<DescribeCallListResponseBody::CallList> getCallList() { DARABONBA_PTR_GET(callList_, vector<DescribeCallListResponseBody::CallList>) };
    inline DescribeCallListResponseBody& setCallList(const vector<DescribeCallListResponseBody::CallList> & callList) { DARABONBA_PTR_SET_VALUE(callList_, callList) };
    inline DescribeCallListResponseBody& setCallList(vector<DescribeCallListResponseBody::CallList> && callList) { DARABONBA_PTR_SET_RVALUE(callList_, callList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeCallListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCallListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCallListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int32_t getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
    inline DescribeCallListResponseBody& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    shared_ptr<vector<DescribeCallListResponseBody::CallList>> callList_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCnt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
