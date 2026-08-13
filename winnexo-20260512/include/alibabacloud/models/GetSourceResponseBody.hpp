// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODY_HPP_
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
  class GetSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(completionTime, completionTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(hasNotes, hasNotes_);
      DARABONBA_PTR_TO_JSON(hasSettings, hasSettings_);
      DARABONBA_PTR_TO_JSON(hasStructuredTables, hasStructuredTables_);
      DARABONBA_PTR_TO_JSON(hasUnstructuredDocs, hasUnstructuredDocs_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notes, notes_);
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_TO_JSON(objectId, objectId_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_ANY_TO_JSON(settings, settings_);
      DARABONBA_PTR_TO_JSON(skillOutputId, skillOutputId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceKind, sourceKind_);
      DARABONBA_PTR_TO_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(structuredTables, structuredTables_);
      DARABONBA_PTR_TO_JSON(unstructuredDocs, unstructuredDocs_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(completionTime, completionTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(hasNotes, hasNotes_);
      DARABONBA_PTR_FROM_JSON(hasSettings, hasSettings_);
      DARABONBA_PTR_FROM_JSON(hasStructuredTables, hasStructuredTables_);
      DARABONBA_PTR_FROM_JSON(hasUnstructuredDocs, hasUnstructuredDocs_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notes, notes_);
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_FROM_JSON(objectId, objectId_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_ANY_FROM_JSON(settings, settings_);
      DARABONBA_PTR_FROM_JSON(skillOutputId, skillOutputId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceKind, sourceKind_);
      DARABONBA_PTR_FROM_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(structuredTables, structuredTables_);
      DARABONBA_PTR_FROM_JSON(unstructuredDocs, unstructuredDocs_);
    };
    GetSourceResponseBody() = default ;
    GetSourceResponseBody(const GetSourceResponseBody &) = default ;
    GetSourceResponseBody(GetSourceResponseBody &&) = default ;
    GetSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceResponseBody() = default ;
    GetSourceResponseBody& operator=(const GetSourceResponseBody &) = default ;
    GetSourceResponseBody& operator=(GetSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnstructuredDocs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnstructuredDocs& obj) { 
        DARABONBA_PTR_TO_JSON(completionTime, completionTime_);
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(fileRecordId, fileRecordId_);
        DARABONBA_PTR_TO_JSON(fileType, fileType_);
        DARABONBA_PTR_TO_JSON(ossUrl, ossUrl_);
        DARABONBA_PTR_TO_JSON(semanticsId, semanticsId_);
      };
      friend void from_json(const Darabonba::Json& j, UnstructuredDocs& obj) { 
        DARABONBA_PTR_FROM_JSON(completionTime, completionTime_);
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(fileRecordId, fileRecordId_);
        DARABONBA_PTR_FROM_JSON(fileType, fileType_);
        DARABONBA_PTR_FROM_JSON(ossUrl, ossUrl_);
        DARABONBA_PTR_FROM_JSON(semanticsId, semanticsId_);
      };
      UnstructuredDocs() = default ;
      UnstructuredDocs(const UnstructuredDocs &) = default ;
      UnstructuredDocs(UnstructuredDocs &&) = default ;
      UnstructuredDocs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnstructuredDocs() = default ;
      UnstructuredDocs& operator=(const UnstructuredDocs &) = default ;
      UnstructuredDocs& operator=(UnstructuredDocs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completionTime_ == nullptr
        && this->fileName_ == nullptr && this->fileRecordId_ == nullptr && this->fileType_ == nullptr && this->ossUrl_ == nullptr && this->semanticsId_ == nullptr; };
      // completionTime Field Functions 
      bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
      void deleteCompletionTime() { this->completionTime_ = nullptr;};
      inline string getCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, "") };
      inline UnstructuredDocs& setCompletionTime(string completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline UnstructuredDocs& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileRecordId Field Functions 
      bool hasFileRecordId() const { return this->fileRecordId_ != nullptr;};
      void deleteFileRecordId() { this->fileRecordId_ = nullptr;};
      inline string getFileRecordId() const { DARABONBA_PTR_GET_DEFAULT(fileRecordId_, "") };
      inline UnstructuredDocs& setFileRecordId(string fileRecordId) { DARABONBA_PTR_SET_VALUE(fileRecordId_, fileRecordId) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline UnstructuredDocs& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // ossUrl Field Functions 
      bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
      void deleteOssUrl() { this->ossUrl_ = nullptr;};
      inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
      inline UnstructuredDocs& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


      // semanticsId Field Functions 
      bool hasSemanticsId() const { return this->semanticsId_ != nullptr;};
      void deleteSemanticsId() { this->semanticsId_ = nullptr;};
      inline string getSemanticsId() const { DARABONBA_PTR_GET_DEFAULT(semanticsId_, "") };
      inline UnstructuredDocs& setSemanticsId(string semanticsId) { DARABONBA_PTR_SET_VALUE(semanticsId_, semanticsId) };


    protected:
      // DocumentAgent 解析完成时间，ISO8601 格式
      shared_ptr<string> completionTime_ {};
      // 文件名
      shared_ptr<string> fileName_ {};
      // 文件记录 ID
      shared_ptr<string> fileRecordId_ {};
      // 文件类型
      shared_ptr<string> fileType_ {};
      // OSS 远程 URL
      shared_ptr<string> ossUrl_ {};
      // DocumentAgent 语义 ID
      shared_ptr<string> semanticsId_ {};
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
      // 对象归属的语义图谱名
      shared_ptr<string> graphName_ {};
      // 对象 ID
      shared_ptr<string> objectId_ {};
      // 对象类型
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->completionTime_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hasNotes_ == nullptr
        && this->hasSettings_ == nullptr && this->hasStructuredTables_ == nullptr && this->hasUnstructuredDocs_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->notes_ == nullptr && this->objectBindings_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr
        && this->requestId_ == nullptr && this->scope_ == nullptr && this->settings_ == nullptr && this->skillOutputId_ == nullptr && this->sourceId_ == nullptr
        && this->sourceKind_ == nullptr && this->sourceTags_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->structuredTables_ == nullptr
        && this->unstructuredDocs_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completionTime Field Functions 
    bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
    void deleteCompletionTime() { this->completionTime_ = nullptr;};
    inline string getCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, "") };
    inline GetSourceResponseBody& setCompletionTime(string completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSourceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetSourceResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetSourceResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasNotes Field Functions 
    bool hasHasNotes() const { return this->hasNotes_ != nullptr;};
    void deleteHasNotes() { this->hasNotes_ = nullptr;};
    inline bool getHasNotes() const { DARABONBA_PTR_GET_DEFAULT(hasNotes_, false) };
    inline GetSourceResponseBody& setHasNotes(bool hasNotes) { DARABONBA_PTR_SET_VALUE(hasNotes_, hasNotes) };


    // hasSettings Field Functions 
    bool hasHasSettings() const { return this->hasSettings_ != nullptr;};
    void deleteHasSettings() { this->hasSettings_ = nullptr;};
    inline bool getHasSettings() const { DARABONBA_PTR_GET_DEFAULT(hasSettings_, false) };
    inline GetSourceResponseBody& setHasSettings(bool hasSettings) { DARABONBA_PTR_SET_VALUE(hasSettings_, hasSettings) };


    // hasStructuredTables Field Functions 
    bool hasHasStructuredTables() const { return this->hasStructuredTables_ != nullptr;};
    void deleteHasStructuredTables() { this->hasStructuredTables_ = nullptr;};
    inline bool getHasStructuredTables() const { DARABONBA_PTR_GET_DEFAULT(hasStructuredTables_, false) };
    inline GetSourceResponseBody& setHasStructuredTables(bool hasStructuredTables) { DARABONBA_PTR_SET_VALUE(hasStructuredTables_, hasStructuredTables) };


    // hasUnstructuredDocs Field Functions 
    bool hasHasUnstructuredDocs() const { return this->hasUnstructuredDocs_ != nullptr;};
    void deleteHasUnstructuredDocs() { this->hasUnstructuredDocs_ = nullptr;};
    inline bool getHasUnstructuredDocs() const { DARABONBA_PTR_GET_DEFAULT(hasUnstructuredDocs_, false) };
    inline GetSourceResponseBody& setHasUnstructuredDocs(bool hasUnstructuredDocs) { DARABONBA_PTR_SET_VALUE(hasUnstructuredDocs_, hasUnstructuredDocs) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSourceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline GetSourceResponseBody& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // objectBindings Field Functions 
    bool hasObjectBindings() const { return this->objectBindings_ != nullptr;};
    void deleteObjectBindings() { this->objectBindings_ = nullptr;};
    inline const vector<GetSourceResponseBody::ObjectBindings> & getObjectBindings() const { DARABONBA_PTR_GET_CONST(objectBindings_, vector<GetSourceResponseBody::ObjectBindings>) };
    inline vector<GetSourceResponseBody::ObjectBindings> getObjectBindings() { DARABONBA_PTR_GET(objectBindings_, vector<GetSourceResponseBody::ObjectBindings>) };
    inline GetSourceResponseBody& setObjectBindings(const vector<GetSourceResponseBody::ObjectBindings> & objectBindings) { DARABONBA_PTR_SET_VALUE(objectBindings_, objectBindings) };
    inline GetSourceResponseBody& setObjectBindings(vector<GetSourceResponseBody::ObjectBindings> && objectBindings) { DARABONBA_PTR_SET_RVALUE(objectBindings_, objectBindings) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline GetSourceResponseBody& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline GetSourceResponseBody& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline GetSourceResponseBody& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetSourceResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline     const Darabonba::Json & getSettings() const { DARABONBA_GET(settings_) };
    Darabonba::Json & getSettings() { DARABONBA_GET(settings_) };
    inline GetSourceResponseBody& setSettings(const Darabonba::Json & settings) { DARABONBA_SET_VALUE(settings_, settings) };
    inline GetSourceResponseBody& setSettings(Darabonba::Json && settings) { DARABONBA_SET_RVALUE(settings_, settings) };


    // skillOutputId Field Functions 
    bool hasSkillOutputId() const { return this->skillOutputId_ != nullptr;};
    void deleteSkillOutputId() { this->skillOutputId_ = nullptr;};
    inline string getSkillOutputId() const { DARABONBA_PTR_GET_DEFAULT(skillOutputId_, "") };
    inline GetSourceResponseBody& setSkillOutputId(string skillOutputId) { DARABONBA_PTR_SET_VALUE(skillOutputId_, skillOutputId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetSourceResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceKind Field Functions 
    bool hasSourceKind() const { return this->sourceKind_ != nullptr;};
    void deleteSourceKind() { this->sourceKind_ = nullptr;};
    inline string getSourceKind() const { DARABONBA_PTR_GET_DEFAULT(sourceKind_, "") };
    inline GetSourceResponseBody& setSourceKind(string sourceKind) { DARABONBA_PTR_SET_VALUE(sourceKind_, sourceKind) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline GetSourceResponseBody& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetSourceResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSourceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structuredTables Field Functions 
    bool hasStructuredTables() const { return this->structuredTables_ != nullptr;};
    void deleteStructuredTables() { this->structuredTables_ = nullptr;};
    inline const vector<string> & getStructuredTables() const { DARABONBA_PTR_GET_CONST(structuredTables_, vector<string>) };
    inline vector<string> getStructuredTables() { DARABONBA_PTR_GET(structuredTables_, vector<string>) };
    inline GetSourceResponseBody& setStructuredTables(const vector<string> & structuredTables) { DARABONBA_PTR_SET_VALUE(structuredTables_, structuredTables) };
    inline GetSourceResponseBody& setStructuredTables(vector<string> && structuredTables) { DARABONBA_PTR_SET_RVALUE(structuredTables_, structuredTables) };


    // unstructuredDocs Field Functions 
    bool hasUnstructuredDocs() const { return this->unstructuredDocs_ != nullptr;};
    void deleteUnstructuredDocs() { this->unstructuredDocs_ = nullptr;};
    inline const vector<GetSourceResponseBody::UnstructuredDocs> & getUnstructuredDocs() const { DARABONBA_PTR_GET_CONST(unstructuredDocs_, vector<GetSourceResponseBody::UnstructuredDocs>) };
    inline vector<GetSourceResponseBody::UnstructuredDocs> getUnstructuredDocs() { DARABONBA_PTR_GET(unstructuredDocs_, vector<GetSourceResponseBody::UnstructuredDocs>) };
    inline GetSourceResponseBody& setUnstructuredDocs(const vector<GetSourceResponseBody::UnstructuredDocs> & unstructuredDocs) { DARABONBA_PTR_SET_VALUE(unstructuredDocs_, unstructuredDocs) };
    inline GetSourceResponseBody& setUnstructuredDocs(vector<GetSourceResponseBody::UnstructuredDocs> && unstructuredDocs) { DARABONBA_PTR_SET_RVALUE(unstructuredDocs_, unstructuredDocs) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // DocumentAgent 解析完成时间，ISO8601 格式
    shared_ptr<string> completionTime_ {};
    // 数据源描述
    shared_ptr<string> description_ {};
    // 创建时间，ISO8601 格式
    shared_ptr<string> gmtCreate_ {};
    // 修改时间，ISO8601 格式
    shared_ptr<string> gmtModified_ {};
    // 是否存在备注
    shared_ptr<bool> hasNotes_ {};
    // 是否存在 settings 配置
    shared_ptr<bool> hasSettings_ {};
    // 是否存在结构化表
    shared_ptr<bool> hasStructuredTables_ {};
    // 是否存在非结构化文档
    shared_ptr<bool> hasUnstructuredDocs_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 文件名
    shared_ptr<string> name_ {};
    // 备注（仅 includeDetails=True）
    shared_ptr<string> notes_ {};
    shared_ptr<vector<GetSourceResponseBody::ObjectBindings>> objectBindings_ {};
    // 主对象 ID（兼容字段）
    shared_ptr<string> objectId_ {};
    // 主对象类型（兼容字段）
    shared_ptr<string> objectType_ {};
    // 运营对象名称
    shared_ptr<string> operatingObjectName_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 可见范围：PERSONAL / TENANT
    shared_ptr<string> scope_ {};
    Darabonba::Json settings_ {};
    // 技能产出 ID（由产出保存为资源时携带）
    shared_ptr<string> skillOutputId_ {};
    // 数据源 ID
    shared_ptr<string> sourceId_ {};
    // 数据源归属类型：normal / aliding_kb_doc
    shared_ptr<string> sourceKind_ {};
    // 资源标签 JSON 字符串
    shared_ptr<string> sourceTags_ {};
    // 数据源类型
    shared_ptr<string> sourceType_ {};
    // 数据源状态
    shared_ptr<string> status_ {};
    // structuredTables
    shared_ptr<vector<string>> structuredTables_ {};
    shared_ptr<vector<GetSourceResponseBody::UnstructuredDocs>> unstructuredDocs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
