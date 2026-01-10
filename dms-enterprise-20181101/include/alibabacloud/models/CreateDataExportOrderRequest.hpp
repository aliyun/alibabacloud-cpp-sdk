// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataExportOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataExportOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataExportOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataExportOrderRequest() = default ;
    CreateDataExportOrderRequest(const CreateDataExportOrderRequest &) = default ;
    CreateDataExportOrderRequest(CreateDataExportOrderRequest &&) = default ;
    CreateDataExportOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataExportOrderRequest() = default ;
    CreateDataExportOrderRequest& operator=(const CreateDataExportOrderRequest &) = default ;
    CreateDataExportOrderRequest& operator=(CreateDataExportOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PluginParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PluginParam& obj) { 
        DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(ExeSQL, exeSQL_);
        DARABONBA_PTR_TO_JSON(IgnoreAffectRows, ignoreAffectRows_);
        DARABONBA_PTR_TO_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(Watermark, watermark_);
      };
      friend void from_json(const Darabonba::Json& j, PluginParam& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(ExeSQL, exeSQL_);
        DARABONBA_PTR_FROM_JSON(IgnoreAffectRows, ignoreAffectRows_);
        DARABONBA_PTR_FROM_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
      };
      PluginParam() = default ;
      PluginParam(const PluginParam &) = default ;
      PluginParam(PluginParam &&) = default ;
      PluginParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PluginParam() = default ;
      PluginParam& operator=(const PluginParam &) = default ;
      PluginParam& operator=(PluginParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Watermark : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Watermark& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(DataWatermark, dataWatermark_);
          DARABONBA_PTR_TO_JSON(FileWatermark, fileWatermark_);
          DARABONBA_PTR_TO_JSON(Keys, keys_);
          DARABONBA_PTR_TO_JSON(WatermarkTypes, watermarkTypes_);
        };
        friend void from_json(const Darabonba::Json& j, Watermark& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(DataWatermark, dataWatermark_);
          DARABONBA_PTR_FROM_JSON(FileWatermark, fileWatermark_);
          DARABONBA_PTR_FROM_JSON(Keys, keys_);
          DARABONBA_PTR_FROM_JSON(WatermarkTypes, watermarkTypes_);
        };
        Watermark() = default ;
        Watermark(const Watermark &) = default ;
        Watermark(Watermark &&) = default ;
        Watermark(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Watermark() = default ;
        Watermark& operator=(const Watermark &) = default ;
        Watermark& operator=(Watermark &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnName_ == nullptr
        && this->dataWatermark_ == nullptr && this->fileWatermark_ == nullptr && this->keys_ == nullptr && this->watermarkTypes_ == nullptr; };
        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline Watermark& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // dataWatermark Field Functions 
        bool hasDataWatermark() const { return this->dataWatermark_ != nullptr;};
        void deleteDataWatermark() { this->dataWatermark_ = nullptr;};
        inline string getDataWatermark() const { DARABONBA_PTR_GET_DEFAULT(dataWatermark_, "") };
        inline Watermark& setDataWatermark(string dataWatermark) { DARABONBA_PTR_SET_VALUE(dataWatermark_, dataWatermark) };


        // fileWatermark Field Functions 
        bool hasFileWatermark() const { return this->fileWatermark_ != nullptr;};
        void deleteFileWatermark() { this->fileWatermark_ = nullptr;};
        inline string getFileWatermark() const { DARABONBA_PTR_GET_DEFAULT(fileWatermark_, "") };
        inline Watermark& setFileWatermark(string fileWatermark) { DARABONBA_PTR_SET_VALUE(fileWatermark_, fileWatermark) };


        // keys Field Functions 
        bool hasKeys() const { return this->keys_ != nullptr;};
        void deleteKeys() { this->keys_ = nullptr;};
        inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
        inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
        inline Watermark& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
        inline Watermark& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


        // watermarkTypes Field Functions 
        bool hasWatermarkTypes() const { return this->watermarkTypes_ != nullptr;};
        void deleteWatermarkTypes() { this->watermarkTypes_ = nullptr;};
        inline const vector<string> & getWatermarkTypes() const { DARABONBA_PTR_GET_CONST(watermarkTypes_, vector<string>) };
        inline vector<string> getWatermarkTypes() { DARABONBA_PTR_GET(watermarkTypes_, vector<string>) };
        inline Watermark& setWatermarkTypes(const vector<string> & watermarkTypes) { DARABONBA_PTR_SET_VALUE(watermarkTypes_, watermarkTypes) };
        inline Watermark& setWatermarkTypes(vector<string> && watermarkTypes) { DARABONBA_PTR_SET_RVALUE(watermarkTypes_, watermarkTypes) };


      protected:
        // The field into which the watermark is to be embedded.
        shared_ptr<string> columnName_ {};
        // The information to be embedded as a watermark into data.
        shared_ptr<string> dataWatermark_ {};
        // The information to be embedded as a watermark into files.
        shared_ptr<string> fileWatermark_ {};
        // One or more primary keys or unique keys.
        shared_ptr<vector<string>> keys_ {};
        // The methods in which the watermark is embedded.
        shared_ptr<vector<string>> watermarkTypes_ {};
      };

      virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->classify_ == nullptr && this->dbId_ == nullptr && this->exeSQL_ == nullptr && this->ignoreAffectRows_ == nullptr && this->ignoreAffectRowsReason_ == nullptr
        && this->instanceId_ == nullptr && this->logic_ == nullptr && this->watermark_ == nullptr; };
      // affectRows Field Functions 
      bool hasAffectRows() const { return this->affectRows_ != nullptr;};
      void deleteAffectRows() { this->affectRows_ = nullptr;};
      inline int64_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
      inline PluginParam& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline PluginParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline PluginParam& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // exeSQL Field Functions 
      bool hasExeSQL() const { return this->exeSQL_ != nullptr;};
      void deleteExeSQL() { this->exeSQL_ = nullptr;};
      inline string getExeSQL() const { DARABONBA_PTR_GET_DEFAULT(exeSQL_, "") };
      inline PluginParam& setExeSQL(string exeSQL) { DARABONBA_PTR_SET_VALUE(exeSQL_, exeSQL) };


      // ignoreAffectRows Field Functions 
      bool hasIgnoreAffectRows() const { return this->ignoreAffectRows_ != nullptr;};
      void deleteIgnoreAffectRows() { this->ignoreAffectRows_ = nullptr;};
      inline bool getIgnoreAffectRows() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRows_, false) };
      inline PluginParam& setIgnoreAffectRows(bool ignoreAffectRows) { DARABONBA_PTR_SET_VALUE(ignoreAffectRows_, ignoreAffectRows) };


      // ignoreAffectRowsReason Field Functions 
      bool hasIgnoreAffectRowsReason() const { return this->ignoreAffectRowsReason_ != nullptr;};
      void deleteIgnoreAffectRowsReason() { this->ignoreAffectRowsReason_ = nullptr;};
      inline string getIgnoreAffectRowsReason() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRowsReason_, "") };
      inline PluginParam& setIgnoreAffectRowsReason(string ignoreAffectRowsReason) { DARABONBA_PTR_SET_VALUE(ignoreAffectRowsReason_, ignoreAffectRowsReason) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline PluginParam& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
      inline PluginParam& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // watermark Field Functions 
      bool hasWatermark() const { return this->watermark_ != nullptr;};
      void deleteWatermark() { this->watermark_ = nullptr;};
      inline const PluginParam::Watermark & getWatermark() const { DARABONBA_PTR_GET_CONST(watermark_, PluginParam::Watermark) };
      inline PluginParam::Watermark getWatermark() { DARABONBA_PTR_GET(watermark_, PluginParam::Watermark) };
      inline PluginParam& setWatermark(const PluginParam::Watermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
      inline PluginParam& setWatermark(PluginParam::Watermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


    protected:
      // The estimated number of data rows to be affected.
      // 
      // This parameter is required.
      shared_ptr<int64_t> affectRows_ {};
      // The reason for the export ticket.
      // 
      // This parameter is required.
      shared_ptr<string> classify_ {};
      // The database ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> dbId_ {};
      // The SQL statements that can be executed.
      // 
      // This parameter is required.
      shared_ptr<string> exeSQL_ {};
      // Specifies whether to skip verification. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // This parameter is required.
      shared_ptr<bool> ignoreAffectRows_ {};
      // The reason for skipping verification. This parameter is required if you set IgnoreAffectRows to true.
      shared_ptr<string> ignoreAffectRowsReason_ {};
      // The instance ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> instanceId_ {};
      // Specifies whether the database is a logical database. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // > If you set this parameter to **true**, the database that you specify must be a logical database.
      // 
      // This parameter is required.
      shared_ptr<bool> logic_ {};
      // The information about the watermarks.
      shared_ptr<PluginParam::Watermark> watermark_ {};
    };

    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->parentId_ == nullptr && this->pluginParam_ == nullptr && this->realLoginUserUid_ == nullptr && this->relatedUserList_ == nullptr
        && this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateDataExportOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataExportOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateDataExportOrderRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // pluginParam Field Functions 
    bool hasPluginParam() const { return this->pluginParam_ != nullptr;};
    void deletePluginParam() { this->pluginParam_ = nullptr;};
    inline const CreateDataExportOrderRequest::PluginParam & getPluginParam() const { DARABONBA_PTR_GET_CONST(pluginParam_, CreateDataExportOrderRequest::PluginParam) };
    inline CreateDataExportOrderRequest::PluginParam getPluginParam() { DARABONBA_PTR_GET(pluginParam_, CreateDataExportOrderRequest::PluginParam) };
    inline CreateDataExportOrderRequest& setPluginParam(const CreateDataExportOrderRequest::PluginParam & pluginParam) { DARABONBA_PTR_SET_VALUE(pluginParam_, pluginParam) };
    inline CreateDataExportOrderRequest& setPluginParam(CreateDataExportOrderRequest::PluginParam && pluginParam) { DARABONBA_PTR_SET_RVALUE(pluginParam_, pluginParam) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline CreateDataExportOrderRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateDataExportOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDataExportOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataExportOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment that provides more instructions for the ticket. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key.
    shared_ptr<string> attachmentKey_ {};
    // The purpose or objective of the ticket. This parameter helps reduce unnecessary communication.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The ID of the parent ticket.
    shared_ptr<int64_t> parentId_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<CreateDataExportOrderRequest::PluginParam> pluginParam_ {};
    // The UID of the Alibaba Cloud account that actually calls the API.
    shared_ptr<string> realLoginUserUid_ {};
    // The stakeholders involved in this operation.
    shared_ptr<vector<int64_t>> relatedUserList_ {};
    // The tenant ID.
    // 
    // > To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
