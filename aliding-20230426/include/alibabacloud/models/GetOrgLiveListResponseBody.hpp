// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODY_HPP_
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
  class GetOrgLiveListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgLiveListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgLiveListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetOrgLiveListResponseBody() = default ;
    GetOrgLiveListResponseBody(const GetOrgLiveListResponseBody &) = default ;
    GetOrgLiveListResponseBody(GetOrgLiveListResponseBody &&) = default ;
    GetOrgLiveListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgLiveListResponseBody() = default ;
    GetOrgLiveListResponseBody& operator=(const GetOrgLiveListResponseBody &) = default ;
    GetOrgLiveListResponseBody& operator=(GetOrgLiveListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(NewLive, newLive_);
        DARABONBA_PTR_TO_JSON(UpdateLive, updateLive_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(NewLive, newLive_);
        DARABONBA_PTR_FROM_JSON(UpdateLive, updateLive_);
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
      class UpdateLive : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpdateLive& obj) { 
          DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
          DARABONBA_PTR_TO_JSON(LiveList, liveList_);
          DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, UpdateLive& obj) { 
          DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
          DARABONBA_PTR_FROM_JSON(LiveList, liveList_);
          DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        UpdateLive() = default ;
        UpdateLive(const UpdateLive &) = default ;
        UpdateLive(UpdateLive &&) = default ;
        UpdateLive(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpdateLive() = default ;
        UpdateLive& operator=(const UpdateLive &) = default ;
        UpdateLive& operator=(UpdateLive &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LiveList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LiveList& obj) { 
            DARABONBA_PTR_TO_JSON(AnchorNickname, anchorNickname_);
            DARABONBA_PTR_TO_JSON(AnchorUnionId, anchorUnionId_);
            DARABONBA_PTR_TO_JSON(AnchorUnionIdInAlibaba, anchorUnionIdInAlibaba_);
            DARABONBA_PTR_TO_JSON(AnchorUserId, anchorUserId_);
            DARABONBA_PTR_TO_JSON(LiveEndTime, liveEndTime_);
            DARABONBA_PTR_TO_JSON(LiveStartTime, liveStartTime_);
            DARABONBA_PTR_TO_JSON(LiveUuid, liveUuid_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, LiveList& obj) { 
            DARABONBA_PTR_FROM_JSON(AnchorNickname, anchorNickname_);
            DARABONBA_PTR_FROM_JSON(AnchorUnionId, anchorUnionId_);
            DARABONBA_PTR_FROM_JSON(AnchorUnionIdInAlibaba, anchorUnionIdInAlibaba_);
            DARABONBA_PTR_FROM_JSON(AnchorUserId, anchorUserId_);
            DARABONBA_PTR_FROM_JSON(LiveEndTime, liveEndTime_);
            DARABONBA_PTR_FROM_JSON(LiveStartTime, liveStartTime_);
            DARABONBA_PTR_FROM_JSON(LiveUuid, liveUuid_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          LiveList() = default ;
          LiveList(const LiveList &) = default ;
          LiveList(LiveList &&) = default ;
          LiveList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LiveList() = default ;
          LiveList& operator=(const LiveList &) = default ;
          LiveList& operator=(LiveList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->anchorNickname_ == nullptr
        && this->anchorUnionId_ == nullptr && this->anchorUnionIdInAlibaba_ == nullptr && this->anchorUserId_ == nullptr && this->liveEndTime_ == nullptr && this->liveStartTime_ == nullptr
        && this->liveUuid_ == nullptr && this->title_ == nullptr; };
          // anchorNickname Field Functions 
          bool hasAnchorNickname() const { return this->anchorNickname_ != nullptr;};
          void deleteAnchorNickname() { this->anchorNickname_ = nullptr;};
          inline string getAnchorNickname() const { DARABONBA_PTR_GET_DEFAULT(anchorNickname_, "") };
          inline LiveList& setAnchorNickname(string anchorNickname) { DARABONBA_PTR_SET_VALUE(anchorNickname_, anchorNickname) };


          // anchorUnionId Field Functions 
          bool hasAnchorUnionId() const { return this->anchorUnionId_ != nullptr;};
          void deleteAnchorUnionId() { this->anchorUnionId_ = nullptr;};
          inline string getAnchorUnionId() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionId_, "") };
          inline LiveList& setAnchorUnionId(string anchorUnionId) { DARABONBA_PTR_SET_VALUE(anchorUnionId_, anchorUnionId) };


          // anchorUnionIdInAlibaba Field Functions 
          bool hasAnchorUnionIdInAlibaba() const { return this->anchorUnionIdInAlibaba_ != nullptr;};
          void deleteAnchorUnionIdInAlibaba() { this->anchorUnionIdInAlibaba_ = nullptr;};
          inline string getAnchorUnionIdInAlibaba() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionIdInAlibaba_, "") };
          inline LiveList& setAnchorUnionIdInAlibaba(string anchorUnionIdInAlibaba) { DARABONBA_PTR_SET_VALUE(anchorUnionIdInAlibaba_, anchorUnionIdInAlibaba) };


          // anchorUserId Field Functions 
          bool hasAnchorUserId() const { return this->anchorUserId_ != nullptr;};
          void deleteAnchorUserId() { this->anchorUserId_ = nullptr;};
          inline string getAnchorUserId() const { DARABONBA_PTR_GET_DEFAULT(anchorUserId_, "") };
          inline LiveList& setAnchorUserId(string anchorUserId) { DARABONBA_PTR_SET_VALUE(anchorUserId_, anchorUserId) };


          // liveEndTime Field Functions 
          bool hasLiveEndTime() const { return this->liveEndTime_ != nullptr;};
          void deleteLiveEndTime() { this->liveEndTime_ = nullptr;};
          inline int64_t getLiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(liveEndTime_, 0L) };
          inline LiveList& setLiveEndTime(int64_t liveEndTime) { DARABONBA_PTR_SET_VALUE(liveEndTime_, liveEndTime) };


          // liveStartTime Field Functions 
          bool hasLiveStartTime() const { return this->liveStartTime_ != nullptr;};
          void deleteLiveStartTime() { this->liveStartTime_ = nullptr;};
          inline int64_t getLiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(liveStartTime_, 0L) };
          inline LiveList& setLiveStartTime(int64_t liveStartTime) { DARABONBA_PTR_SET_VALUE(liveStartTime_, liveStartTime) };


          // liveUuid Field Functions 
          bool hasLiveUuid() const { return this->liveUuid_ != nullptr;};
          void deleteLiveUuid() { this->liveUuid_ = nullptr;};
          inline string getLiveUuid() const { DARABONBA_PTR_GET_DEFAULT(liveUuid_, "") };
          inline LiveList& setLiveUuid(string liveUuid) { DARABONBA_PTR_SET_VALUE(liveUuid_, liveUuid) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline LiveList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> anchorNickname_ {};
          shared_ptr<string> anchorUnionId_ {};
          shared_ptr<string> anchorUnionIdInAlibaba_ {};
          shared_ptr<string> anchorUserId_ {};
          shared_ptr<int64_t> liveEndTime_ {};
          shared_ptr<int64_t> liveStartTime_ {};
          shared_ptr<string> liveUuid_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->liveList_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // hasMore Field Functions 
        bool hasHasMore() const { return this->hasMore_ != nullptr;};
        void deleteHasMore() { this->hasMore_ = nullptr;};
        inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
        inline UpdateLive& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


        // liveList Field Functions 
        bool hasLiveList() const { return this->liveList_ != nullptr;};
        void deleteLiveList() { this->liveList_ = nullptr;};
        inline const vector<UpdateLive::LiveList> & getLiveList() const { DARABONBA_PTR_GET_CONST(liveList_, vector<UpdateLive::LiveList>) };
        inline vector<UpdateLive::LiveList> getLiveList() { DARABONBA_PTR_GET(liveList_, vector<UpdateLive::LiveList>) };
        inline UpdateLive& setLiveList(const vector<UpdateLive::LiveList> & liveList) { DARABONBA_PTR_SET_VALUE(liveList_, liveList) };
        inline UpdateLive& setLiveList(vector<UpdateLive::LiveList> && liveList) { DARABONBA_PTR_SET_RVALUE(liveList_, liveList) };


        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
        inline UpdateLive& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
        inline UpdateLive& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline UpdateLive& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<bool> hasMore_ {};
        shared_ptr<vector<UpdateLive::LiveList>> liveList_ {};
        shared_ptr<int64_t> pageNumber_ {};
        shared_ptr<int64_t> pageSize_ {};
        shared_ptr<int64_t> totalCount_ {};
      };

      class NewLive : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NewLive& obj) { 
          DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
          DARABONBA_PTR_TO_JSON(LiveList, liveList_);
          DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, NewLive& obj) { 
          DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
          DARABONBA_PTR_FROM_JSON(LiveList, liveList_);
          DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        NewLive() = default ;
        NewLive(const NewLive &) = default ;
        NewLive(NewLive &&) = default ;
        NewLive(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NewLive() = default ;
        NewLive& operator=(const NewLive &) = default ;
        NewLive& operator=(NewLive &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LiveList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LiveList& obj) { 
            DARABONBA_PTR_TO_JSON(AnchorNickname, anchorNickname_);
            DARABONBA_PTR_TO_JSON(AnchorUnionId, anchorUnionId_);
            DARABONBA_PTR_TO_JSON(AnchorUnionIdInAlibaba, anchorUnionIdInAlibaba_);
            DARABONBA_PTR_TO_JSON(AnchorUserId, anchorUserId_);
            DARABONBA_PTR_TO_JSON(LiveEndTime, liveEndTime_);
            DARABONBA_PTR_TO_JSON(LiveStartTime, liveStartTime_);
            DARABONBA_PTR_TO_JSON(LiveUuid, liveUuid_);
            DARABONBA_PTR_TO_JSON(ShareOpenConversationIds, shareOpenConversationIds_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, LiveList& obj) { 
            DARABONBA_PTR_FROM_JSON(AnchorNickname, anchorNickname_);
            DARABONBA_PTR_FROM_JSON(AnchorUnionId, anchorUnionId_);
            DARABONBA_PTR_FROM_JSON(AnchorUnionIdInAlibaba, anchorUnionIdInAlibaba_);
            DARABONBA_PTR_FROM_JSON(AnchorUserId, anchorUserId_);
            DARABONBA_PTR_FROM_JSON(LiveEndTime, liveEndTime_);
            DARABONBA_PTR_FROM_JSON(LiveStartTime, liveStartTime_);
            DARABONBA_PTR_FROM_JSON(LiveUuid, liveUuid_);
            DARABONBA_PTR_FROM_JSON(ShareOpenConversationIds, shareOpenConversationIds_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          LiveList() = default ;
          LiveList(const LiveList &) = default ;
          LiveList(LiveList &&) = default ;
          LiveList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LiveList() = default ;
          LiveList& operator=(const LiveList &) = default ;
          LiveList& operator=(LiveList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->anchorNickname_ == nullptr
        && this->anchorUnionId_ == nullptr && this->anchorUnionIdInAlibaba_ == nullptr && this->anchorUserId_ == nullptr && this->liveEndTime_ == nullptr && this->liveStartTime_ == nullptr
        && this->liveUuid_ == nullptr && this->shareOpenConversationIds_ == nullptr && this->title_ == nullptr; };
          // anchorNickname Field Functions 
          bool hasAnchorNickname() const { return this->anchorNickname_ != nullptr;};
          void deleteAnchorNickname() { this->anchorNickname_ = nullptr;};
          inline string getAnchorNickname() const { DARABONBA_PTR_GET_DEFAULT(anchorNickname_, "") };
          inline LiveList& setAnchorNickname(string anchorNickname) { DARABONBA_PTR_SET_VALUE(anchorNickname_, anchorNickname) };


          // anchorUnionId Field Functions 
          bool hasAnchorUnionId() const { return this->anchorUnionId_ != nullptr;};
          void deleteAnchorUnionId() { this->anchorUnionId_ = nullptr;};
          inline string getAnchorUnionId() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionId_, "") };
          inline LiveList& setAnchorUnionId(string anchorUnionId) { DARABONBA_PTR_SET_VALUE(anchorUnionId_, anchorUnionId) };


          // anchorUnionIdInAlibaba Field Functions 
          bool hasAnchorUnionIdInAlibaba() const { return this->anchorUnionIdInAlibaba_ != nullptr;};
          void deleteAnchorUnionIdInAlibaba() { this->anchorUnionIdInAlibaba_ = nullptr;};
          inline string getAnchorUnionIdInAlibaba() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionIdInAlibaba_, "") };
          inline LiveList& setAnchorUnionIdInAlibaba(string anchorUnionIdInAlibaba) { DARABONBA_PTR_SET_VALUE(anchorUnionIdInAlibaba_, anchorUnionIdInAlibaba) };


          // anchorUserId Field Functions 
          bool hasAnchorUserId() const { return this->anchorUserId_ != nullptr;};
          void deleteAnchorUserId() { this->anchorUserId_ = nullptr;};
          inline string getAnchorUserId() const { DARABONBA_PTR_GET_DEFAULT(anchorUserId_, "") };
          inline LiveList& setAnchorUserId(string anchorUserId) { DARABONBA_PTR_SET_VALUE(anchorUserId_, anchorUserId) };


          // liveEndTime Field Functions 
          bool hasLiveEndTime() const { return this->liveEndTime_ != nullptr;};
          void deleteLiveEndTime() { this->liveEndTime_ = nullptr;};
          inline int64_t getLiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(liveEndTime_, 0L) };
          inline LiveList& setLiveEndTime(int64_t liveEndTime) { DARABONBA_PTR_SET_VALUE(liveEndTime_, liveEndTime) };


          // liveStartTime Field Functions 
          bool hasLiveStartTime() const { return this->liveStartTime_ != nullptr;};
          void deleteLiveStartTime() { this->liveStartTime_ = nullptr;};
          inline int64_t getLiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(liveStartTime_, 0L) };
          inline LiveList& setLiveStartTime(int64_t liveStartTime) { DARABONBA_PTR_SET_VALUE(liveStartTime_, liveStartTime) };


          // liveUuid Field Functions 
          bool hasLiveUuid() const { return this->liveUuid_ != nullptr;};
          void deleteLiveUuid() { this->liveUuid_ = nullptr;};
          inline string getLiveUuid() const { DARABONBA_PTR_GET_DEFAULT(liveUuid_, "") };
          inline LiveList& setLiveUuid(string liveUuid) { DARABONBA_PTR_SET_VALUE(liveUuid_, liveUuid) };


          // shareOpenConversationIds Field Functions 
          bool hasShareOpenConversationIds() const { return this->shareOpenConversationIds_ != nullptr;};
          void deleteShareOpenConversationIds() { this->shareOpenConversationIds_ = nullptr;};
          inline const vector<string> & getShareOpenConversationIds() const { DARABONBA_PTR_GET_CONST(shareOpenConversationIds_, vector<string>) };
          inline vector<string> getShareOpenConversationIds() { DARABONBA_PTR_GET(shareOpenConversationIds_, vector<string>) };
          inline LiveList& setShareOpenConversationIds(const vector<string> & shareOpenConversationIds) { DARABONBA_PTR_SET_VALUE(shareOpenConversationIds_, shareOpenConversationIds) };
          inline LiveList& setShareOpenConversationIds(vector<string> && shareOpenConversationIds) { DARABONBA_PTR_SET_RVALUE(shareOpenConversationIds_, shareOpenConversationIds) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline LiveList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> anchorNickname_ {};
          shared_ptr<string> anchorUnionId_ {};
          shared_ptr<string> anchorUnionIdInAlibaba_ {};
          shared_ptr<string> anchorUserId_ {};
          shared_ptr<int64_t> liveEndTime_ {};
          shared_ptr<int64_t> liveStartTime_ {};
          shared_ptr<string> liveUuid_ {};
          shared_ptr<vector<string>> shareOpenConversationIds_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->liveList_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // hasMore Field Functions 
        bool hasHasMore() const { return this->hasMore_ != nullptr;};
        void deleteHasMore() { this->hasMore_ = nullptr;};
        inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
        inline NewLive& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


        // liveList Field Functions 
        bool hasLiveList() const { return this->liveList_ != nullptr;};
        void deleteLiveList() { this->liveList_ = nullptr;};
        inline const vector<NewLive::LiveList> & getLiveList() const { DARABONBA_PTR_GET_CONST(liveList_, vector<NewLive::LiveList>) };
        inline vector<NewLive::LiveList> getLiveList() { DARABONBA_PTR_GET(liveList_, vector<NewLive::LiveList>) };
        inline NewLive& setLiveList(const vector<NewLive::LiveList> & liveList) { DARABONBA_PTR_SET_VALUE(liveList_, liveList) };
        inline NewLive& setLiveList(vector<NewLive::LiveList> && liveList) { DARABONBA_PTR_SET_RVALUE(liveList_, liveList) };


        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
        inline NewLive& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
        inline NewLive& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline NewLive& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<bool> hasMore_ {};
        shared_ptr<vector<NewLive::LiveList>> liveList_ {};
        shared_ptr<int64_t> pageNumber_ {};
        shared_ptr<int64_t> pageSize_ {};
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->newLive_ == nullptr
        && this->updateLive_ == nullptr; };
      // newLive Field Functions 
      bool hasNewLive() const { return this->newLive_ != nullptr;};
      void deleteNewLive() { this->newLive_ = nullptr;};
      inline const Result::NewLive & getNewLive() const { DARABONBA_PTR_GET_CONST(newLive_, Result::NewLive) };
      inline Result::NewLive getNewLive() { DARABONBA_PTR_GET(newLive_, Result::NewLive) };
      inline Result& setNewLive(const Result::NewLive & newLive) { DARABONBA_PTR_SET_VALUE(newLive_, newLive) };
      inline Result& setNewLive(Result::NewLive && newLive) { DARABONBA_PTR_SET_RVALUE(newLive_, newLive) };


      // updateLive Field Functions 
      bool hasUpdateLive() const { return this->updateLive_ != nullptr;};
      void deleteUpdateLive() { this->updateLive_ = nullptr;};
      inline const Result::UpdateLive & getUpdateLive() const { DARABONBA_PTR_GET_CONST(updateLive_, Result::UpdateLive) };
      inline Result::UpdateLive getUpdateLive() { DARABONBA_PTR_GET(updateLive_, Result::UpdateLive) };
      inline Result& setUpdateLive(const Result::UpdateLive & updateLive) { DARABONBA_PTR_SET_VALUE(updateLive_, updateLive) };
      inline Result& setUpdateLive(Result::UpdateLive && updateLive) { DARABONBA_PTR_SET_RVALUE(updateLive_, updateLive) };


    protected:
      shared_ptr<Result::NewLive> newLive_ {};
      shared_ptr<Result::UpdateLive> updateLive_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOrgLiveListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetOrgLiveListResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetOrgLiveListResponseBody::Result) };
    inline GetOrgLiveListResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetOrgLiveListResponseBody::Result) };
    inline GetOrgLiveListResponseBody& setResult(const GetOrgLiveListResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetOrgLiveListResponseBody& setResult(GetOrgLiveListResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetOrgLiveListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetOrgLiveListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetOrgLiveListResponseBody::Result> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
