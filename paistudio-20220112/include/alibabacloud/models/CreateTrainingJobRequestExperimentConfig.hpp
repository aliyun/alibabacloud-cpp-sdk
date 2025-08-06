// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTEXPERIMENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTEXPERIMENTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateTrainingJobRequestExperimentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainingJobRequestExperimentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainingJobRequestExperimentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
    };
    CreateTrainingJobRequestExperimentConfig() = default ;
    CreateTrainingJobRequestExperimentConfig(const CreateTrainingJobRequestExperimentConfig &) = default ;
    CreateTrainingJobRequestExperimentConfig(CreateTrainingJobRequestExperimentConfig &&) = default ;
    CreateTrainingJobRequestExperimentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainingJobRequestExperimentConfig() = default ;
    CreateTrainingJobRequestExperimentConfig& operator=(const CreateTrainingJobRequestExperimentConfig &) = default ;
    CreateTrainingJobRequestExperimentConfig& operator=(CreateTrainingJobRequestExperimentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->experimentId_ != nullptr; };
    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline CreateTrainingJobRequestExperimentConfig& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


  protected:
    std::shared_ptr<string> experimentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
