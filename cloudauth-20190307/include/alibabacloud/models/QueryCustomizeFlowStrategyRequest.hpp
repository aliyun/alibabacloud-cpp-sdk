// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMIZEFLOWSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMIZEFLOWSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryCustomizeFlowStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomizeFlowStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomizeFlowStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryCustomizeFlowStrategyRequest() = default ;
    QueryCustomizeFlowStrategyRequest(const QueryCustomizeFlowStrategyRequest &) = default ;
    QueryCustomizeFlowStrategyRequest(QueryCustomizeFlowStrategyRequest &&) = default ;
    QueryCustomizeFlowStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomizeFlowStrategyRequest() = default ;
    QueryCustomizeFlowStrategyRequest& operator=(const QueryCustomizeFlowStrategyRequest &) = default ;
    QueryCustomizeFlowStrategyRequest& operator=(QueryCustomizeFlowStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && return this->regionId_ == nullptr && return this->userId_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryCustomizeFlowStrategyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryCustomizeFlowStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QueryCustomizeFlowStrategyRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade Real Person), all others have been phased out.
    std::shared_ptr<string> productType_ = nullptr;
    // regionId
    std::shared_ptr<string> regionId_ = nullptr;
    // User ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
