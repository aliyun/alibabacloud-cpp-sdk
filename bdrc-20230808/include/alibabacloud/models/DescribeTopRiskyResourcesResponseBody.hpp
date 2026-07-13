// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPRISKYRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPRISKYRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeTopRiskyResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopRiskyResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopRiskyResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTopRiskyResourcesResponseBody() = default ;
    DescribeTopRiskyResourcesResponseBody(const DescribeTopRiskyResourcesResponseBody &) = default ;
    DescribeTopRiskyResourcesResponseBody(DescribeTopRiskyResourcesResponseBody &&) = default ;
    DescribeTopRiskyResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopRiskyResourcesResponseBody() = default ;
    DescribeTopRiskyResourcesResponseBody& operator=(const DescribeTopRiskyResourcesResponseBody &) = default ;
    DescribeTopRiskyResourcesResponseBody& operator=(DescribeTopRiskyResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(ArchiveDataSize, archiveDataSize_);
          DARABONBA_PTR_TO_JSON(CheckFailedCount, checkFailedCount_);
          DARABONBA_PTR_TO_JSON(ColdArchiveDataSize, coldArchiveDataSize_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataRedundancyType, dataRedundancyType_);
          DARABONBA_PTR_TO_JSON(EnableCheck, enableCheck_);
          DARABONBA_PTR_TO_JSON(IaDataSize, iaDataSize_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(ProtectionScore, protectionScore_);
          DARABONBA_PTR_TO_JSON(ProtectionScoreUpdatedTime, protectionScoreUpdatedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
          DARABONBA_PTR_TO_JSON(StandardDataSize, standardDataSize_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(ArchiveDataSize, archiveDataSize_);
          DARABONBA_PTR_FROM_JSON(CheckFailedCount, checkFailedCount_);
          DARABONBA_PTR_FROM_JSON(ColdArchiveDataSize, coldArchiveDataSize_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataRedundancyType, dataRedundancyType_);
          DARABONBA_PTR_FROM_JSON(EnableCheck, enableCheck_);
          DARABONBA_PTR_FROM_JSON(IaDataSize, iaDataSize_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(ProtectionScore, protectionScore_);
          DARABONBA_PTR_FROM_JSON(ProtectionScoreUpdatedTime, protectionScoreUpdatedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
          DARABONBA_PTR_FROM_JSON(StandardDataSize, standardDataSize_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->archiveDataSize_ == nullptr
        && this->checkFailedCount_ == nullptr && this->coldArchiveDataSize_ == nullptr && this->createTime_ == nullptr && this->dataRedundancyType_ == nullptr && this->enableCheck_ == nullptr
        && this->iaDataSize_ == nullptr && this->productType_ == nullptr && this->protectionScore_ == nullptr && this->protectionScoreUpdatedTime_ == nullptr && this->regionId_ == nullptr
        && this->resourceArn_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr
        && this->riskCount_ == nullptr && this->standardDataSize_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr && this->totalDataSize_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // archiveDataSize Field Functions 
        bool hasArchiveDataSize() const { return this->archiveDataSize_ != nullptr;};
        void deleteArchiveDataSize() { this->archiveDataSize_ = nullptr;};
        inline int64_t getArchiveDataSize() const { DARABONBA_PTR_GET_DEFAULT(archiveDataSize_, 0L) };
        inline Content& setArchiveDataSize(int64_t archiveDataSize) { DARABONBA_PTR_SET_VALUE(archiveDataSize_, archiveDataSize) };


        // checkFailedCount Field Functions 
        bool hasCheckFailedCount() const { return this->checkFailedCount_ != nullptr;};
        void deleteCheckFailedCount() { this->checkFailedCount_ = nullptr;};
        inline int64_t getCheckFailedCount() const { DARABONBA_PTR_GET_DEFAULT(checkFailedCount_, 0L) };
        inline Content& setCheckFailedCount(int64_t checkFailedCount) { DARABONBA_PTR_SET_VALUE(checkFailedCount_, checkFailedCount) };


        // coldArchiveDataSize Field Functions 
        bool hasColdArchiveDataSize() const { return this->coldArchiveDataSize_ != nullptr;};
        void deleteColdArchiveDataSize() { this->coldArchiveDataSize_ = nullptr;};
        inline int64_t getColdArchiveDataSize() const { DARABONBA_PTR_GET_DEFAULT(coldArchiveDataSize_, 0L) };
        inline Content& setColdArchiveDataSize(int64_t coldArchiveDataSize) { DARABONBA_PTR_SET_VALUE(coldArchiveDataSize_, coldArchiveDataSize) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Content& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataRedundancyType Field Functions 
        bool hasDataRedundancyType() const { return this->dataRedundancyType_ != nullptr;};
        void deleteDataRedundancyType() { this->dataRedundancyType_ = nullptr;};
        inline string getDataRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(dataRedundancyType_, "") };
        inline Content& setDataRedundancyType(string dataRedundancyType) { DARABONBA_PTR_SET_VALUE(dataRedundancyType_, dataRedundancyType) };


        // enableCheck Field Functions 
        bool hasEnableCheck() const { return this->enableCheck_ != nullptr;};
        void deleteEnableCheck() { this->enableCheck_ = nullptr;};
        inline bool getEnableCheck() const { DARABONBA_PTR_GET_DEFAULT(enableCheck_, false) };
        inline Content& setEnableCheck(bool enableCheck) { DARABONBA_PTR_SET_VALUE(enableCheck_, enableCheck) };


        // iaDataSize Field Functions 
        bool hasIaDataSize() const { return this->iaDataSize_ != nullptr;};
        void deleteIaDataSize() { this->iaDataSize_ = nullptr;};
        inline int64_t getIaDataSize() const { DARABONBA_PTR_GET_DEFAULT(iaDataSize_, 0L) };
        inline Content& setIaDataSize(int64_t iaDataSize) { DARABONBA_PTR_SET_VALUE(iaDataSize_, iaDataSize) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline Content& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // protectionScore Field Functions 
        bool hasProtectionScore() const { return this->protectionScore_ != nullptr;};
        void deleteProtectionScore() { this->protectionScore_ = nullptr;};
        inline int32_t getProtectionScore() const { DARABONBA_PTR_GET_DEFAULT(protectionScore_, 0) };
        inline Content& setProtectionScore(int32_t protectionScore) { DARABONBA_PTR_SET_VALUE(protectionScore_, protectionScore) };


        // protectionScoreUpdatedTime Field Functions 
        bool hasProtectionScoreUpdatedTime() const { return this->protectionScoreUpdatedTime_ != nullptr;};
        void deleteProtectionScoreUpdatedTime() { this->protectionScoreUpdatedTime_ = nullptr;};
        inline int64_t getProtectionScoreUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(protectionScoreUpdatedTime_, 0L) };
        inline Content& setProtectionScoreUpdatedTime(int64_t protectionScoreUpdatedTime) { DARABONBA_PTR_SET_VALUE(protectionScoreUpdatedTime_, protectionScoreUpdatedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceArn Field Functions 
        bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
        void deleteResourceArn() { this->resourceArn_ = nullptr;};
        inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
        inline Content& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Content& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline Content& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceOwnerId Field Functions 
        bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
        void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
        inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
        inline Content& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Content& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // riskCount Field Functions 
        bool hasRiskCount() const { return this->riskCount_ != nullptr;};
        void deleteRiskCount() { this->riskCount_ = nullptr;};
        inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
        inline Content& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


        // standardDataSize Field Functions 
        bool hasStandardDataSize() const { return this->standardDataSize_ != nullptr;};
        void deleteStandardDataSize() { this->standardDataSize_ = nullptr;};
        inline int64_t getStandardDataSize() const { DARABONBA_PTR_GET_DEFAULT(standardDataSize_, 0L) };
        inline Content& setStandardDataSize(int64_t standardDataSize) { DARABONBA_PTR_SET_VALUE(standardDataSize_, standardDataSize) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline Content& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


        // totalDataSize Field Functions 
        bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
        void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
        inline int64_t getTotalDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalDataSize_, 0L) };
        inline Content& setTotalDataSize(int64_t totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Content& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Content& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Content& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The size of data in the Archive storage class, in bytes.
        shared_ptr<int64_t> archiveDataSize_ {};
        // The number of checks that failed.
        shared_ptr<int64_t> checkFailedCount_ {};
        // The size of data in the Cold Archive storage class, in bytes.
        shared_ptr<int64_t> coldArchiveDataSize_ {};
        // The timestamp indicating when the resource was created.
        shared_ptr<int64_t> createTime_ {};
        // The data redundancy type. For example, \\"LRS\\" (locally redundant storage).
        shared_ptr<string> dataRedundancyType_ {};
        // Indicates whether the data protection score assessment is enabled.
        shared_ptr<bool> enableCheck_ {};
        // The size of data in the Infrequent Access (IA) storage class, in bytes.
        shared_ptr<int64_t> iaDataSize_ {};
        // The product type.
        shared_ptr<string> productType_ {};
        // The data protection score of the resource.
        shared_ptr<int32_t> protectionScore_ {};
        // The timestamp when the protection score was last updated.
        shared_ptr<int64_t> protectionScoreUpdatedTime_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
        // The Alibaba Cloud Resource Name (ARN) of the resource.
        shared_ptr<string> resourceArn_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // The resource name.
        shared_ptr<string> resourceName_ {};
        // The ID of the Alibaba Cloud account that owns the resource.
        shared_ptr<int64_t> resourceOwnerId_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // The number of identified risks.
        shared_ptr<int64_t> riskCount_ {};
        // The size of data in the Standard storage class, in bytes.
        shared_ptr<int64_t> standardDataSize_ {};
        // The status of the resource.
        shared_ptr<string> status_ {};
        // The storage class of the data. For example, \\"Standard\\".
        shared_ptr<string> storageClass_ {};
        // The total data size, in bytes.
        shared_ptr<int64_t> totalDataSize_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the VPC.
        shared_ptr<string> vpcId_ {};
        // The ID of the zone.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // A list of resource objects.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of entries to return on each page.
      shared_ptr<int32_t> maxResults_ {};
      // A pagination token. It can be used in the next request to retrieve a new page of results. If this parameter is not returned, it indicates that all results have been returned.
      shared_ptr<string> nextToken_ {};
      // The total number of matching entries. This parameter is optional and might not be returned in the response.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeTopRiskyResourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeTopRiskyResourcesResponseBody::Data) };
    inline DescribeTopRiskyResourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeTopRiskyResourcesResponseBody::Data) };
    inline DescribeTopRiskyResourcesResponseBody& setData(const DescribeTopRiskyResourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTopRiskyResourcesResponseBody& setData(DescribeTopRiskyResourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTopRiskyResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned in the response.
    shared_ptr<DescribeTopRiskyResourcesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
