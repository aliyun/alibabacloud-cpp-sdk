// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINEDEPLOYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINEDEPLOYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineDeployConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineDeployConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlwaysAllocateCPU, alwaysAllocateCPU_);
      DARABONBA_PTR_TO_JSON(MaximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_TO_JSON(MinimumInstanceCount, minimumInstanceCount_);
      DARABONBA_PTR_TO_JSON(UpdateApplicationInput, updateApplicationInput_);
      DARABONBA_PTR_TO_JSON(UpdateTraffic, updateTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipelineDeployConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlwaysAllocateCPU, alwaysAllocateCPU_);
      DARABONBA_PTR_FROM_JSON(MaximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_FROM_JSON(MinimumInstanceCount, minimumInstanceCount_);
      DARABONBA_PTR_FROM_JSON(UpdateApplicationInput, updateApplicationInput_);
      DARABONBA_PTR_FROM_JSON(UpdateTraffic, updateTraffic_);
    };
    BuildPipelineDeployConfig() = default ;
    BuildPipelineDeployConfig(const BuildPipelineDeployConfig &) = default ;
    BuildPipelineDeployConfig(BuildPipelineDeployConfig &&) = default ;
    BuildPipelineDeployConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineDeployConfig() = default ;
    BuildPipelineDeployConfig& operator=(const BuildPipelineDeployConfig &) = default ;
    BuildPipelineDeployConfig& operator=(BuildPipelineDeployConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alwaysAllocateCPU_ != nullptr
        && this->maximumInstanceCount_ != nullptr && this->minimumInstanceCount_ != nullptr && this->updateApplicationInput_ != nullptr && this->updateTraffic_ != nullptr; };
    // alwaysAllocateCPU Field Functions 
    bool hasAlwaysAllocateCPU() const { return this->alwaysAllocateCPU_ != nullptr;};
    void deleteAlwaysAllocateCPU() { this->alwaysAllocateCPU_ = nullptr;};
    inline bool alwaysAllocateCPU() const { DARABONBA_PTR_GET_DEFAULT(alwaysAllocateCPU_, false) };
    inline BuildPipelineDeployConfig& setAlwaysAllocateCPU(bool alwaysAllocateCPU) { DARABONBA_PTR_SET_VALUE(alwaysAllocateCPU_, alwaysAllocateCPU) };


    // maximumInstanceCount Field Functions 
    bool hasMaximumInstanceCount() const { return this->maximumInstanceCount_ != nullptr;};
    void deleteMaximumInstanceCount() { this->maximumInstanceCount_ = nullptr;};
    inline int32_t maximumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(maximumInstanceCount_, 0) };
    inline BuildPipelineDeployConfig& setMaximumInstanceCount(int32_t maximumInstanceCount) { DARABONBA_PTR_SET_VALUE(maximumInstanceCount_, maximumInstanceCount) };


    // minimumInstanceCount Field Functions 
    bool hasMinimumInstanceCount() const { return this->minimumInstanceCount_ != nullptr;};
    void deleteMinimumInstanceCount() { this->minimumInstanceCount_ = nullptr;};
    inline int32_t minimumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(minimumInstanceCount_, 0) };
    inline BuildPipelineDeployConfig& setMinimumInstanceCount(int32_t minimumInstanceCount) { DARABONBA_PTR_SET_VALUE(minimumInstanceCount_, minimumInstanceCount) };


    // updateApplicationInput Field Functions 
    bool hasUpdateApplicationInput() const { return this->updateApplicationInput_ != nullptr;};
    void deleteUpdateApplicationInput() { this->updateApplicationInput_ = nullptr;};
    inline string updateApplicationInput() const { DARABONBA_PTR_GET_DEFAULT(updateApplicationInput_, "") };
    inline BuildPipelineDeployConfig& setUpdateApplicationInput(string updateApplicationInput) { DARABONBA_PTR_SET_VALUE(updateApplicationInput_, updateApplicationInput) };


    // updateTraffic Field Functions 
    bool hasUpdateTraffic() const { return this->updateTraffic_ != nullptr;};
    void deleteUpdateTraffic() { this->updateTraffic_ = nullptr;};
    inline bool updateTraffic() const { DARABONBA_PTR_GET_DEFAULT(updateTraffic_, false) };
    inline BuildPipelineDeployConfig& setUpdateTraffic(bool updateTraffic) { DARABONBA_PTR_SET_VALUE(updateTraffic_, updateTraffic) };


  protected:
    std::shared_ptr<bool> alwaysAllocateCPU_ = nullptr;
    std::shared_ptr<int32_t> maximumInstanceCount_ = nullptr;
    std::shared_ptr<int32_t> minimumInstanceCount_ = nullptr;
    std::shared_ptr<string> updateApplicationInput_ = nullptr;
    std::shared_ptr<bool> updateTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
