// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeInspectionTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInspectionTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LevelSummary, levelSummary_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInspectionTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LevelSummary, levelSummary_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeInspectionTasksRequest() = default ;
    DescribeInspectionTasksRequest(const DescribeInspectionTasksRequest &) = default ;
    DescribeInspectionTasksRequest(DescribeInspectionTasksRequest &&) = default ;
    DescribeInspectionTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInspectionTasksRequest() = default ;
    DescribeInspectionTasksRequest& operator=(const DescribeInspectionTasksRequest &) = default ;
    DescribeInspectionTasksRequest& operator=(DescribeInspectionTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->levelSummary_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->securityToken_ == nullptr && this->type_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInspectionTasksRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // levelSummary Field Functions 
    bool hasLevelSummary() const { return this->levelSummary_ != nullptr;};
    void deleteLevelSummary() { this->levelSummary_ = nullptr;};
    inline string getLevelSummary() const { DARABONBA_PTR_GET_DEFAULT(levelSummary_, "") };
    inline DescribeInspectionTasksRequest& setLevelSummary(string levelSummary) { DARABONBA_PTR_SET_VALUE(levelSummary_, levelSummary) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline string getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
    inline DescribeInspectionTasksRequest& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInspectionTasksRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeInspectionTasksRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeInspectionTasksRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the assistant instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The summary of risk levels for inspection results. You can specify multiple values. Valid values:
    // - Normal: Normal.
    // - Warning: Warning.
    // - Error: High-risk.
    // - Failed: Failed.
    shared_ptr<string> levelSummary_ {};
    // The page number.
    shared_ptr<string> pageNum_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> securityToken_ {};
    // The task type. Valid values:
    // - 1: Manual task.
    // - 2: Scheduled task.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
