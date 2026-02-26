// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTDELIVERYCHANNELRESPONSEBODY_HPP_
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
  class GetMultiAccountDeliveryChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountDeliveryChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountDeliveryChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    GetMultiAccountDeliveryChannelResponseBody() = default ;
    GetMultiAccountDeliveryChannelResponseBody(const GetMultiAccountDeliveryChannelResponseBody &) = default ;
    GetMultiAccountDeliveryChannelResponseBody(GetMultiAccountDeliveryChannelResponseBody &&) = default ;
    GetMultiAccountDeliveryChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountDeliveryChannelResponseBody() = default ;
    GetMultiAccountDeliveryChannelResponseBody& operator=(const GetMultiAccountDeliveryChannelResponseBody &) = default ;
    GetMultiAccountDeliveryChannelResponseBody& operator=(GetMultiAccountDeliveryChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceSnapshotDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSnapshotDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(CustomExpression, customExpression_);
        DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
        DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSnapshotDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomExpression, customExpression_);
        DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
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
        // The ARN of the OSS bucket to which oversized data is delivered.
        shared_ptr<string> oversizedDataOssTargetArn_ {};
      };

      virtual bool empty() const override { return this->customExpression_ == nullptr
        && this->deliveryTime_ == nullptr && this->enabled_ == nullptr && this->slsProperties_ == nullptr && this->targetArn_ == nullptr && this->targetType_ == nullptr; };
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


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
      inline ResourceSnapshotDelivery& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


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
      // Indicates whether to enable the scheduled delivery of resource snapshots. Valid values:
      // 
      // - true
      // 
      // - false
      shared_ptr<string> enabled_ {};
      // The SLS configuration.
      shared_ptr<ResourceSnapshotDelivery::SlsProperties> slsProperties_ {};
      // The ARN of the delivery destination.
      shared_ptr<string> targetArn_ {};
      // The type of the delivery destination.
      shared_ptr<string> targetType_ {};
    };

    class ResourceChangeDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceChangeDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(SlsProperties, slsProperties_);
        DARABONBA_PTR_TO_JSON(TargetArn, targetArn_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceChangeDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
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
        // The ARN of the Object Storage Service (OSS) bucket to which oversized data is delivered.
        shared_ptr<string> oversizedDataOssTargetArn_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->slsProperties_ == nullptr && this->targetArn_ == nullptr && this->targetType_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
      inline ResourceChangeDelivery& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


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
      // Indicates whether to deliver resource configuration changes. Valid values:
      // 
      // - true
      // 
      // - false
      shared_ptr<string> enabled_ {};
      // The Simple Log Service (SLS) configuration.
      shared_ptr<ResourceChangeDelivery::SlsProperties> slsProperties_ {};
      // The ARN of the delivery destination.
      shared_ptr<string> targetArn_ {};
      // The type of the delivery destination.
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
      // The accounts within the delivery scope.
      shared_ptr<vector<string>> accountScopes_ {};
      // The types of delivered resources.
      shared_ptr<vector<string>> resourceTypes_ {};
    };

    virtual bool empty() const override { return this->deliveryChannelDescription_ == nullptr
        && this->deliveryChannelFilter_ == nullptr && this->deliveryChannelId_ == nullptr && this->deliveryChannelName_ == nullptr && this->requestId_ == nullptr && this->resourceChangeDelivery_ == nullptr
        && this->resourceSnapshotDelivery_ == nullptr; };
    // deliveryChannelDescription Field Functions 
    bool hasDeliveryChannelDescription() const { return this->deliveryChannelDescription_ != nullptr;};
    void deleteDeliveryChannelDescription() { this->deliveryChannelDescription_ = nullptr;};
    inline string getDeliveryChannelDescription() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelDescription_, "") };
    inline GetMultiAccountDeliveryChannelResponseBody& setDeliveryChannelDescription(string deliveryChannelDescription) { DARABONBA_PTR_SET_VALUE(deliveryChannelDescription_, deliveryChannelDescription) };


    // deliveryChannelFilter Field Functions 
    bool hasDeliveryChannelFilter() const { return this->deliveryChannelFilter_ != nullptr;};
    void deleteDeliveryChannelFilter() { this->deliveryChannelFilter_ = nullptr;};
    inline const GetMultiAccountDeliveryChannelResponseBody::DeliveryChannelFilter & getDeliveryChannelFilter() const { DARABONBA_PTR_GET_CONST(deliveryChannelFilter_, GetMultiAccountDeliveryChannelResponseBody::DeliveryChannelFilter) };
    inline GetMultiAccountDeliveryChannelResponseBody::DeliveryChannelFilter getDeliveryChannelFilter() { DARABONBA_PTR_GET(deliveryChannelFilter_, GetMultiAccountDeliveryChannelResponseBody::DeliveryChannelFilter) };
    inline GetMultiAccountDeliveryChannelResponseBody& setDeliveryChannelFilter(const GetMultiAccountDeliveryChannelResponseBody::DeliveryChannelFilter & deliveryChannelFilter) { DARABONBA_PTR_SET_VALUE(deliveryChannelFilter_, deliveryChannelFilter) };
    inline GetMultiAccountDeliveryChannelResponseBody& setDeliveryChannelFilter(GetMultiAccountDeliveryChannelResponseBody::DeliveryChannelFilter && deliveryChannelFilter) { DARABONBA_PTR_SET_RVALUE(deliveryChannelFilter_, deliveryChannelFilter) };


    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string getDeliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline GetMultiAccountDeliveryChannelResponseBody& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline GetMultiAccountDeliveryChannelResponseBody& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultiAccountDeliveryChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceChangeDelivery Field Functions 
    bool hasResourceChangeDelivery() const { return this->resourceChangeDelivery_ != nullptr;};
    void deleteResourceChangeDelivery() { this->resourceChangeDelivery_ = nullptr;};
    inline const GetMultiAccountDeliveryChannelResponseBody::ResourceChangeDelivery & getResourceChangeDelivery() const { DARABONBA_PTR_GET_CONST(resourceChangeDelivery_, GetMultiAccountDeliveryChannelResponseBody::ResourceChangeDelivery) };
    inline GetMultiAccountDeliveryChannelResponseBody::ResourceChangeDelivery getResourceChangeDelivery() { DARABONBA_PTR_GET(resourceChangeDelivery_, GetMultiAccountDeliveryChannelResponseBody::ResourceChangeDelivery) };
    inline GetMultiAccountDeliveryChannelResponseBody& setResourceChangeDelivery(const GetMultiAccountDeliveryChannelResponseBody::ResourceChangeDelivery & resourceChangeDelivery) { DARABONBA_PTR_SET_VALUE(resourceChangeDelivery_, resourceChangeDelivery) };
    inline GetMultiAccountDeliveryChannelResponseBody& setResourceChangeDelivery(GetMultiAccountDeliveryChannelResponseBody::ResourceChangeDelivery && resourceChangeDelivery) { DARABONBA_PTR_SET_RVALUE(resourceChangeDelivery_, resourceChangeDelivery) };


    // resourceSnapshotDelivery Field Functions 
    bool hasResourceSnapshotDelivery() const { return this->resourceSnapshotDelivery_ != nullptr;};
    void deleteResourceSnapshotDelivery() { this->resourceSnapshotDelivery_ = nullptr;};
    inline const GetMultiAccountDeliveryChannelResponseBody::ResourceSnapshotDelivery & getResourceSnapshotDelivery() const { DARABONBA_PTR_GET_CONST(resourceSnapshotDelivery_, GetMultiAccountDeliveryChannelResponseBody::ResourceSnapshotDelivery) };
    inline GetMultiAccountDeliveryChannelResponseBody::ResourceSnapshotDelivery getResourceSnapshotDelivery() { DARABONBA_PTR_GET(resourceSnapshotDelivery_, GetMultiAccountDeliveryChannelResponseBody::ResourceSnapshotDelivery) };
    inline GetMultiAccountDeliveryChannelResponseBody& setResourceSnapshotDelivery(const GetMultiAccountDeliveryChannelResponseBody::ResourceSnapshotDelivery & resourceSnapshotDelivery) { DARABONBA_PTR_SET_VALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };
    inline GetMultiAccountDeliveryChannelResponseBody& setResourceSnapshotDelivery(GetMultiAccountDeliveryChannelResponseBody::ResourceSnapshotDelivery && resourceSnapshotDelivery) { DARABONBA_PTR_SET_RVALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };


  protected:
    // The description of the delivery channel.
    shared_ptr<string> deliveryChannelDescription_ {};
    // The effective scope of the delivery channel.
    shared_ptr<GetMultiAccountDeliveryChannelResponseBody::DeliveryChannelFilter> deliveryChannelFilter_ {};
    // The ID of the delivery channel.
    shared_ptr<string> deliveryChannelId_ {};
    // The name of the delivery channel.
    shared_ptr<string> deliveryChannelName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The delivery of resource configuration changes.
    shared_ptr<GetMultiAccountDeliveryChannelResponseBody::ResourceChangeDelivery> resourceChangeDelivery_ {};
    // The configurations of scheduled delivery of resource snapshots.
    shared_ptr<GetMultiAccountDeliveryChannelResponseBody::ResourceSnapshotDelivery> resourceSnapshotDelivery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
