// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTEDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTEDRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class ListProtectedResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectedResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedByProduct, createdByProduct_);
      DARABONBA_PTR_TO_JSON(HasSnapshot, hasSnapshot_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectedResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedByProduct, createdByProduct_);
      DARABONBA_PTR_FROM_JSON(HasSnapshot, hasSnapshot_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ListProtectedResourcesRequest() = default ;
    ListProtectedResourcesRequest(const ListProtectedResourcesRequest &) = default ;
    ListProtectedResourcesRequest(ListProtectedResourcesRequest &&) = default ;
    ListProtectedResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectedResourcesRequest() = default ;
    ListProtectedResourcesRequest& operator=(const ListProtectedResourcesRequest &) = default ;
    ListProtectedResourcesRequest& operator=(ListProtectedResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdByProduct_ == nullptr
        && this->hasSnapshot_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceId_ == nullptr && this->skip_ == nullptr
        && this->sourceType_ == nullptr; };
    // createdByProduct Field Functions 
    bool hasCreatedByProduct() const { return this->createdByProduct_ != nullptr;};
    void deleteCreatedByProduct() { this->createdByProduct_ = nullptr;};
    inline string getCreatedByProduct() const { DARABONBA_PTR_GET_DEFAULT(createdByProduct_, "") };
    inline ListProtectedResourcesRequest& setCreatedByProduct(string createdByProduct) { DARABONBA_PTR_SET_VALUE(createdByProduct_, createdByProduct) };


    // hasSnapshot Field Functions 
    bool hasHasSnapshot() const { return this->hasSnapshot_ != nullptr;};
    void deleteHasSnapshot() { this->hasSnapshot_ = nullptr;};
    inline bool getHasSnapshot() const { DARABONBA_PTR_GET_DEFAULT(hasSnapshot_, false) };
    inline ListProtectedResourcesRequest& setHasSnapshot(bool hasSnapshot) { DARABONBA_PTR_SET_VALUE(hasSnapshot_, hasSnapshot) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProtectedResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProtectedResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListProtectedResourcesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListProtectedResourcesRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListProtectedResourcesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The product capability to which the resource belongs. Valid values:
    // - **HBR**: Cloud Backup standard capability.
    // - **BASIC**: ECS File Backup Essential Edition.
    shared_ptr<string> createdByProduct_ {};
    // Specifies whether the resource has backup points.
    shared_ptr<bool> hasSnapshot_ {};
    // The number of results per query.
    // 
    // Valid values: 10 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. If this parameter is empty, no more pages are available.
    shared_ptr<string> nextToken_ {};
    // The resource ID.
    // - **SourceType=ECS_FILE**: the ECS instance ID.
    // - **SourceType=COMMON_FILE_SYSTEM**: the CPFS data source ID.
    // - **SourceType=COMMON_NAS**: the on-premises NAS data source ID.
    // - **SourceType=File**: the local service client ID.
    // - **SourceType=NAS**: the Alibaba Cloud NAS file system ID.
    // - **SourceType=OSS**: the OSS bucket.
    shared_ptr<string> resourceId_ {};
    // The number of entries to skip for paging.
    // If the number of skipped entries exceeds the total number of conditional entries, an empty list is returned. The number of skipped entries must be a multiple of MaxResults.
    shared_ptr<int32_t> skip_ {};
    // The backup feature type. Valid values:
    // - **ECS_FILE**: ECS file backup.
    // - **COMMON_FILE_SYSTEM**: Cloud Parallel File Storage (CPFS) backup.
    // - **COMMON_NAS**: on-premises NAS backup.
    // - **File**: on-premises file backup.
    // - **NAS**: Alibaba Cloud NAS backup.
    // - **OSS**: OSS backup.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
