// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTIONPOLICYAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTIONPOLICYAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class ListProtectionPolicyApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectionPolicyApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyStatus, applyStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectionPolicyApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyStatus, applyStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListProtectionPolicyApplicationsRequest() = default ;
    ListProtectionPolicyApplicationsRequest(const ListProtectionPolicyApplicationsRequest &) = default ;
    ListProtectionPolicyApplicationsRequest(ListProtectionPolicyApplicationsRequest &&) = default ;
    ListProtectionPolicyApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectionPolicyApplicationsRequest() = default ;
    ListProtectionPolicyApplicationsRequest& operator=(const ListProtectionPolicyApplicationsRequest &) = default ;
    ListProtectionPolicyApplicationsRequest& operator=(ListProtectionPolicyApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyStatus_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceType_ == nullptr && this->subProtectionPolicyType_ == nullptr && this->taskId_ == nullptr; };
    // applyStatus Field Functions 
    bool hasApplyStatus() const { return this->applyStatus_ != nullptr;};
    void deleteApplyStatus() { this->applyStatus_ = nullptr;};
    inline string getApplyStatus() const { DARABONBA_PTR_GET_DEFAULT(applyStatus_, "") };
    inline ListProtectionPolicyApplicationsRequest& setApplyStatus(string applyStatus) { DARABONBA_PTR_SET_VALUE(applyStatus_, applyStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProtectionPolicyApplicationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProtectionPolicyApplicationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListProtectionPolicyApplicationsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // subProtectionPolicyType Field Functions 
    bool hasSubProtectionPolicyType() const { return this->subProtectionPolicyType_ != nullptr;};
    void deleteSubProtectionPolicyType() { this->subProtectionPolicyType_ = nullptr;};
    inline string getSubProtectionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(subProtectionPolicyType_, "") };
    inline ListProtectionPolicyApplicationsRequest& setSubProtectionPolicyType(string subProtectionPolicyType) { DARABONBA_PTR_SET_VALUE(subProtectionPolicyType_, subProtectionPolicyType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListProtectionPolicyApplicationsRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The application status.
    shared_ptr<string> applyStatus_ {};
    // The maximum number of results to return in a single page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. The response returns a `NextToken` value only when more results are available. To retrieve the next page, include the `NextToken` from the previous response in your request. If the response does not include a `NextToken` value, all results have been retrieved.
    shared_ptr<string> nextToken_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // The sub-protection policy type.
    shared_ptr<string> subProtectionPolicyType_ {};
    // The task ID. You can call the DescribeTasks operation to query task IDs.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
