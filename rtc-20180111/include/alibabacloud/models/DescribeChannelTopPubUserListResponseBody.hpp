// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELTOPPUBUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELTOPPUBUSERLISTRESPONSEBODY_HPP_
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
  class DescribeChannelTopPubUserListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelTopPubUserListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopPubUserDetailList, topPubUserDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelTopPubUserListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopPubUserDetailList, topPubUserDetailList_);
    };
    DescribeChannelTopPubUserListResponseBody() = default ;
    DescribeChannelTopPubUserListResponseBody(const DescribeChannelTopPubUserListResponseBody &) = default ;
    DescribeChannelTopPubUserListResponseBody(DescribeChannelTopPubUserListResponseBody &&) = default ;
    DescribeChannelTopPubUserListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelTopPubUserListResponseBody() = default ;
    DescribeChannelTopPubUserListResponseBody& operator=(const DescribeChannelTopPubUserListResponseBody &) = default ;
    DescribeChannelTopPubUserListResponseBody& operator=(DescribeChannelTopPubUserListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopPubUserDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopPubUserDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(OnlineDuration, onlineDuration_);
        DARABONBA_PTR_TO_JSON(OnlinePeriods, onlinePeriods_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TopPubUserDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(OnlineDuration, onlineDuration_);
        DARABONBA_PTR_FROM_JSON(OnlinePeriods, onlinePeriods_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      TopPubUserDetailList() = default ;
      TopPubUserDetailList(const TopPubUserDetailList &) = default ;
      TopPubUserDetailList(TopPubUserDetailList &&) = default ;
      TopPubUserDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopPubUserDetailList() = default ;
      TopPubUserDetailList& operator=(const TopPubUserDetailList &) = default ;
      TopPubUserDetailList& operator=(TopPubUserDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OnlinePeriods : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OnlinePeriods& obj) { 
          DARABONBA_PTR_TO_JSON(JoinTs, joinTs_);
          DARABONBA_PTR_TO_JSON(LeaveTs, leaveTs_);
        };
        friend void from_json(const Darabonba::Json& j, OnlinePeriods& obj) { 
          DARABONBA_PTR_FROM_JSON(JoinTs, joinTs_);
          DARABONBA_PTR_FROM_JSON(LeaveTs, leaveTs_);
        };
        OnlinePeriods() = default ;
        OnlinePeriods(const OnlinePeriods &) = default ;
        OnlinePeriods(OnlinePeriods &&) = default ;
        OnlinePeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OnlinePeriods() = default ;
        OnlinePeriods& operator=(const OnlinePeriods &) = default ;
        OnlinePeriods& operator=(OnlinePeriods &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->joinTs_ == nullptr
        && this->leaveTs_ == nullptr; };
        // joinTs Field Functions 
        bool hasJoinTs() const { return this->joinTs_ != nullptr;};
        void deleteJoinTs() { this->joinTs_ = nullptr;};
        inline int64_t getJoinTs() const { DARABONBA_PTR_GET_DEFAULT(joinTs_, 0L) };
        inline OnlinePeriods& setJoinTs(int64_t joinTs) { DARABONBA_PTR_SET_VALUE(joinTs_, joinTs) };


        // leaveTs Field Functions 
        bool hasLeaveTs() const { return this->leaveTs_ != nullptr;};
        void deleteLeaveTs() { this->leaveTs_ = nullptr;};
        inline int64_t getLeaveTs() const { DARABONBA_PTR_GET_DEFAULT(leaveTs_, 0L) };
        inline OnlinePeriods& setLeaveTs(int64_t leaveTs) { DARABONBA_PTR_SET_VALUE(leaveTs_, leaveTs) };


      protected:
        shared_ptr<int64_t> joinTs_ {};
        shared_ptr<int64_t> leaveTs_ {};
      };

      virtual bool empty() const override { return this->createdTs_ == nullptr
        && this->destroyedTs_ == nullptr && this->duration_ == nullptr && this->location_ == nullptr && this->onlineDuration_ == nullptr && this->onlinePeriods_ == nullptr
        && this->userId_ == nullptr; };
      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline TopPubUserDetailList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline TopPubUserDetailList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline TopPubUserDetailList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline TopPubUserDetailList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // onlineDuration Field Functions 
      bool hasOnlineDuration() const { return this->onlineDuration_ != nullptr;};
      void deleteOnlineDuration() { this->onlineDuration_ = nullptr;};
      inline int64_t getOnlineDuration() const { DARABONBA_PTR_GET_DEFAULT(onlineDuration_, 0L) };
      inline TopPubUserDetailList& setOnlineDuration(int64_t onlineDuration) { DARABONBA_PTR_SET_VALUE(onlineDuration_, onlineDuration) };


      // onlinePeriods Field Functions 
      bool hasOnlinePeriods() const { return this->onlinePeriods_ != nullptr;};
      void deleteOnlinePeriods() { this->onlinePeriods_ = nullptr;};
      inline const vector<TopPubUserDetailList::OnlinePeriods> & getOnlinePeriods() const { DARABONBA_PTR_GET_CONST(onlinePeriods_, vector<TopPubUserDetailList::OnlinePeriods>) };
      inline vector<TopPubUserDetailList::OnlinePeriods> getOnlinePeriods() { DARABONBA_PTR_GET(onlinePeriods_, vector<TopPubUserDetailList::OnlinePeriods>) };
      inline TopPubUserDetailList& setOnlinePeriods(const vector<TopPubUserDetailList::OnlinePeriods> & onlinePeriods) { DARABONBA_PTR_SET_VALUE(onlinePeriods_, onlinePeriods) };
      inline TopPubUserDetailList& setOnlinePeriods(vector<TopPubUserDetailList::OnlinePeriods> && onlinePeriods) { DARABONBA_PTR_SET_RVALUE(onlinePeriods_, onlinePeriods) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TopPubUserDetailList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> location_ {};
      shared_ptr<int64_t> onlineDuration_ {};
      shared_ptr<vector<TopPubUserDetailList::OnlinePeriods>> onlinePeriods_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->topPubUserDetailList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelTopPubUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topPubUserDetailList Field Functions 
    bool hasTopPubUserDetailList() const { return this->topPubUserDetailList_ != nullptr;};
    void deleteTopPubUserDetailList() { this->topPubUserDetailList_ = nullptr;};
    inline const vector<DescribeChannelTopPubUserListResponseBody::TopPubUserDetailList> & getTopPubUserDetailList() const { DARABONBA_PTR_GET_CONST(topPubUserDetailList_, vector<DescribeChannelTopPubUserListResponseBody::TopPubUserDetailList>) };
    inline vector<DescribeChannelTopPubUserListResponseBody::TopPubUserDetailList> getTopPubUserDetailList() { DARABONBA_PTR_GET(topPubUserDetailList_, vector<DescribeChannelTopPubUserListResponseBody::TopPubUserDetailList>) };
    inline DescribeChannelTopPubUserListResponseBody& setTopPubUserDetailList(const vector<DescribeChannelTopPubUserListResponseBody::TopPubUserDetailList> & topPubUserDetailList) { DARABONBA_PTR_SET_VALUE(topPubUserDetailList_, topPubUserDetailList) };
    inline DescribeChannelTopPubUserListResponseBody& setTopPubUserDetailList(vector<DescribeChannelTopPubUserListResponseBody::TopPubUserDetailList> && topPubUserDetailList) { DARABONBA_PTR_SET_RVALUE(topPubUserDetailList_, topPubUserDetailList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeChannelTopPubUserListResponseBody::TopPubUserDetailList>> topPubUserDetailList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
