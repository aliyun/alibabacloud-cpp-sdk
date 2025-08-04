// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTYLEFEATUREANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSTYLEFEATUREANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStyleFeatureAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStyleFeatureAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(MaterialIds, materialIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunStyleFeatureAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(MaterialIds, materialIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunStyleFeatureAnalysisRequest() = default ;
    RunStyleFeatureAnalysisRequest(const RunStyleFeatureAnalysisRequest &) = default ;
    RunStyleFeatureAnalysisRequest(RunStyleFeatureAnalysisRequest &&) = default ;
    RunStyleFeatureAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStyleFeatureAnalysisRequest() = default ;
    RunStyleFeatureAnalysisRequest& operator=(const RunStyleFeatureAnalysisRequest &) = default ;
    RunStyleFeatureAnalysisRequest& operator=(RunStyleFeatureAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contents_ != nullptr
        && this->materialIds_ != nullptr && this->workspaceId_ != nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<string> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<string>) };
    inline vector<string> contents() { DARABONBA_PTR_GET(contents_, vector<string>) };
    inline RunStyleFeatureAnalysisRequest& setContents(const vector<string> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline RunStyleFeatureAnalysisRequest& setContents(vector<string> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // materialIds Field Functions 
    bool hasMaterialIds() const { return this->materialIds_ != nullptr;};
    void deleteMaterialIds() { this->materialIds_ = nullptr;};
    inline const vector<int64_t> & materialIds() const { DARABONBA_PTR_GET_CONST(materialIds_, vector<int64_t>) };
    inline vector<int64_t> materialIds() { DARABONBA_PTR_GET(materialIds_, vector<int64_t>) };
    inline RunStyleFeatureAnalysisRequest& setMaterialIds(const vector<int64_t> & materialIds) { DARABONBA_PTR_SET_VALUE(materialIds_, materialIds) };
    inline RunStyleFeatureAnalysisRequest& setMaterialIds(vector<int64_t> && materialIds) { DARABONBA_PTR_SET_RVALUE(materialIds_, materialIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunStyleFeatureAnalysisRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<vector<string>> contents_ = nullptr;
    std::shared_ptr<vector<int64_t>> materialIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
