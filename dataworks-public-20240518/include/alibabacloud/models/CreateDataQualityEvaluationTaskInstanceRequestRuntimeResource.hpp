// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKINSTANCEREQUESTRUNTIMERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKINSTANCEREQUESTRUNTIMERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource() = default ;
    CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource(const CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource &) = default ;
    CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource(CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource &&) = default ;
    CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource() = default ;
    CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource& operator=(const CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource &) = default ;
    CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource& operator=(CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cu_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline double cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
    inline CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource& setCu(double cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The task runs to configure CU consumption. If Serverless resource groups are used, you must specify this parameter.
    std::shared_ptr<double> cu_ = nullptr;
    // The identifier of the scheduling resource group configured for running the task.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
