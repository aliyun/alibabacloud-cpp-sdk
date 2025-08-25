// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHistoricalAgentSkillGroupReportResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentSkillGroupReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentSkillGroupReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentSkillGroupReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHistoricalAgentSkillGroupReportResponseBodyData() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyData(const ListHistoricalAgentSkillGroupReportResponseBodyData &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyData(ListHistoricalAgentSkillGroupReportResponseBodyData &&) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentSkillGroupReportResponseBodyData() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyData& operator=(const ListHistoricalAgentSkillGroupReportResponseBodyData &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyData& operator=(ListHistoricalAgentSkillGroupReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataList>) };
    inline vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataList>) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyData& setList(const vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyData& setList(vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
