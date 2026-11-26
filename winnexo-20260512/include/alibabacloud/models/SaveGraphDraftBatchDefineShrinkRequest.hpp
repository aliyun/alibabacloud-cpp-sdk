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
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(draftChangeIds, draftChangeIdsShrink_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(saveMode, saveMode_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(yamlEdit, yamlEdit_);
    };
    friend void from_json(const Darabonba::Json& j, SaveGraphDraftBatchDefineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(draftChangeIds, draftChangeIdsShrink_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
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
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->draftChangeIdsShrink_ == nullptr && this->graphName_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->saveMode_ == nullptr
        && this->tenantId_ == nullptr && this->yamlEdit_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline SaveGraphDraftBatchDefineShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


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


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline SaveGraphDraftBatchDefineShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline SaveGraphDraftBatchDefineShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


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
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The list of draft change IDs.
    shared_ptr<string> draftChangeIdsShrink_ {};
    // The graph name.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
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
