// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListUserSayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserSays, userSays_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserSays, userSays_);
    };
    ListUserSayResponseBody() = default ;
    ListUserSayResponseBody(const ListUserSayResponseBody &) = default ;
    ListUserSayResponseBody(ListUserSayResponseBody &&) = default ;
    ListUserSayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSayResponseBody() = default ;
    ListUserSayResponseBody& operator=(const ListUserSayResponseBody &) = default ;
    ListUserSayResponseBody& operator=(ListUserSayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserSays : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserSays& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
        DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
      };
      friend void from_json(const Darabonba::Json& j, UserSays& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
        DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
      };
      UserSays() = default ;
      UserSays(const UserSays &) = default ;
      UserSays(UserSays &&) = default ;
      UserSays(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserSays() = default ;
      UserSays& operator=(const UserSays &) = default ;
      UserSays& operator=(UserSays &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlotInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlotInfos& obj) { 
          DARABONBA_PTR_TO_JSON(EndIndex, endIndex_);
          DARABONBA_PTR_TO_JSON(SlotId, slotId_);
          DARABONBA_PTR_TO_JSON(StartIndex, startIndex_);
        };
        friend void from_json(const Darabonba::Json& j, SlotInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(EndIndex, endIndex_);
          DARABONBA_PTR_FROM_JSON(SlotId, slotId_);
          DARABONBA_PTR_FROM_JSON(StartIndex, startIndex_);
        };
        SlotInfos() = default ;
        SlotInfos(const SlotInfos &) = default ;
        SlotInfos(SlotInfos &&) = default ;
        SlotInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlotInfos() = default ;
        SlotInfos& operator=(const SlotInfos &) = default ;
        SlotInfos& operator=(SlotInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endIndex_ == nullptr
        && this->slotId_ == nullptr && this->startIndex_ == nullptr; };
        // endIndex Field Functions 
        bool hasEndIndex() const { return this->endIndex_ != nullptr;};
        void deleteEndIndex() { this->endIndex_ = nullptr;};
        inline int32_t getEndIndex() const { DARABONBA_PTR_GET_DEFAULT(endIndex_, 0) };
        inline SlotInfos& setEndIndex(int32_t endIndex) { DARABONBA_PTR_SET_VALUE(endIndex_, endIndex) };


        // slotId Field Functions 
        bool hasSlotId() const { return this->slotId_ != nullptr;};
        void deleteSlotId() { this->slotId_ = nullptr;};
        inline string getSlotId() const { DARABONBA_PTR_GET_DEFAULT(slotId_, "") };
        inline SlotInfos& setSlotId(string slotId) { DARABONBA_PTR_SET_VALUE(slotId_, slotId) };


        // startIndex Field Functions 
        bool hasStartIndex() const { return this->startIndex_ != nullptr;};
        void deleteStartIndex() { this->startIndex_ = nullptr;};
        inline int32_t getStartIndex() const { DARABONBA_PTR_GET_DEFAULT(startIndex_, 0) };
        inline SlotInfos& setStartIndex(int32_t startIndex) { DARABONBA_PTR_SET_VALUE(startIndex_, startIndex) };


      protected:
        // The zero-based end index of the slot in the user say. This value is exclusive.
        shared_ptr<int32_t> endIndex_ {};
        // The ID of the intent slot.
        shared_ptr<string> slotId_ {};
        // The zero-based start index of the slot in the user say. This value is inclusive.
        shared_ptr<int32_t> startIndex_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->intentId_ == nullptr && this->modifyTime_ == nullptr && this->slotInfos_ == nullptr && this->userSayId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline UserSays& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline UserSays& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
      inline UserSays& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline UserSays& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // slotInfos Field Functions 
      bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
      void deleteSlotInfos() { this->slotInfos_ = nullptr;};
      inline const vector<UserSays::SlotInfos> & getSlotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<UserSays::SlotInfos>) };
      inline vector<UserSays::SlotInfos> getSlotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<UserSays::SlotInfos>) };
      inline UserSays& setSlotInfos(const vector<UserSays::SlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
      inline UserSays& setSlotInfos(vector<UserSays::SlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


      // userSayId Field Functions 
      bool hasUserSayId() const { return this->userSayId_ != nullptr;};
      void deleteUserSayId() { this->userSayId_ = nullptr;};
      inline int64_t getUserSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, 0L) };
      inline UserSays& setUserSayId(int64_t userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


    protected:
      // The content of the user say.
      shared_ptr<string> content_ {};
      // The time when the user say was created. The time is in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the intent.
      shared_ptr<int64_t> intentId_ {};
      // The time when the user say was last modified. The time is in UTC.
      shared_ptr<string> modifyTime_ {};
      // A list of associated slots.
      shared_ptr<vector<UserSays::SlotInfos>> slotInfos_ {};
      // The ID of the user say.
      shared_ptr<int64_t> userSayId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->userSays_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUserSayResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserSayResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserSayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserSayResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userSays Field Functions 
    bool hasUserSays() const { return this->userSays_ != nullptr;};
    void deleteUserSays() { this->userSays_ = nullptr;};
    inline const vector<ListUserSayResponseBody::UserSays> & getUserSays() const { DARABONBA_PTR_GET_CONST(userSays_, vector<ListUserSayResponseBody::UserSays>) };
    inline vector<ListUserSayResponseBody::UserSays> getUserSays() { DARABONBA_PTR_GET(userSays_, vector<ListUserSayResponseBody::UserSays>) };
    inline ListUserSayResponseBody& setUserSays(const vector<ListUserSayResponseBody::UserSays> & userSays) { DARABONBA_PTR_SET_VALUE(userSays_, userSays) };
    inline ListUserSayResponseBody& setUserSays(vector<ListUserSayResponseBody::UserSays> && userSays) { DARABONBA_PTR_SET_RVALUE(userSays_, userSays) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of matching entries.
    shared_ptr<int32_t> totalCount_ {};
    // A list of user says.
    shared_ptr<vector<ListUserSayResponseBody::UserSays>> userSays_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
