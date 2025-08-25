// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLEGACYAGENTEVENTLOGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTLEGACYAGENTEVENTLOGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLegacyAgentEventLogsResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListLegacyAgentEventLogsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLegacyAgentEventLogsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLegacyAgentEventLogsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLegacyAgentEventLogsResponseBodyData() = default ;
    ListLegacyAgentEventLogsResponseBodyData(const ListLegacyAgentEventLogsResponseBodyData &) = default ;
    ListLegacyAgentEventLogsResponseBodyData(ListLegacyAgentEventLogsResponseBodyData &&) = default ;
    ListLegacyAgentEventLogsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLegacyAgentEventLogsResponseBodyData() = default ;
    ListLegacyAgentEventLogsResponseBodyData& operator=(const ListLegacyAgentEventLogsResponseBodyData &) = default ;
    ListLegacyAgentEventLogsResponseBodyData& operator=(ListLegacyAgentEventLogsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListLegacyAgentEventLogsResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListLegacyAgentEventLogsResponseBodyDataList>) };
    inline vector<Models::ListLegacyAgentEventLogsResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListLegacyAgentEventLogsResponseBodyDataList>) };
    inline ListLegacyAgentEventLogsResponseBodyData& setList(const vector<Models::ListLegacyAgentEventLogsResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListLegacyAgentEventLogsResponseBodyData& setList(vector<Models::ListLegacyAgentEventLogsResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLegacyAgentEventLogsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLegacyAgentEventLogsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLegacyAgentEventLogsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListLegacyAgentEventLogsResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
