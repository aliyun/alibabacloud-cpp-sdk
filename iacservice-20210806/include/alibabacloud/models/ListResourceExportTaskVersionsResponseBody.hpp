// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceExportTaskVersionsResponseBodyExportTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceExportTaskVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExportTaskVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(exportTasks, exportTasks_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExportTaskVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(exportTasks, exportTasks_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListResourceExportTaskVersionsResponseBody() = default ;
    ListResourceExportTaskVersionsResponseBody(const ListResourceExportTaskVersionsResponseBody &) = default ;
    ListResourceExportTaskVersionsResponseBody(ListResourceExportTaskVersionsResponseBody &&) = default ;
    ListResourceExportTaskVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExportTaskVersionsResponseBody() = default ;
    ListResourceExportTaskVersionsResponseBody& operator=(const ListResourceExportTaskVersionsResponseBody &) = default ;
    ListResourceExportTaskVersionsResponseBody& operator=(ListResourceExportTaskVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exportTasks_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // exportTasks Field Functions 
    bool hasExportTasks() const { return this->exportTasks_ != nullptr;};
    void deleteExportTasks() { this->exportTasks_ = nullptr;};
    inline const vector<ListResourceExportTaskVersionsResponseBodyExportTasks> & exportTasks() const { DARABONBA_PTR_GET_CONST(exportTasks_, vector<ListResourceExportTaskVersionsResponseBodyExportTasks>) };
    inline vector<ListResourceExportTaskVersionsResponseBodyExportTasks> exportTasks() { DARABONBA_PTR_GET(exportTasks_, vector<ListResourceExportTaskVersionsResponseBodyExportTasks>) };
    inline ListResourceExportTaskVersionsResponseBody& setExportTasks(const vector<ListResourceExportTaskVersionsResponseBodyExportTasks> & exportTasks) { DARABONBA_PTR_SET_VALUE(exportTasks_, exportTasks) };
    inline ListResourceExportTaskVersionsResponseBody& setExportTasks(vector<ListResourceExportTaskVersionsResponseBodyExportTasks> && exportTasks) { DARABONBA_PTR_SET_RVALUE(exportTasks_, exportTasks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceExportTaskVersionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceExportTaskVersionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceExportTaskVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceExportTaskVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListResourceExportTaskVersionsResponseBodyExportTasks>> exportTasks_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
