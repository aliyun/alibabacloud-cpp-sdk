// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTROLSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTROLSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryControlStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryControlStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryControlStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    QueryControlStrategyRequest() = default ;
    QueryControlStrategyRequest(const QueryControlStrategyRequest &) = default ;
    QueryControlStrategyRequest(QueryControlStrategyRequest &&) = default ;
    QueryControlStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryControlStrategyRequest() = default ;
    QueryControlStrategyRequest& operator=(const QueryControlStrategyRequest &) = default ;
    QueryControlStrategyRequest& operator=(QueryControlStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && return this->regionId_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryControlStrategyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryControlStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Product type, currently only supports ANT_CLOUD_AUTH (financial-grade real person), all others have been phased out.
    std::shared_ptr<string> productType_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
