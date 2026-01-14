// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATSESSIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATSESSIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetChatSessionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatSessionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatSessionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetChatSessionListResponseBody() = default ;
    GetChatSessionListResponseBody(const GetChatSessionListResponseBody &) = default ;
    GetChatSessionListResponseBody(GetChatSessionListResponseBody &&) = default ;
    GetChatSessionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatSessionListResponseBody() = default ;
    GetChatSessionListResponseBody& operator=(const GetChatSessionListResponseBody &) = default ;
    GetChatSessionListResponseBody& operator=(GetChatSessionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(sessionList, sessionList_);
        DARABONBA_PTR_TO_JSON(total, total_);
        DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(sessionList, sessionList_);
        DARABONBA_PTR_FROM_JSON(total, total_);
        DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
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
      class SessionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionList& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(folderId, folderId_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, SessionList& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(folderId, folderId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        SessionList() = default ;
        SessionList(const SessionList &) = default ;
        SessionList(SessionList &&) = default ;
        SessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionList() = default ;
        SessionList& operator=(const SessionList &) = default ;
        SessionList& operator=(SessionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->folderId_ == nullptr && this->name_ == nullptr && this->sessionId_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SessionList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // folderId Field Functions 
        bool hasFolderId() const { return this->folderId_ != nullptr;};
        void deleteFolderId() { this->folderId_ = nullptr;};
        inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
        inline SessionList& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SessionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline SessionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline SessionList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline SessionList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // Report creation timestamp, in milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // Folder ID, used to specify the scope of documents to be queried.
        shared_ptr<string> folderId_ {};
        // Session name
        shared_ptr<string> name_ {};
        // Q&A session ID, used to record multiple Q&As of the same user.
        shared_ptr<string> sessionId_ {};
        // Modification time, in milliseconds.
        shared_ptr<int64_t> updateTime_ {};
        // User ID of the current session.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->sessionList_ == nullptr && this->total_ == nullptr && this->totalPage_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline Data& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // sessionList Field Functions 
      bool hasSessionList() const { return this->sessionList_ != nullptr;};
      void deleteSessionList() { this->sessionList_ = nullptr;};
      inline const vector<Data::SessionList> & getSessionList() const { DARABONBA_PTR_GET_CONST(sessionList_, vector<Data::SessionList>) };
      inline vector<Data::SessionList> getSessionList() { DARABONBA_PTR_GET(sessionList_, vector<Data::SessionList>) };
      inline Data& setSessionList(const vector<Data::SessionList> & sessionList) { DARABONBA_PTR_SET_VALUE(sessionList_, sessionList) };
      inline Data& setSessionList(vector<Data::SessionList> && sessionList) { DARABONBA_PTR_SET_RVALUE(sessionList_, sessionList) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline Data& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      // Current page number.
      shared_ptr<int64_t> currentPage_ {};
      // 分页大小。
      shared_ptr<int64_t> pageSize_ {};
      // Session list.
      shared_ptr<vector<Data::SessionList>> sessionList_ {};
      // Total number of records.
      shared_ptr<int64_t> total_ {};
      // Total number of pages
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetChatSessionListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetChatSessionListResponseBody::Data) };
    inline GetChatSessionListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetChatSessionListResponseBody::Data) };
    inline GetChatSessionListResponseBody& setData(const GetChatSessionListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatSessionListResponseBody& setData(GetChatSessionListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatSessionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data
    shared_ptr<GetChatSessionListResponseBody::Data> data_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
