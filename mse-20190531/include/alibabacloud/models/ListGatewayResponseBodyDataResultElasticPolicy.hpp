// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTELASTICPOLICY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTELASTICPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayResponseBodyDataResultElasticPolicyEnableScaleTimePolicyList.hpp>
#include <alibabacloud/models/ListGatewayResponseBodyDataResultElasticPolicyTimePolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayResponseBodyDataResultElasticPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBodyDataResultElasticPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Elastic, elastic_);
      DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_TO_JSON(EnableScaleTimePolicyList, enableScaleTimePolicyList_);
      DARABONBA_PTR_TO_JSON(LoadWarningThreshold, loadWarningThreshold_);
      DARABONBA_PTR_TO_JSON(MaxReplica, maxReplica_);
      DARABONBA_PTR_TO_JSON(TimePolicyList, timePolicyList_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBodyDataResultElasticPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Elastic, elastic_);
      DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_FROM_JSON(EnableScaleTimePolicyList, enableScaleTimePolicyList_);
      DARABONBA_PTR_FROM_JSON(LoadWarningThreshold, loadWarningThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxReplica, maxReplica_);
      DARABONBA_PTR_FROM_JSON(TimePolicyList, timePolicyList_);
    };
    ListGatewayResponseBodyDataResultElasticPolicy() = default ;
    ListGatewayResponseBodyDataResultElasticPolicy(const ListGatewayResponseBodyDataResultElasticPolicy &) = default ;
    ListGatewayResponseBodyDataResultElasticPolicy(ListGatewayResponseBodyDataResultElasticPolicy &&) = default ;
    ListGatewayResponseBodyDataResultElasticPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBodyDataResultElasticPolicy() = default ;
    ListGatewayResponseBodyDataResultElasticPolicy& operator=(const ListGatewayResponseBodyDataResultElasticPolicy &) = default ;
    ListGatewayResponseBodyDataResultElasticPolicy& operator=(ListGatewayResponseBodyDataResultElasticPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elastic_ == nullptr
        && return this->elasticType_ == nullptr && return this->enableScaleTimePolicyList_ == nullptr && return this->loadWarningThreshold_ == nullptr && return this->maxReplica_ == nullptr && return this->timePolicyList_ == nullptr; };
    // elastic Field Functions 
    bool hasElastic() const { return this->elastic_ != nullptr;};
    void deleteElastic() { this->elastic_ = nullptr;};
    inline bool elastic() const { DARABONBA_PTR_GET_DEFAULT(elastic_, false) };
    inline ListGatewayResponseBodyDataResultElasticPolicy& setElastic(bool elastic) { DARABONBA_PTR_SET_VALUE(elastic_, elastic) };


    // elasticType Field Functions 
    bool hasElasticType() const { return this->elasticType_ != nullptr;};
    void deleteElasticType() { this->elasticType_ = nullptr;};
    inline string elasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
    inline ListGatewayResponseBodyDataResultElasticPolicy& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


    // enableScaleTimePolicyList Field Functions 
    bool hasEnableScaleTimePolicyList() const { return this->enableScaleTimePolicyList_ != nullptr;};
    void deleteEnableScaleTimePolicyList() { this->enableScaleTimePolicyList_ = nullptr;};
    inline const vector<Models::ListGatewayResponseBodyDataResultElasticPolicyEnableScaleTimePolicyList> & enableScaleTimePolicyList() const { DARABONBA_PTR_GET_CONST(enableScaleTimePolicyList_, vector<Models::ListGatewayResponseBodyDataResultElasticPolicyEnableScaleTimePolicyList>) };
    inline vector<Models::ListGatewayResponseBodyDataResultElasticPolicyEnableScaleTimePolicyList> enableScaleTimePolicyList() { DARABONBA_PTR_GET(enableScaleTimePolicyList_, vector<Models::ListGatewayResponseBodyDataResultElasticPolicyEnableScaleTimePolicyList>) };
    inline ListGatewayResponseBodyDataResultElasticPolicy& setEnableScaleTimePolicyList(const vector<Models::ListGatewayResponseBodyDataResultElasticPolicyEnableScaleTimePolicyList> & enableScaleTimePolicyList) { DARABONBA_PTR_SET_VALUE(enableScaleTimePolicyList_, enableScaleTimePolicyList) };
    inline ListGatewayResponseBodyDataResultElasticPolicy& setEnableScaleTimePolicyList(vector<Models::ListGatewayResponseBodyDataResultElasticPolicyEnableScaleTimePolicyList> && enableScaleTimePolicyList) { DARABONBA_PTR_SET_RVALUE(enableScaleTimePolicyList_, enableScaleTimePolicyList) };


    // loadWarningThreshold Field Functions 
    bool hasLoadWarningThreshold() const { return this->loadWarningThreshold_ != nullptr;};
    void deleteLoadWarningThreshold() { this->loadWarningThreshold_ = nullptr;};
    inline bool loadWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(loadWarningThreshold_, false) };
    inline ListGatewayResponseBodyDataResultElasticPolicy& setLoadWarningThreshold(bool loadWarningThreshold) { DARABONBA_PTR_SET_VALUE(loadWarningThreshold_, loadWarningThreshold) };


    // maxReplica Field Functions 
    bool hasMaxReplica() const { return this->maxReplica_ != nullptr;};
    void deleteMaxReplica() { this->maxReplica_ = nullptr;};
    inline int32_t maxReplica() const { DARABONBA_PTR_GET_DEFAULT(maxReplica_, 0) };
    inline ListGatewayResponseBodyDataResultElasticPolicy& setMaxReplica(int32_t maxReplica) { DARABONBA_PTR_SET_VALUE(maxReplica_, maxReplica) };


    // timePolicyList Field Functions 
    bool hasTimePolicyList() const { return this->timePolicyList_ != nullptr;};
    void deleteTimePolicyList() { this->timePolicyList_ = nullptr;};
    inline const vector<Models::ListGatewayResponseBodyDataResultElasticPolicyTimePolicyList> & timePolicyList() const { DARABONBA_PTR_GET_CONST(timePolicyList_, vector<Models::ListGatewayResponseBodyDataResultElasticPolicyTimePolicyList>) };
    inline vector<Models::ListGatewayResponseBodyDataResultElasticPolicyTimePolicyList> timePolicyList() { DARABONBA_PTR_GET(timePolicyList_, vector<Models::ListGatewayResponseBodyDataResultElasticPolicyTimePolicyList>) };
    inline ListGatewayResponseBodyDataResultElasticPolicy& setTimePolicyList(const vector<Models::ListGatewayResponseBodyDataResultElasticPolicyTimePolicyList> & timePolicyList) { DARABONBA_PTR_SET_VALUE(timePolicyList_, timePolicyList) };
    inline ListGatewayResponseBodyDataResultElasticPolicy& setTimePolicyList(vector<Models::ListGatewayResponseBodyDataResultElasticPolicyTimePolicyList> && timePolicyList) { DARABONBA_PTR_SET_RVALUE(timePolicyList_, timePolicyList) };


  protected:
    // Indicates whether auto scale-out is enabled.
    std::shared_ptr<bool> elastic_ = nullptr;
    // The type of auto scale-out. Valid value:
    // 
    // *   CronHPA: scale-out by time
    std::shared_ptr<string> elasticType_ = nullptr;
    std::shared_ptr<vector<Models::ListGatewayResponseBodyDataResultElasticPolicyEnableScaleTimePolicyList>> enableScaleTimePolicyList_ = nullptr;
    std::shared_ptr<bool> loadWarningThreshold_ = nullptr;
    // The maximum number of instances that are automatically scaled out. This parameter is used for horizontal scale-out.
    std::shared_ptr<int32_t> maxReplica_ = nullptr;
    // The time policy list for auto scale-out.
    std::shared_ptr<vector<Models::ListGatewayResponseBodyDataResultElasticPolicyTimePolicyList>> timePolicyList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
