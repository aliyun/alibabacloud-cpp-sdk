// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIACCOUNTDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIACCOUNTDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateMultiAccountDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiAccountDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiAccountDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    CreateMultiAccountDeliveryChannelRequest() = default ;
    CreateMultiAccountDeliveryChannelRequest(const CreateMultiAccountDeliveryChannelRequest &) = default ;
    CreateMultiAccountDeliveryChannelRequest(CreateMultiAccountDeliveryChannelRequest &&) = default ;
    CreateMultiAccountDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiAccountDeliveryChannelRequest() = default ;
    CreateMultiAccountDeliveryChannelRequest& operator=(const CreateMultiAccountDeliveryChannelRequest &) = default ;
    CreateMultiAccountDeliveryChannelRequest& operator=(CreateMultiAccountDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceSnapshotDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSnapshotDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(CustomExpression, customExpression_);
        DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
        DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
        DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSnapshotDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomExpression, customExpression_);
        DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
        DARABONBA_PTR_FROM_JSON(SlsProperties, slsProperties_);
        DARABONBA_PTR_FROM_JSON(TargetArn, targetArn_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      ResourceSnapshotDelivery() = default ;
      ResourceSnapshotDelivery(const ResourceSnapshotDelivery &) = default ;
      ResourceSnapshotDelivery(ResourceSnapshotDelivery &&) = default ;
      ResourceSnapshotDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceSnapshotDelivery() = default ;
      ResourceSnapshotDelivery& operator=(const ResourceSnapshotDelivery &) = default ;
      ResourceSnapshotDelivery& operator=(ResourceSnapshotDelivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlsProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsProperties& obj) { 
          DARABONBA_PTR_TO_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
        };
        friend void from_json(const Darabonba::Json& j, SlsProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
        };
        SlsProperties() = default ;
        SlsProperties(const SlsProperties &) = default ;
        SlsProperties(SlsProperties &&) = default ;
        SlsProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsProperties() = default ;
        SlsProperties& operator=(const SlsProperties &) = default ;
        SlsProperties& operator=(SlsProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->oversizedDataOssTargetArn_ == nullptr; };
        // oversizedDataOssTargetArn Field Functions 
        bool hasOversizedDataOssTargetArn() const { return this->oversizedDataOssTargetArn_ != nullptr;};
        void deleteOversizedDataOssTargetArn() { this->oversizedDataOssTargetArn_ = nullptr;};
        inline string getOversizedDataOssTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOssTargetArn_, "") };
        inline SlsProperties& setOversizedDataOssTargetArn(string oversizedDataOssTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOssTargetArn_, oversizedDataOssTargetArn) };


      protected:
        // The ARN of the delivery destination for oversized data.
        // 
        // If the size of a resource configuration change event exceeds 1 MB, the event is delivered as an OSS object. You must enter the ARN of an OSS bucket that has a prefix of `resourcecenter-`.
        // 
        // > This parameter takes effect only when you create a custom scheduled delivery task for resource snapshots. You do not need to specify this parameter when you create a standard scheduled delivery task for resource snapshots.
        shared_ptr<string> oversizedDataOssTargetArn_ {};
      };

      virtual bool empty() const override { return this->customExpression_ == nullptr
        && this->deliveryTime_ == nullptr && this->slsProperties_ == nullptr && this->targetArn_ == nullptr && this->targetType_ == nullptr; };
      // customExpression Field Functions 
      bool hasCustomExpression() const { return this->customExpression_ != nullptr;};
      void deleteCustomExpression() { this->customExpression_ = nullptr;};
      inline string getCustomExpression() const { DARABONBA_PTR_GET_DEFAULT(customExpression_, "") };
      inline ResourceSnapshotDelivery& setCustomExpression(string customExpression) { DARABONBA_PTR_SET_VALUE(customExpression_, customExpression) };


      // deliveryTime Field Functions 
      bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
      void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
      inline string getDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
      inline ResourceSnapshotDelivery& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


      // slsProperties Field Functions 
      bool hasSlsProperties() const { return this->slsProperties_ != nullptr;};
      void deleteSlsProperties() { this->slsProperties_ = nullptr;};
      inline const ResourceSnapshotDelivery::SlsProperties & getSlsProperties() const { DARABONBA_PTR_GET_CONST(slsProperties_, ResourceSnapshotDelivery::SlsProperties) };
      inline ResourceSnapshotDelivery::SlsProperties getSlsProperties() { DARABONBA_PTR_GET(slsProperties_, ResourceSnapshotDelivery::SlsProperties) };
      inline ResourceSnapshotDelivery& setSlsProperties(const ResourceSnapshotDelivery::SlsProperties & slsProperties) { DARABONBA_PTR_SET_VALUE(slsProperties_, slsProperties) };
      inline ResourceSnapshotDelivery& setSlsProperties(ResourceSnapshotDelivery::SlsProperties && slsProperties) { DARABONBA_PTR_SET_RVALUE(slsProperties_, slsProperties) };


      // targetArn Field Functions 
      bool hasTargetArn() const { return this->targetArn_ != nullptr;};
      void deleteTargetArn() { this->targetArn_ = nullptr;};
      inline string getTargetArn() const { DARABONBA_PTR_GET_DEFAULT(targetArn_, "") };
      inline ResourceSnapshotDelivery& setTargetArn(string targetArn) { DARABONBA_PTR_SET_VALUE(targetArn_, targetArn) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline ResourceSnapshotDelivery& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The custom expression.
      shared_ptr<string> customExpression_ {};
      // The delivery time.
      shared_ptr<string> deliveryTime_ {};
      // The SLS configurations.
      shared_ptr<ResourceSnapshotDelivery::SlsProperties> slsProperties_ {};
      // The Alibaba Cloud Resource Name (ARN) of the delivery destination. Valid values:
      // 
      // - If you set `TargetType` to `OSS`, you must set `TargetArn` to the ARN of a OSS bucket that has a prefix of `resourcecenter-`. Example: `acs:oss:cn-hangzhou:191142248777****:resourcecenter-oss`.
      // - If you set `TargetType` to `SLS`, you must set `TargetArn` to the ARN of a SLS Logstore that has a prefix of `resourcecenter-`. Example: `acs:log:cn-hangzhou: 191142248777****:project/delivery/logstore/resourcecenter-sls`.
      shared_ptr<string> targetArn_ {};
      // The type of the delivery destination. Valid values:
      // 
      // - `OSS` for standard delivery
      // - `OSS` or `SLS` for custom delivery
      shared_ptr<string> targetType_ {};
    };

    class ResourceChangeDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceChangeDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
        DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceChangeDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(SlsProperties, slsProperties_);
        DARABONBA_PTR_FROM_JSON(TargetArn, targetArn_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      ResourceChangeDelivery() = default ;
      ResourceChangeDelivery(const ResourceChangeDelivery &) = default ;
      ResourceChangeDelivery(ResourceChangeDelivery &&) = default ;
      ResourceChangeDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceChangeDelivery() = default ;
      ResourceChangeDelivery& operator=(const ResourceChangeDelivery &) = default ;
      ResourceChangeDelivery& operator=(ResourceChangeDelivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlsProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsProperties& obj) { 
          DARABONBA_PTR_TO_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
        };
        friend void from_json(const Darabonba::Json& j, SlsProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
        };
        SlsProperties() = default ;
        SlsProperties(const SlsProperties &) = default ;
        SlsProperties(SlsProperties &&) = default ;
        SlsProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsProperties() = default ;
        SlsProperties& operator=(const SlsProperties &) = default ;
        SlsProperties& operator=(SlsProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->oversizedDataOssTargetArn_ == nullptr; };
        // oversizedDataOssTargetArn Field Functions 
        bool hasOversizedDataOssTargetArn() const { return this->oversizedDataOssTargetArn_ != nullptr;};
        void deleteOversizedDataOssTargetArn() { this->oversizedDataOssTargetArn_ = nullptr;};
        inline string getOversizedDataOssTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOssTargetArn_, "") };
        inline SlsProperties& setOversizedDataOssTargetArn(string oversizedDataOssTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOssTargetArn_, oversizedDataOssTargetArn) };


      protected:
        // The ARN of the delivery destination for oversized data.
        // 
        // If the size of a resource configuration change event exceeds 1 MB, the event is delivered as an OSS object. You must enter the ARN of an OSS bucket that has a prefix of `resourcecenter-`.
        shared_ptr<string> oversizedDataOssTargetArn_ {};
      };

      virtual bool empty() const override { return this->slsProperties_ == nullptr
        && this->targetArn_ == nullptr && this->targetType_ == nullptr; };
      // slsProperties Field Functions 
      bool hasSlsProperties() const { return this->slsProperties_ != nullptr;};
      void deleteSlsProperties() { this->slsProperties_ = nullptr;};
      inline const ResourceChangeDelivery::SlsProperties & getSlsProperties() const { DARABONBA_PTR_GET_CONST(slsProperties_, ResourceChangeDelivery::SlsProperties) };
      inline ResourceChangeDelivery::SlsProperties getSlsProperties() { DARABONBA_PTR_GET(slsProperties_, ResourceChangeDelivery::SlsProperties) };
      inline ResourceChangeDelivery& setSlsProperties(const ResourceChangeDelivery::SlsProperties & slsProperties) { DARABONBA_PTR_SET_VALUE(slsProperties_, slsProperties) };
      inline ResourceChangeDelivery& setSlsProperties(ResourceChangeDelivery::SlsProperties && slsProperties) { DARABONBA_PTR_SET_RVALUE(slsProperties_, slsProperties) };


      // targetArn Field Functions 
      bool hasTargetArn() const { return this->targetArn_ != nullptr;};
      void deleteTargetArn() { this->targetArn_ = nullptr;};
      inline string getTargetArn() const { DARABONBA_PTR_GET_DEFAULT(targetArn_, "") };
      inline ResourceChangeDelivery& setTargetArn(string targetArn) { DARABONBA_PTR_SET_VALUE(targetArn_, targetArn) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline ResourceChangeDelivery& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The SLS configurations.
      shared_ptr<ResourceChangeDelivery::SlsProperties> slsProperties_ {};
      // The ARN of the delivery destination. Valid values:
      // 
      // - If you set `TargetType` to `OSS`, you must set `TargetArn` to the ARN of a OSS bucket that has a prefix of `resourcecenter-`.
      // - If you set `TargetType` to `SLS`, you must set `TargetArn` to the ARN of a SLS Logstore that has a prefix of `resourcecenter-`.
      shared_ptr<string> targetArn_ {};
      // The type of the delivery destination.
      // 
      // Valid value: `SLS`.
      shared_ptr<string> targetType_ {};
    };

    class DeliveryChannelFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryChannelFilter& obj) { 
        DARABONBA_PTR_TO_JSON(AccountScopes, accountScopes_);
        DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryChannelFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountScopes, accountScopes_);
        DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      };
      DeliveryChannelFilter() = default ;
      DeliveryChannelFilter(const DeliveryChannelFilter &) = default ;
      DeliveryChannelFilter(DeliveryChannelFilter &&) = default ;
      DeliveryChannelFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryChannelFilter() = default ;
      DeliveryChannelFilter& operator=(const DeliveryChannelFilter &) = default ;
      DeliveryChannelFilter& operator=(DeliveryChannelFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountScopes_ == nullptr
        && this->resourceTypes_ == nullptr; };
      // accountScopes Field Functions 
      bool hasAccountScopes() const { return this->accountScopes_ != nullptr;};
      void deleteAccountScopes() { this->accountScopes_ = nullptr;};
      inline const vector<string> & getAccountScopes() const { DARABONBA_PTR_GET_CONST(accountScopes_, vector<string>) };
      inline vector<string> getAccountScopes() { DARABONBA_PTR_GET(accountScopes_, vector<string>) };
      inline DeliveryChannelFilter& setAccountScopes(const vector<string> & accountScopes) { DARABONBA_PTR_SET_VALUE(accountScopes_, accountScopes) };
      inline DeliveryChannelFilter& setAccountScopes(vector<string> && accountScopes) { DARABONBA_PTR_SET_RVALUE(accountScopes_, accountScopes) };


      // resourceTypes Field Functions 
      bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
      void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
      inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
      inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
      inline DeliveryChannelFilter& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
      inline DeliveryChannelFilter& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    protected:
      // The account scopes of the delivery channel.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> accountScopes_ {};
      // The effective resource type of the delivery channel.
      shared_ptr<vector<string>> resourceTypes_ {};
    };

    virtual bool empty() const override { return this->deliveryChannelDescription_ == nullptr
        && this->deliveryChannelFilter_ == nullptr && this->deliveryChannelName_ == nullptr && this->resourceChangeDelivery_ == nullptr && this->resourceSnapshotDelivery_ == nullptr; };
    // deliveryChannelDescription Field Functions 
    bool hasDeliveryChannelDescription() const { return this->deliveryChannelDescription_ != nullptr;};
    void deleteDeliveryChannelDescription() { this->deliveryChannelDescription_ = nullptr;};
    inline string getDeliveryChannelDescription() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelDescription_, "") };
    inline CreateMultiAccountDeliveryChannelRequest& setDeliveryChannelDescription(string deliveryChannelDescription) { DARABONBA_PTR_SET_VALUE(deliveryChannelDescription_, deliveryChannelDescription) };


    // deliveryChannelFilter Field Functions 
    bool hasDeliveryChannelFilter() const { return this->deliveryChannelFilter_ != nullptr;};
    void deleteDeliveryChannelFilter() { this->deliveryChannelFilter_ = nullptr;};
    inline const CreateMultiAccountDeliveryChannelRequest::DeliveryChannelFilter & getDeliveryChannelFilter() const { DARABONBA_PTR_GET_CONST(deliveryChannelFilter_, CreateMultiAccountDeliveryChannelRequest::DeliveryChannelFilter) };
    inline CreateMultiAccountDeliveryChannelRequest::DeliveryChannelFilter getDeliveryChannelFilter() { DARABONBA_PTR_GET(deliveryChannelFilter_, CreateMultiAccountDeliveryChannelRequest::DeliveryChannelFilter) };
    inline CreateMultiAccountDeliveryChannelRequest& setDeliveryChannelFilter(const CreateMultiAccountDeliveryChannelRequest::DeliveryChannelFilter & deliveryChannelFilter) { DARABONBA_PTR_SET_VALUE(deliveryChannelFilter_, deliveryChannelFilter) };
    inline CreateMultiAccountDeliveryChannelRequest& setDeliveryChannelFilter(CreateMultiAccountDeliveryChannelRequest::DeliveryChannelFilter && deliveryChannelFilter) { DARABONBA_PTR_SET_RVALUE(deliveryChannelFilter_, deliveryChannelFilter) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline CreateMultiAccountDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // resourceChangeDelivery Field Functions 
    bool hasResourceChangeDelivery() const { return this->resourceChangeDelivery_ != nullptr;};
    void deleteResourceChangeDelivery() { this->resourceChangeDelivery_ = nullptr;};
    inline const CreateMultiAccountDeliveryChannelRequest::ResourceChangeDelivery & getResourceChangeDelivery() const { DARABONBA_PTR_GET_CONST(resourceChangeDelivery_, CreateMultiAccountDeliveryChannelRequest::ResourceChangeDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest::ResourceChangeDelivery getResourceChangeDelivery() { DARABONBA_PTR_GET(resourceChangeDelivery_, CreateMultiAccountDeliveryChannelRequest::ResourceChangeDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest& setResourceChangeDelivery(const CreateMultiAccountDeliveryChannelRequest::ResourceChangeDelivery & resourceChangeDelivery) { DARABONBA_PTR_SET_VALUE(resourceChangeDelivery_, resourceChangeDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest& setResourceChangeDelivery(CreateMultiAccountDeliveryChannelRequest::ResourceChangeDelivery && resourceChangeDelivery) { DARABONBA_PTR_SET_RVALUE(resourceChangeDelivery_, resourceChangeDelivery) };


    // resourceSnapshotDelivery Field Functions 
    bool hasResourceSnapshotDelivery() const { return this->resourceSnapshotDelivery_ != nullptr;};
    void deleteResourceSnapshotDelivery() { this->resourceSnapshotDelivery_ = nullptr;};
    inline const CreateMultiAccountDeliveryChannelRequest::ResourceSnapshotDelivery & getResourceSnapshotDelivery() const { DARABONBA_PTR_GET_CONST(resourceSnapshotDelivery_, CreateMultiAccountDeliveryChannelRequest::ResourceSnapshotDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest::ResourceSnapshotDelivery getResourceSnapshotDelivery() { DARABONBA_PTR_GET(resourceSnapshotDelivery_, CreateMultiAccountDeliveryChannelRequest::ResourceSnapshotDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest& setResourceSnapshotDelivery(const CreateMultiAccountDeliveryChannelRequest::ResourceSnapshotDelivery & resourceSnapshotDelivery) { DARABONBA_PTR_SET_VALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest& setResourceSnapshotDelivery(CreateMultiAccountDeliveryChannelRequest::ResourceSnapshotDelivery && resourceSnapshotDelivery) { DARABONBA_PTR_SET_RVALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };


  protected:
    // The description of the delivery channel.
    shared_ptr<string> deliveryChannelDescription_ {};
    // The effective scope of the delivery channel.
    // 
    // This parameter is required.
    shared_ptr<CreateMultiAccountDeliveryChannelRequest::DeliveryChannelFilter> deliveryChannelFilter_ {};
    // The name of the delivery channel.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelName_ {};
    // The configurations for delivery of resource configuration change events.
    shared_ptr<CreateMultiAccountDeliveryChannelRequest::ResourceChangeDelivery> resourceChangeDelivery_ {};
    // The configurations for scheduled delivery of resource snapshots.
    shared_ptr<CreateMultiAccountDeliveryChannelRequest::ResourceSnapshotDelivery> resourceSnapshotDelivery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
