// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceSpec.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ScaleQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    ScaleQuotaRequest() = default ;
    ScaleQuotaRequest(const ScaleQuotaRequest &) = default ;
    ScaleQuotaRequest(ScaleQuotaRequest &&) = default ;
    ScaleQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleQuotaRequest() = default ;
    ScaleQuotaRequest& operator=(const ScaleQuotaRequest &) = default ;
    ScaleQuotaRequest& operator=(ScaleQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->min_ == nullptr
        && this->resourceGroupIds_ == nullptr; };
    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline const ResourceSpec & getMin() const { DARABONBA_PTR_GET_CONST(min_, ResourceSpec) };
    inline ResourceSpec getMin() { DARABONBA_PTR_GET(min_, ResourceSpec) };
    inline ScaleQuotaRequest& setMin(const ResourceSpec & min) { DARABONBA_PTR_SET_VALUE(min_, min) };
    inline ScaleQuotaRequest& setMin(ResourceSpec && min) { DARABONBA_PTR_SET_RVALUE(min_, min) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & getResourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> getResourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline ScaleQuotaRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline ScaleQuotaRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


  protected:
    shared_ptr<ResourceSpec> min_ {};
    shared_ptr<vector<string>> resourceGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
