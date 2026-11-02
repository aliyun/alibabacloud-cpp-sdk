// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONPROVISIONINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONPROVISIONINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListAccessConfigurationProvisioningsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessConfigurationProvisioningsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OriginTargetId, originTargetId_);
      DARABONBA_PTR_TO_JSON(ProvisioningStatus, provisioningStatus_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessConfigurationProvisioningsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OriginTargetId, originTargetId_);
      DARABONBA_PTR_FROM_JSON(ProvisioningStatus, provisioningStatus_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListAccessConfigurationProvisioningsRequest() = default ;
    ListAccessConfigurationProvisioningsRequest(const ListAccessConfigurationProvisioningsRequest &) = default ;
    ListAccessConfigurationProvisioningsRequest(ListAccessConfigurationProvisioningsRequest &&) = default ;
    ListAccessConfigurationProvisioningsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessConfigurationProvisioningsRequest() = default ;
    ListAccessConfigurationProvisioningsRequest& operator=(const ListAccessConfigurationProvisioningsRequest &) = default ;
    ListAccessConfigurationProvisioningsRequest& operator=(ListAccessConfigurationProvisioningsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->originTargetId_ == nullptr && this->provisioningStatus_ == nullptr
        && this->targetId_ == nullptr && this->targetType_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline ListAccessConfigurationProvisioningsRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListAccessConfigurationProvisioningsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAccessConfigurationProvisioningsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessConfigurationProvisioningsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // originTargetId Field Functions 
    bool hasOriginTargetId() const { return this->originTargetId_ != nullptr;};
    void deleteOriginTargetId() { this->originTargetId_ = nullptr;};
    inline string getOriginTargetId() const { DARABONBA_PTR_GET_DEFAULT(originTargetId_, "") };
    inline ListAccessConfigurationProvisioningsRequest& setOriginTargetId(string originTargetId) { DARABONBA_PTR_SET_VALUE(originTargetId_, originTargetId) };


    // provisioningStatus Field Functions 
    bool hasProvisioningStatus() const { return this->provisioningStatus_ != nullptr;};
    void deleteProvisioningStatus() { this->provisioningStatus_ = nullptr;};
    inline string getProvisioningStatus() const { DARABONBA_PTR_GET_DEFAULT(provisioningStatus_, "") };
    inline ListAccessConfigurationProvisioningsRequest& setProvisioningStatus(string provisioningStatus) { DARABONBA_PTR_SET_VALUE(provisioningStatus_, provisioningStatus) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListAccessConfigurationProvisioningsRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListAccessConfigurationProvisioningsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The access configuration ID used as a filter condition for the query.
    shared_ptr<string> accessConfigurationId_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The maximum number of entries to return on each page.
    // 
    // Valid values: 1 to 20.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to return the next page of query results. You do not need to specify NextToken when you call this operation for the first time.
    // 
    // When you call this operation for the first time, if the total number of returned entries exceeds the value of MaxResults, the returned results are truncated. Only the number of entries specified by MaxResults is returned, the IsTruncated parameter is set to true, and a NextToken is returned. You can use the returned NextToken to call this operation again to query the truncated entries while keeping other request parameters unchanged. You can repeat this process until IsTruncated is set to false, which indicates that all entries are returned.
    shared_ptr<string> nextToken_ {};
    // The Alibaba Cloud account ID of the provisioning target.
    shared_ptr<string> originTargetId_ {};
    // The provisioning status used as a filter condition for the query. Valid values:
    // 
    // - Provisioned: The provisioning succeeded.
    // - ReprovisionRequired: Reprovisioning is required.
    // - DeprovisionFailed: The provisioning failed.
    shared_ptr<string> provisioningStatus_ {};
    // The target ID used as a filter condition for the query.
    // 
    // > You must specify both TargetId and TargetType for them to take effect as filter conditions.
    shared_ptr<string> targetId_ {};
    // The target type used as a filter condition for the query.
    // 
    // Valid values:
    // - RD-Account: The target is an account in a resource directory.
    // 
    // > You must specify both TargetId and TargetType for them to take effect as filter conditions.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
