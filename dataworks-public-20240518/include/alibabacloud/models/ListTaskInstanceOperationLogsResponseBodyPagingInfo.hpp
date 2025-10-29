// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKINSTANCEOPERATIONLOGSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKINSTANCEOPERATIONLOGSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTaskInstanceOperationLogsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskInstanceOperationLogsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(OperationLogs, operationLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskInstanceOperationLogsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationLogs, operationLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTaskInstanceOperationLogsResponseBodyPagingInfo() = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfo(const ListTaskInstanceOperationLogsResponseBodyPagingInfo &) = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfo(ListTaskInstanceOperationLogsResponseBodyPagingInfo &&) = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskInstanceOperationLogsResponseBodyPagingInfo() = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfo& operator=(const ListTaskInstanceOperationLogsResponseBodyPagingInfo &) = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfo& operator=(ListTaskInstanceOperationLogsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationLogs_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // operationLogs Field Functions 
    bool hasOperationLogs() const { return this->operationLogs_ != nullptr;};
    void deleteOperationLogs() { this->operationLogs_ = nullptr;};
    inline const vector<Models::ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs> & operationLogs() const { DARABONBA_PTR_GET_CONST(operationLogs_, vector<Models::ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs>) };
    inline vector<Models::ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs> operationLogs() { DARABONBA_PTR_GET(operationLogs_, vector<Models::ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs>) };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfo& setOperationLogs(const vector<Models::ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs> & operationLogs) { DARABONBA_PTR_SET_VALUE(operationLogs_, operationLogs) };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfo& setOperationLogs(vector<Models::ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs> && operationLogs) { DARABONBA_PTR_SET_RVALUE(operationLogs_, operationLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The operation logs.
    std::shared_ptr<vector<Models::ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs>> operationLogs_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
