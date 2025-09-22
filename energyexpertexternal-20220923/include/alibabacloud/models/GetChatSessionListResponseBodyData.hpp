// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATSESSIONLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCHATSESSIONLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetChatSessionListResponseBodyDataSessionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetChatSessionListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatSessionListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sessionList, sessionList_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatSessionListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sessionList, sessionList_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    GetChatSessionListResponseBodyData() = default ;
    GetChatSessionListResponseBodyData(const GetChatSessionListResponseBodyData &) = default ;
    GetChatSessionListResponseBodyData(GetChatSessionListResponseBodyData &&) = default ;
    GetChatSessionListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatSessionListResponseBodyData() = default ;
    GetChatSessionListResponseBodyData& operator=(const GetChatSessionListResponseBodyData &) = default ;
    GetChatSessionListResponseBodyData& operator=(GetChatSessionListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageSize_ != nullptr && this->sessionList_ != nullptr && this->total_ != nullptr && this->totalPage_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline GetChatSessionListResponseBodyData& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetChatSessionListResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sessionList Field Functions 
    bool hasSessionList() const { return this->sessionList_ != nullptr;};
    void deleteSessionList() { this->sessionList_ = nullptr;};
    inline const vector<Models::GetChatSessionListResponseBodyDataSessionList> & sessionList() const { DARABONBA_PTR_GET_CONST(sessionList_, vector<Models::GetChatSessionListResponseBodyDataSessionList>) };
    inline vector<Models::GetChatSessionListResponseBodyDataSessionList> sessionList() { DARABONBA_PTR_GET(sessionList_, vector<Models::GetChatSessionListResponseBodyDataSessionList>) };
    inline GetChatSessionListResponseBodyData& setSessionList(const vector<Models::GetChatSessionListResponseBodyDataSessionList> & sessionList) { DARABONBA_PTR_SET_VALUE(sessionList_, sessionList) };
    inline GetChatSessionListResponseBodyData& setSessionList(vector<Models::GetChatSessionListResponseBodyDataSessionList> && sessionList) { DARABONBA_PTR_SET_RVALUE(sessionList_, sessionList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetChatSessionListResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline GetChatSessionListResponseBodyData& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Current page number.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // 分页大小。
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Session list.
    std::shared_ptr<vector<Models::GetChatSessionListResponseBodyDataSessionList>> sessionList_ = nullptr;
    // Total number of records.
    std::shared_ptr<int64_t> total_ = nullptr;
    // Total number of pages
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
