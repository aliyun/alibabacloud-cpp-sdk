// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEELASTICPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEELASTICPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DisableElasticPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableElasticPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
    };
    friend void from_json(const Darabonba::Json& j, DisableElasticPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
    };
    DisableElasticPlanRequest() = default ;
    DisableElasticPlanRequest(const DisableElasticPlanRequest &) = default ;
    DisableElasticPlanRequest(DisableElasticPlanRequest &&) = default ;
    DisableElasticPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableElasticPlanRequest() = default ;
    DisableElasticPlanRequest& operator=(const DisableElasticPlanRequest &) = default ;
    DisableElasticPlanRequest& operator=(DisableElasticPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->elasticPlanName_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DisableElasticPlanRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline DisableElasticPlanRequest& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the scaling plan.
    // 
    // >  You can call the [DescribeElasticPlans](https://help.aliyun.com/document_detail/601334.html) operation to query the names of scaling plans.
    // 
    // This parameter is required.
    std::shared_ptr<string> elasticPlanName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
