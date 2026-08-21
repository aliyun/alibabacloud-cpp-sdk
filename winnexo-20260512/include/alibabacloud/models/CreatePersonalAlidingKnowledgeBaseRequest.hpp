// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGKNOWLEDGEBASEREQUEST_HPP_
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
  class CreatePersonalAlidingKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalAlidingKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(kbName, kbName_);
      DARABONBA_PTR_TO_JSON(kbUrl, kbUrl_);
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(syncConfig, syncConfig_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalAlidingKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(kbName, kbName_);
      DARABONBA_PTR_FROM_JSON(kbUrl, kbUrl_);
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(syncConfig, syncConfig_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreatePersonalAlidingKnowledgeBaseRequest() = default ;
    CreatePersonalAlidingKnowledgeBaseRequest(const CreatePersonalAlidingKnowledgeBaseRequest &) = default ;
    CreatePersonalAlidingKnowledgeBaseRequest(CreatePersonalAlidingKnowledgeBaseRequest &&) = default ;
    CreatePersonalAlidingKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalAlidingKnowledgeBaseRequest() = default ;
    CreatePersonalAlidingKnowledgeBaseRequest& operator=(const CreatePersonalAlidingKnowledgeBaseRequest &) = default ;
    CreatePersonalAlidingKnowledgeBaseRequest& operator=(CreatePersonalAlidingKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SyncConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncConfig& obj) { 
        DARABONBA_PTR_TO_JSON(cron, cron_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, SyncConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(cron, cron_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
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
        && this->enabled_ == nullptr; };
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


    protected:
      // The cron expression for timed scheduling.
      shared_ptr<string> cron_ {};
      // Specifies whether to enable synchronization.
      shared_ptr<bool> enabled_ {};
    };

    class ObjectBindings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ObjectBindings& obj) { 
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
      };
      friend void from_json(const Darabonba::Json& j, ObjectBindings& obj) { 
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
      virtual bool empty() const override { return this->objectId_ == nullptr
        && this->objectType_ == nullptr; };
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
      // The ID of the recommended item, which can be a **feedId** or a micro-application ID.
      shared_ptr<string> objectId_ {};
      // The advanced field type.
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->kbName_ == nullptr && this->kbUrl_ == nullptr && this->objectBindings_ == nullptr && this->operatingObjectName_ == nullptr && this->syncConfig_ == nullptr
        && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // kbName Field Functions 
    bool hasKbName() const { return this->kbName_ != nullptr;};
    void deleteKbName() { this->kbName_ = nullptr;};
    inline string getKbName() const { DARABONBA_PTR_GET_DEFAULT(kbName_, "") };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setKbName(string kbName) { DARABONBA_PTR_SET_VALUE(kbName_, kbName) };


    // kbUrl Field Functions 
    bool hasKbUrl() const { return this->kbUrl_ != nullptr;};
    void deleteKbUrl() { this->kbUrl_ = nullptr;};
    inline string getKbUrl() const { DARABONBA_PTR_GET_DEFAULT(kbUrl_, "") };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setKbUrl(string kbUrl) { DARABONBA_PTR_SET_VALUE(kbUrl_, kbUrl) };


    // objectBindings Field Functions 
    bool hasObjectBindings() const { return this->objectBindings_ != nullptr;};
    void deleteObjectBindings() { this->objectBindings_ = nullptr;};
    inline const vector<CreatePersonalAlidingKnowledgeBaseRequest::ObjectBindings> & getObjectBindings() const { DARABONBA_PTR_GET_CONST(objectBindings_, vector<CreatePersonalAlidingKnowledgeBaseRequest::ObjectBindings>) };
    inline vector<CreatePersonalAlidingKnowledgeBaseRequest::ObjectBindings> getObjectBindings() { DARABONBA_PTR_GET(objectBindings_, vector<CreatePersonalAlidingKnowledgeBaseRequest::ObjectBindings>) };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setObjectBindings(const vector<CreatePersonalAlidingKnowledgeBaseRequest::ObjectBindings> & objectBindings) { DARABONBA_PTR_SET_VALUE(objectBindings_, objectBindings) };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setObjectBindings(vector<CreatePersonalAlidingKnowledgeBaseRequest::ObjectBindings> && objectBindings) { DARABONBA_PTR_SET_RVALUE(objectBindings_, objectBindings) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // syncConfig Field Functions 
    bool hasSyncConfig() const { return this->syncConfig_ != nullptr;};
    void deleteSyncConfig() { this->syncConfig_ = nullptr;};
    inline const CreatePersonalAlidingKnowledgeBaseRequest::SyncConfig & getSyncConfig() const { DARABONBA_PTR_GET_CONST(syncConfig_, CreatePersonalAlidingKnowledgeBaseRequest::SyncConfig) };
    inline CreatePersonalAlidingKnowledgeBaseRequest::SyncConfig getSyncConfig() { DARABONBA_PTR_GET(syncConfig_, CreatePersonalAlidingKnowledgeBaseRequest::SyncConfig) };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setSyncConfig(const CreatePersonalAlidingKnowledgeBaseRequest::SyncConfig & syncConfig) { DARABONBA_PTR_SET_VALUE(syncConfig_, syncConfig) };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setSyncConfig(CreatePersonalAlidingKnowledgeBaseRequest::SyncConfig && syncConfig) { DARABONBA_PTR_SET_RVALUE(syncConfig_, syncConfig) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePersonalAlidingKnowledgeBaseRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The display name of the knowledge base. If not provided, the name is populated from the root node name pulled from the remote source.
    shared_ptr<string> kbName_ {};
    // The publicly accessible URL of the AliDing knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> kbUrl_ {};
    // The object bindings.
    shared_ptr<vector<CreatePersonalAlidingKnowledgeBaseRequest::ObjectBindings>> objectBindings_ {};
    // The name of the digital employee (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The synchronization settings.
    shared_ptr<CreatePersonalAlidingKnowledgeBaseRequest::SyncConfig> syncConfig_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
