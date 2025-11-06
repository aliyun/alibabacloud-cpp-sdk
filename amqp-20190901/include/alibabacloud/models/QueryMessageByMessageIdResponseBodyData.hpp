// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGEBYMESSAGEIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGEBYMESSAGEIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMessageByMessageIdResponseBodyDataVoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class QueryMessageByMessageIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageByMessageIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VoList, voList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageByMessageIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VoList, voList_);
    };
    QueryMessageByMessageIdResponseBodyData() = default ;
    QueryMessageByMessageIdResponseBodyData(const QueryMessageByMessageIdResponseBodyData &) = default ;
    QueryMessageByMessageIdResponseBodyData(QueryMessageByMessageIdResponseBodyData &&) = default ;
    QueryMessageByMessageIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageByMessageIdResponseBodyData() = default ;
    QueryMessageByMessageIdResponseBodyData& operator=(const QueryMessageByMessageIdResponseBodyData &) = default ;
    QueryMessageByMessageIdResponseBodyData& operator=(QueryMessageByMessageIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->taskId_ == nullptr && return this->totalCount_ == nullptr && return this->voList_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryMessageByMessageIdResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMessageByMessageIdResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryMessageByMessageIdResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryMessageByMessageIdResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // voList Field Functions 
    bool hasVoList() const { return this->voList_ != nullptr;};
    void deleteVoList() { this->voList_ = nullptr;};
    inline const vector<Models::QueryMessageByMessageIdResponseBodyDataVoList> & voList() const { DARABONBA_PTR_GET_CONST(voList_, vector<Models::QueryMessageByMessageIdResponseBodyDataVoList>) };
    inline vector<Models::QueryMessageByMessageIdResponseBodyDataVoList> voList() { DARABONBA_PTR_GET(voList_, vector<Models::QueryMessageByMessageIdResponseBodyDataVoList>) };
    inline QueryMessageByMessageIdResponseBodyData& setVoList(const vector<Models::QueryMessageByMessageIdResponseBodyDataVoList> & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
    inline QueryMessageByMessageIdResponseBodyData& setVoList(vector<Models::QueryMessageByMessageIdResponseBodyDataVoList> && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<Models::QueryMessageByMessageIdResponseBodyDataVoList>> voList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
