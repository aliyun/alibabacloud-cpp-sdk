// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeDocResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(DocInfo, docInfo_);
      DARABONBA_PTR_TO_JSON(DocMetadata, docMetadata_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(DocTags, docTags_);
      DARABONBA_PTR_TO_JSON(EffectStatus, effectStatus_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(ProcessCanRetry, processCanRetry_);
      DARABONBA_PTR_TO_JSON(ProcessMessage, processMessage_);
      DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(DocInfo, docInfo_);
      DARABONBA_PTR_FROM_JSON(DocMetadata, docMetadata_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(DocTags, docTags_);
      DARABONBA_PTR_FROM_JSON(EffectStatus, effectStatus_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(ProcessCanRetry, processCanRetry_);
      DARABONBA_PTR_FROM_JSON(ProcessMessage, processMessage_);
      DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeDocResponseBody() = default ;
    DescribeDocResponseBody(const DescribeDocResponseBody &) = default ;
    DescribeDocResponseBody(DescribeDocResponseBody &&) = default ;
    DescribeDocResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocResponseBody() = default ;
    DescribeDocResponseBody& operator=(const DescribeDocResponseBody &) = default ;
    DescribeDocResponseBody& operator=(DescribeDocResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DocTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocTags& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultTag, defaultTag_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, DocTags& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultTag, defaultTag_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      };
      DocTags() = default ;
      DocTags(const DocTags &) = default ;
      DocTags(DocTags &&) = default ;
      DocTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocTags() = default ;
      DocTags& operator=(const DocTags &) = default ;
      DocTags& operator=(DocTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultTag_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr; };
      // defaultTag Field Functions 
      bool hasDefaultTag() const { return this->defaultTag_ != nullptr;};
      void deleteDefaultTag() { this->defaultTag_ = nullptr;};
      inline bool getDefaultTag() const { DARABONBA_PTR_GET_DEFAULT(defaultTag_, false) };
      inline DocTags& setDefaultTag(bool defaultTag) { DARABONBA_PTR_SET_VALUE(defaultTag_, defaultTag) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline DocTags& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DocTags& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
      inline DocTags& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline DocTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    protected:
      // Indicates whether the tag represents all items by default.
      shared_ptr<bool> defaultTag_ {};
      // The tag\\"s group ID.
      shared_ptr<int64_t> groupId_ {};
      // The tag group name.
      shared_ptr<string> groupName_ {};
      // The tag ID.
      shared_ptr<int64_t> tagId_ {};
      // The tag name.
      shared_ptr<string> tagName_ {};
    };

    class DocMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessViewId, businessViewId_);
        DARABONBA_PTR_TO_JSON(BusinessViewName, businessViewName_);
        DARABONBA_PTR_TO_JSON(MetaCellInfoDTOList, metaCellInfoDTOList_);
      };
      friend void from_json(const Darabonba::Json& j, DocMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessViewId, businessViewId_);
        DARABONBA_PTR_FROM_JSON(BusinessViewName, businessViewName_);
        DARABONBA_PTR_FROM_JSON(MetaCellInfoDTOList, metaCellInfoDTOList_);
      };
      DocMetadata() = default ;
      DocMetadata(const DocMetadata &) = default ;
      DocMetadata(DocMetadata &&) = default ;
      DocMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocMetadata() = default ;
      DocMetadata& operator=(const DocMetadata &) = default ;
      DocMetadata& operator=(DocMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetaCellInfoDTOList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetaCellInfoDTOList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldCode, fieldCode_);
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, MetaCellInfoDTOList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldCode, fieldCode_);
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        MetaCellInfoDTOList() = default ;
        MetaCellInfoDTOList(const MetaCellInfoDTOList &) = default ;
        MetaCellInfoDTOList(MetaCellInfoDTOList &&) = default ;
        MetaCellInfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetaCellInfoDTOList() = default ;
        MetaCellInfoDTOList& operator=(const MetaCellInfoDTOList &) = default ;
        MetaCellInfoDTOList& operator=(MetaCellInfoDTOList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldCode_ == nullptr
        && this->fieldName_ == nullptr && this->value_ == nullptr; };
        // fieldCode Field Functions 
        bool hasFieldCode() const { return this->fieldCode_ != nullptr;};
        void deleteFieldCode() { this->fieldCode_ = nullptr;};
        inline string getFieldCode() const { DARABONBA_PTR_GET_DEFAULT(fieldCode_, "") };
        inline MetaCellInfoDTOList& setFieldCode(string fieldCode) { DARABONBA_PTR_SET_VALUE(fieldCode_, fieldCode) };


        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline MetaCellInfoDTOList& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline MetaCellInfoDTOList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The code of the field.
        shared_ptr<string> fieldCode_ {};
        // The field name.
        shared_ptr<string> fieldName_ {};
        // The value of the field.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->businessViewId_ == nullptr
        && this->businessViewName_ == nullptr && this->metaCellInfoDTOList_ == nullptr; };
      // businessViewId Field Functions 
      bool hasBusinessViewId() const { return this->businessViewId_ != nullptr;};
      void deleteBusinessViewId() { this->businessViewId_ = nullptr;};
      inline string getBusinessViewId() const { DARABONBA_PTR_GET_DEFAULT(businessViewId_, "") };
      inline DocMetadata& setBusinessViewId(string businessViewId) { DARABONBA_PTR_SET_VALUE(businessViewId_, businessViewId) };


      // businessViewName Field Functions 
      bool hasBusinessViewName() const { return this->businessViewName_ != nullptr;};
      void deleteBusinessViewName() { this->businessViewName_ = nullptr;};
      inline string getBusinessViewName() const { DARABONBA_PTR_GET_DEFAULT(businessViewName_, "") };
      inline DocMetadata& setBusinessViewName(string businessViewName) { DARABONBA_PTR_SET_VALUE(businessViewName_, businessViewName) };


      // metaCellInfoDTOList Field Functions 
      bool hasMetaCellInfoDTOList() const { return this->metaCellInfoDTOList_ != nullptr;};
      void deleteMetaCellInfoDTOList() { this->metaCellInfoDTOList_ = nullptr;};
      inline const vector<DocMetadata::MetaCellInfoDTOList> & getMetaCellInfoDTOList() const { DARABONBA_PTR_GET_CONST(metaCellInfoDTOList_, vector<DocMetadata::MetaCellInfoDTOList>) };
      inline vector<DocMetadata::MetaCellInfoDTOList> getMetaCellInfoDTOList() { DARABONBA_PTR_GET(metaCellInfoDTOList_, vector<DocMetadata::MetaCellInfoDTOList>) };
      inline DocMetadata& setMetaCellInfoDTOList(const vector<DocMetadata::MetaCellInfoDTOList> & metaCellInfoDTOList) { DARABONBA_PTR_SET_VALUE(metaCellInfoDTOList_, metaCellInfoDTOList) };
      inline DocMetadata& setMetaCellInfoDTOList(vector<DocMetadata::MetaCellInfoDTOList> && metaCellInfoDTOList) { DARABONBA_PTR_SET_RVALUE(metaCellInfoDTOList_, metaCellInfoDTOList) };


    protected:
      // The ID of the business view.
      shared_ptr<string> businessViewId_ {};
      // The business view name.
      shared_ptr<string> businessViewName_ {};
      // A list of metadata cells.
      shared_ptr<vector<DocMetadata::MetaCellInfoDTOList>> metaCellInfoDTOList_ {};
    };

    class DocInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DocParas, docParas_);
      };
      friend void from_json(const Darabonba::Json& j, DocInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DocParas, docParas_);
      };
      DocInfo() = default ;
      DocInfo(const DocInfo &) = default ;
      DocInfo(DocInfo &&) = default ;
      DocInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocInfo() = default ;
      DocInfo& operator=(const DocInfo &) = default ;
      DocInfo& operator=(DocInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DocParas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DocParas& obj) { 
          DARABONBA_PTR_TO_JSON(ParaLevel, paraLevel_);
          DARABONBA_PTR_TO_JSON(ParaNo, paraNo_);
          DARABONBA_PTR_TO_JSON(ParaText, paraText_);
          DARABONBA_PTR_TO_JSON(ParaType, paraType_);
        };
        friend void from_json(const Darabonba::Json& j, DocParas& obj) { 
          DARABONBA_PTR_FROM_JSON(ParaLevel, paraLevel_);
          DARABONBA_PTR_FROM_JSON(ParaNo, paraNo_);
          DARABONBA_PTR_FROM_JSON(ParaText, paraText_);
          DARABONBA_PTR_FROM_JSON(ParaType, paraType_);
        };
        DocParas() = default ;
        DocParas(const DocParas &) = default ;
        DocParas(DocParas &&) = default ;
        DocParas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DocParas() = default ;
        DocParas& operator=(const DocParas &) = default ;
        DocParas& operator=(DocParas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->paraLevel_ == nullptr
        && this->paraNo_ == nullptr && this->paraText_ == nullptr && this->paraType_ == nullptr; };
        // paraLevel Field Functions 
        bool hasParaLevel() const { return this->paraLevel_ != nullptr;};
        void deleteParaLevel() { this->paraLevel_ = nullptr;};
        inline int32_t getParaLevel() const { DARABONBA_PTR_GET_DEFAULT(paraLevel_, 0) };
        inline DocParas& setParaLevel(int32_t paraLevel) { DARABONBA_PTR_SET_VALUE(paraLevel_, paraLevel) };


        // paraNo Field Functions 
        bool hasParaNo() const { return this->paraNo_ != nullptr;};
        void deleteParaNo() { this->paraNo_ = nullptr;};
        inline int32_t getParaNo() const { DARABONBA_PTR_GET_DEFAULT(paraNo_, 0) };
        inline DocParas& setParaNo(int32_t paraNo) { DARABONBA_PTR_SET_VALUE(paraNo_, paraNo) };


        // paraText Field Functions 
        bool hasParaText() const { return this->paraText_ != nullptr;};
        void deleteParaText() { this->paraText_ = nullptr;};
        inline string getParaText() const { DARABONBA_PTR_GET_DEFAULT(paraText_, "") };
        inline DocParas& setParaText(string paraText) { DARABONBA_PTR_SET_VALUE(paraText_, paraText) };


        // paraType Field Functions 
        bool hasParaType() const { return this->paraType_ != nullptr;};
        void deleteParaType() { this->paraType_ = nullptr;};
        inline string getParaType() const { DARABONBA_PTR_GET_DEFAULT(paraType_, "") };
        inline DocParas& setParaType(string paraType) { DARABONBA_PTR_SET_VALUE(paraType_, paraType) };


      protected:
        // The paragraph level.
        shared_ptr<int32_t> paraLevel_ {};
        // The paragraph number.
        shared_ptr<int32_t> paraNo_ {};
        // The paragraph content. The content can be plain text, text extracted from an image using optical character recognition (OCR), or a table in Markdown format.
        shared_ptr<string> paraText_ {};
        // The paragraph type.<br>text: Text<br>figure: Image<br>table: Table<br><br><br>
        shared_ptr<string> paraType_ {};
      };

      virtual bool empty() const override { return this->docParas_ == nullptr; };
      // docParas Field Functions 
      bool hasDocParas() const { return this->docParas_ != nullptr;};
      void deleteDocParas() { this->docParas_ = nullptr;};
      inline const vector<DocInfo::DocParas> & getDocParas() const { DARABONBA_PTR_GET_CONST(docParas_, vector<DocInfo::DocParas>) };
      inline vector<DocInfo::DocParas> getDocParas() { DARABONBA_PTR_GET(docParas_, vector<DocInfo::DocParas>) };
      inline DocInfo& setDocParas(const vector<DocInfo::DocParas> & docParas) { DARABONBA_PTR_SET_VALUE(docParas_, docParas) };
      inline DocInfo& setDocParas(vector<DocInfo::DocParas> && docParas) { DARABONBA_PTR_SET_RVALUE(docParas_, docParas) };


    protected:
      // The paragraphs of the document.
      shared_ptr<vector<DocInfo::DocParas>> docParas_ {};
    };

    virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->categoryId_ == nullptr && this->config_ == nullptr && this->createTime_ == nullptr && this->createUserId_ == nullptr && this->createUserName_ == nullptr
        && this->docInfo_ == nullptr && this->docMetadata_ == nullptr && this->docName_ == nullptr && this->docTags_ == nullptr && this->effectStatus_ == nullptr
        && this->endDate_ == nullptr && this->knowledgeId_ == nullptr && this->meta_ == nullptr && this->modifyTime_ == nullptr && this->modifyUserId_ == nullptr
        && this->modifyUserName_ == nullptr && this->processCanRetry_ == nullptr && this->processMessage_ == nullptr && this->processStatus_ == nullptr && this->requestId_ == nullptr
        && this->startDate_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline DescribeDocResponseBody& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline DescribeDocResponseBody& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeDocResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDocResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline int64_t getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
    inline DescribeDocResponseBody& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeDocResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // docInfo Field Functions 
    bool hasDocInfo() const { return this->docInfo_ != nullptr;};
    void deleteDocInfo() { this->docInfo_ = nullptr;};
    inline const DescribeDocResponseBody::DocInfo & getDocInfo() const { DARABONBA_PTR_GET_CONST(docInfo_, DescribeDocResponseBody::DocInfo) };
    inline DescribeDocResponseBody::DocInfo getDocInfo() { DARABONBA_PTR_GET(docInfo_, DescribeDocResponseBody::DocInfo) };
    inline DescribeDocResponseBody& setDocInfo(const DescribeDocResponseBody::DocInfo & docInfo) { DARABONBA_PTR_SET_VALUE(docInfo_, docInfo) };
    inline DescribeDocResponseBody& setDocInfo(DescribeDocResponseBody::DocInfo && docInfo) { DARABONBA_PTR_SET_RVALUE(docInfo_, docInfo) };


    // docMetadata Field Functions 
    bool hasDocMetadata() const { return this->docMetadata_ != nullptr;};
    void deleteDocMetadata() { this->docMetadata_ = nullptr;};
    inline const vector<DescribeDocResponseBody::DocMetadata> & getDocMetadata() const { DARABONBA_PTR_GET_CONST(docMetadata_, vector<DescribeDocResponseBody::DocMetadata>) };
    inline vector<DescribeDocResponseBody::DocMetadata> getDocMetadata() { DARABONBA_PTR_GET(docMetadata_, vector<DescribeDocResponseBody::DocMetadata>) };
    inline DescribeDocResponseBody& setDocMetadata(const vector<DescribeDocResponseBody::DocMetadata> & docMetadata) { DARABONBA_PTR_SET_VALUE(docMetadata_, docMetadata) };
    inline DescribeDocResponseBody& setDocMetadata(vector<DescribeDocResponseBody::DocMetadata> && docMetadata) { DARABONBA_PTR_SET_RVALUE(docMetadata_, docMetadata) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline DescribeDocResponseBody& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docTags Field Functions 
    bool hasDocTags() const { return this->docTags_ != nullptr;};
    void deleteDocTags() { this->docTags_ = nullptr;};
    inline const vector<DescribeDocResponseBody::DocTags> & getDocTags() const { DARABONBA_PTR_GET_CONST(docTags_, vector<DescribeDocResponseBody::DocTags>) };
    inline vector<DescribeDocResponseBody::DocTags> getDocTags() { DARABONBA_PTR_GET(docTags_, vector<DescribeDocResponseBody::DocTags>) };
    inline DescribeDocResponseBody& setDocTags(const vector<DescribeDocResponseBody::DocTags> & docTags) { DARABONBA_PTR_SET_VALUE(docTags_, docTags) };
    inline DescribeDocResponseBody& setDocTags(vector<DescribeDocResponseBody::DocTags> && docTags) { DARABONBA_PTR_SET_RVALUE(docTags_, docTags) };


    // effectStatus Field Functions 
    bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
    void deleteEffectStatus() { this->effectStatus_ = nullptr;};
    inline int32_t getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, 0) };
    inline DescribeDocResponseBody& setEffectStatus(int32_t effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeDocResponseBody& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline DescribeDocResponseBody& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string getMeta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline DescribeDocResponseBody& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeDocResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline int64_t getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, 0L) };
    inline DescribeDocResponseBody& setModifyUserId(int64_t modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeDocResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // processCanRetry Field Functions 
    bool hasProcessCanRetry() const { return this->processCanRetry_ != nullptr;};
    void deleteProcessCanRetry() { this->processCanRetry_ = nullptr;};
    inline bool getProcessCanRetry() const { DARABONBA_PTR_GET_DEFAULT(processCanRetry_, false) };
    inline DescribeDocResponseBody& setProcessCanRetry(bool processCanRetry) { DARABONBA_PTR_SET_VALUE(processCanRetry_, processCanRetry) };


    // processMessage Field Functions 
    bool hasProcessMessage() const { return this->processMessage_ != nullptr;};
    void deleteProcessMessage() { this->processMessage_ = nullptr;};
    inline string getProcessMessage() const { DARABONBA_PTR_GET_DEFAULT(processMessage_, "") };
    inline DescribeDocResponseBody& setProcessMessage(string processMessage) { DARABONBA_PTR_SET_VALUE(processMessage_, processMessage) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int32_t getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
    inline DescribeDocResponseBody& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDocResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeDocResponseBody& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDocResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeDocResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeDocResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The business code.
    shared_ptr<string> bizCode_ {};
    // The category ID.
    shared_ptr<int64_t> categoryId_ {};
    // The configuration for document parsing and splitting. Key: `Splitter`. Valid values: `paragraphSplitter` (splits by recognition level, default) and `treeSplitter` (splits by rule level).
    // 
    // Key: `ChunkSize`. The size of each document chunk, which must be between 200 and 800. The default value is 500.
    // 
    // Key: `TreePatterns`. The patterns for the rule-based hierarchy. The default value is [].
    // 
    // Key: `TitleSource`. The source of the document title. Valid values: `ocrTitle` (OCR-recognized title, default) and `docName` (document name).
    shared_ptr<string> config_ {};
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The creator ID.
    shared_ptr<int64_t> createUserId_ {};
    // The creator name.
    shared_ptr<string> createUserName_ {};
    // The document details.
    shared_ptr<DescribeDocResponseBody::DocInfo> docInfo_ {};
    // A list of metadata sets, where each set corresponds to a business view.
    shared_ptr<vector<DescribeDocResponseBody::DocMetadata>> docMetadata_ {};
    // The document name.
    shared_ptr<string> docName_ {};
    // A list of document tags.
    shared_ptr<vector<DescribeDocResponseBody::DocTags>> docTags_ {};
    // The effective status, calculated from `StartDate` and `EndDate`.<br>20: Active<br>21: Expired<br>22: Pending<br><br><br>
    shared_ptr<int32_t> effectStatus_ {};
    // The end time in UTC format.
    shared_ptr<string> endDate_ {};
    // The knowledge ID.
    shared_ptr<int64_t> knowledgeId_ {};
    // The document\\"s metadata.
    shared_ptr<string> meta_ {};
    // The modification time.
    shared_ptr<string> modifyTime_ {};
    // The modifier ID.
    shared_ptr<int64_t> modifyUserId_ {};
    // The modifier name.
    shared_ptr<string> modifyUserName_ {};
    // Indicates whether a failed task can be retried.<br>`true`: The task can be retried.<br>`false`: The task cannot be retried.<br><br>
    shared_ptr<bool> processCanRetry_ {};
    // The processing message.
    shared_ptr<string> processMessage_ {};
    // The processing status of the task.<br>-1: Queued<br>0: Succeeded<br>1: Parsing<br>2: Processing<br>3: Failed<br><br><br><br><br>
    shared_ptr<int32_t> processStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time in UTC format.
    shared_ptr<string> startDate_ {};
    // The edit status.<br>1: Unpublished<br>2: Published<br>3: Updated but not published<br><br><br>
    shared_ptr<int32_t> status_ {};
    // The document title.
    shared_ptr<string> title_ {};
    // The OSS address of the document.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
