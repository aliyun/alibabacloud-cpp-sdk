// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/ResourceSpec.hpp>
#include <alibabacloud/models/QuotaConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocateStrategy, allocateStrategy_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(ParentQuotaId, parentQuotaId_);
      DARABONBA_PTR_TO_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_TO_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocateStrategy, allocateStrategy_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(ParentQuotaId, parentQuotaId_);
      DARABONBA_PTR_FROM_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_FROM_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateQuotaRequest() = default ;
    CreateQuotaRequest(const CreateQuotaRequest &) = default ;
    CreateQuotaRequest(CreateQuotaRequest &&) = default ;
    CreateQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaRequest() = default ;
    CreateQuotaRequest& operator=(const CreateQuotaRequest &) = default ;
    CreateQuotaRequest& operator=(CreateQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocateStrategy_ == nullptr
        && return this->description_ == nullptr && return this->labels_ == nullptr && return this->min_ == nullptr && return this->parentQuotaId_ == nullptr && return this->queueStrategy_ == nullptr
        && return this->quotaConfig_ == nullptr && return this->quotaName_ == nullptr && return this->resourceGroupIds_ == nullptr && return this->resourceType_ == nullptr; };
    // allocateStrategy Field Functions 
    bool hasAllocateStrategy() const { return this->allocateStrategy_ != nullptr;};
    void deleteAllocateStrategy() { this->allocateStrategy_ = nullptr;};
    inline string allocateStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocateStrategy_, "") };
    inline CreateQuotaRequest& setAllocateStrategy(string allocateStrategy) { DARABONBA_PTR_SET_VALUE(allocateStrategy_, allocateStrategy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateQuotaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateQuotaRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateQuotaRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline const ResourceSpec & min() const { DARABONBA_PTR_GET_CONST(min_, ResourceSpec) };
    inline ResourceSpec min() { DARABONBA_PTR_GET(min_, ResourceSpec) };
    inline CreateQuotaRequest& setMin(const ResourceSpec & min) { DARABONBA_PTR_SET_VALUE(min_, min) };
    inline CreateQuotaRequest& setMin(ResourceSpec && min) { DARABONBA_PTR_SET_RVALUE(min_, min) };


    // parentQuotaId Field Functions 
    bool hasParentQuotaId() const { return this->parentQuotaId_ != nullptr;};
    void deleteParentQuotaId() { this->parentQuotaId_ = nullptr;};
    inline string parentQuotaId() const { DARABONBA_PTR_GET_DEFAULT(parentQuotaId_, "") };
    inline CreateQuotaRequest& setParentQuotaId(string parentQuotaId) { DARABONBA_PTR_SET_VALUE(parentQuotaId_, parentQuotaId) };


    // queueStrategy Field Functions 
    bool hasQueueStrategy() const { return this->queueStrategy_ != nullptr;};
    void deleteQueueStrategy() { this->queueStrategy_ = nullptr;};
    inline string queueStrategy() const { DARABONBA_PTR_GET_DEFAULT(queueStrategy_, "") };
    inline CreateQuotaRequest& setQueueStrategy(string queueStrategy) { DARABONBA_PTR_SET_VALUE(queueStrategy_, queueStrategy) };


    // quotaConfig Field Functions 
    bool hasQuotaConfig() const { return this->quotaConfig_ != nullptr;};
    void deleteQuotaConfig() { this->quotaConfig_ = nullptr;};
    inline const QuotaConfig & quotaConfig() const { DARABONBA_PTR_GET_CONST(quotaConfig_, QuotaConfig) };
    inline QuotaConfig quotaConfig() { DARABONBA_PTR_GET(quotaConfig_, QuotaConfig) };
    inline CreateQuotaRequest& setQuotaConfig(const QuotaConfig & quotaConfig) { DARABONBA_PTR_SET_VALUE(quotaConfig_, quotaConfig) };
    inline CreateQuotaRequest& setQuotaConfig(QuotaConfig && quotaConfig) { DARABONBA_PTR_SET_RVALUE(quotaConfig_, quotaConfig) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline CreateQuotaRequest& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & resourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> resourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline CreateQuotaRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline CreateQuotaRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateQuotaRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> allocateStrategy_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    std::shared_ptr<ResourceSpec> min_ = nullptr;
    std::shared_ptr<string> parentQuotaId_ = nullptr;
    std::shared_ptr<string> queueStrategy_ = nullptr;
    std::shared_ptr<QuotaConfig> quotaConfig_ = nullptr;
    std::shared_ptr<string> quotaName_ = nullptr;
    std::shared_ptr<vector<string>> resourceGroupIds_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
