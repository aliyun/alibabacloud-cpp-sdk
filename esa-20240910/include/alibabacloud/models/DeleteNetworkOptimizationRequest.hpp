// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKOPTIMIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKOPTIMIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteNetworkOptimizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkOptimizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkOptimizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteNetworkOptimizationRequest() = default ;
    DeleteNetworkOptimizationRequest(const DeleteNetworkOptimizationRequest &) = default ;
    DeleteNetworkOptimizationRequest(DeleteNetworkOptimizationRequest &&) = default ;
    DeleteNetworkOptimizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkOptimizationRequest() = default ;
    DeleteNetworkOptimizationRequest& operator=(const DeleteNetworkOptimizationRequest &) = default ;
    DeleteNetworkOptimizationRequest& operator=(DeleteNetworkOptimizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->siteId_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline DeleteNetworkOptimizationRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteNetworkOptimizationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // ConfigId of the configuration, which can be obtained by calling the ListNetworkOptimizations.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
