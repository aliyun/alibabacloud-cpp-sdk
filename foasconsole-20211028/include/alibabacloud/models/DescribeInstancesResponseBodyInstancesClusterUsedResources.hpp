// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERUSEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERUSEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesClusterUsedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesClusterUsedResources& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ElasticUsedCpu, elasticUsedCpu_);
      DARABONBA_PTR_TO_JSON(ElasticUsedMemory, elasticUsedMemory_);
      DARABONBA_PTR_TO_JSON(ElasticUsedResource, elasticUsedResource_);
      DARABONBA_PTR_TO_JSON(GuaranteedUsedCpu, guaranteedUsedCpu_);
      DARABONBA_PTR_TO_JSON(GuaranteedUsedMemory, guaranteedUsedMemory_);
      DARABONBA_PTR_TO_JSON(GuaranteedUsedResource, guaranteedUsedResource_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaUsedCpu, haUsedCpu_);
      DARABONBA_PTR_TO_JSON(HaUsedMemory, haUsedMemory_);
      DARABONBA_PTR_TO_JSON(HaUsedResource, haUsedResource_);
      DARABONBA_PTR_TO_JSON(UsedCpu, usedCpu_);
      DARABONBA_PTR_TO_JSON(UsedMemory, usedMemory_);
      DARABONBA_PTR_TO_JSON(UsedResource, usedResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesClusterUsedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ElasticUsedCpu, elasticUsedCpu_);
      DARABONBA_PTR_FROM_JSON(ElasticUsedMemory, elasticUsedMemory_);
      DARABONBA_PTR_FROM_JSON(ElasticUsedResource, elasticUsedResource_);
      DARABONBA_PTR_FROM_JSON(GuaranteedUsedCpu, guaranteedUsedCpu_);
      DARABONBA_PTR_FROM_JSON(GuaranteedUsedMemory, guaranteedUsedMemory_);
      DARABONBA_PTR_FROM_JSON(GuaranteedUsedResource, guaranteedUsedResource_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaUsedCpu, haUsedCpu_);
      DARABONBA_PTR_FROM_JSON(HaUsedMemory, haUsedMemory_);
      DARABONBA_PTR_FROM_JSON(HaUsedResource, haUsedResource_);
      DARABONBA_PTR_FROM_JSON(UsedCpu, usedCpu_);
      DARABONBA_PTR_FROM_JSON(UsedMemory, usedMemory_);
      DARABONBA_PTR_FROM_JSON(UsedResource, usedResource_);
    };
    DescribeInstancesResponseBodyInstancesClusterUsedResources() = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedResources(const DescribeInstancesResponseBodyInstancesClusterUsedResources &) = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedResources(DescribeInstancesResponseBodyInstancesClusterUsedResources &&) = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesClusterUsedResources() = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedResources& operator=(const DescribeInstancesResponseBodyInstancesClusterUsedResources &) = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedResources& operator=(DescribeInstancesResponseBodyInstancesClusterUsedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->elasticUsedCpu_ != nullptr && this->elasticUsedMemory_ != nullptr && this->elasticUsedResource_ != nullptr && this->guaranteedUsedCpu_ != nullptr && this->guaranteedUsedMemory_ != nullptr
        && this->guaranteedUsedResource_ != nullptr && this->ha_ != nullptr && this->haUsedCpu_ != nullptr && this->haUsedMemory_ != nullptr && this->haUsedResource_ != nullptr
        && this->usedCpu_ != nullptr && this->usedMemory_ != nullptr && this->usedResource_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // elasticUsedCpu Field Functions 
    bool hasElasticUsedCpu() const { return this->elasticUsedCpu_ != nullptr;};
    void deleteElasticUsedCpu() { this->elasticUsedCpu_ = nullptr;};
    inline float elasticUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(elasticUsedCpu_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setElasticUsedCpu(float elasticUsedCpu) { DARABONBA_PTR_SET_VALUE(elasticUsedCpu_, elasticUsedCpu) };


    // elasticUsedMemory Field Functions 
    bool hasElasticUsedMemory() const { return this->elasticUsedMemory_ != nullptr;};
    void deleteElasticUsedMemory() { this->elasticUsedMemory_ = nullptr;};
    inline float elasticUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(elasticUsedMemory_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setElasticUsedMemory(float elasticUsedMemory) { DARABONBA_PTR_SET_VALUE(elasticUsedMemory_, elasticUsedMemory) };


    // elasticUsedResource Field Functions 
    bool hasElasticUsedResource() const { return this->elasticUsedResource_ != nullptr;};
    void deleteElasticUsedResource() { this->elasticUsedResource_ = nullptr;};
    inline float elasticUsedResource() const { DARABONBA_PTR_GET_DEFAULT(elasticUsedResource_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setElasticUsedResource(float elasticUsedResource) { DARABONBA_PTR_SET_VALUE(elasticUsedResource_, elasticUsedResource) };


    // guaranteedUsedCpu Field Functions 
    bool hasGuaranteedUsedCpu() const { return this->guaranteedUsedCpu_ != nullptr;};
    void deleteGuaranteedUsedCpu() { this->guaranteedUsedCpu_ = nullptr;};
    inline float guaranteedUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(guaranteedUsedCpu_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setGuaranteedUsedCpu(float guaranteedUsedCpu) { DARABONBA_PTR_SET_VALUE(guaranteedUsedCpu_, guaranteedUsedCpu) };


    // guaranteedUsedMemory Field Functions 
    bool hasGuaranteedUsedMemory() const { return this->guaranteedUsedMemory_ != nullptr;};
    void deleteGuaranteedUsedMemory() { this->guaranteedUsedMemory_ = nullptr;};
    inline float guaranteedUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(guaranteedUsedMemory_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setGuaranteedUsedMemory(float guaranteedUsedMemory) { DARABONBA_PTR_SET_VALUE(guaranteedUsedMemory_, guaranteedUsedMemory) };


    // guaranteedUsedResource Field Functions 
    bool hasGuaranteedUsedResource() const { return this->guaranteedUsedResource_ != nullptr;};
    void deleteGuaranteedUsedResource() { this->guaranteedUsedResource_ = nullptr;};
    inline float guaranteedUsedResource() const { DARABONBA_PTR_GET_DEFAULT(guaranteedUsedResource_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setGuaranteedUsedResource(float guaranteedUsedResource) { DARABONBA_PTR_SET_VALUE(guaranteedUsedResource_, guaranteedUsedResource) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haUsedCpu Field Functions 
    bool hasHaUsedCpu() const { return this->haUsedCpu_ != nullptr;};
    void deleteHaUsedCpu() { this->haUsedCpu_ = nullptr;};
    inline float haUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(haUsedCpu_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setHaUsedCpu(float haUsedCpu) { DARABONBA_PTR_SET_VALUE(haUsedCpu_, haUsedCpu) };


    // haUsedMemory Field Functions 
    bool hasHaUsedMemory() const { return this->haUsedMemory_ != nullptr;};
    void deleteHaUsedMemory() { this->haUsedMemory_ = nullptr;};
    inline float haUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(haUsedMemory_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setHaUsedMemory(float haUsedMemory) { DARABONBA_PTR_SET_VALUE(haUsedMemory_, haUsedMemory) };


    // haUsedResource Field Functions 
    bool hasHaUsedResource() const { return this->haUsedResource_ != nullptr;};
    void deleteHaUsedResource() { this->haUsedResource_ = nullptr;};
    inline float haUsedResource() const { DARABONBA_PTR_GET_DEFAULT(haUsedResource_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setHaUsedResource(float haUsedResource) { DARABONBA_PTR_SET_VALUE(haUsedResource_, haUsedResource) };


    // usedCpu Field Functions 
    bool hasUsedCpu() const { return this->usedCpu_ != nullptr;};
    void deleteUsedCpu() { this->usedCpu_ = nullptr;};
    inline float usedCpu() const { DARABONBA_PTR_GET_DEFAULT(usedCpu_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setUsedCpu(float usedCpu) { DARABONBA_PTR_SET_VALUE(usedCpu_, usedCpu) };


    // usedMemory Field Functions 
    bool hasUsedMemory() const { return this->usedMemory_ != nullptr;};
    void deleteUsedMemory() { this->usedMemory_ = nullptr;};
    inline float usedMemory() const { DARABONBA_PTR_GET_DEFAULT(usedMemory_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setUsedMemory(float usedMemory) { DARABONBA_PTR_SET_VALUE(usedMemory_, usedMemory) };


    // usedResource Field Functions 
    bool hasUsedResource() const { return this->usedResource_ != nullptr;};
    void deleteUsedResource() { this->usedResource_ = nullptr;};
    inline float usedResource() const { DARABONBA_PTR_GET_DEFAULT(usedResource_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedResources& setUsedResource(float usedResource) { DARABONBA_PTR_SET_VALUE(usedResource_, usedResource) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<float> elasticUsedCpu_ = nullptr;
    std::shared_ptr<float> elasticUsedMemory_ = nullptr;
    std::shared_ptr<float> elasticUsedResource_ = nullptr;
    std::shared_ptr<float> guaranteedUsedCpu_ = nullptr;
    std::shared_ptr<float> guaranteedUsedMemory_ = nullptr;
    std::shared_ptr<float> guaranteedUsedResource_ = nullptr;
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<float> haUsedCpu_ = nullptr;
    std::shared_ptr<float> haUsedMemory_ = nullptr;
    std::shared_ptr<float> haUsedResource_ = nullptr;
    std::shared_ptr<float> usedCpu_ = nullptr;
    std::shared_ptr<float> usedMemory_ = nullptr;
    std::shared_ptr<float> usedResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
