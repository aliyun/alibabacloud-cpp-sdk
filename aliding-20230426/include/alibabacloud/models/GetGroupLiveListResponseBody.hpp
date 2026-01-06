// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPLIVELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPLIVELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetGroupLiveListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupLiveListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupLiveListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetGroupLiveListResponseBody() = default ;
    GetGroupLiveListResponseBody(const GetGroupLiveListResponseBody &) = default ;
    GetGroupLiveListResponseBody(GetGroupLiveListResponseBody &&) = default ;
    GetGroupLiveListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupLiveListResponseBody() = default ;
    GetGroupLiveListResponseBody& operator=(const GetGroupLiveListResponseBody &) = default ;
    GetGroupLiveListResponseBody& operator=(GetGroupLiveListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(GroupLiveList, groupLiveList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupLiveList, groupLiveList_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GroupLiveList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupLiveList& obj) { 
          DARABONBA_PTR_TO_JSON(AnchorNickname, anchorNickname_);
          DARABONBA_PTR_TO_JSON(AnchorUnionId, anchorUnionId_);
          DARABONBA_PTR_TO_JSON(LiveEndTime, liveEndTime_);
          DARABONBA_PTR_TO_JSON(LiveStartTime, liveStartTime_);
          DARABONBA_PTR_TO_JSON(LiveUuid, liveUuid_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, GroupLiveList& obj) { 
          DARABONBA_PTR_FROM_JSON(AnchorNickname, anchorNickname_);
          DARABONBA_PTR_FROM_JSON(AnchorUnionId, anchorUnionId_);
          DARABONBA_PTR_FROM_JSON(LiveEndTime, liveEndTime_);
          DARABONBA_PTR_FROM_JSON(LiveStartTime, liveStartTime_);
          DARABONBA_PTR_FROM_JSON(LiveUuid, liveUuid_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        GroupLiveList() = default ;
        GroupLiveList(const GroupLiveList &) = default ;
        GroupLiveList(GroupLiveList &&) = default ;
        GroupLiveList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupLiveList() = default ;
        GroupLiveList& operator=(const GroupLiveList &) = default ;
        GroupLiveList& operator=(GroupLiveList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->anchorNickname_ == nullptr
        && this->anchorUnionId_ == nullptr && this->liveEndTime_ == nullptr && this->liveStartTime_ == nullptr && this->liveUuid_ == nullptr && this->title_ == nullptr; };
        // anchorNickname Field Functions 
        bool hasAnchorNickname() const { return this->anchorNickname_ != nullptr;};
        void deleteAnchorNickname() { this->anchorNickname_ = nullptr;};
        inline string getAnchorNickname() const { DARABONBA_PTR_GET_DEFAULT(anchorNickname_, "") };
        inline GroupLiveList& setAnchorNickname(string anchorNickname) { DARABONBA_PTR_SET_VALUE(anchorNickname_, anchorNickname) };


        // anchorUnionId Field Functions 
        bool hasAnchorUnionId() const { return this->anchorUnionId_ != nullptr;};
        void deleteAnchorUnionId() { this->anchorUnionId_ = nullptr;};
        inline string getAnchorUnionId() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionId_, "") };
        inline GroupLiveList& setAnchorUnionId(string anchorUnionId) { DARABONBA_PTR_SET_VALUE(anchorUnionId_, anchorUnionId) };


        // liveEndTime Field Functions 
        bool hasLiveEndTime() const { return this->liveEndTime_ != nullptr;};
        void deleteLiveEndTime() { this->liveEndTime_ = nullptr;};
        inline int64_t getLiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(liveEndTime_, 0L) };
        inline GroupLiveList& setLiveEndTime(int64_t liveEndTime) { DARABONBA_PTR_SET_VALUE(liveEndTime_, liveEndTime) };


        // liveStartTime Field Functions 
        bool hasLiveStartTime() const { return this->liveStartTime_ != nullptr;};
        void deleteLiveStartTime() { this->liveStartTime_ = nullptr;};
        inline int64_t getLiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(liveStartTime_, 0L) };
        inline GroupLiveList& setLiveStartTime(int64_t liveStartTime) { DARABONBA_PTR_SET_VALUE(liveStartTime_, liveStartTime) };


        // liveUuid Field Functions 
        bool hasLiveUuid() const { return this->liveUuid_ != nullptr;};
        void deleteLiveUuid() { this->liveUuid_ = nullptr;};
        inline string getLiveUuid() const { DARABONBA_PTR_GET_DEFAULT(liveUuid_, "") };
        inline GroupLiveList& setLiveUuid(string liveUuid) { DARABONBA_PTR_SET_VALUE(liveUuid_, liveUuid) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline GroupLiveList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> anchorNickname_ {};
        shared_ptr<string> anchorUnionId_ {};
        shared_ptr<int64_t> liveEndTime_ {};
        shared_ptr<int64_t> liveStartTime_ {};
        shared_ptr<string> liveUuid_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->groupLiveList_ == nullptr; };
      // groupLiveList Field Functions 
      bool hasGroupLiveList() const { return this->groupLiveList_ != nullptr;};
      void deleteGroupLiveList() { this->groupLiveList_ = nullptr;};
      inline const vector<Result::GroupLiveList> & getGroupLiveList() const { DARABONBA_PTR_GET_CONST(groupLiveList_, vector<Result::GroupLiveList>) };
      inline vector<Result::GroupLiveList> getGroupLiveList() { DARABONBA_PTR_GET(groupLiveList_, vector<Result::GroupLiveList>) };
      inline Result& setGroupLiveList(const vector<Result::GroupLiveList> & groupLiveList) { DARABONBA_PTR_SET_VALUE(groupLiveList_, groupLiveList) };
      inline Result& setGroupLiveList(vector<Result::GroupLiveList> && groupLiveList) { DARABONBA_PTR_SET_RVALUE(groupLiveList_, groupLiveList) };


    protected:
      shared_ptr<vector<Result::GroupLiveList>> groupLiveList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGroupLiveListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetGroupLiveListResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetGroupLiveListResponseBody::Result) };
    inline GetGroupLiveListResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetGroupLiveListResponseBody::Result) };
    inline GetGroupLiveListResponseBody& setResult(const GetGroupLiveListResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetGroupLiveListResponseBody& setResult(GetGroupLiveListResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetGroupLiveListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetGroupLiveListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetGroupLiveListResponseBody::Result> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
