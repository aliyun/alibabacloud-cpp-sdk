// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRENEWINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRENEWINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryRenewInstancePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRenewInstancePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenewInstanceRequest, renewInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRenewInstancePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenewInstanceRequest, renewInstanceRequest_);
    };
    QueryRenewInstancePriceRequest() = default ;
    QueryRenewInstancePriceRequest(const QueryRenewInstancePriceRequest &) = default ;
    QueryRenewInstancePriceRequest(QueryRenewInstancePriceRequest &&) = default ;
    QueryRenewInstancePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRenewInstancePriceRequest() = default ;
    QueryRenewInstancePriceRequest& operator=(const QueryRenewInstancePriceRequest &) = default ;
    QueryRenewInstancePriceRequest& operator=(QueryRenewInstancePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RenewInstanceRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RenewInstanceRequest& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, RenewInstanceRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      RenewInstanceRequest() = default ;
      RenewInstanceRequest(const RenewInstanceRequest &) = default ;
      RenewInstanceRequest(RenewInstanceRequest &&) = default ;
      RenewInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RenewInstanceRequest() = default ;
      RenewInstanceRequest& operator=(const RenewInstanceRequest &) = default ;
      RenewInstanceRequest& operator=(RenewInstanceRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->instanceId_ == nullptr && this->pricingCycle_ == nullptr && this->region_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline RenewInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline RenewInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline RenewInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline RenewInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> duration_ {};
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // This parameter is required.
      shared_ptr<string> pricingCycle_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->renewInstanceRequest_ == nullptr; };
    // renewInstanceRequest Field Functions 
    bool hasRenewInstanceRequest() const { return this->renewInstanceRequest_ != nullptr;};
    void deleteRenewInstanceRequest() { this->renewInstanceRequest_ = nullptr;};
    inline const QueryRenewInstancePriceRequest::RenewInstanceRequest & getRenewInstanceRequest() const { DARABONBA_PTR_GET_CONST(renewInstanceRequest_, QueryRenewInstancePriceRequest::RenewInstanceRequest) };
    inline QueryRenewInstancePriceRequest::RenewInstanceRequest getRenewInstanceRequest() { DARABONBA_PTR_GET(renewInstanceRequest_, QueryRenewInstancePriceRequest::RenewInstanceRequest) };
    inline QueryRenewInstancePriceRequest& setRenewInstanceRequest(const QueryRenewInstancePriceRequest::RenewInstanceRequest & renewInstanceRequest) { DARABONBA_PTR_SET_VALUE(renewInstanceRequest_, renewInstanceRequest) };
    inline QueryRenewInstancePriceRequest& setRenewInstanceRequest(QueryRenewInstancePriceRequest::RenewInstanceRequest && renewInstanceRequest) { DARABONBA_PTR_SET_RVALUE(renewInstanceRequest_, renewInstanceRequest) };


  protected:
    // This parameter is required.
    shared_ptr<QueryRenewInstancePriceRequest::RenewInstanceRequest> renewInstanceRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
