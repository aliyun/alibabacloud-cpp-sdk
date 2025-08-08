// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAiOutboundTaskListResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasNextPage, hasNextPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasNextPage, hasNextPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
    };
    GetAiOutboundTaskListResponseBodyData() = default ;
    GetAiOutboundTaskListResponseBodyData(const GetAiOutboundTaskListResponseBodyData &) = default ;
    GetAiOutboundTaskListResponseBodyData(GetAiOutboundTaskListResponseBodyData &&) = default ;
    GetAiOutboundTaskListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskListResponseBodyData() = default ;
    GetAiOutboundTaskListResponseBodyData& operator=(const GetAiOutboundTaskListResponseBodyData &) = default ;
    GetAiOutboundTaskListResponseBodyData& operator=(GetAiOutboundTaskListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->hasNextPage_ != nullptr && this->list_ != nullptr && this->pageSize_ != nullptr && this->totalResults_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAiOutboundTaskListResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasNextPage Field Functions 
    bool hasHasNextPage() const { return this->hasNextPage_ != nullptr;};
    void deleteHasNextPage() { this->hasNextPage_ = nullptr;};
    inline bool hasNextPage() const { DARABONBA_PTR_GET_DEFAULT(hasNextPage_, false) };
    inline GetAiOutboundTaskListResponseBodyData& setHasNextPage(bool hasNextPage) { DARABONBA_PTR_SET_VALUE(hasNextPage_, hasNextPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetAiOutboundTaskListResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetAiOutboundTaskListResponseBodyDataList>) };
    inline vector<Models::GetAiOutboundTaskListResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetAiOutboundTaskListResponseBodyDataList>) };
    inline GetAiOutboundTaskListResponseBodyData& setList(const vector<Models::GetAiOutboundTaskListResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetAiOutboundTaskListResponseBodyData& setList(vector<Models::GetAiOutboundTaskListResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAiOutboundTaskListResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalResults Field Functions 
    bool hasTotalResults() const { return this->totalResults_ != nullptr;};
    void deleteTotalResults() { this->totalResults_ = nullptr;};
    inline int32_t totalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0) };
    inline GetAiOutboundTaskListResponseBodyData& setTotalResults(int32_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<bool> hasNextPage_ = nullptr;
    std::shared_ptr<vector<Models::GetAiOutboundTaskListResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
