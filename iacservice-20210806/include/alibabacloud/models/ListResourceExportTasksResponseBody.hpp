// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceExportTasksResponseBodyExportTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceExportTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExportTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(exportTasks, exportTasks_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExportTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(exportTasks, exportTasks_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListResourceExportTasksResponseBody() = default ;
    ListResourceExportTasksResponseBody(const ListResourceExportTasksResponseBody &) = default ;
    ListResourceExportTasksResponseBody(ListResourceExportTasksResponseBody &&) = default ;
    ListResourceExportTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExportTasksResponseBody() = default ;
    ListResourceExportTasksResponseBody& operator=(const ListResourceExportTasksResponseBody &) = default ;
    ListResourceExportTasksResponseBody& operator=(ListResourceExportTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportTasks_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // exportTasks Field Functions 
    bool hasExportTasks() const { return this->exportTasks_ != nullptr;};
    void deleteExportTasks() { this->exportTasks_ = nullptr;};
    inline const vector<ListResourceExportTasksResponseBodyExportTasks> & exportTasks() const { DARABONBA_PTR_GET_CONST(exportTasks_, vector<ListResourceExportTasksResponseBodyExportTasks>) };
    inline vector<ListResourceExportTasksResponseBodyExportTasks> exportTasks() { DARABONBA_PTR_GET(exportTasks_, vector<ListResourceExportTasksResponseBodyExportTasks>) };
    inline ListResourceExportTasksResponseBody& setExportTasks(const vector<ListResourceExportTasksResponseBodyExportTasks> & exportTasks) { DARABONBA_PTR_SET_VALUE(exportTasks_, exportTasks) };
    inline ListResourceExportTasksResponseBody& setExportTasks(vector<ListResourceExportTasksResponseBodyExportTasks> && exportTasks) { DARABONBA_PTR_SET_RVALUE(exportTasks_, exportTasks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceExportTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceExportTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceExportTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceExportTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListResourceExportTasksResponseBodyExportTasks>> exportTasks_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
