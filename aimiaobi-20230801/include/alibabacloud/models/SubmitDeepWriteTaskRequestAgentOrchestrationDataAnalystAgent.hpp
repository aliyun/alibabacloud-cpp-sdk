// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUESTAGENTORCHESTRATIONDATAANALYSTAGENT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUESTAGENTORCHESTRATIONDATAANALYSTAGENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent& obj) { 
      DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent() = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent(const SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent &) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent(SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent &&) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent() = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent& operator=(const SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent &) = default ;
    SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent& operator=(SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableSearch_ == nullptr
        && return this->name_ == nullptr; };
    // enableSearch Field Functions 
    bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
    void deleteEnableSearch() { this->enableSearch_ = nullptr;};
    inline bool enableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
    inline SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitDeepWriteTaskRequestAgentOrchestrationDataAnalystAgent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<bool> enableSearch_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
