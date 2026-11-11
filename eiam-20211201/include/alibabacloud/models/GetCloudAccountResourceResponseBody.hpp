// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDACCOUNTRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDACCOUNTRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetCloudAccountResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAccountResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountResource, cloudAccountResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAccountResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountResource, cloudAccountResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudAccountResourceResponseBody() = default ;
    GetCloudAccountResourceResponseBody(const GetCloudAccountResourceResponseBody &) = default ;
    GetCloudAccountResourceResponseBody(GetCloudAccountResourceResponseBody &&) = default ;
    GetCloudAccountResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAccountResourceResponseBody() = default ;
    GetCloudAccountResourceResponseBody& operator=(const GetCloudAccountResourceResponseBody &) = default ;
    GetCloudAccountResourceResponseBody& operator=(GetCloudAccountResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccountResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccountResource& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CloudAccountResource& obj) { 
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
      CloudAccountResource() = default ;
      CloudAccountResource(const CloudAccountResource &) = default ;
      CloudAccountResource(CloudAccountResource &&) = default ;
      CloudAccountResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccountResource() = default ;
      CloudAccountResource& operator=(const CloudAccountResource &) = default ;
      CloudAccountResource& operator=(CloudAccountResource &&) = default ;
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
        // The JSON string of the Tencent Cloud CAM policy document. This parameter is returned only for Tencent Cloud accounts.
        shared_ptr<string> camPolicyDocument_ {};
        // The type of the Tencent Cloud CAM policy. Valid values: qcs and local. This parameter is returned only for Tencent Cloud accounts.
        shared_ptr<string> camPolicyType_ {};
        // The JSON string of the AWS IAM policy document. This parameter is returned only for AWS cloud accounts.
        shared_ptr<string> iamPolicyDocument_ {};
        // The type of the AWS IAM policy. Valid values: aws and local. This parameter is returned only for AWS cloud accounts.
        shared_ptr<string> iamPolicyType_ {};
        // The JSON string of the RAM policy document. This parameter is returned only by the Get operation.
        shared_ptr<string> ramPolicyDocument_ {};
        // The type of the RAM policy. Valid values: system and custom.
        shared_ptr<string> ramPolicyType_ {};
      };

      virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudAccountResourceEntityId_ == nullptr && this->cloudAccountResourceEntityType_ == nullptr && this->cloudAccountResourceId_ == nullptr && this->cloudAccountResourceMeta_ == nullptr && this->cloudAccountResourceName_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->updateTime_ == nullptr; };
      // cloudAccountId Field Functions 
      bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
      void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
      inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
      inline CloudAccountResource& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // cloudAccountResourceEntityId Field Functions 
      bool hasCloudAccountResourceEntityId() const { return this->cloudAccountResourceEntityId_ != nullptr;};
      void deleteCloudAccountResourceEntityId() { this->cloudAccountResourceEntityId_ = nullptr;};
      inline string getCloudAccountResourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceEntityId_, "") };
      inline CloudAccountResource& setCloudAccountResourceEntityId(string cloudAccountResourceEntityId) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceEntityId_, cloudAccountResourceEntityId) };


      // cloudAccountResourceEntityType Field Functions 
      bool hasCloudAccountResourceEntityType() const { return this->cloudAccountResourceEntityType_ != nullptr;};
      void deleteCloudAccountResourceEntityType() { this->cloudAccountResourceEntityType_ = nullptr;};
      inline string getCloudAccountResourceEntityType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceEntityType_, "") };
      inline CloudAccountResource& setCloudAccountResourceEntityType(string cloudAccountResourceEntityType) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceEntityType_, cloudAccountResourceEntityType) };


      // cloudAccountResourceId Field Functions 
      bool hasCloudAccountResourceId() const { return this->cloudAccountResourceId_ != nullptr;};
      void deleteCloudAccountResourceId() { this->cloudAccountResourceId_ = nullptr;};
      inline string getCloudAccountResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceId_, "") };
      inline CloudAccountResource& setCloudAccountResourceId(string cloudAccountResourceId) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceId_, cloudAccountResourceId) };


      // cloudAccountResourceMeta Field Functions 
      bool hasCloudAccountResourceMeta() const { return this->cloudAccountResourceMeta_ != nullptr;};
      void deleteCloudAccountResourceMeta() { this->cloudAccountResourceMeta_ = nullptr;};
      inline const CloudAccountResource::CloudAccountResourceMeta & getCloudAccountResourceMeta() const { DARABONBA_PTR_GET_CONST(cloudAccountResourceMeta_, CloudAccountResource::CloudAccountResourceMeta) };
      inline CloudAccountResource::CloudAccountResourceMeta getCloudAccountResourceMeta() { DARABONBA_PTR_GET(cloudAccountResourceMeta_, CloudAccountResource::CloudAccountResourceMeta) };
      inline CloudAccountResource& setCloudAccountResourceMeta(const CloudAccountResource::CloudAccountResourceMeta & cloudAccountResourceMeta) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceMeta_, cloudAccountResourceMeta) };
      inline CloudAccountResource& setCloudAccountResourceMeta(CloudAccountResource::CloudAccountResourceMeta && cloudAccountResourceMeta) { DARABONBA_PTR_SET_RVALUE(cloudAccountResourceMeta_, cloudAccountResourceMeta) };


      // cloudAccountResourceName Field Functions 
      bool hasCloudAccountResourceName() const { return this->cloudAccountResourceName_ != nullptr;};
      void deleteCloudAccountResourceName() { this->cloudAccountResourceName_ = nullptr;};
      inline string getCloudAccountResourceName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceName_, "") };
      inline CloudAccountResource& setCloudAccountResourceName(string cloudAccountResourceName) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceName_, cloudAccountResourceName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CloudAccountResource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CloudAccountResource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CloudAccountResource& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the cloud account.
      shared_ptr<string> cloudAccountId_ {};
      // The identifier of the resource entity, which is a unique remote identifier.
      shared_ptr<string> cloudAccountResourceEntityId_ {};
      // The type of the resource entity. Valid values: ram_policy.
      shared_ptr<string> cloudAccountResourceEntityType_ {};
      // The ID of the cloud account resource.
      shared_ptr<string> cloudAccountResourceId_ {};
      // The metadata information of the resource.
      shared_ptr<CloudAccountResource::CloudAccountResourceMeta> cloudAccountResourceMeta_ {};
      // The name of the resource.
      shared_ptr<string> cloudAccountResourceName_ {};
      // The time when the resource was created. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The time when the resource was updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->cloudAccountResource_ == nullptr
        && this->requestId_ == nullptr; };
    // cloudAccountResource Field Functions 
    bool hasCloudAccountResource() const { return this->cloudAccountResource_ != nullptr;};
    void deleteCloudAccountResource() { this->cloudAccountResource_ = nullptr;};
    inline const GetCloudAccountResourceResponseBody::CloudAccountResource & getCloudAccountResource() const { DARABONBA_PTR_GET_CONST(cloudAccountResource_, GetCloudAccountResourceResponseBody::CloudAccountResource) };
    inline GetCloudAccountResourceResponseBody::CloudAccountResource getCloudAccountResource() { DARABONBA_PTR_GET(cloudAccountResource_, GetCloudAccountResourceResponseBody::CloudAccountResource) };
    inline GetCloudAccountResourceResponseBody& setCloudAccountResource(const GetCloudAccountResourceResponseBody::CloudAccountResource & cloudAccountResource) { DARABONBA_PTR_SET_VALUE(cloudAccountResource_, cloudAccountResource) };
    inline GetCloudAccountResourceResponseBody& setCloudAccountResource(GetCloudAccountResourceResponseBody::CloudAccountResource && cloudAccountResource) { DARABONBA_PTR_SET_RVALUE(cloudAccountResource_, cloudAccountResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudAccountResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cloud account resource information.
    shared_ptr<GetCloudAccountResourceResponseBody::CloudAccountResource> cloudAccountResource_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
