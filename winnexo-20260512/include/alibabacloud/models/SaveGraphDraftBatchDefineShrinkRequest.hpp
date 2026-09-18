// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTBATCHDEFINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTBATCHDEFINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SaveGraphDraftBatchDefineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveGraphDraftBatchDefineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(draftChangeIds, draftChangeIdsShrink_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(saveMode, saveMode_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(yamlEdit, yamlEdit_);
    };
    friend void from_json(const Darabonba::Json& j, SaveGraphDraftBatchDefineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(draftChangeIds, draftChangeIdsShrink_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(saveMode, saveMode_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(yamlEdit, yamlEdit_);
    };
    SaveGraphDraftBatchDefineShrinkRequest() = default ;
    SaveGraphDraftBatchDefineShrinkRequest(const SaveGraphDraftBatchDefineShrinkRequest &) = default ;
    SaveGraphDraftBatchDefineShrinkRequest(SaveGraphDraftBatchDefineShrinkRequest &&) = default ;
    SaveGraphDraftBatchDefineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveGraphDraftBatchDefineShrinkRequest() = default ;
    SaveGraphDraftBatchDefineShrinkRequest& operator=(const SaveGraphDraftBatchDefineShrinkRequest &) = default ;
    SaveGraphDraftBatchDefineShrinkRequest& operator=(SaveGraphDraftBatchDefineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftChangeIdsShrink_ == nullptr
        && this->graphName_ == nullptr && this->saveMode_ == nullptr && this->tenantId_ == nullptr && this->yamlEdit_ == nullptr; };
    // draftChangeIdsShrink Field Functions 
    bool hasDraftChangeIdsShrink() const { return this->draftChangeIdsShrink_ != nullptr;};
    void deleteDraftChangeIdsShrink() { this->draftChangeIdsShrink_ = nullptr;};
    inline string getDraftChangeIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(draftChangeIdsShrink_, "") };
    inline SaveGraphDraftBatchDefineShrinkRequest& setDraftChangeIdsShrink(string draftChangeIdsShrink) { DARABONBA_PTR_SET_VALUE(draftChangeIdsShrink_, draftChangeIdsShrink) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline SaveGraphDraftBatchDefineShrinkRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // saveMode Field Functions 
    bool hasSaveMode() const { return this->saveMode_ != nullptr;};
    void deleteSaveMode() { this->saveMode_ = nullptr;};
    inline string getSaveMode() const { DARABONBA_PTR_GET_DEFAULT(saveMode_, "") };
    inline SaveGraphDraftBatchDefineShrinkRequest& setSaveMode(string saveMode) { DARABONBA_PTR_SET_VALUE(saveMode_, saveMode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SaveGraphDraftBatchDefineShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // yamlEdit Field Functions 
    bool hasYamlEdit() const { return this->yamlEdit_ != nullptr;};
    void deleteYamlEdit() { this->yamlEdit_ = nullptr;};
    inline string getYamlEdit() const { DARABONBA_PTR_GET_DEFAULT(yamlEdit_, "") };
    inline SaveGraphDraftBatchDefineShrinkRequest& setYamlEdit(string yamlEdit) { DARABONBA_PTR_SET_VALUE(yamlEdit_, yamlEdit) };


  protected:
    // The list of draft change IDs.
    shared_ptr<string> draftChangeIdsShrink_ {};
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
