// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTRESOURCESFORCLOUDPERMISSIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTRESOURCESFORCLOUDPERMISSIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListCloudAccountResourcesForCloudPermissionTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountResources, cloudAccountResources_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountResources, cloudAccountResources_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAccountResourcesForCloudPermissionTemplateResponseBody() = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateResponseBody(const ListCloudAccountResourcesForCloudPermissionTemplateResponseBody &) = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateResponseBody(ListCloudAccountResourcesForCloudPermissionTemplateResponseBody &&) = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAccountResourcesForCloudPermissionTemplateResponseBody() = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& operator=(const ListCloudAccountResourcesForCloudPermissionTemplateResponseBody &) = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& operator=(ListCloudAccountResourcesForCloudPermissionTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccountResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccountResources& obj) { 
        DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_TO_JSON(CloudAccountResourceEntityId, cloudAccountResourceEntityId_);
        DARABONBA_PTR_TO_JSON(CloudAccountResourceEntityType, cloudAccountResourceEntityType_);
        DARABONBA_PTR_TO_JSON(CloudAccountResourceId, cloudAccountResourceId_);
        DARABONBA_PTR_TO_JSON(CloudAccountResourceMeta, cloudAccountResourceMeta_);
        DARABONBA_PTR_TO_JSON(CloudAccountResourceName, cloudAccountResourceName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAccountResources& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountResourceEntityId, cloudAccountResourceEntityId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountResourceEntityType, cloudAccountResourceEntityType_);
        DARABONBA_PTR_FROM_JSON(CloudAccountResourceId, cloudAccountResourceId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountResourceMeta, cloudAccountResourceMeta_);
        DARABONBA_PTR_FROM_JSON(CloudAccountResourceName, cloudAccountResourceName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      CloudAccountResources() = default ;
      CloudAccountResources(const CloudAccountResources &) = default ;
      CloudAccountResources(CloudAccountResources &&) = default ;
      CloudAccountResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccountResources() = default ;
      CloudAccountResources& operator=(const CloudAccountResources &) = default ;
      CloudAccountResources& operator=(CloudAccountResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudAccountResourceMeta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudAccountResourceMeta& obj) { 
          DARABONBA_PTR_TO_JSON(CamPolicyDocument, camPolicyDocument_);
          DARABONBA_PTR_TO_JSON(CamPolicyType, camPolicyType_);
          DARABONBA_PTR_TO_JSON(IamPolicyDocument, iamPolicyDocument_);
          DARABONBA_PTR_TO_JSON(IamPolicyType, iamPolicyType_);
          DARABONBA_PTR_TO_JSON(RamPolicyDocument, ramPolicyDocument_);
          DARABONBA_PTR_TO_JSON(RamPolicyType, ramPolicyType_);
        };
        friend void from_json(const Darabonba::Json& j, CloudAccountResourceMeta& obj) { 
          DARABONBA_PTR_FROM_JSON(CamPolicyDocument, camPolicyDocument_);
          DARABONBA_PTR_FROM_JSON(CamPolicyType, camPolicyType_);
          DARABONBA_PTR_FROM_JSON(IamPolicyDocument, iamPolicyDocument_);
          DARABONBA_PTR_FROM_JSON(IamPolicyType, iamPolicyType_);
          DARABONBA_PTR_FROM_JSON(RamPolicyDocument, ramPolicyDocument_);
          DARABONBA_PTR_FROM_JSON(RamPolicyType, ramPolicyType_);
        };
        CloudAccountResourceMeta() = default ;
        CloudAccountResourceMeta(const CloudAccountResourceMeta &) = default ;
        CloudAccountResourceMeta(CloudAccountResourceMeta &&) = default ;
        CloudAccountResourceMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudAccountResourceMeta() = default ;
        CloudAccountResourceMeta& operator=(const CloudAccountResourceMeta &) = default ;
        CloudAccountResourceMeta& operator=(CloudAccountResourceMeta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->camPolicyDocument_ == nullptr
        && this->camPolicyType_ == nullptr && this->iamPolicyDocument_ == nullptr && this->iamPolicyType_ == nullptr && this->ramPolicyDocument_ == nullptr && this->ramPolicyType_ == nullptr; };
        // camPolicyDocument Field Functions 
        bool hasCamPolicyDocument() const { return this->camPolicyDocument_ != nullptr;};
        void deleteCamPolicyDocument() { this->camPolicyDocument_ = nullptr;};
        inline string getCamPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(camPolicyDocument_, "") };
        inline CloudAccountResourceMeta& setCamPolicyDocument(string camPolicyDocument) { DARABONBA_PTR_SET_VALUE(camPolicyDocument_, camPolicyDocument) };


        // camPolicyType Field Functions 
        bool hasCamPolicyType() const { return this->camPolicyType_ != nullptr;};
        void deleteCamPolicyType() { this->camPolicyType_ = nullptr;};
        inline string getCamPolicyType() const { DARABONBA_PTR_GET_DEFAULT(camPolicyType_, "") };
        inline CloudAccountResourceMeta& setCamPolicyType(string camPolicyType) { DARABONBA_PTR_SET_VALUE(camPolicyType_, camPolicyType) };


        // iamPolicyDocument Field Functions 
        bool hasIamPolicyDocument() const { return this->iamPolicyDocument_ != nullptr;};
        void deleteIamPolicyDocument() { this->iamPolicyDocument_ = nullptr;};
        inline string getIamPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(iamPolicyDocument_, "") };
        inline CloudAccountResourceMeta& setIamPolicyDocument(string iamPolicyDocument) { DARABONBA_PTR_SET_VALUE(iamPolicyDocument_, iamPolicyDocument) };


        // iamPolicyType Field Functions 
        bool hasIamPolicyType() const { return this->iamPolicyType_ != nullptr;};
        void deleteIamPolicyType() { this->iamPolicyType_ = nullptr;};
        inline string getIamPolicyType() const { DARABONBA_PTR_GET_DEFAULT(iamPolicyType_, "") };
        inline CloudAccountResourceMeta& setIamPolicyType(string iamPolicyType) { DARABONBA_PTR_SET_VALUE(iamPolicyType_, iamPolicyType) };


        // ramPolicyDocument Field Functions 
        bool hasRamPolicyDocument() const { return this->ramPolicyDocument_ != nullptr;};
        void deleteRamPolicyDocument() { this->ramPolicyDocument_ = nullptr;};
        inline string getRamPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(ramPolicyDocument_, "") };
        inline CloudAccountResourceMeta& setRamPolicyDocument(string ramPolicyDocument) { DARABONBA_PTR_SET_VALUE(ramPolicyDocument_, ramPolicyDocument) };


        // ramPolicyType Field Functions 
        bool hasRamPolicyType() const { return this->ramPolicyType_ != nullptr;};
        void deleteRamPolicyType() { this->ramPolicyType_ = nullptr;};
        inline string getRamPolicyType() const { DARABONBA_PTR_GET_DEFAULT(ramPolicyType_, "") };
        inline CloudAccountResourceMeta& setRamPolicyType(string ramPolicyType) { DARABONBA_PTR_SET_VALUE(ramPolicyType_, ramPolicyType) };


      protected:
        // The JSON document of the Tencent Cloud CAM policy. This field is returned only for Tencent Cloud accounts.
        shared_ptr<string> camPolicyDocument_ {};
        // The type of the Tencent Cloud CAM policy. Valid values: qcs, local. This field is returned only for Tencent Cloud accounts.
        shared_ptr<string> camPolicyType_ {};
        // The JSON document of the AWS IAM policy. This field is returned only for AWS cloud accounts.
        shared_ptr<string> iamPolicyDocument_ {};
        // The type of the AWS IAM policy. Valid values: aws, local. This field is returned only for AWS cloud accounts.
        shared_ptr<string> iamPolicyType_ {};
        // The JSON document of the RAM policy. This field is returned only by the get operation.
        shared_ptr<string> ramPolicyDocument_ {};
        // The type of the RAM policy. Valid values: system, custom.
        shared_ptr<string> ramPolicyType_ {};
      };

      virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudAccountResourceEntityId_ == nullptr && this->cloudAccountResourceEntityType_ == nullptr && this->cloudAccountResourceId_ == nullptr && this->cloudAccountResourceMeta_ == nullptr && this->cloudAccountResourceName_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->updateTime_ == nullptr; };
      // cloudAccountId Field Functions 
      bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
      void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
      inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
      inline CloudAccountResources& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // cloudAccountResourceEntityId Field Functions 
      bool hasCloudAccountResourceEntityId() const { return this->cloudAccountResourceEntityId_ != nullptr;};
      void deleteCloudAccountResourceEntityId() { this->cloudAccountResourceEntityId_ = nullptr;};
      inline string getCloudAccountResourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceEntityId_, "") };
      inline CloudAccountResources& setCloudAccountResourceEntityId(string cloudAccountResourceEntityId) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceEntityId_, cloudAccountResourceEntityId) };


      // cloudAccountResourceEntityType Field Functions 
      bool hasCloudAccountResourceEntityType() const { return this->cloudAccountResourceEntityType_ != nullptr;};
      void deleteCloudAccountResourceEntityType() { this->cloudAccountResourceEntityType_ = nullptr;};
      inline string getCloudAccountResourceEntityType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceEntityType_, "") };
      inline CloudAccountResources& setCloudAccountResourceEntityType(string cloudAccountResourceEntityType) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceEntityType_, cloudAccountResourceEntityType) };


      // cloudAccountResourceId Field Functions 
      bool hasCloudAccountResourceId() const { return this->cloudAccountResourceId_ != nullptr;};
      void deleteCloudAccountResourceId() { this->cloudAccountResourceId_ = nullptr;};
      inline string getCloudAccountResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceId_, "") };
      inline CloudAccountResources& setCloudAccountResourceId(string cloudAccountResourceId) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceId_, cloudAccountResourceId) };


      // cloudAccountResourceMeta Field Functions 
      bool hasCloudAccountResourceMeta() const { return this->cloudAccountResourceMeta_ != nullptr;};
      void deleteCloudAccountResourceMeta() { this->cloudAccountResourceMeta_ = nullptr;};
      inline const CloudAccountResources::CloudAccountResourceMeta & getCloudAccountResourceMeta() const { DARABONBA_PTR_GET_CONST(cloudAccountResourceMeta_, CloudAccountResources::CloudAccountResourceMeta) };
      inline CloudAccountResources::CloudAccountResourceMeta getCloudAccountResourceMeta() { DARABONBA_PTR_GET(cloudAccountResourceMeta_, CloudAccountResources::CloudAccountResourceMeta) };
      inline CloudAccountResources& setCloudAccountResourceMeta(const CloudAccountResources::CloudAccountResourceMeta & cloudAccountResourceMeta) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceMeta_, cloudAccountResourceMeta) };
      inline CloudAccountResources& setCloudAccountResourceMeta(CloudAccountResources::CloudAccountResourceMeta && cloudAccountResourceMeta) { DARABONBA_PTR_SET_RVALUE(cloudAccountResourceMeta_, cloudAccountResourceMeta) };


      // cloudAccountResourceName Field Functions 
      bool hasCloudAccountResourceName() const { return this->cloudAccountResourceName_ != nullptr;};
      void deleteCloudAccountResourceName() { this->cloudAccountResourceName_ = nullptr;};
      inline string getCloudAccountResourceName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceName_, "") };
      inline CloudAccountResources& setCloudAccountResourceName(string cloudAccountResourceName) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceName_, cloudAccountResourceName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CloudAccountResources& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CloudAccountResources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CloudAccountResources& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the cloud account to which the resource belongs.
      shared_ptr<string> cloudAccountId_ {};
      // The resource entity identifier, which is a unique identifier on the remote end.
      shared_ptr<string> cloudAccountResourceEntityId_ {};
      // The resource entity type. Valid value: ram_role.
      shared_ptr<string> cloudAccountResourceEntityType_ {};
      // The identifier of the cloud account resource.
      shared_ptr<string> cloudAccountResourceId_ {};
      // The metadata of the resource.
      shared_ptr<CloudAccountResources::CloudAccountResourceMeta> cloudAccountResourceMeta_ {};
      // The name of the resource.
      shared_ptr<string> cloudAccountResourceName_ {};
      // The time when the resource was created. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The time when the resource was last updated. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->cloudAccountResources_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudAccountResources Field Functions 
    bool hasCloudAccountResources() const { return this->cloudAccountResources_ != nullptr;};
    void deleteCloudAccountResources() { this->cloudAccountResources_ = nullptr;};
    inline const vector<ListCloudAccountResourcesForCloudPermissionTemplateResponseBody::CloudAccountResources> & getCloudAccountResources() const { DARABONBA_PTR_GET_CONST(cloudAccountResources_, vector<ListCloudAccountResourcesForCloudPermissionTemplateResponseBody::CloudAccountResources>) };
    inline vector<ListCloudAccountResourcesForCloudPermissionTemplateResponseBody::CloudAccountResources> getCloudAccountResources() { DARABONBA_PTR_GET(cloudAccountResources_, vector<ListCloudAccountResourcesForCloudPermissionTemplateResponseBody::CloudAccountResources>) };
    inline ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& setCloudAccountResources(const vector<ListCloudAccountResourcesForCloudPermissionTemplateResponseBody::CloudAccountResources> & cloudAccountResources) { DARABONBA_PTR_SET_VALUE(cloudAccountResources_, cloudAccountResources) };
    inline ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& setCloudAccountResources(vector<ListCloudAccountResourcesForCloudPermissionTemplateResponseBody::CloudAccountResources> && cloudAccountResources) { DARABONBA_PTR_SET_RVALUE(cloudAccountResources_, cloudAccountResources) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCloudAccountResourcesForCloudPermissionTemplateResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of cloud account resources.
    shared_ptr<vector<ListCloudAccountResourcesForCloudPermissionTemplateResponseBody::CloudAccountResources>> cloudAccountResources_ {};
    // The number of entries returned on each page in a paging query.
    shared_ptr<int64_t> maxResults_ {};
    // The query token returned by the current call, which is used for the next paginated query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries in the list.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
