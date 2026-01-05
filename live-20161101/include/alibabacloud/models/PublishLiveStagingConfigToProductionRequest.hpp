// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHLIVESTAGINGCONFIGTOPRODUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHLIVESTAGINGCONFIGTOPRODUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class PublishLiveStagingConfigToProductionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishLiveStagingConfigToProductionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishLiveStagingConfigToProductionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PublishLiveStagingConfigToProductionRequest() = default ;
    PublishLiveStagingConfigToProductionRequest(const PublishLiveStagingConfigToProductionRequest &) = default ;
    PublishLiveStagingConfigToProductionRequest(PublishLiveStagingConfigToProductionRequest &&) = default ;
    PublishLiveStagingConfigToProductionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishLiveStagingConfigToProductionRequest() = default ;
    PublishLiveStagingConfigToProductionRequest& operator=(const PublishLiveStagingConfigToProductionRequest &) = default ;
    PublishLiveStagingConfigToProductionRequest& operator=(PublishLiveStagingConfigToProductionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->functionName_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline PublishLiveStagingConfigToProductionRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline PublishLiveStagingConfigToProductionRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline PublishLiveStagingConfigToProductionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PublishLiveStagingConfigToProductionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The accelerated domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The name of the feature. For more information about how to obtain the feature name, see [DescribeLiveDomainStagingConfig](https://help.aliyun.com/document_detail/297374.html).
    // 
    // This parameter is required.
    shared_ptr<string> functionName_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
