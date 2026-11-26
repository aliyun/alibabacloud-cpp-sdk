// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPFEISHUDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPFEISHUDOCREQUEST_HPP_
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
  class CreateGroupFeishuDocRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupFeishuDocRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(docUrl, docUrl_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notes, notes_);
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_TO_JSON(syncConfig, syncConfig_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupFeishuDocRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(docUrl, docUrl_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notes, notes_);
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_FROM_JSON(syncConfig, syncConfig_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateGroupFeishuDocRequest() = default ;
    CreateGroupFeishuDocRequest(const CreateGroupFeishuDocRequest &) = default ;
    CreateGroupFeishuDocRequest(CreateGroupFeishuDocRequest &&) = default ;
    CreateGroupFeishuDocRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupFeishuDocRequest() = default ;
    CreateGroupFeishuDocRequest& operator=(const CreateGroupFeishuDocRequest &) = default ;
    CreateGroupFeishuDocRequest& operator=(CreateGroupFeishuDocRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SyncConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncConfig& obj) { 
        DARABONBA_PTR_TO_JSON(cron, cron_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(preset, preset_);
      };
      friend void from_json(const Darabonba::Json& j, SyncConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(cron, cron_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(preset, preset_);
      };
      SyncConfig() = default ;
      SyncConfig(const SyncConfig &) = default ;
      SyncConfig(SyncConfig &&) = default ;
      SyncConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SyncConfig() = default ;
      SyncConfig& operator=(const SyncConfig &) = default ;
      SyncConfig& operator=(SyncConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cron_ == nullptr
        && this->enabled_ == nullptr && this->preset_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline SyncConfig& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline SyncConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // preset Field Functions 
      bool hasPreset() const { return this->preset_ != nullptr;};
      void deletePreset() { this->preset_ = nullptr;};
      inline string getPreset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
      inline SyncConfig& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


    protected:
      // The cron expression for the timed scheduling node.
      shared_ptr<string> cron_ {};
      // **Enable/Disable**
      // 
      // This parameter is required.
      shared_ptr<bool> enabled_ {};
      // The preset mode. You can ignore this parameter.
      shared_ptr<string> preset_ {};
    };

    class ObjectBindings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ObjectBindings& obj) { 
        DARABONBA_PTR_TO_JSON(graphName, graphName_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
      };
      friend void from_json(const Darabonba::Json& j, ObjectBindings& obj) { 
        DARABONBA_PTR_FROM_JSON(graphName, graphName_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      };
      ObjectBindings() = default ;
      ObjectBindings(const ObjectBindings &) = default ;
      ObjectBindings(ObjectBindings &&) = default ;
      ObjectBindings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ObjectBindings() = default ;
      ObjectBindings& operator=(const ObjectBindings &) = default ;
      ObjectBindings& operator=(ObjectBindings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->graphName_ == nullptr
        && this->objectId_ == nullptr && this->objectType_ == nullptr; };
      // graphName Field Functions 
      bool hasGraphName() const { return this->graphName_ != nullptr;};
      void deleteGraphName() { this->graphName_ = nullptr;};
      inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
      inline ObjectBindings& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline ObjectBindings& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline ObjectBindings& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    protected:
      // The name of the semantic graph to which the object belongs.
      shared_ptr<string> graphName_ {};
      // The ID of the recommended item, which can be a **feedId** or a mini-app ID.
      // 
      // This parameter is required.
      shared_ptr<string> objectId_ {};
      // The advanced field type.
      // 
      // This parameter is required.
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->docUrl_ == nullptr && this->groupId_ == nullptr && this->name_ == nullptr
        && this->notes_ == nullptr && this->objectBindings_ == nullptr && this->operatingObjectName_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr
        && this->sourceTags_ == nullptr && this->syncConfig_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline CreateGroupFeishuDocRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGroupFeishuDocRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateGroupFeishuDocRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // docUrl Field Functions 
    bool hasDocUrl() const { return this->docUrl_ != nullptr;};
    void deleteDocUrl() { this->docUrl_ = nullptr;};
    inline string getDocUrl() const { DARABONBA_PTR_GET_DEFAULT(docUrl_, "") };
    inline CreateGroupFeishuDocRequest& setDocUrl(string docUrl) { DARABONBA_PTR_SET_VALUE(docUrl_, docUrl) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateGroupFeishuDocRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGroupFeishuDocRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CreateGroupFeishuDocRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // objectBindings Field Functions 
    bool hasObjectBindings() const { return this->objectBindings_ != nullptr;};
    void deleteObjectBindings() { this->objectBindings_ = nullptr;};
    inline const vector<CreateGroupFeishuDocRequest::ObjectBindings> & getObjectBindings() const { DARABONBA_PTR_GET_CONST(objectBindings_, vector<CreateGroupFeishuDocRequest::ObjectBindings>) };
    inline vector<CreateGroupFeishuDocRequest::ObjectBindings> getObjectBindings() { DARABONBA_PTR_GET(objectBindings_, vector<CreateGroupFeishuDocRequest::ObjectBindings>) };
    inline CreateGroupFeishuDocRequest& setObjectBindings(const vector<CreateGroupFeishuDocRequest::ObjectBindings> & objectBindings) { DARABONBA_PTR_SET_VALUE(objectBindings_, objectBindings) };
    inline CreateGroupFeishuDocRequest& setObjectBindings(vector<CreateGroupFeishuDocRequest::ObjectBindings> && objectBindings) { DARABONBA_PTR_SET_RVALUE(objectBindings_, objectBindings) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreateGroupFeishuDocRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline CreateGroupFeishuDocRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline CreateGroupFeishuDocRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline CreateGroupFeishuDocRequest& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


    // syncConfig Field Functions 
    bool hasSyncConfig() const { return this->syncConfig_ != nullptr;};
    void deleteSyncConfig() { this->syncConfig_ = nullptr;};
    inline const CreateGroupFeishuDocRequest::SyncConfig & getSyncConfig() const { DARABONBA_PTR_GET_CONST(syncConfig_, CreateGroupFeishuDocRequest::SyncConfig) };
    inline CreateGroupFeishuDocRequest::SyncConfig getSyncConfig() { DARABONBA_PTR_GET(syncConfig_, CreateGroupFeishuDocRequest::SyncConfig) };
    inline CreateGroupFeishuDocRequest& setSyncConfig(const CreateGroupFeishuDocRequest::SyncConfig & syncConfig) { DARABONBA_PTR_SET_VALUE(syncConfig_, syncConfig) };
    inline CreateGroupFeishuDocRequest& setSyncConfig(CreateGroupFeishuDocRequest::SyncConfig && syncConfig) { DARABONBA_PTR_SET_RVALUE(syncConfig_, syncConfig) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateGroupFeishuDocRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The platform application token issued by the console. If specified, the operation is performed as the user identified by opsUserId or opsUserCode.
    shared_ptr<string> appToken_ {};
    // The description of the AI assistant.
    shared_ptr<string> description_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The document URL.
    // 
    // This parameter is required.
    shared_ptr<string> docUrl_ {};
    // The project group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The mirror name.
    shared_ptr<string> name_ {};
    // The meeting notes content. This parameter is optional and is used for auxiliary analysis.
    shared_ptr<string> notes_ {};
    // The object bindings.
    shared_ptr<vector<CreateGroupFeishuDocRequest::ObjectBindings>> objectBindings_ {};
    // The name of the operation object.
    shared_ptr<string> operatingObjectName_ {};
    // The proxy user code, which is unique within the tenant. This parameter is used only when the application credential is configured as source_uid.
    shared_ptr<string> opsUserCode_ {};
    // The proxy user ID, which is the WINNEXO platform user ID. This parameter is used only when the application credential is configured as winnexo_uid.
    shared_ptr<string> opsUserId_ {};
    // The resource tags. This parameter is optional and accepts a JSON string list, such as ["tagA","tagB"].
    shared_ptr<string> sourceTags_ {};
    // The synchronization settings.
    shared_ptr<CreateGroupFeishuDocRequest::SyncConfig> syncConfig_ {};
    // The tenant ID. This is a common parameter. For winnexo-cli, this parameter is explicitly passed by using the --tenant-id option.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
