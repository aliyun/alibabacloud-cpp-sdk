// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBWMMIGRATIONTASKWRITERWORKFLOWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBWMMIGRATIONTASKWRITERWORKFLOWLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetBwmMigrationTaskWriterWorkflowListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBwmMigrationTaskWriterWorkflowListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(workflowName, workflowName_);
    };
    friend void from_json(const Darabonba::Json& j, GetBwmMigrationTaskWriterWorkflowListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(workflowName, workflowName_);
    };
    GetBwmMigrationTaskWriterWorkflowListRequest() = default ;
    GetBwmMigrationTaskWriterWorkflowListRequest(const GetBwmMigrationTaskWriterWorkflowListRequest &) = default ;
    GetBwmMigrationTaskWriterWorkflowListRequest(GetBwmMigrationTaskWriterWorkflowListRequest &&) = default ;
    GetBwmMigrationTaskWriterWorkflowListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBwmMigrationTaskWriterWorkflowListRequest() = default ;
    GetBwmMigrationTaskWriterWorkflowListRequest& operator=(const GetBwmMigrationTaskWriterWorkflowListRequest &) = default ;
    GetBwmMigrationTaskWriterWorkflowListRequest& operator=(GetBwmMigrationTaskWriterWorkflowListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->workflowName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetBwmMigrationTaskWriterWorkflowListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetBwmMigrationTaskWriterWorkflowListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetBwmMigrationTaskWriterWorkflowListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workflowName Field Functions 
    bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
    void deleteWorkflowName() { this->workflowName_ = nullptr;};
    inline string getWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
    inline GetBwmMigrationTaskWriterWorkflowListRequest& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


  protected:
    // The submit instance identifier.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The workflow name.
    shared_ptr<string> workflowName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
