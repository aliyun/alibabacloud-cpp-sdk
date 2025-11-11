// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENEIMPORTTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENEIMPORTTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInterveneImportTasksResponseBodyDataStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListInterveneImportTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterveneImportTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterveneImportTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListInterveneImportTasksResponseBodyData() = default ;
    ListInterveneImportTasksResponseBodyData(const ListInterveneImportTasksResponseBodyData &) = default ;
    ListInterveneImportTasksResponseBodyData(ListInterveneImportTasksResponseBodyData &&) = default ;
    ListInterveneImportTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterveneImportTasksResponseBodyData() = default ;
    ListInterveneImportTasksResponseBodyData& operator=(const ListInterveneImportTasksResponseBodyData &) = default ;
    ListInterveneImportTasksResponseBodyData& operator=(ListInterveneImportTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->statusList_ == nullptr && return this->totalSize_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListInterveneImportTasksResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListInterveneImportTasksResponseBodyData& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInterveneImportTasksResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<Models::ListInterveneImportTasksResponseBodyDataStatusList> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<Models::ListInterveneImportTasksResponseBodyDataStatusList>) };
    inline vector<Models::ListInterveneImportTasksResponseBodyDataStatusList> statusList() { DARABONBA_PTR_GET(statusList_, vector<Models::ListInterveneImportTasksResponseBodyDataStatusList>) };
    inline ListInterveneImportTasksResponseBodyData& setStatusList(const vector<Models::ListInterveneImportTasksResponseBodyDataStatusList> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListInterveneImportTasksResponseBodyData& setStatusList(vector<Models::ListInterveneImportTasksResponseBodyDataStatusList> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListInterveneImportTasksResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::ListInterveneImportTasksResponseBodyDataStatusList>> statusList_ = nullptr;
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
