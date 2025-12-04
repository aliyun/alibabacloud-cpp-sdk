// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVMSREALNUMBERCALLCONNECTIONRATEINFORESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_QUERYVMSREALNUMBERCALLCONNECTIONRATEINFORESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(CallConnectionRate, callConnectionRate_);
      DARABONBA_PTR_TO_JSON(CompleteCount, completeCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RingingCount, ringingCount_);
      DARABONBA_PTR_TO_JSON(RingingRate, ringingRate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CallConnectionRate, callConnectionRate_);
      DARABONBA_PTR_FROM_JSON(CompleteCount, completeCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RingingCount, ringingCount_);
      DARABONBA_PTR_FROM_JSON(RingingRate, ringingRate_);
    };
    QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel() = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel(const QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel &) = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel(QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel &&) = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel() = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& operator=(const QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel &) = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& operator=(QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callConnectionRate_ == nullptr
        && return this->completeCount_ == nullptr && return this->regionId_ == nullptr && return this->requestCount_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr
        && return this->ringingCount_ == nullptr && return this->ringingRate_ == nullptr; };
    // callConnectionRate Field Functions 
    bool hasCallConnectionRate() const { return this->callConnectionRate_ != nullptr;};
    void deleteCallConnectionRate() { this->callConnectionRate_ = nullptr;};
    inline double callConnectionRate() const { DARABONBA_PTR_GET_DEFAULT(callConnectionRate_, 0.0) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& setCallConnectionRate(double callConnectionRate) { DARABONBA_PTR_SET_VALUE(callConnectionRate_, callConnectionRate) };


    // completeCount Field Functions 
    bool hasCompleteCount() const { return this->completeCount_ != nullptr;};
    void deleteCompleteCount() { this->completeCount_ = nullptr;};
    inline int64_t completeCount() const { DARABONBA_PTR_GET_DEFAULT(completeCount_, 0L) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& setCompleteCount(int64_t completeCount) { DARABONBA_PTR_SET_VALUE(completeCount_, completeCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestCount Field Functions 
    bool hasRequestCount() const { return this->requestCount_ != nullptr;};
    void deleteRequestCount() { this->requestCount_ = nullptr;};
    inline int64_t requestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // ringingCount Field Functions 
    bool hasRingingCount() const { return this->ringingCount_ != nullptr;};
    void deleteRingingCount() { this->ringingCount_ = nullptr;};
    inline int64_t ringingCount() const { DARABONBA_PTR_GET_DEFAULT(ringingCount_, 0L) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& setRingingCount(int64_t ringingCount) { DARABONBA_PTR_SET_VALUE(ringingCount_, ringingCount) };


    // ringingRate Field Functions 
    bool hasRingingRate() const { return this->ringingRate_ != nullptr;};
    void deleteRingingRate() { this->ringingRate_ = nullptr;};
    inline double ringingRate() const { DARABONBA_PTR_GET_DEFAULT(ringingRate_, 0.0) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBodyModel& setRingingRate(double ringingRate) { DARABONBA_PTR_SET_VALUE(ringingRate_, ringingRate) };


  protected:
    // 接通率
    std::shared_ptr<double> callConnectionRate_ = nullptr;
    // 接通数
    std::shared_ptr<int64_t> completeCount_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // 请求通话数
    std::shared_ptr<int64_t> requestCount_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    // EcsInstance, EcsDisk, EcsImage, EcsSnapshot, EcsSecurityGroup, EcsEip, EcsVpc, EcsVRouter, EcsVSwitch, EcsVRouteTable, EcsAuthImage, EcsAll, SlbLoadbalancer, SlbVm, RdsInstance, RdsAllInstance, KvsInstance, OcsInstance, OdpsInstance
    std::shared_ptr<string> resourceType_ = nullptr;
    // 响铃数
    std::shared_ptr<int64_t> ringingCount_ = nullptr;
    // 响铃率
    std::shared_ptr<double> ringingRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
