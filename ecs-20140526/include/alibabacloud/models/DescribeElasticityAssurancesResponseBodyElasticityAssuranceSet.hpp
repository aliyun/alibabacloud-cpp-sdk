// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODYELASTICITYASSURANCESET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODYELASTICITYASSURANCESET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceItem, elasticityAssuranceItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceItem, elasticityAssuranceItem_);
    };
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet() = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet(const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet &) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet(DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet &&) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet() = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet& operator=(const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet &) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet& operator=(DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticityAssuranceItem_ != nullptr; };
    // elasticityAssuranceItem Field Functions 
    bool hasElasticityAssuranceItem() const { return this->elasticityAssuranceItem_ != nullptr;};
    void deleteElasticityAssuranceItem() { this->elasticityAssuranceItem_ = nullptr;};
    inline const vector<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem> & elasticityAssuranceItem() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceItem_, vector<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem>) };
    inline vector<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem> elasticityAssuranceItem() { DARABONBA_PTR_GET(elasticityAssuranceItem_, vector<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem>) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet& setElasticityAssuranceItem(const vector<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem> & elasticityAssuranceItem) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceItem_, elasticityAssuranceItem) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet& setElasticityAssuranceItem(vector<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem> && elasticityAssuranceItem) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceItem_, elasticityAssuranceItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem>> elasticityAssuranceItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
