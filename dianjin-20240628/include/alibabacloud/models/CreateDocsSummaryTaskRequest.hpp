// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCSSUMMARYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCSSUMMARYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDocsSummaryTaskRequestDocInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDocsSummaryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocsSummaryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docInfos, docInfos_);
      DARABONBA_PTR_TO_JSON(enableTable, enableTable_);
      DARABONBA_PTR_TO_JSON(instruction, instruction_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocsSummaryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docInfos, docInfos_);
      DARABONBA_PTR_FROM_JSON(enableTable, enableTable_);
      DARABONBA_PTR_FROM_JSON(instruction, instruction_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
    };
    CreateDocsSummaryTaskRequest() = default ;
    CreateDocsSummaryTaskRequest(const CreateDocsSummaryTaskRequest &) = default ;
    CreateDocsSummaryTaskRequest(CreateDocsSummaryTaskRequest &&) = default ;
    CreateDocsSummaryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocsSummaryTaskRequest() = default ;
    CreateDocsSummaryTaskRequest& operator=(const CreateDocsSummaryTaskRequest &) = default ;
    CreateDocsSummaryTaskRequest& operator=(CreateDocsSummaryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docInfos_ != nullptr
        && this->enableTable_ != nullptr && this->instruction_ != nullptr && this->modelId_ != nullptr; };
    // docInfos Field Functions 
    bool hasDocInfos() const { return this->docInfos_ != nullptr;};
    void deleteDocInfos() { this->docInfos_ = nullptr;};
    inline const vector<CreateDocsSummaryTaskRequestDocInfos> & docInfos() const { DARABONBA_PTR_GET_CONST(docInfos_, vector<CreateDocsSummaryTaskRequestDocInfos>) };
    inline vector<CreateDocsSummaryTaskRequestDocInfos> docInfos() { DARABONBA_PTR_GET(docInfos_, vector<CreateDocsSummaryTaskRequestDocInfos>) };
    inline CreateDocsSummaryTaskRequest& setDocInfos(const vector<CreateDocsSummaryTaskRequestDocInfos> & docInfos) { DARABONBA_PTR_SET_VALUE(docInfos_, docInfos) };
    inline CreateDocsSummaryTaskRequest& setDocInfos(vector<CreateDocsSummaryTaskRequestDocInfos> && docInfos) { DARABONBA_PTR_SET_RVALUE(docInfos_, docInfos) };


    // enableTable Field Functions 
    bool hasEnableTable() const { return this->enableTable_ != nullptr;};
    void deleteEnableTable() { this->enableTable_ = nullptr;};
    inline bool enableTable() const { DARABONBA_PTR_GET_DEFAULT(enableTable_, false) };
    inline CreateDocsSummaryTaskRequest& setEnableTable(bool enableTable) { DARABONBA_PTR_SET_VALUE(enableTable_, enableTable) };


    // instruction Field Functions 
    bool hasInstruction() const { return this->instruction_ != nullptr;};
    void deleteInstruction() { this->instruction_ = nullptr;};
    inline string instruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
    inline CreateDocsSummaryTaskRequest& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateDocsSummaryTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CreateDocsSummaryTaskRequestDocInfos>> docInfos_ = nullptr;
    std::shared_ptr<bool> enableTable_ = nullptr;
    std::shared_ptr<string> instruction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
