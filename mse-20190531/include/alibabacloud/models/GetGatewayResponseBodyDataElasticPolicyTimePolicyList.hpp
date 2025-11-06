// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAELASTICPOLICYTIMEPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAELASTICPOLICYTIMEPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayResponseBodyDataElasticPolicyTimePolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyDataElasticPolicyTimePolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(DesiredReplica, desiredReplica_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyDataElasticPolicyTimePolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(DesiredReplica, desiredReplica_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetGatewayResponseBodyDataElasticPolicyTimePolicyList() = default ;
    GetGatewayResponseBodyDataElasticPolicyTimePolicyList(const GetGatewayResponseBodyDataElasticPolicyTimePolicyList &) = default ;
    GetGatewayResponseBodyDataElasticPolicyTimePolicyList(GetGatewayResponseBodyDataElasticPolicyTimePolicyList &&) = default ;
    GetGatewayResponseBodyDataElasticPolicyTimePolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyDataElasticPolicyTimePolicyList() = default ;
    GetGatewayResponseBodyDataElasticPolicyTimePolicyList& operator=(const GetGatewayResponseBodyDataElasticPolicyTimePolicyList &) = default ;
    GetGatewayResponseBodyDataElasticPolicyTimePolicyList& operator=(GetGatewayResponseBodyDataElasticPolicyTimePolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desiredReplica_ == nullptr
        && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // desiredReplica Field Functions 
    bool hasDesiredReplica() const { return this->desiredReplica_ != nullptr;};
    void deleteDesiredReplica() { this->desiredReplica_ = nullptr;};
    inline int32_t desiredReplica() const { DARABONBA_PTR_GET_DEFAULT(desiredReplica_, 0) };
    inline GetGatewayResponseBodyDataElasticPolicyTimePolicyList& setDesiredReplica(int32_t desiredReplica) { DARABONBA_PTR_SET_VALUE(desiredReplica_, desiredReplica) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetGatewayResponseBodyDataElasticPolicyTimePolicyList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetGatewayResponseBodyDataElasticPolicyTimePolicyList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The number of expected replicas.
    std::shared_ptr<int32_t> desiredReplica_ = nullptr;
    // The end time of auto scale-out.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of auto scale-out.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
