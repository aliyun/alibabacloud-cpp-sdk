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
    // The ID of the access configuration. The ID can be used to filter access permissions.
    shared_ptr<string> accessConfigurationId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 20.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. If this is your first time to call this operation, you do not need to specify the `NextToken` parameter.
    // 
    // When you call this operation for the first time, if the total number of entries to return exceeds the value of `MaxResults`, the entries are truncated. Only the entries that match the value of `MaxResults` are returned, and the excess entries are not returned. In this case, the value of the response parameter `IsTruncated` is `true`, and `NextToken` is returned. In the next call, you can use the value of `NextToken` and maintain the settings of the other request parameters to query the excess entries. You can repeat the call until the value of `IsTruncated` becomes `false`. This way, all entries are returned.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> originTargetId_ {};
    // The status of the access configuration. The value can be used to filter accounts. Valid values:
    // 
    // - Provisioned: The access configuration is provisioned.
    // 
    // - ReprovisionRequired: The access configuration needs to be re-provisioned.
    // 
    // - DeprovisionFailed: The access configuration failed to be provisioned.
    shared_ptr<string> provisioningStatus_ {};
    // The ID of the task object. The ID can be used to filter access permissions.
    // 
    // > You can use the type to filter access permissions only if you specify both `TargetId` and `TargetType`.
    shared_ptr<string> targetId_ {};
    // The type of the task object. The type can be used to filter access permissions.
    // 
    // Set the value to RD-Account, which specifies the accounts in the resource directory.
    // 
    // > You can use the type to filter access permissions only if you specify both `TargetId` and `TargetType`.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
