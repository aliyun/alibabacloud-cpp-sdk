// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGTRAFFICTOPNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGTRAFFICTOPNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagTrafficTopNResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagTrafficTopNResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficTopN, trafficTopN_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagTrafficTopNResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficTopN, trafficTopN_);
    };
    DescribeSagTrafficTopNResponseBody() = default ;
    DescribeSagTrafficTopNResponseBody(const DescribeSagTrafficTopNResponseBody &) = default ;
    DescribeSagTrafficTopNResponseBody(DescribeSagTrafficTopNResponseBody &&) = default ;
    DescribeSagTrafficTopNResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagTrafficTopNResponseBody() = default ;
    DescribeSagTrafficTopNResponseBody& operator=(const DescribeSagTrafficTopNResponseBody &) = default ;
    DescribeSagTrafficTopNResponseBody& operator=(DescribeSagTrafficTopNResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficTopN : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficTopN& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TrafficRate, trafficRate_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficTopN& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TrafficRate, trafficRate_);
      };
      TrafficTopN() = default ;
      TrafficTopN(const TrafficTopN &) = default ;
      TrafficTopN(TrafficTopN &&) = default ;
      TrafficTopN(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficTopN() = default ;
      TrafficTopN& operator=(const TrafficTopN &) = default ;
      TrafficTopN& operator=(TrafficTopN &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->trafficRate_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TrafficTopN& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TrafficTopN& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TrafficTopN& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // trafficRate Field Functions 
      bool hasTrafficRate() const { return this->trafficRate_ != nullptr;};
      void deleteTrafficRate() { this->trafficRate_ = nullptr;};
      inline string getTrafficRate() const { DARABONBA_PTR_GET_DEFAULT(trafficRate_, "") };
      inline TrafficTopN& setTrafficRate(string trafficRate) { DARABONBA_PTR_SET_VALUE(trafficRate_, trafficRate) };


    protected:
      // The ID of the SAG instance.
      shared_ptr<string> instanceId_ {};
      // The name of the SAG instance.
      shared_ptr<string> name_ {};
      // The ID of the region where the SAG instance is deployed.
      shared_ptr<string> regionId_ {};
      // The data transfer rate of the SAG instance. Unit: bit/s
      shared_ptr<string> trafficRate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficTopN_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagTrafficTopNResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficTopN Field Functions 
    bool hasTrafficTopN() const { return this->trafficTopN_ != nullptr;};
    void deleteTrafficTopN() { this->trafficTopN_ = nullptr;};
    inline const vector<DescribeSagTrafficTopNResponseBody::TrafficTopN> & getTrafficTopN() const { DARABONBA_PTR_GET_CONST(trafficTopN_, vector<DescribeSagTrafficTopNResponseBody::TrafficTopN>) };
    inline vector<DescribeSagTrafficTopNResponseBody::TrafficTopN> getTrafficTopN() { DARABONBA_PTR_GET(trafficTopN_, vector<DescribeSagTrafficTopNResponseBody::TrafficTopN>) };
    inline DescribeSagTrafficTopNResponseBody& setTrafficTopN(const vector<DescribeSagTrafficTopNResponseBody::TrafficTopN> & trafficTopN) { DARABONBA_PTR_SET_VALUE(trafficTopN_, trafficTopN) };
    inline DescribeSagTrafficTopNResponseBody& setTrafficTopN(vector<DescribeSagTrafficTopNResponseBody::TrafficTopN> && trafficTopN) { DARABONBA_PTR_SET_RVALUE(trafficTopN_, trafficTopN) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the data transfer rate of the SAG instance.
    shared_ptr<vector<DescribeSagTrafficTopNResponseBody::TrafficTopN>> trafficTopN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
