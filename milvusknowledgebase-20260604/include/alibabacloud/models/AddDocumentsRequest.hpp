// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MilvusKnowledgeBase20260604
{
namespace Models
{
  class AddDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dedup, dedup_);
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(ImportType, importType_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_ANY_TO_JSON(MetaFields, metaFields_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(dingTalkConfiguration, dingTalkConfiguration_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dedup, dedup_);
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(ImportType, importType_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_ANY_FROM_JSON(MetaFields, metaFields_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(dingTalkConfiguration, dingTalkConfiguration_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
    };
    AddDocumentsRequest() = default ;
    AddDocumentsRequest(const AddDocumentsRequest &) = default ;
    AddDocumentsRequest(AddDocumentsRequest &&) = default ;
    AddDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDocumentsRequest() = default ;
    AddDocumentsRequest& operator=(const AddDocumentsRequest &) = default ;
    AddDocumentsRequest& operator=(AddDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DingTalkConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DingTalkConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(appPassword, appPassword_);
        DARABONBA_PTR_TO_JSON(dingDocMcpLink, dingDocMcpLink_);
        DARABONBA_PTR_TO_JSON(dingTableMcpLink, dingTableMcpLink_);
        DARABONBA_PTR_TO_JSON(knowledgeId, knowledgeId_);
        DARABONBA_PTR_TO_JSON(knowledgeType, knowledgeType_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, DingTalkConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(appPassword, appPassword_);
        DARABONBA_PTR_FROM_JSON(dingDocMcpLink, dingDocMcpLink_);
        DARABONBA_PTR_FROM_JSON(dingTableMcpLink, dingTableMcpLink_);
        DARABONBA_PTR_FROM_JSON(knowledgeId, knowledgeId_);
        DARABONBA_PTR_FROM_JSON(knowledgeType, knowledgeType_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      DingTalkConfiguration() = default ;
      DingTalkConfiguration(const DingTalkConfiguration &) = default ;
      DingTalkConfiguration(DingTalkConfiguration &&) = default ;
      DingTalkConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DingTalkConfiguration() = default ;
      DingTalkConfiguration& operator=(const DingTalkConfiguration &) = default ;
      DingTalkConfiguration& operator=(DingTalkConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appPassword_ == nullptr && this->dingDocMcpLink_ == nullptr && this->dingTableMcpLink_ == nullptr && this->knowledgeId_ == nullptr && this->knowledgeType_ == nullptr
        && this->userId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline DingTalkConfiguration& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appPassword Field Functions 
      bool hasAppPassword() const { return this->appPassword_ != nullptr;};
      void deleteAppPassword() { this->appPassword_ = nullptr;};
      inline string getAppPassword() const { DARABONBA_PTR_GET_DEFAULT(appPassword_, "") };
      inline DingTalkConfiguration& setAppPassword(string appPassword) { DARABONBA_PTR_SET_VALUE(appPassword_, appPassword) };


      // dingDocMcpLink Field Functions 
      bool hasDingDocMcpLink() const { return this->dingDocMcpLink_ != nullptr;};
      void deleteDingDocMcpLink() { this->dingDocMcpLink_ = nullptr;};
      inline string getDingDocMcpLink() const { DARABONBA_PTR_GET_DEFAULT(dingDocMcpLink_, "") };
      inline DingTalkConfiguration& setDingDocMcpLink(string dingDocMcpLink) { DARABONBA_PTR_SET_VALUE(dingDocMcpLink_, dingDocMcpLink) };


      // dingTableMcpLink Field Functions 
      bool hasDingTableMcpLink() const { return this->dingTableMcpLink_ != nullptr;};
      void deleteDingTableMcpLink() { this->dingTableMcpLink_ = nullptr;};
      inline string getDingTableMcpLink() const { DARABONBA_PTR_GET_DEFAULT(dingTableMcpLink_, "") };
      inline DingTalkConfiguration& setDingTableMcpLink(string dingTableMcpLink) { DARABONBA_PTR_SET_VALUE(dingTableMcpLink_, dingTableMcpLink) };


      // knowledgeId Field Functions 
      bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
      void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
      inline string getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
      inline DingTalkConfiguration& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


      // knowledgeType Field Functions 
      bool hasKnowledgeType() const { return this->knowledgeType_ != nullptr;};
      void deleteKnowledgeType() { this->knowledgeType_ = nullptr;};
      inline string getKnowledgeType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeType_, "") };
      inline DingTalkConfiguration& setKnowledgeType(string knowledgeType) { DARABONBA_PTR_SET_VALUE(knowledgeType_, knowledgeType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline DingTalkConfiguration& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Not supported. Ignore this parameter.
      shared_ptr<string> appId_ {};
      // Not supported. Ignore this parameter.
      shared_ptr<string> appPassword_ {};
      // Not supported. Ignore this parameter.
      shared_ptr<string> dingDocMcpLink_ {};
      // Not supported. Ignore this parameter.
      shared_ptr<string> dingTableMcpLink_ {};
      // Not supported. Ignore this parameter.
      shared_ptr<string> knowledgeId_ {};
      // Not supported. Ignore this parameter.
      shared_ptr<string> knowledgeType_ {};
      // Not supported. Ignore this parameter.
      shared_ptr<string> userId_ {};
    };

    class Documents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Documents& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Documents& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      Documents() = default ;
      Documents(const Documents &) = default ;
      Documents(Documents &&) = default ;
      Documents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Documents() = default ;
      Documents& operator=(const Documents &) = default ;
      Documents& operator=(Documents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr && this->size_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Documents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Documents& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Documents& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The name of the document.
      shared_ptr<string> name_ {};
      // The document path. This is the file name or relative path used during upload, which must be consistent with the pre-signed request.
      shared_ptr<string> path_ {};
      // The size of the file.
      shared_ptr<int64_t> size_ {};
    };

    class Dedup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dedup& obj) { 
        DARABONBA_PTR_TO_JSON(ContentDedup, contentDedup_);
        DARABONBA_PTR_TO_JSON(DocNameDedup, docNameDedup_);
      };
      friend void from_json(const Darabonba::Json& j, Dedup& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentDedup, contentDedup_);
        DARABONBA_PTR_FROM_JSON(DocNameDedup, docNameDedup_);
      };
      Dedup() = default ;
      Dedup(const Dedup &) = default ;
      Dedup(Dedup &&) = default ;
      Dedup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dedup() = default ;
      Dedup& operator=(const Dedup &) = default ;
      Dedup& operator=(Dedup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentDedup_ == nullptr
        && this->docNameDedup_ == nullptr; };
      // contentDedup Field Functions 
      bool hasContentDedup() const { return this->contentDedup_ != nullptr;};
      void deleteContentDedup() { this->contentDedup_ = nullptr;};
      inline bool getContentDedup() const { DARABONBA_PTR_GET_DEFAULT(contentDedup_, false) };
      inline Dedup& setContentDedup(bool contentDedup) { DARABONBA_PTR_SET_VALUE(contentDedup_, contentDedup) };


      // docNameDedup Field Functions 
      bool hasDocNameDedup() const { return this->docNameDedup_ != nullptr;};
      void deleteDocNameDedup() { this->docNameDedup_ = nullptr;};
      inline bool getDocNameDedup() const { DARABONBA_PTR_GET_DEFAULT(docNameDedup_, false) };
      inline Dedup& setDocNameDedup(bool docNameDedup) { DARABONBA_PTR_SET_VALUE(docNameDedup_, docNameDedup) };


    protected:
      // Specifies whether to enable content deduplication.
      shared_ptr<bool> contentDedup_ {};
      // Specifies whether to enable document name deduplication.
      shared_ptr<bool> docNameDedup_ {};
    };

    virtual bool empty() const override { return this->dedup_ == nullptr
        && this->documents_ == nullptr && this->importType_ == nullptr && this->knowledgeBaseId_ == nullptr && this->metaFields_ == nullptr && this->strategyId_ == nullptr
        && this->dingTalkConfiguration_ == nullptr && this->parentId_ == nullptr; };
    // dedup Field Functions 
    bool hasDedup() const { return this->dedup_ != nullptr;};
    void deleteDedup() { this->dedup_ = nullptr;};
    inline const AddDocumentsRequest::Dedup & getDedup() const { DARABONBA_PTR_GET_CONST(dedup_, AddDocumentsRequest::Dedup) };
    inline AddDocumentsRequest::Dedup getDedup() { DARABONBA_PTR_GET(dedup_, AddDocumentsRequest::Dedup) };
    inline AddDocumentsRequest& setDedup(const AddDocumentsRequest::Dedup & dedup) { DARABONBA_PTR_SET_VALUE(dedup_, dedup) };
    inline AddDocumentsRequest& setDedup(AddDocumentsRequest::Dedup && dedup) { DARABONBA_PTR_SET_RVALUE(dedup_, dedup) };


    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<AddDocumentsRequest::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<AddDocumentsRequest::Documents>) };
    inline vector<AddDocumentsRequest::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<AddDocumentsRequest::Documents>) };
    inline AddDocumentsRequest& setDocuments(const vector<AddDocumentsRequest::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline AddDocumentsRequest& setDocuments(vector<AddDocumentsRequest::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // importType Field Functions 
    bool hasImportType() const { return this->importType_ != nullptr;};
    void deleteImportType() { this->importType_ = nullptr;};
    inline string getImportType() const { DARABONBA_PTR_GET_DEFAULT(importType_, "") };
    inline AddDocumentsRequest& setImportType(string importType) { DARABONBA_PTR_SET_VALUE(importType_, importType) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline AddDocumentsRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // metaFields Field Functions 
    bool hasMetaFields() const { return this->metaFields_ != nullptr;};
    void deleteMetaFields() { this->metaFields_ = nullptr;};
    inline     const Darabonba::Json & getMetaFields() const { DARABONBA_GET(metaFields_) };
    Darabonba::Json & getMetaFields() { DARABONBA_GET(metaFields_) };
    inline AddDocumentsRequest& setMetaFields(const Darabonba::Json & metaFields) { DARABONBA_SET_VALUE(metaFields_, metaFields) };
    inline AddDocumentsRequest& setMetaFields(Darabonba::Json && metaFields) { DARABONBA_SET_RVALUE(metaFields_, metaFields) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline AddDocumentsRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // dingTalkConfiguration Field Functions 
    bool hasDingTalkConfiguration() const { return this->dingTalkConfiguration_ != nullptr;};
    void deleteDingTalkConfiguration() { this->dingTalkConfiguration_ = nullptr;};
    inline const AddDocumentsRequest::DingTalkConfiguration & getDingTalkConfiguration() const { DARABONBA_PTR_GET_CONST(dingTalkConfiguration_, AddDocumentsRequest::DingTalkConfiguration) };
    inline AddDocumentsRequest::DingTalkConfiguration getDingTalkConfiguration() { DARABONBA_PTR_GET(dingTalkConfiguration_, AddDocumentsRequest::DingTalkConfiguration) };
    inline AddDocumentsRequest& setDingTalkConfiguration(const AddDocumentsRequest::DingTalkConfiguration & dingTalkConfiguration) { DARABONBA_PTR_SET_VALUE(dingTalkConfiguration_, dingTalkConfiguration) };
    inline AddDocumentsRequest& setDingTalkConfiguration(AddDocumentsRequest::DingTalkConfiguration && dingTalkConfiguration) { DARABONBA_PTR_SET_RVALUE(dingTalkConfiguration_, dingTalkConfiguration) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline AddDocumentsRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The deduplication configuration.
    shared_ptr<AddDocumentsRequest::Dedup> dedup_ {};
    // The list of documents.
    shared_ptr<vector<AddDocumentsRequest::Documents>> documents_ {};
    // The import type.
    shared_ptr<string> importType_ {};
    // The ID of the knowledge base.
    shared_ptr<string> knowledgeBaseId_ {};
    // The batch label configuration. The key must be a label field defined in the knowledge base. The value supports string, int64, float32, bool, and list types.
    Darabonba::Json metaFields_ {};
    // The ID of the processing strategy.
    shared_ptr<string> strategyId_ {};
    // Not supported. Ignore this parameter.
    shared_ptr<AddDocumentsRequest::DingTalkConfiguration> dingTalkConfiguration_ {};
    // Defaults to root when omitted.
    shared_ptr<string> parentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
