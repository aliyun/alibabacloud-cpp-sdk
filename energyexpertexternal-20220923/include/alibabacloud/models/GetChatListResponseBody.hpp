// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetChatListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetChatListResponseBody() = default ;
    GetChatListResponseBody(const GetChatListResponseBody &) = default ;
    GetChatListResponseBody(GetChatListResponseBody &&) = default ;
    GetChatListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatListResponseBody() = default ;
    GetChatListResponseBody& operator=(const GetChatListResponseBody &) = default ;
    GetChatListResponseBody& operator=(GetChatListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(chatList, chatList_);
        DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
        DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(chatList, chatList_);
        DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
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
      virtual bool empty() const override { return this->chatList_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr && this->totalPage_ == nullptr; };
      // chatList Field Functions 
      bool hasChatList() const { return this->chatList_ != nullptr;};
      void deleteChatList() { this->chatList_ = nullptr;};
      inline const vector<ChatItem> & getChatList() const { DARABONBA_PTR_GET_CONST(chatList_, vector<ChatItem>) };
      inline vector<ChatItem> getChatList() { DARABONBA_PTR_GET(chatList_, vector<ChatItem>) };
      inline Data& setChatList(const vector<ChatItem> & chatList) { DARABONBA_PTR_SET_VALUE(chatList_, chatList) };
      inline Data& setChatList(vector<ChatItem> && chatList) { DARABONBA_PTR_SET_RVALUE(chatList_, chatList) };


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
      // Q&A list.
      shared_ptr<vector<ChatItem>> chatList_ {};
      // Current page number.
      shared_ptr<int64_t> currentPage_ {};
      // Page size.
      shared_ptr<int64_t> pageSize_ {};
      // Total number of records.
      shared_ptr<int64_t> total_ {};
      // Total number of pages.
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetChatListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetChatListResponseBody::Data) };
    inline GetChatListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetChatListResponseBody::Data) };
    inline GetChatListResponseBody& setData(const GetChatListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatListResponseBody& setData(GetChatListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data structure.
    shared_ptr<GetChatListResponseBody::Data> data_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
