// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATESTATUSLATESTDEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATESTATUSLATESTDEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateStatusLatestDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateStatusLatestDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateStatusLatestDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    TemplateStatusLatestDeployment() = default ;
    TemplateStatusLatestDeployment(const TemplateStatusLatestDeployment &) = default ;
    TemplateStatusLatestDeployment(TemplateStatusLatestDeployment &&) = default ;
    TemplateStatusLatestDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateStatusLatestDeployment() = default ;
    TemplateStatusLatestDeployment& operator=(const TemplateStatusLatestDeployment &) = default ;
    TemplateStatusLatestDeployment& operator=(TemplateStatusLatestDeployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishedTime_ != nullptr
        && this->phase_ != nullptr && this->pipelineName_ != nullptr && this->startTime_ != nullptr; };
    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline TemplateStatusLatestDeployment& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline TemplateStatusLatestDeployment& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline TemplateStatusLatestDeployment& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline TemplateStatusLatestDeployment& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> finishedTime_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> pipelineName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
