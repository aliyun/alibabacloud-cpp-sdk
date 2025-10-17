// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateDiagnosticTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiJobLogInfo, aiJobLogInfoShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiJobLogInfo, aiJobLogInfoShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIdsShrink_);
    };
    CreateDiagnosticTaskShrinkRequest() = default ;
    CreateDiagnosticTaskShrinkRequest(const CreateDiagnosticTaskShrinkRequest &) = default ;
    CreateDiagnosticTaskShrinkRequest(CreateDiagnosticTaskShrinkRequest &&) = default ;
    CreateDiagnosticTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticTaskShrinkRequest() = default ;
    CreateDiagnosticTaskShrinkRequest& operator=(const CreateDiagnosticTaskShrinkRequest &) = default ;
    CreateDiagnosticTaskShrinkRequest& operator=(CreateDiagnosticTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiJobLogInfoShrink_ == nullptr
        && return this->clusterId_ == nullptr && return this->diagnosticType_ == nullptr && return this->nodeIdsShrink_ == nullptr; };
    // aiJobLogInfoShrink Field Functions 
    bool hasAiJobLogInfoShrink() const { return this->aiJobLogInfoShrink_ != nullptr;};
    void deleteAiJobLogInfoShrink() { this->aiJobLogInfoShrink_ = nullptr;};
    inline string aiJobLogInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(aiJobLogInfoShrink_, "") };
    inline CreateDiagnosticTaskShrinkRequest& setAiJobLogInfoShrink(string aiJobLogInfoShrink) { DARABONBA_PTR_SET_VALUE(aiJobLogInfoShrink_, aiJobLogInfoShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateDiagnosticTaskShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // diagnosticType Field Functions 
    bool hasDiagnosticType() const { return this->diagnosticType_ != nullptr;};
    void deleteDiagnosticType() { this->diagnosticType_ = nullptr;};
    inline string diagnosticType() const { DARABONBA_PTR_GET_DEFAULT(diagnosticType_, "") };
    inline CreateDiagnosticTaskShrinkRequest& setDiagnosticType(string diagnosticType) { DARABONBA_PTR_SET_VALUE(diagnosticType_, diagnosticType) };


    // nodeIdsShrink Field Functions 
    bool hasNodeIdsShrink() const { return this->nodeIdsShrink_ != nullptr;};
    void deleteNodeIdsShrink() { this->nodeIdsShrink_ = nullptr;};
    inline string nodeIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeIdsShrink_, "") };
    inline CreateDiagnosticTaskShrinkRequest& setNodeIdsShrink(string nodeIdsShrink) { DARABONBA_PTR_SET_VALUE(nodeIdsShrink_, nodeIdsShrink) };


  protected:
    // The log information.
    std::shared_ptr<string> aiJobLogInfoShrink_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The diagnostics type.
    std::shared_ptr<string> diagnosticType_ = nullptr;
    // The IDs of the nodes.
    std::shared_ptr<string> nodeIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
