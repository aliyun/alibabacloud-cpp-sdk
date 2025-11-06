// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAELASTICPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAELASTICPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayResponseBodyDataElasticPolicyTimePolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayResponseBodyDataElasticPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyDataElasticPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_TO_JSON(MaxReplica, maxReplica_);
      DARABONBA_PTR_TO_JSON(TimePolicyList, timePolicyList_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyDataElasticPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_FROM_JSON(MaxReplica, maxReplica_);
      DARABONBA_PTR_FROM_JSON(TimePolicyList, timePolicyList_);
    };
    GetGatewayResponseBodyDataElasticPolicy() = default ;
    GetGatewayResponseBodyDataElasticPolicy(const GetGatewayResponseBodyDataElasticPolicy &) = default ;
    GetGatewayResponseBodyDataElasticPolicy(GetGatewayResponseBodyDataElasticPolicy &&) = default ;
    GetGatewayResponseBodyDataElasticPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyDataElasticPolicy() = default ;
    GetGatewayResponseBodyDataElasticPolicy& operator=(const GetGatewayResponseBodyDataElasticPolicy &) = default ;
    GetGatewayResponseBodyDataElasticPolicy& operator=(GetGatewayResponseBodyDataElasticPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticType_ == nullptr
        && return this->maxReplica_ == nullptr && return this->timePolicyList_ == nullptr; };
    // elasticType Field Functions 
    bool hasElasticType() const { return this->elasticType_ != nullptr;};
    void deleteElasticType() { this->elasticType_ = nullptr;};
    inline string elasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
    inline GetGatewayResponseBodyDataElasticPolicy& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


    // maxReplica Field Functions 
    bool hasMaxReplica() const { return this->maxReplica_ != nullptr;};
    void deleteMaxReplica() { this->maxReplica_ = nullptr;};
    inline int32_t maxReplica() const { DARABONBA_PTR_GET_DEFAULT(maxReplica_, 0) };
    inline GetGatewayResponseBodyDataElasticPolicy& setMaxReplica(int32_t maxReplica) { DARABONBA_PTR_SET_VALUE(maxReplica_, maxReplica) };


    // timePolicyList Field Functions 
    bool hasTimePolicyList() const { return this->timePolicyList_ != nullptr;};
    void deleteTimePolicyList() { this->timePolicyList_ = nullptr;};
    inline const vector<Models::GetGatewayResponseBodyDataElasticPolicyTimePolicyList> & timePolicyList() const { DARABONBA_PTR_GET_CONST(timePolicyList_, vector<Models::GetGatewayResponseBodyDataElasticPolicyTimePolicyList>) };
    inline vector<Models::GetGatewayResponseBodyDataElasticPolicyTimePolicyList> timePolicyList() { DARABONBA_PTR_GET(timePolicyList_, vector<Models::GetGatewayResponseBodyDataElasticPolicyTimePolicyList>) };
    inline GetGatewayResponseBodyDataElasticPolicy& setTimePolicyList(const vector<Models::GetGatewayResponseBodyDataElasticPolicyTimePolicyList> & timePolicyList) { DARABONBA_PTR_SET_VALUE(timePolicyList_, timePolicyList) };
    inline GetGatewayResponseBodyDataElasticPolicy& setTimePolicyList(vector<Models::GetGatewayResponseBodyDataElasticPolicyTimePolicyList> && timePolicyList) { DARABONBA_PTR_SET_RVALUE(timePolicyList_, timePolicyList) };


  protected:
    // The type of auto scale-out. Valid value:
    // 
    // *   CronHPA: scale-out by time
    std::shared_ptr<string> elasticType_ = nullptr;
    // The maximum number of instances that are automatically scaled out. This parameter is used for horizontal scale-out.
    std::shared_ptr<int32_t> maxReplica_ = nullptr;
    // The policy of scale-out by time.
    std::shared_ptr<vector<Models::GetGatewayResponseBodyDataElasticPolicyTimePolicyList>> timePolicyList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
