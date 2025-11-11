// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEEXPORTWORDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEEXPORTWORDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateExportWordTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateExportWordTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(GeneratedContentId, generatedContentId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateExportWordTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(GeneratedContentId, generatedContentId_);
    };
    GenerateExportWordTaskRequest() = default ;
    GenerateExportWordTaskRequest(const GenerateExportWordTaskRequest &) = default ;
    GenerateExportWordTaskRequest(GenerateExportWordTaskRequest &&) = default ;
    GenerateExportWordTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateExportWordTaskRequest() = default ;
    GenerateExportWordTaskRequest& operator=(const GenerateExportWordTaskRequest &) = default ;
    GenerateExportWordTaskRequest& operator=(GenerateExportWordTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->generatedContentId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateExportWordTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // generatedContentId Field Functions 
    bool hasGeneratedContentId() const { return this->generatedContentId_ != nullptr;};
    void deleteGeneratedContentId() { this->generatedContentId_ = nullptr;};
    inline int64_t generatedContentId() const { DARABONBA_PTR_GET_DEFAULT(generatedContentId_, 0L) };
    inline GenerateExportWordTaskRequest& setGeneratedContentId(int64_t generatedContentId) { DARABONBA_PTR_SET_VALUE(generatedContentId_, generatedContentId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> generatedContentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
