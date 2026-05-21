// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUEST_HPP_
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
  class CreateDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    CreateDeliveryChannelRequest() = default ;
    CreateDeliveryChannelRequest(const CreateDeliveryChannelRequest &) = default ;
    CreateDeliveryChannelRequest(CreateDeliveryChannelRequest &&) = default ;
    CreateDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryChannelRequest() = default ;
    CreateDeliveryChannelRequest& operator=(const CreateDeliveryChannelRequest &) = default ;
    CreateDeliveryChannelRequest& operator=(CreateDeliveryChannelRequest &&) = default ;
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
        // The ARN of the destination to which large files are delivered.
        // 
        // *   If the size of a resource configuration change event exceeds 1 MB, the event is delivered as an OSS object.
        // *   You need to set this parameter to the ARN of a bucket whose name is prefixed with resourcecenter-.
        // *   This parameter takes effect only if you use custom delivery for scheduled resource snapshots. You do not need to configure this parameter if you use standard delivery for scheduled resource snapshots.
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
      // The Simple Log Service configurations.
      shared_ptr<ResourceSnapshotDelivery::SlsProperties> slsProperties_ {};
      // The Alibaba Cloud Resource Name (ARN) of the delivery destination.
      // 
      // *   If you set `TargetType` to `OSS`, you must set `TargetArn` to the ARN of a bucket whose name is prefixed with resourcecenter-.
      // *   If you set `TargetType` to `SLS`, you must set `TargetArn` to the ARN of a Logstore whose name is prefixed with resourcecenter-.
      shared_ptr<string> targetArn_ {};
      // The type of the delivery destination.
      // 
      // Valid values:
      // 
      // *   `OSS` for standard delivery
      // *   `OSS` or `SLS` for custom delivery
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
        // The ARN of the destination to which large files are delivered.
        // 
        // *   If the size of a resource configuration change event exceeds 1 MB, the event is delivered as an OSS object.
        // *   You need to set this parameter to the ARN of a bucket whose name is prefixed with resourcecenter-.
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
      // The Simple Log Service configurations.
      shared_ptr<ResourceChangeDelivery::SlsProperties> slsProperties_ {};
      // The ARN of the delivery destination.
      // 
      // *   If you set `TargetType` to `OSS`, you must set `TargetArn` to the ARN of a bucket whose name is prefixed with resourcecenter-.
      // *   If you set `TargetType` to `SLS`, you must set `TargetArn` to the ARN of a Logstore whose name is prefixed with resourcecenter-.
      shared_ptr<string> targetArn_ {};
      // The type of the delivery destination.
      // 
      // Valid values:
      // 
      // *   `SLS`
      shared_ptr<string> targetType_ {};
    };

    class DeliveryChannelFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryChannelFilter& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryChannelFilter& obj) { 
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
      virtual bool empty() const override { return this->resourceTypes_ == nullptr; };
      // resourceTypes Field Functions 
      bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
      void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
      inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
      inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
      inline DeliveryChannelFilter& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
      inline DeliveryChannelFilter& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    protected:
      // An array of effective resource types for the delivery channel.
      // 
      // *   Example: ["ACS::VPC::VPC", "ACS::ECS::Instance"].
      // *   If you want to deliver items of all resource types supported by Resource Center, set this parameter to ["ALL"].
      shared_ptr<vector<string>> resourceTypes_ {};
    };

    virtual bool empty() const override { return this->deliveryChannelDescription_ == nullptr
        && this->deliveryChannelFilter_ == nullptr && this->deliveryChannelName_ == nullptr && this->resourceChangeDelivery_ == nullptr && this->resourceSnapshotDelivery_ == nullptr; };
    // deliveryChannelDescription Field Functions 
    bool hasDeliveryChannelDescription() const { return this->deliveryChannelDescription_ != nullptr;};
    void deleteDeliveryChannelDescription() { this->deliveryChannelDescription_ = nullptr;};
    inline string getDeliveryChannelDescription() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelDescription_, "") };
    inline CreateDeliveryChannelRequest& setDeliveryChannelDescription(string deliveryChannelDescription) { DARABONBA_PTR_SET_VALUE(deliveryChannelDescription_, deliveryChannelDescription) };


    // deliveryChannelFilter Field Functions 
    bool hasDeliveryChannelFilter() const { return this->deliveryChannelFilter_ != nullptr;};
    void deleteDeliveryChannelFilter() { this->deliveryChannelFilter_ = nullptr;};
    inline const CreateDeliveryChannelRequest::DeliveryChannelFilter & getDeliveryChannelFilter() const { DARABONBA_PTR_GET_CONST(deliveryChannelFilter_, CreateDeliveryChannelRequest::DeliveryChannelFilter) };
    inline CreateDeliveryChannelRequest::DeliveryChannelFilter getDeliveryChannelFilter() { DARABONBA_PTR_GET(deliveryChannelFilter_, CreateDeliveryChannelRequest::DeliveryChannelFilter) };
    inline CreateDeliveryChannelRequest& setDeliveryChannelFilter(const CreateDeliveryChannelRequest::DeliveryChannelFilter & deliveryChannelFilter) { DARABONBA_PTR_SET_VALUE(deliveryChannelFilter_, deliveryChannelFilter) };
    inline CreateDeliveryChannelRequest& setDeliveryChannelFilter(CreateDeliveryChannelRequest::DeliveryChannelFilter && deliveryChannelFilter) { DARABONBA_PTR_SET_RVALUE(deliveryChannelFilter_, deliveryChannelFilter) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline CreateDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // resourceChangeDelivery Field Functions 
    bool hasResourceChangeDelivery() const { return this->resourceChangeDelivery_ != nullptr;};
    void deleteResourceChangeDelivery() { this->resourceChangeDelivery_ = nullptr;};
    inline const CreateDeliveryChannelRequest::ResourceChangeDelivery & getResourceChangeDelivery() const { DARABONBA_PTR_GET_CONST(resourceChangeDelivery_, CreateDeliveryChannelRequest::ResourceChangeDelivery) };
    inline CreateDeliveryChannelRequest::ResourceChangeDelivery getResourceChangeDelivery() { DARABONBA_PTR_GET(resourceChangeDelivery_, CreateDeliveryChannelRequest::ResourceChangeDelivery) };
    inline CreateDeliveryChannelRequest& setResourceChangeDelivery(const CreateDeliveryChannelRequest::ResourceChangeDelivery & resourceChangeDelivery) { DARABONBA_PTR_SET_VALUE(resourceChangeDelivery_, resourceChangeDelivery) };
    inline CreateDeliveryChannelRequest& setResourceChangeDelivery(CreateDeliveryChannelRequest::ResourceChangeDelivery && resourceChangeDelivery) { DARABONBA_PTR_SET_RVALUE(resourceChangeDelivery_, resourceChangeDelivery) };


    // resourceSnapshotDelivery Field Functions 
    bool hasResourceSnapshotDelivery() const { return this->resourceSnapshotDelivery_ != nullptr;};
    void deleteResourceSnapshotDelivery() { this->resourceSnapshotDelivery_ = nullptr;};
    inline const CreateDeliveryChannelRequest::ResourceSnapshotDelivery & getResourceSnapshotDelivery() const { DARABONBA_PTR_GET_CONST(resourceSnapshotDelivery_, CreateDeliveryChannelRequest::ResourceSnapshotDelivery) };
    inline CreateDeliveryChannelRequest::ResourceSnapshotDelivery getResourceSnapshotDelivery() { DARABONBA_PTR_GET(resourceSnapshotDelivery_, CreateDeliveryChannelRequest::ResourceSnapshotDelivery) };
    inline CreateDeliveryChannelRequest& setResourceSnapshotDelivery(const CreateDeliveryChannelRequest::ResourceSnapshotDelivery & resourceSnapshotDelivery) { DARABONBA_PTR_SET_VALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };
    inline CreateDeliveryChannelRequest& setResourceSnapshotDelivery(CreateDeliveryChannelRequest::ResourceSnapshotDelivery && resourceSnapshotDelivery) { DARABONBA_PTR_SET_RVALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };


  protected:
    // The description of the delivery channel.
    shared_ptr<string> deliveryChannelDescription_ {};
    // The effective scope of the delivery channel.
    // 
    // This parameter is required.
    shared_ptr<CreateDeliveryChannelRequest::DeliveryChannelFilter> deliveryChannelFilter_ {};
    // The name of the delivery channel.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelName_ {};
    // The configurations for delivery of resource configuration change events.
    shared_ptr<CreateDeliveryChannelRequest::ResourceChangeDelivery> resourceChangeDelivery_ {};
    // The configurations for delivery of scheduled resource snapshots.
    shared_ptr<CreateDeliveryChannelRequest::ResourceSnapshotDelivery> resourceSnapshotDelivery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
