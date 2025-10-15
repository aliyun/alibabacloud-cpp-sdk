// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANNUALDOCSUMMARYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANNUALDOCSUMMARYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAnnualDocSummaryTaskRequestDocInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateAnnualDocSummaryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnnualDocSummaryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(anaYears, anaYears_);
      DARABONBA_PTR_TO_JSON(docInfos, docInfos_);
      DARABONBA_PTR_TO_JSON(enableTable, enableTable_);
      DARABONBA_PTR_TO_JSON(instruction, instruction_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnnualDocSummaryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(anaYears, anaYears_);
      DARABONBA_PTR_FROM_JSON(docInfos, docInfos_);
      DARABONBA_PTR_FROM_JSON(enableTable, enableTable_);
      DARABONBA_PTR_FROM_JSON(instruction, instruction_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
    };
    CreateAnnualDocSummaryTaskRequest() = default ;
    CreateAnnualDocSummaryTaskRequest(const CreateAnnualDocSummaryTaskRequest &) = default ;
    CreateAnnualDocSummaryTaskRequest(CreateAnnualDocSummaryTaskRequest &&) = default ;
    CreateAnnualDocSummaryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnnualDocSummaryTaskRequest() = default ;
    CreateAnnualDocSummaryTaskRequest& operator=(const CreateAnnualDocSummaryTaskRequest &) = default ;
    CreateAnnualDocSummaryTaskRequest& operator=(CreateAnnualDocSummaryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anaYears_ == nullptr
        && return this->docInfos_ == nullptr && return this->enableTable_ == nullptr && return this->instruction_ == nullptr && return this->modelId_ == nullptr; };
    // anaYears Field Functions 
    bool hasAnaYears() const { return this->anaYears_ != nullptr;};
    void deleteAnaYears() { this->anaYears_ = nullptr;};
    inline const vector<int32_t> & anaYears() const { DARABONBA_PTR_GET_CONST(anaYears_, vector<int32_t>) };
    inline vector<int32_t> anaYears() { DARABONBA_PTR_GET(anaYears_, vector<int32_t>) };
    inline CreateAnnualDocSummaryTaskRequest& setAnaYears(const vector<int32_t> & anaYears) { DARABONBA_PTR_SET_VALUE(anaYears_, anaYears) };
    inline CreateAnnualDocSummaryTaskRequest& setAnaYears(vector<int32_t> && anaYears) { DARABONBA_PTR_SET_RVALUE(anaYears_, anaYears) };


    // docInfos Field Functions 
    bool hasDocInfos() const { return this->docInfos_ != nullptr;};
    void deleteDocInfos() { this->docInfos_ = nullptr;};
    inline const vector<CreateAnnualDocSummaryTaskRequestDocInfos> & docInfos() const { DARABONBA_PTR_GET_CONST(docInfos_, vector<CreateAnnualDocSummaryTaskRequestDocInfos>) };
    inline vector<CreateAnnualDocSummaryTaskRequestDocInfos> docInfos() { DARABONBA_PTR_GET(docInfos_, vector<CreateAnnualDocSummaryTaskRequestDocInfos>) };
    inline CreateAnnualDocSummaryTaskRequest& setDocInfos(const vector<CreateAnnualDocSummaryTaskRequestDocInfos> & docInfos) { DARABONBA_PTR_SET_VALUE(docInfos_, docInfos) };
    inline CreateAnnualDocSummaryTaskRequest& setDocInfos(vector<CreateAnnualDocSummaryTaskRequestDocInfos> && docInfos) { DARABONBA_PTR_SET_RVALUE(docInfos_, docInfos) };


    // enableTable Field Functions 
    bool hasEnableTable() const { return this->enableTable_ != nullptr;};
    void deleteEnableTable() { this->enableTable_ = nullptr;};
    inline bool enableTable() const { DARABONBA_PTR_GET_DEFAULT(enableTable_, false) };
    inline CreateAnnualDocSummaryTaskRequest& setEnableTable(bool enableTable) { DARABONBA_PTR_SET_VALUE(enableTable_, enableTable) };


    // instruction Field Functions 
    bool hasInstruction() const { return this->instruction_ != nullptr;};
    void deleteInstruction() { this->instruction_ = nullptr;};
    inline string instruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
    inline CreateAnnualDocSummaryTaskRequest& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateAnnualDocSummaryTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> anaYears_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateAnnualDocSummaryTaskRequestDocInfos>> docInfos_ = nullptr;
    std::shared_ptr<bool> enableTable_ = nullptr;
    std::shared_ptr<string> instruction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
