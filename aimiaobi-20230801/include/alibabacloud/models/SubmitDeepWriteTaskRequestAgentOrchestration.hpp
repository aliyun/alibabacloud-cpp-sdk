// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUESTAGENTORCHESTRATION_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUESTAGENTORCHESTRATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent.hpp>
#include <alibabacloud/models/SubmitDeepWriteTaskRequestAgentOrchestrationDataCollectorAgent.hpp>
#include <alibabacloud/models/SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitDeepWriteTaskRequestAgentOrchestration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDeepWriteTaskRequestAgentOrchestration& obj) { 
      DARABONBA_PTR_TO_JSON(DataAnalystAgent, dataAnalystAgent_);
      DARABONBA_PTR_TO_JSON(DataCollectorAgent, dataCollectorAgent_);
      DARABONBA_PTR_TO_JSON(ReporterAgent, reporterAgent_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDeepWriteTaskRequestAgentOrchestration& obj) { 
      DARABONBA_PTR_FROM_JSON(DataAnalystAgent, dataAnalystAgent_);
      DARABONBA_PTR_FROM_JSON(DataCollectorAgent, dataCollectorAgent_);
      DARABONBA_PTR_FROM_JSON(ReporterAgent, reporterAgent_);
    };
    SubmitDeepWriteTaskRequestAgentOrchestration() = default ;
    SubmitDeepWriteTaskRequestAgentOrchestration(const SubmitDeepWriteTaskRequestAgentOrchestration &) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestration(SubmitDeepWriteTaskRequestAgentOrchestration &&) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDeepWriteTaskRequestAgentOrchestration() = default ;
    SubmitDeepWriteTaskRequestAgentOrchestration& operator=(const SubmitDeepWriteTaskRequestAgentOrchestration &) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestration& operator=(SubmitDeepWriteTaskRequestAgentOrchestration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataAnalystAgent_ != nullptr
        && this->dataCollectorAgent_ != nullptr && this->reporterAgent_ != nullptr; };
    // dataAnalystAgent Field Functions 
    bool hasDataAnalystAgent() const { return this->dataAnalystAgent_ != nullptr;};
    void deleteDataAnalystAgent() { this->dataAnalystAgent_ = nullptr;};
    inline const Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent & dataAnalystAgent() const { DARABONBA_PTR_GET_CONST(dataAnalystAgent_, Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent) };
    inline Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent dataAnalystAgent() { DARABONBA_PTR_GET(dataAnalystAgent_, Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent) };
    inline SubmitDeepWriteTaskRequestAgentOrchestration& setDataAnalystAgent(const Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent & dataAnalystAgent) { DARABONBA_PTR_SET_VALUE(dataAnalystAgent_, dataAnalystAgent) };
    inline SubmitDeepWriteTaskRequestAgentOrchestration& setDataAnalystAgent(Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent && dataAnalystAgent) { DARABONBA_PTR_SET_RVALUE(dataAnalystAgent_, dataAnalystAgent) };


    // dataCollectorAgent Field Functions 
    bool hasDataCollectorAgent() const { return this->dataCollectorAgent_ != nullptr;};
    void deleteDataCollectorAgent() { this->dataCollectorAgent_ = nullptr;};
    inline const Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataCollectorAgent & dataCollectorAgent() const { DARABONBA_PTR_GET_CONST(dataCollectorAgent_, Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataCollectorAgent) };
    inline Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataCollectorAgent dataCollectorAgent() { DARABONBA_PTR_GET(dataCollectorAgent_, Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataCollectorAgent) };
    inline SubmitDeepWriteTaskRequestAgentOrchestration& setDataCollectorAgent(const Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataCollectorAgent & dataCollectorAgent) { DARABONBA_PTR_SET_VALUE(dataCollectorAgent_, dataCollectorAgent) };
    inline SubmitDeepWriteTaskRequestAgentOrchestration& setDataCollectorAgent(Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataCollectorAgent && dataCollectorAgent) { DARABONBA_PTR_SET_RVALUE(dataCollectorAgent_, dataCollectorAgent) };


    // reporterAgent Field Functions 
    bool hasReporterAgent() const { return this->reporterAgent_ != nullptr;};
    void deleteReporterAgent() { this->reporterAgent_ = nullptr;};
    inline const Models::SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent & reporterAgent() const { DARABONBA_PTR_GET_CONST(reporterAgent_, Models::SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent) };
    inline Models::SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent reporterAgent() { DARABONBA_PTR_GET(reporterAgent_, Models::SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent) };
    inline SubmitDeepWriteTaskRequestAgentOrchestration& setReporterAgent(const Models::SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent & reporterAgent) { DARABONBA_PTR_SET_VALUE(reporterAgent_, reporterAgent) };
    inline SubmitDeepWriteTaskRequestAgentOrchestration& setReporterAgent(Models::SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent && reporterAgent) { DARABONBA_PTR_SET_RVALUE(reporterAgent_, reporterAgent) };


  protected:
    std::shared_ptr<Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent> dataAnalystAgent_ = nullptr;
    std::shared_ptr<Models::SubmitDeepWriteTaskRequestAgentOrchestrationDataCollectorAgent> dataCollectorAgent_ = nullptr;
    std::shared_ptr<Models::SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent> reporterAgent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
