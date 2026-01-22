// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_TO_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidth, internetMaxBandwidth_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidth, internetMaxBandwidth_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
    };
    CreateRenderingInstanceRequest() = default ;
    CreateRenderingInstanceRequest(const CreateRenderingInstanceRequest &) = default ;
    CreateRenderingInstanceRequest(CreateRenderingInstanceRequest &&) = default ;
    CreateRenderingInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingInstanceRequest() = default ;
    CreateRenderingInstanceRequest& operator=(const CreateRenderingInstanceRequest &) = default ;
    CreateRenderingInstanceRequest& operator=(CreateRenderingInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      };
      friend void from_json(const Darabonba::Json& j, ClientInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      };
      ClientInfo() = default ;
      ClientInfo(const ClientInfo &) = default ;
      ClientInfo(ClientInfo &&) = default ;
      ClientInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientInfo() = default ;
      ClientInfo& operator=(const ClientInfo &) = default ;
      ClientInfo& operator=(ClientInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIp_ == nullptr; };
      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline ClientInfo& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    protected:
      shared_ptr<string> clientIp_ {};
    };

    class Attributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
        DARABONBA_PTR_TO_JSON(EdgeMediaService, edgeMediaService_);
        DARABONBA_PTR_TO_JSON(InAccess, inAccess_);
        DARABONBA_PTR_TO_JSON(OutAccess, outAccess_);
        DARABONBA_PTR_TO_JSON(Zone, zone_);
      };
      friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
        DARABONBA_PTR_FROM_JSON(EdgeMediaService, edgeMediaService_);
        DARABONBA_PTR_FROM_JSON(InAccess, inAccess_);
        DARABONBA_PTR_FROM_JSON(OutAccess, outAccess_);
        DARABONBA_PTR_FROM_JSON(Zone, zone_);
      };
      Attributes() = default ;
      Attributes(const Attributes &) = default ;
      Attributes(Attributes &&) = default ;
      Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attributes() = default ;
      Attributes& operator=(const Attributes &) = default ;
      Attributes& operator=(Attributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->edgeMediaService_ == nullptr
        && this->inAccess_ == nullptr && this->outAccess_ == nullptr && this->zone_ == nullptr; };
      // edgeMediaService Field Functions 
      bool hasEdgeMediaService() const { return this->edgeMediaService_ != nullptr;};
      void deleteEdgeMediaService() { this->edgeMediaService_ = nullptr;};
      inline string getEdgeMediaService() const { DARABONBA_PTR_GET_DEFAULT(edgeMediaService_, "") };
      inline Attributes& setEdgeMediaService(string edgeMediaService) { DARABONBA_PTR_SET_VALUE(edgeMediaService_, edgeMediaService) };


      // inAccess Field Functions 
      bool hasInAccess() const { return this->inAccess_ != nullptr;};
      void deleteInAccess() { this->inAccess_ = nullptr;};
      inline string getInAccess() const { DARABONBA_PTR_GET_DEFAULT(inAccess_, "") };
      inline Attributes& setInAccess(string inAccess) { DARABONBA_PTR_SET_VALUE(inAccess_, inAccess) };


      // outAccess Field Functions 
      bool hasOutAccess() const { return this->outAccess_ != nullptr;};
      void deleteOutAccess() { this->outAccess_ = nullptr;};
      inline string getOutAccess() const { DARABONBA_PTR_GET_DEFAULT(outAccess_, "") };
      inline Attributes& setOutAccess(string outAccess) { DARABONBA_PTR_SET_VALUE(outAccess_, outAccess) };


      // zone Field Functions 
      bool hasZone() const { return this->zone_ != nullptr;};
      void deleteZone() { this->zone_ = nullptr;};
      inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
      inline Attributes& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


    protected:
      shared_ptr<string> edgeMediaService_ {};
      shared_ptr<string> inAccess_ {};
      shared_ptr<string> outAccess_ {};
      shared_ptr<string> zone_ {};
    };

    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->autoRenew_ == nullptr && this->clientInfo_ == nullptr && this->instanceBillingCycle_ == nullptr && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr
        && this->internetMaxBandwidth_ == nullptr && this->period_ == nullptr && this->renderingSpec_ == nullptr && this->storageSize_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const CreateRenderingInstanceRequest::Attributes & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, CreateRenderingInstanceRequest::Attributes) };
    inline CreateRenderingInstanceRequest::Attributes getAttributes() { DARABONBA_PTR_GET(attributes_, CreateRenderingInstanceRequest::Attributes) };
    inline CreateRenderingInstanceRequest& setAttributes(const CreateRenderingInstanceRequest::Attributes & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline CreateRenderingInstanceRequest& setAttributes(CreateRenderingInstanceRequest::Attributes && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateRenderingInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientInfo Field Functions 
    bool hasClientInfo() const { return this->clientInfo_ != nullptr;};
    void deleteClientInfo() { this->clientInfo_ = nullptr;};
    inline const CreateRenderingInstanceRequest::ClientInfo & getClientInfo() const { DARABONBA_PTR_GET_CONST(clientInfo_, CreateRenderingInstanceRequest::ClientInfo) };
    inline CreateRenderingInstanceRequest::ClientInfo getClientInfo() { DARABONBA_PTR_GET(clientInfo_, CreateRenderingInstanceRequest::ClientInfo) };
    inline CreateRenderingInstanceRequest& setClientInfo(const CreateRenderingInstanceRequest::ClientInfo & clientInfo) { DARABONBA_PTR_SET_VALUE(clientInfo_, clientInfo) };
    inline CreateRenderingInstanceRequest& setClientInfo(CreateRenderingInstanceRequest::ClientInfo && clientInfo) { DARABONBA_PTR_SET_RVALUE(clientInfo_, clientInfo) };


    // instanceBillingCycle Field Functions 
    bool hasInstanceBillingCycle() const { return this->instanceBillingCycle_ != nullptr;};
    void deleteInstanceBillingCycle() { this->instanceBillingCycle_ = nullptr;};
    inline string getInstanceBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(instanceBillingCycle_, "") };
    inline CreateRenderingInstanceRequest& setInstanceBillingCycle(string instanceBillingCycle) { DARABONBA_PTR_SET_VALUE(instanceBillingCycle_, instanceBillingCycle) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateRenderingInstanceRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateRenderingInstanceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidth Field Functions 
    bool hasInternetMaxBandwidth() const { return this->internetMaxBandwidth_ != nullptr;};
    void deleteInternetMaxBandwidth() { this->internetMaxBandwidth_ = nullptr;};
    inline int64_t getInternetMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidth_, 0L) };
    inline CreateRenderingInstanceRequest& setInternetMaxBandwidth(int64_t internetMaxBandwidth) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidth_, internetMaxBandwidth) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateRenderingInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // renderingSpec Field Functions 
    bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
    void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
    inline string getRenderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
    inline CreateRenderingInstanceRequest& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
    inline CreateRenderingInstanceRequest& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    shared_ptr<CreateRenderingInstanceRequest::Attributes> attributes_ {};
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<CreateRenderingInstanceRequest::ClientInfo> clientInfo_ {};
    shared_ptr<string> instanceBillingCycle_ {};
    shared_ptr<string> instanceChargeType_ {};
    shared_ptr<string> internetChargeType_ {};
    shared_ptr<int64_t> internetMaxBandwidth_ {};
    shared_ptr<string> period_ {};
    // This parameter is required.
    shared_ptr<string> renderingSpec_ {};
    shared_ptr<string> storageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
