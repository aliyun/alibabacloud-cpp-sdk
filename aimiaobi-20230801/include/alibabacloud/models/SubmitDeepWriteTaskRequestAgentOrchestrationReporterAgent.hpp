// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUESTAGENTORCHESTRATIONREPORTERAGENT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUESTAGENTORCHESTRATIONREPORTERAGENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCitation, enableCitation_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCitation, enableCitation_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent() = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent(const SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent &) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent(SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent &&) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent() = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent& operator=(const SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent &) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent& operator=(SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableCitation_ != nullptr
        && this->name_ != nullptr; };
    // enableCitation Field Functions 
    bool hasEnableCitation() const { return this->enableCitation_ != nullptr;};
    void deleteEnableCitation() { this->enableCitation_ = nullptr;};
    inline bool enableCitation() const { DARABONBA_PTR_GET_DEFAULT(enableCitation_, false) };
    inline SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent& setEnableCitation(bool enableCitation) { DARABONBA_PTR_SET_VALUE(enableCitation_, enableCitation) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitDeepWriteTaskRequestAgentOrchestrationReporterAgent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<bool> enableCitation_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
