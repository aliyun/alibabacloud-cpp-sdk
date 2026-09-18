// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTBATCHDEFINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTBATCHDEFINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SaveGraphDraftBatchDefineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveGraphDraftBatchDefineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(draftChangeIds, draftChangeIds_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(saveMode, saveMode_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(yamlEdit, yamlEdit_);
    };
    friend void from_json(const Darabonba::Json& j, SaveGraphDraftBatchDefineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(draftChangeIds, draftChangeIds_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(saveMode, saveMode_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(yamlEdit, yamlEdit_);
    };
    SaveGraphDraftBatchDefineRequest() = default ;
    SaveGraphDraftBatchDefineRequest(const SaveGraphDraftBatchDefineRequest &) = default ;
    SaveGraphDraftBatchDefineRequest(SaveGraphDraftBatchDefineRequest &&) = default ;
    SaveGraphDraftBatchDefineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveGraphDraftBatchDefineRequest() = default ;
    SaveGraphDraftBatchDefineRequest& operator=(const SaveGraphDraftBatchDefineRequest &) = default ;
    SaveGraphDraftBatchDefineRequest& operator=(SaveGraphDraftBatchDefineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftChangeIds_ == nullptr
        && this->graphName_ == nullptr && this->saveMode_ == nullptr && this->tenantId_ == nullptr && this->yamlEdit_ == nullptr; };
    // draftChangeIds Field Functions 
    bool hasDraftChangeIds() const { return this->draftChangeIds_ != nullptr;};
    void deleteDraftChangeIds() { this->draftChangeIds_ = nullptr;};
    inline const vector<int64_t> & getDraftChangeIds() const { DARABONBA_PTR_GET_CONST(draftChangeIds_, vector<int64_t>) };
    inline vector<int64_t> getDraftChangeIds() { DARABONBA_PTR_GET(draftChangeIds_, vector<int64_t>) };
    inline SaveGraphDraftBatchDefineRequest& setDraftChangeIds(const vector<int64_t> & draftChangeIds) { DARABONBA_PTR_SET_VALUE(draftChangeIds_, draftChangeIds) };
    inline SaveGraphDraftBatchDefineRequest& setDraftChangeIds(vector<int64_t> && draftChangeIds) { DARABONBA_PTR_SET_RVALUE(draftChangeIds_, draftChangeIds) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline SaveGraphDraftBatchDefineRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // saveMode Field Functions 
    bool hasSaveMode() const { return this->saveMode_ != nullptr;};
    void deleteSaveMode() { this->saveMode_ = nullptr;};
    inline string getSaveMode() const { DARABONBA_PTR_GET_DEFAULT(saveMode_, "") };
    inline SaveGraphDraftBatchDefineRequest& setSaveMode(string saveMode) { DARABONBA_PTR_SET_VALUE(saveMode_, saveMode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SaveGraphDraftBatchDefineRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // yamlEdit Field Functions 
    bool hasYamlEdit() const { return this->yamlEdit_ != nullptr;};
    void deleteYamlEdit() { this->yamlEdit_ = nullptr;};
    inline string getYamlEdit() const { DARABONBA_PTR_GET_DEFAULT(yamlEdit_, "") };
    inline SaveGraphDraftBatchDefineRequest& setYamlEdit(string yamlEdit) { DARABONBA_PTR_SET_VALUE(yamlEdit_, yamlEdit) };


  protected:
    // The list of draft change IDs.
    shared_ptr<vector<int64_t>> draftChangeIds_ {};
    // The graph name.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The save mode.
    shared_ptr<string> saveMode_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The raw YAML text of the graph schema trimmed by READ permissions, with $ref references retained within the authorized subgraph.
    // 
    // This parameter is required.
    shared_ptr<string> yamlEdit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
