// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSEXPERIMENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSEXPERIMENTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBodyTrainingJobsExperimentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBodyTrainingJobsExperimentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(ExperimentName, experimentName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBodyTrainingJobsExperimentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(ExperimentName, experimentName_);
    };
    ListTrainingJobsResponseBodyTrainingJobsExperimentConfig() = default ;
    ListTrainingJobsResponseBodyTrainingJobsExperimentConfig(const ListTrainingJobsResponseBodyTrainingJobsExperimentConfig &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsExperimentConfig(ListTrainingJobsResponseBodyTrainingJobsExperimentConfig &&) = default ;
    ListTrainingJobsResponseBodyTrainingJobsExperimentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBodyTrainingJobsExperimentConfig() = default ;
    ListTrainingJobsResponseBodyTrainingJobsExperimentConfig& operator=(const ListTrainingJobsResponseBodyTrainingJobsExperimentConfig &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsExperimentConfig& operator=(ListTrainingJobsResponseBodyTrainingJobsExperimentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->experimentId_ != nullptr
        && this->experimentName_ != nullptr; };
    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsExperimentConfig& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // experimentName Field Functions 
    bool hasExperimentName() const { return this->experimentName_ != nullptr;};
    void deleteExperimentName() { this->experimentName_ = nullptr;};
    inline string experimentName() const { DARABONBA_PTR_GET_DEFAULT(experimentName_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsExperimentConfig& setExperimentName(string experimentName) { DARABONBA_PTR_SET_VALUE(experimentName_, experimentName) };


  protected:
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<string> experimentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
