// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultBranchId, defaultBranchId_);
      DARABONBA_PTR_TO_JSON(DefaultBranchName, defaultBranchName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultBranchId, defaultBranchId_);
      DARABONBA_PTR_FROM_JSON(DefaultBranchName, defaultBranchName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribeAgenticDBProjectResponseBody() = default ;
    DescribeAgenticDBProjectResponseBody(const DescribeAgenticDBProjectResponseBody &) = default ;
    DescribeAgenticDBProjectResponseBody(DescribeAgenticDBProjectResponseBody &&) = default ;
    DescribeAgenticDBProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBProjectResponseBody() = default ;
    DescribeAgenticDBProjectResponseBody& operator=(const DescribeAgenticDBProjectResponseBody &) = default ;
    DescribeAgenticDBProjectResponseBody& operator=(DescribeAgenticDBProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultBranchId_ == nullptr && this->defaultBranchName_ == nullptr && this->description_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAgenticDBProjectResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultBranchId Field Functions 
    bool hasDefaultBranchId() const { return this->defaultBranchId_ != nullptr;};
    void deleteDefaultBranchId() { this->defaultBranchId_ = nullptr;};
    inline string getDefaultBranchId() const { DARABONBA_PTR_GET_DEFAULT(defaultBranchId_, "") };
    inline DescribeAgenticDBProjectResponseBody& setDefaultBranchId(string defaultBranchId) { DARABONBA_PTR_SET_VALUE(defaultBranchId_, defaultBranchId) };


    // defaultBranchName Field Functions 
    bool hasDefaultBranchName() const { return this->defaultBranchName_ != nullptr;};
    void deleteDefaultBranchName() { this->defaultBranchName_ = nullptr;};
    inline string getDefaultBranchName() const { DARABONBA_PTR_GET_DEFAULT(defaultBranchName_, "") };
    inline DescribeAgenticDBProjectResponseBody& setDefaultBranchName(string defaultBranchName) { DARABONBA_PTR_SET_VALUE(defaultBranchName_, defaultBranchName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAgenticDBProjectResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeAgenticDBProjectResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeAgenticDBProjectResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticDBProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAgenticDBProjectResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeAgenticDBProjectResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> defaultBranchId_ {};
    shared_ptr<string> defaultBranchName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
