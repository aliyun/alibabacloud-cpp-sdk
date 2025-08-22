// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBELASTICSPEC_HPP_
#define ALIBABACLOUD_MODELS_JOBELASTICSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobElasticSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobElasticSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AIMasterDockerImage, AIMasterDockerImage_);
      DARABONBA_PTR_TO_JSON(AIMasterType, AIMasterType_);
      DARABONBA_PTR_TO_JSON(EDPMaxParallelism, EDPMaxParallelism_);
      DARABONBA_PTR_TO_JSON(EDPMinParallelism, EDPMinParallelism_);
      DARABONBA_PTR_TO_JSON(ElasticStrategy, elasticStrategy_);
      DARABONBA_PTR_TO_JSON(EnableAIMaster, enableAIMaster_);
      DARABONBA_PTR_TO_JSON(EnableEDP, enableEDP_);
      DARABONBA_PTR_TO_JSON(EnableElasticTraining, enableElasticTraining_);
      DARABONBA_PTR_TO_JSON(EnablePsJobElasticPS, enablePsJobElasticPS_);
      DARABONBA_PTR_TO_JSON(EnablePsJobElasticWorker, enablePsJobElasticWorker_);
      DARABONBA_PTR_TO_JSON(EnablePsResourceEstimate, enablePsResourceEstimate_);
      DARABONBA_PTR_TO_JSON(MaxParallelism, maxParallelism_);
      DARABONBA_PTR_TO_JSON(MinParallelism, minParallelism_);
      DARABONBA_PTR_TO_JSON(PSMaxParallelism, PSMaxParallelism_);
      DARABONBA_PTR_TO_JSON(PSMinParallelism, PSMinParallelism_);
    };
    friend void from_json(const Darabonba::Json& j, JobElasticSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AIMasterDockerImage, AIMasterDockerImage_);
      DARABONBA_PTR_FROM_JSON(AIMasterType, AIMasterType_);
      DARABONBA_PTR_FROM_JSON(EDPMaxParallelism, EDPMaxParallelism_);
      DARABONBA_PTR_FROM_JSON(EDPMinParallelism, EDPMinParallelism_);
      DARABONBA_PTR_FROM_JSON(ElasticStrategy, elasticStrategy_);
      DARABONBA_PTR_FROM_JSON(EnableAIMaster, enableAIMaster_);
      DARABONBA_PTR_FROM_JSON(EnableEDP, enableEDP_);
      DARABONBA_PTR_FROM_JSON(EnableElasticTraining, enableElasticTraining_);
      DARABONBA_PTR_FROM_JSON(EnablePsJobElasticPS, enablePsJobElasticPS_);
      DARABONBA_PTR_FROM_JSON(EnablePsJobElasticWorker, enablePsJobElasticWorker_);
      DARABONBA_PTR_FROM_JSON(EnablePsResourceEstimate, enablePsResourceEstimate_);
      DARABONBA_PTR_FROM_JSON(MaxParallelism, maxParallelism_);
      DARABONBA_PTR_FROM_JSON(MinParallelism, minParallelism_);
      DARABONBA_PTR_FROM_JSON(PSMaxParallelism, PSMaxParallelism_);
      DARABONBA_PTR_FROM_JSON(PSMinParallelism, PSMinParallelism_);
    };
    JobElasticSpec() = default ;
    JobElasticSpec(const JobElasticSpec &) = default ;
    JobElasticSpec(JobElasticSpec &&) = default ;
    JobElasticSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobElasticSpec() = default ;
    JobElasticSpec& operator=(const JobElasticSpec &) = default ;
    JobElasticSpec& operator=(JobElasticSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIMasterDockerImage_ != nullptr
        && this->AIMasterType_ != nullptr && this->EDPMaxParallelism_ != nullptr && this->EDPMinParallelism_ != nullptr && this->elasticStrategy_ != nullptr && this->enableAIMaster_ != nullptr
        && this->enableEDP_ != nullptr && this->enableElasticTraining_ != nullptr && this->enablePsJobElasticPS_ != nullptr && this->enablePsJobElasticWorker_ != nullptr && this->enablePsResourceEstimate_ != nullptr
        && this->maxParallelism_ != nullptr && this->minParallelism_ != nullptr && this->PSMaxParallelism_ != nullptr && this->PSMinParallelism_ != nullptr; };
    // AIMasterDockerImage Field Functions 
    bool hasAIMasterDockerImage() const { return this->AIMasterDockerImage_ != nullptr;};
    void deleteAIMasterDockerImage() { this->AIMasterDockerImage_ = nullptr;};
    inline string AIMasterDockerImage() const { DARABONBA_PTR_GET_DEFAULT(AIMasterDockerImage_, "") };
    inline JobElasticSpec& setAIMasterDockerImage(string AIMasterDockerImage) { DARABONBA_PTR_SET_VALUE(AIMasterDockerImage_, AIMasterDockerImage) };


    // AIMasterType Field Functions 
    bool hasAIMasterType() const { return this->AIMasterType_ != nullptr;};
    void deleteAIMasterType() { this->AIMasterType_ = nullptr;};
    inline string AIMasterType() const { DARABONBA_PTR_GET_DEFAULT(AIMasterType_, "") };
    inline JobElasticSpec& setAIMasterType(string AIMasterType) { DARABONBA_PTR_SET_VALUE(AIMasterType_, AIMasterType) };


    // EDPMaxParallelism Field Functions 
    bool hasEDPMaxParallelism() const { return this->EDPMaxParallelism_ != nullptr;};
    void deleteEDPMaxParallelism() { this->EDPMaxParallelism_ = nullptr;};
    inline int32_t EDPMaxParallelism() const { DARABONBA_PTR_GET_DEFAULT(EDPMaxParallelism_, 0) };
    inline JobElasticSpec& setEDPMaxParallelism(int32_t EDPMaxParallelism) { DARABONBA_PTR_SET_VALUE(EDPMaxParallelism_, EDPMaxParallelism) };


    // EDPMinParallelism Field Functions 
    bool hasEDPMinParallelism() const { return this->EDPMinParallelism_ != nullptr;};
    void deleteEDPMinParallelism() { this->EDPMinParallelism_ = nullptr;};
    inline int32_t EDPMinParallelism() const { DARABONBA_PTR_GET_DEFAULT(EDPMinParallelism_, 0) };
    inline JobElasticSpec& setEDPMinParallelism(int32_t EDPMinParallelism) { DARABONBA_PTR_SET_VALUE(EDPMinParallelism_, EDPMinParallelism) };


    // elasticStrategy Field Functions 
    bool hasElasticStrategy() const { return this->elasticStrategy_ != nullptr;};
    void deleteElasticStrategy() { this->elasticStrategy_ = nullptr;};
    inline string elasticStrategy() const { DARABONBA_PTR_GET_DEFAULT(elasticStrategy_, "") };
    inline JobElasticSpec& setElasticStrategy(string elasticStrategy) { DARABONBA_PTR_SET_VALUE(elasticStrategy_, elasticStrategy) };


    // enableAIMaster Field Functions 
    bool hasEnableAIMaster() const { return this->enableAIMaster_ != nullptr;};
    void deleteEnableAIMaster() { this->enableAIMaster_ = nullptr;};
    inline bool enableAIMaster() const { DARABONBA_PTR_GET_DEFAULT(enableAIMaster_, false) };
    inline JobElasticSpec& setEnableAIMaster(bool enableAIMaster) { DARABONBA_PTR_SET_VALUE(enableAIMaster_, enableAIMaster) };


    // enableEDP Field Functions 
    bool hasEnableEDP() const { return this->enableEDP_ != nullptr;};
    void deleteEnableEDP() { this->enableEDP_ = nullptr;};
    inline bool enableEDP() const { DARABONBA_PTR_GET_DEFAULT(enableEDP_, false) };
    inline JobElasticSpec& setEnableEDP(bool enableEDP) { DARABONBA_PTR_SET_VALUE(enableEDP_, enableEDP) };


    // enableElasticTraining Field Functions 
    bool hasEnableElasticTraining() const { return this->enableElasticTraining_ != nullptr;};
    void deleteEnableElasticTraining() { this->enableElasticTraining_ = nullptr;};
    inline bool enableElasticTraining() const { DARABONBA_PTR_GET_DEFAULT(enableElasticTraining_, false) };
    inline JobElasticSpec& setEnableElasticTraining(bool enableElasticTraining) { DARABONBA_PTR_SET_VALUE(enableElasticTraining_, enableElasticTraining) };


    // enablePsJobElasticPS Field Functions 
    bool hasEnablePsJobElasticPS() const { return this->enablePsJobElasticPS_ != nullptr;};
    void deleteEnablePsJobElasticPS() { this->enablePsJobElasticPS_ = nullptr;};
    inline bool enablePsJobElasticPS() const { DARABONBA_PTR_GET_DEFAULT(enablePsJobElasticPS_, false) };
    inline JobElasticSpec& setEnablePsJobElasticPS(bool enablePsJobElasticPS) { DARABONBA_PTR_SET_VALUE(enablePsJobElasticPS_, enablePsJobElasticPS) };


    // enablePsJobElasticWorker Field Functions 
    bool hasEnablePsJobElasticWorker() const { return this->enablePsJobElasticWorker_ != nullptr;};
    void deleteEnablePsJobElasticWorker() { this->enablePsJobElasticWorker_ = nullptr;};
    inline bool enablePsJobElasticWorker() const { DARABONBA_PTR_GET_DEFAULT(enablePsJobElasticWorker_, false) };
    inline JobElasticSpec& setEnablePsJobElasticWorker(bool enablePsJobElasticWorker) { DARABONBA_PTR_SET_VALUE(enablePsJobElasticWorker_, enablePsJobElasticWorker) };


    // enablePsResourceEstimate Field Functions 
    bool hasEnablePsResourceEstimate() const { return this->enablePsResourceEstimate_ != nullptr;};
    void deleteEnablePsResourceEstimate() { this->enablePsResourceEstimate_ = nullptr;};
    inline bool enablePsResourceEstimate() const { DARABONBA_PTR_GET_DEFAULT(enablePsResourceEstimate_, false) };
    inline JobElasticSpec& setEnablePsResourceEstimate(bool enablePsResourceEstimate) { DARABONBA_PTR_SET_VALUE(enablePsResourceEstimate_, enablePsResourceEstimate) };


    // maxParallelism Field Functions 
    bool hasMaxParallelism() const { return this->maxParallelism_ != nullptr;};
    void deleteMaxParallelism() { this->maxParallelism_ = nullptr;};
    inline int32_t maxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0) };
    inline JobElasticSpec& setMaxParallelism(int32_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


    // minParallelism Field Functions 
    bool hasMinParallelism() const { return this->minParallelism_ != nullptr;};
    void deleteMinParallelism() { this->minParallelism_ = nullptr;};
    inline int32_t minParallelism() const { DARABONBA_PTR_GET_DEFAULT(minParallelism_, 0) };
    inline JobElasticSpec& setMinParallelism(int32_t minParallelism) { DARABONBA_PTR_SET_VALUE(minParallelism_, minParallelism) };


    // PSMaxParallelism Field Functions 
    bool hasPSMaxParallelism() const { return this->PSMaxParallelism_ != nullptr;};
    void deletePSMaxParallelism() { this->PSMaxParallelism_ = nullptr;};
    inline int32_t PSMaxParallelism() const { DARABONBA_PTR_GET_DEFAULT(PSMaxParallelism_, 0) };
    inline JobElasticSpec& setPSMaxParallelism(int32_t PSMaxParallelism) { DARABONBA_PTR_SET_VALUE(PSMaxParallelism_, PSMaxParallelism) };


    // PSMinParallelism Field Functions 
    bool hasPSMinParallelism() const { return this->PSMinParallelism_ != nullptr;};
    void deletePSMinParallelism() { this->PSMinParallelism_ = nullptr;};
    inline int32_t PSMinParallelism() const { DARABONBA_PTR_GET_DEFAULT(PSMinParallelism_, 0) };
    inline JobElasticSpec& setPSMinParallelism(int32_t PSMinParallelism) { DARABONBA_PTR_SET_VALUE(PSMinParallelism_, PSMinParallelism) };


  protected:
    std::shared_ptr<string> AIMasterDockerImage_ = nullptr;
    std::shared_ptr<string> AIMasterType_ = nullptr;
    std::shared_ptr<int32_t> EDPMaxParallelism_ = nullptr;
    std::shared_ptr<int32_t> EDPMinParallelism_ = nullptr;
    std::shared_ptr<string> elasticStrategy_ = nullptr;
    std::shared_ptr<bool> enableAIMaster_ = nullptr;
    std::shared_ptr<bool> enableEDP_ = nullptr;
    std::shared_ptr<bool> enableElasticTraining_ = nullptr;
    std::shared_ptr<bool> enablePsJobElasticPS_ = nullptr;
    std::shared_ptr<bool> enablePsJobElasticWorker_ = nullptr;
    std::shared_ptr<bool> enablePsResourceEstimate_ = nullptr;
    std::shared_ptr<int32_t> maxParallelism_ = nullptr;
    std::shared_ptr<int32_t> minParallelism_ = nullptr;
    std::shared_ptr<int32_t> PSMaxParallelism_ = nullptr;
    std::shared_ptr<int32_t> PSMinParallelism_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
