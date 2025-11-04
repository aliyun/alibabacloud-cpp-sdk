// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticStrengthResponseBodyElasticStrengthModels.hpp>
#include <alibabacloud/models/DescribeElasticStrengthResponseBodyResourcePools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeElasticStrengthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticStrengthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticStrength, elasticStrength_);
      DARABONBA_PTR_TO_JSON(ElasticStrengthModels, elasticStrengthModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePools, resourcePools_);
      DARABONBA_PTR_TO_JSON(TotalStrength, totalStrength_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticStrengthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticStrength, elasticStrength_);
      DARABONBA_PTR_FROM_JSON(ElasticStrengthModels, elasticStrengthModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePools, resourcePools_);
      DARABONBA_PTR_FROM_JSON(TotalStrength, totalStrength_);
    };
    DescribeElasticStrengthResponseBody() = default ;
    DescribeElasticStrengthResponseBody(const DescribeElasticStrengthResponseBody &) = default ;
    DescribeElasticStrengthResponseBody(DescribeElasticStrengthResponseBody &&) = default ;
    DescribeElasticStrengthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticStrengthResponseBody() = default ;
    DescribeElasticStrengthResponseBody& operator=(const DescribeElasticStrengthResponseBody &) = default ;
    DescribeElasticStrengthResponseBody& operator=(DescribeElasticStrengthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticStrength_ == nullptr
        && return this->elasticStrengthModels_ == nullptr && return this->requestId_ == nullptr && return this->resourcePools_ == nullptr && return this->totalStrength_ == nullptr; };
    // elasticStrength Field Functions 
    bool hasElasticStrength() const { return this->elasticStrength_ != nullptr;};
    void deleteElasticStrength() { this->elasticStrength_ = nullptr;};
    inline string elasticStrength() const { DARABONBA_PTR_GET_DEFAULT(elasticStrength_, "") };
    inline DescribeElasticStrengthResponseBody& setElasticStrength(string elasticStrength) { DARABONBA_PTR_SET_VALUE(elasticStrength_, elasticStrength) };


    // elasticStrengthModels Field Functions 
    bool hasElasticStrengthModels() const { return this->elasticStrengthModels_ != nullptr;};
    void deleteElasticStrengthModels() { this->elasticStrengthModels_ = nullptr;};
    inline const vector<DescribeElasticStrengthResponseBodyElasticStrengthModels> & elasticStrengthModels() const { DARABONBA_PTR_GET_CONST(elasticStrengthModels_, vector<DescribeElasticStrengthResponseBodyElasticStrengthModels>) };
    inline vector<DescribeElasticStrengthResponseBodyElasticStrengthModels> elasticStrengthModels() { DARABONBA_PTR_GET(elasticStrengthModels_, vector<DescribeElasticStrengthResponseBodyElasticStrengthModels>) };
    inline DescribeElasticStrengthResponseBody& setElasticStrengthModels(const vector<DescribeElasticStrengthResponseBodyElasticStrengthModels> & elasticStrengthModels) { DARABONBA_PTR_SET_VALUE(elasticStrengthModels_, elasticStrengthModels) };
    inline DescribeElasticStrengthResponseBody& setElasticStrengthModels(vector<DescribeElasticStrengthResponseBodyElasticStrengthModels> && elasticStrengthModels) { DARABONBA_PTR_SET_RVALUE(elasticStrengthModels_, elasticStrengthModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticStrengthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePools Field Functions 
    bool hasResourcePools() const { return this->resourcePools_ != nullptr;};
    void deleteResourcePools() { this->resourcePools_ = nullptr;};
    inline const vector<DescribeElasticStrengthResponseBodyResourcePools> & resourcePools() const { DARABONBA_PTR_GET_CONST(resourcePools_, vector<DescribeElasticStrengthResponseBodyResourcePools>) };
    inline vector<DescribeElasticStrengthResponseBodyResourcePools> resourcePools() { DARABONBA_PTR_GET(resourcePools_, vector<DescribeElasticStrengthResponseBodyResourcePools>) };
    inline DescribeElasticStrengthResponseBody& setResourcePools(const vector<DescribeElasticStrengthResponseBodyResourcePools> & resourcePools) { DARABONBA_PTR_SET_VALUE(resourcePools_, resourcePools) };
    inline DescribeElasticStrengthResponseBody& setResourcePools(vector<DescribeElasticStrengthResponseBodyResourcePools> && resourcePools) { DARABONBA_PTR_SET_RVALUE(resourcePools_, resourcePools) };


    // totalStrength Field Functions 
    bool hasTotalStrength() const { return this->totalStrength_ != nullptr;};
    void deleteTotalStrength() { this->totalStrength_ = nullptr;};
    inline double totalStrength() const { DARABONBA_PTR_GET_DEFAULT(totalStrength_, 0.0) };
    inline DescribeElasticStrengthResponseBody& setTotalStrength(double totalStrength) { DARABONBA_PTR_SET_VALUE(totalStrength_, totalStrength) };


  protected:
    // The scaling strength level of the scaling group. Valid values:
    // 
    // *   Strong
    // *   Medium
    // *   Weak
    std::shared_ptr<string> elasticStrength_ = nullptr;
    // The scaling strength models.
    std::shared_ptr<vector<DescribeElasticStrengthResponseBodyElasticStrengthModels>> elasticStrengthModels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource pools.
    std::shared_ptr<vector<DescribeElasticStrengthResponseBodyResourcePools>> resourcePools_ = nullptr;
    // The scaling strength score of the scaling group. Each combination of instance type + zone is scored from 0 to 1 based on its availability, with 0 being the weakest scaling strength and 1 being the strongest. The scaling strength score of the scaling group is measured by the combined scores of all the combinations of instance type + zone.
    // 
    // **
    // 
    // **Warning** This parameter is deprecated.
    std::shared_ptr<double> totalStrength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
