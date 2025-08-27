// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDiagnosticTaskRequestAiJobLogInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateDiagnosticTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiJobLogInfo, aiJobLogInfo_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiJobLogInfo, aiJobLogInfo_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
    };
    CreateDiagnosticTaskRequest() = default ;
    CreateDiagnosticTaskRequest(const CreateDiagnosticTaskRequest &) = default ;
    CreateDiagnosticTaskRequest(CreateDiagnosticTaskRequest &&) = default ;
    CreateDiagnosticTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticTaskRequest() = default ;
    CreateDiagnosticTaskRequest& operator=(const CreateDiagnosticTaskRequest &) = default ;
    CreateDiagnosticTaskRequest& operator=(CreateDiagnosticTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiJobLogInfo_ != nullptr
        && this->clusterId_ != nullptr && this->diagnosticType_ != nullptr && this->nodeIds_ != nullptr; };
    // aiJobLogInfo Field Functions 
    bool hasAiJobLogInfo() const { return this->aiJobLogInfo_ != nullptr;};
    void deleteAiJobLogInfo() { this->aiJobLogInfo_ = nullptr;};
    inline const CreateDiagnosticTaskRequestAiJobLogInfo & aiJobLogInfo() const { DARABONBA_PTR_GET_CONST(aiJobLogInfo_, CreateDiagnosticTaskRequestAiJobLogInfo) };
    inline CreateDiagnosticTaskRequestAiJobLogInfo aiJobLogInfo() { DARABONBA_PTR_GET(aiJobLogInfo_, CreateDiagnosticTaskRequestAiJobLogInfo) };
    inline CreateDiagnosticTaskRequest& setAiJobLogInfo(const CreateDiagnosticTaskRequestAiJobLogInfo & aiJobLogInfo) { DARABONBA_PTR_SET_VALUE(aiJobLogInfo_, aiJobLogInfo) };
    inline CreateDiagnosticTaskRequest& setAiJobLogInfo(CreateDiagnosticTaskRequestAiJobLogInfo && aiJobLogInfo) { DARABONBA_PTR_SET_RVALUE(aiJobLogInfo_, aiJobLogInfo) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateDiagnosticTaskRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // diagnosticType Field Functions 
    bool hasDiagnosticType() const { return this->diagnosticType_ != nullptr;};
    void deleteDiagnosticType() { this->diagnosticType_ = nullptr;};
    inline string diagnosticType() const { DARABONBA_PTR_GET_DEFAULT(diagnosticType_, "") };
    inline CreateDiagnosticTaskRequest& setDiagnosticType(string diagnosticType) { DARABONBA_PTR_SET_VALUE(diagnosticType_, diagnosticType) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline CreateDiagnosticTaskRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline CreateDiagnosticTaskRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


  protected:
    // The log information.
    std::shared_ptr<CreateDiagnosticTaskRequestAiJobLogInfo> aiJobLogInfo_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The diagnostics type.
    std::shared_ptr<string> diagnosticType_ = nullptr;
    // The IDs of the nodes.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
