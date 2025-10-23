// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCHATLISTRESPONSEBODYDATA_HPP_
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
  class GetChatListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(chatList, chatList_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(chatList, chatList_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    GetChatListResponseBodyData() = default ;
    GetChatListResponseBodyData(const GetChatListResponseBodyData &) = default ;
    GetChatListResponseBodyData(GetChatListResponseBodyData &&) = default ;
    GetChatListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatListResponseBodyData() = default ;
    GetChatListResponseBodyData& operator=(const GetChatListResponseBodyData &) = default ;
    GetChatListResponseBodyData& operator=(GetChatListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatList_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->total_ == nullptr && return this->totalPage_ == nullptr; };
    // chatList Field Functions 
    bool hasChatList() const { return this->chatList_ != nullptr;};
    void deleteChatList() { this->chatList_ = nullptr;};
    inline const vector<Models::ChatItem> & chatList() const { DARABONBA_PTR_GET_CONST(chatList_, vector<Models::ChatItem>) };
    inline vector<Models::ChatItem> chatList() { DARABONBA_PTR_GET(chatList_, vector<Models::ChatItem>) };
    inline GetChatListResponseBodyData& setChatList(const vector<Models::ChatItem> & chatList) { DARABONBA_PTR_SET_VALUE(chatList_, chatList) };
    inline GetChatListResponseBodyData& setChatList(vector<Models::ChatItem> && chatList) { DARABONBA_PTR_SET_RVALUE(chatList_, chatList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline GetChatListResponseBodyData& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetChatListResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetChatListResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline GetChatListResponseBodyData& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Q&A list.
    std::shared_ptr<vector<Models::ChatItem>> chatList_ = nullptr;
    // Current page number.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // Page size.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Total number of records.
    std::shared_ptr<int64_t> total_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
