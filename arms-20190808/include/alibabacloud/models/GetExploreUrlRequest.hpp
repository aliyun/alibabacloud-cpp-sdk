// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPLOREURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXPLOREURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetExploreUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExploreUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetExploreUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetExploreUrlRequest() = default ;
    GetExploreUrlRequest(const GetExploreUrlRequest &) = default ;
    GetExploreUrlRequest(GetExploreUrlRequest &&) = default ;
    GetExploreUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExploreUrlRequest() = default ;
    GetExploreUrlRequest& operator=(const GetExploreUrlRequest &) = default ;
    GetExploreUrlRequest& operator=(GetExploreUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->expression_ != nullptr && this->regionId_ != nullptr && this->type_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetExploreUrlRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline GetExploreUrlRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetExploreUrlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetExploreUrlRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The query statement that corresponds to the data source.
    std::shared_ptr<string> expression_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the Grafana data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
