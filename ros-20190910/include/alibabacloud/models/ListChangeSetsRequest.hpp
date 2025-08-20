// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGESETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGESETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListChangeSetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeSetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeSetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListChangeSetsRequest() = default ;
    ListChangeSetsRequest(const ListChangeSetsRequest &) = default ;
    ListChangeSetsRequest(ListChangeSetsRequest &&) = default ;
    ListChangeSetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeSetsRequest() = default ;
    ListChangeSetsRequest& operator=(const ListChangeSetsRequest &) = default ;
    ListChangeSetsRequest& operator=(ListChangeSetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeSetId_ != nullptr
        && this->changeSetName_ != nullptr && this->executionStatus_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->stackId_ != nullptr && this->status_ != nullptr; };
    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string changeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline ListChangeSetsRequest& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // changeSetName Field Functions 
    bool hasChangeSetName() const { return this->changeSetName_ != nullptr;};
    void deleteChangeSetName() { this->changeSetName_ = nullptr;};
    inline const vector<string> & changeSetName() const { DARABONBA_PTR_GET_CONST(changeSetName_, vector<string>) };
    inline vector<string> changeSetName() { DARABONBA_PTR_GET(changeSetName_, vector<string>) };
    inline ListChangeSetsRequest& setChangeSetName(const vector<string> & changeSetName) { DARABONBA_PTR_SET_VALUE(changeSetName_, changeSetName) };
    inline ListChangeSetsRequest& setChangeSetName(vector<string> && changeSetName) { DARABONBA_PTR_SET_RVALUE(changeSetName_, changeSetName) };


    // executionStatus Field Functions 
    bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
    void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
    inline const vector<string> & executionStatus() const { DARABONBA_PTR_GET_CONST(executionStatus_, vector<string>) };
    inline vector<string> executionStatus() { DARABONBA_PTR_GET(executionStatus_, vector<string>) };
    inline ListChangeSetsRequest& setExecutionStatus(const vector<string> & executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };
    inline ListChangeSetsRequest& setExecutionStatus(vector<string> && executionStatus) { DARABONBA_PTR_SET_RVALUE(executionStatus_, executionStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListChangeSetsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListChangeSetsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListChangeSetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ListChangeSetsRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListChangeSetsRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListChangeSetsRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    // The ID of the change set. If detailed information about the change set is not required, you can use this parameter to replace the GetChangeSet operation.
    std::shared_ptr<string> changeSetId_ = nullptr;
    // The name of change set N. Maximum value of N: 5. You can use an asterisk (\\*) as a wildcard for fuzzy search.
    std::shared_ptr<vector<string>> changeSetName_ = nullptr;
    // The execution status of change set N. Maximum value of N: 5. Valid values:
    // 
    // *   UNAVAILABLE
    // *   AVAILABLE
    // *   EXECUTE_IN_PROGRESS
    // *   EXECUTE_COMPLETE
    // *   EXECUTE_FAILED
    // *   OBSOLETE
    std::shared_ptr<vector<string>> executionStatus_ = nullptr;
    // The page number.\\
    // Pages start from page 1.\\
    // Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.\\
    // Valid values: 1 to 50.\\
    // Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID of the change set. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
    // The status of change set N. Maximum value of N: 5. Valid values:
    // 
    // *   CREATE_PENDING
    // *   CREATE_IN_PROGRESS
    // *   CREATE_COMPLETE
    // *   CREATE_FAILED
    // *   DELETE_FAILED
    // *   DELETE_COMPLETE
    std::shared_ptr<vector<string>> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
