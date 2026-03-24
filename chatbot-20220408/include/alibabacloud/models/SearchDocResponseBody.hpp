// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDOCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDOCRESPONSEBODY_HPP_
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
  class SearchDocResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDocResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DocHits, docHits_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDocResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DocHits, docHits_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchDocResponseBody() = default ;
    SearchDocResponseBody(const SearchDocResponseBody &) = default ;
    SearchDocResponseBody(SearchDocResponseBody &&) = default ;
    SearchDocResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDocResponseBody() = default ;
    SearchDocResponseBody& operator=(const SearchDocResponseBody &) = default ;
    SearchDocResponseBody& operator=(SearchDocResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DocHits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocHits& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
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
        DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, DocHits& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
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
        DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      DocHits() = default ;
      DocHits(const DocHits &) = default ;
      DocHits(DocHits &&) = default ;
      DocHits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocHits() = default ;
      DocHits& operator=(const DocHits &) = default ;
      DocHits& operator=(DocHits &&) = default ;
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
        shared_ptr<bool> defaultTag_ {};
        shared_ptr<int64_t> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<int64_t> tagId_ {};
        shared_ptr<string> tagName_ {};
      };

      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->categoryId_ == nullptr && this->config_ == nullptr && this->createTime_ == nullptr && this->createUserId_ == nullptr && this->createUserName_ == nullptr
        && this->docName_ == nullptr && this->docTags_ == nullptr && this->effectStatus_ == nullptr && this->endDate_ == nullptr && this->knowledgeId_ == nullptr
        && this->meta_ == nullptr && this->modifyTime_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr && this->processCanRetry_ == nullptr
        && this->processMessage_ == nullptr && this->processStatus_ == nullptr && this->startDate_ == nullptr && this->status_ == nullptr && this->url_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline DocHits& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline DocHits& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline DocHits& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DocHits& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserId Field Functions 
      bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
      void deleteCreateUserId() { this->createUserId_ = nullptr;};
      inline int64_t getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
      inline DocHits& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline DocHits& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // docName Field Functions 
      bool hasDocName() const { return this->docName_ != nullptr;};
      void deleteDocName() { this->docName_ = nullptr;};
      inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
      inline DocHits& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


      // docTags Field Functions 
      bool hasDocTags() const { return this->docTags_ != nullptr;};
      void deleteDocTags() { this->docTags_ = nullptr;};
      inline const vector<DocHits::DocTags> & getDocTags() const { DARABONBA_PTR_GET_CONST(docTags_, vector<DocHits::DocTags>) };
      inline vector<DocHits::DocTags> getDocTags() { DARABONBA_PTR_GET(docTags_, vector<DocHits::DocTags>) };
      inline DocHits& setDocTags(const vector<DocHits::DocTags> & docTags) { DARABONBA_PTR_SET_VALUE(docTags_, docTags) };
      inline DocHits& setDocTags(vector<DocHits::DocTags> && docTags) { DARABONBA_PTR_SET_RVALUE(docTags_, docTags) };


      // effectStatus Field Functions 
      bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
      void deleteEffectStatus() { this->effectStatus_ = nullptr;};
      inline int32_t getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, 0) };
      inline DocHits& setEffectStatus(int32_t effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline DocHits& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // knowledgeId Field Functions 
      bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
      void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
      inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
      inline DocHits& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline string getMeta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
      inline DocHits& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline DocHits& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUserId Field Functions 
      bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
      void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
      inline int64_t getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, 0L) };
      inline DocHits& setModifyUserId(int64_t modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


      // modifyUserName Field Functions 
      bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
      void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
      inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
      inline DocHits& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


      // processCanRetry Field Functions 
      bool hasProcessCanRetry() const { return this->processCanRetry_ != nullptr;};
      void deleteProcessCanRetry() { this->processCanRetry_ = nullptr;};
      inline bool getProcessCanRetry() const { DARABONBA_PTR_GET_DEFAULT(processCanRetry_, false) };
      inline DocHits& setProcessCanRetry(bool processCanRetry) { DARABONBA_PTR_SET_VALUE(processCanRetry_, processCanRetry) };


      // processMessage Field Functions 
      bool hasProcessMessage() const { return this->processMessage_ != nullptr;};
      void deleteProcessMessage() { this->processMessage_ = nullptr;};
      inline string getProcessMessage() const { DARABONBA_PTR_GET_DEFAULT(processMessage_, "") };
      inline DocHits& setProcessMessage(string processMessage) { DARABONBA_PTR_SET_VALUE(processMessage_, processMessage) };


      // processStatus Field Functions 
      bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
      void deleteProcessStatus() { this->processStatus_ = nullptr;};
      inline int32_t getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
      inline DocHits& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline DocHits& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline DocHits& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline DocHits& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> bizCode_ {};
      shared_ptr<int64_t> categoryId_ {};
      shared_ptr<string> config_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> createUserId_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<string> docName_ {};
      shared_ptr<vector<DocHits::DocTags>> docTags_ {};
      shared_ptr<int32_t> effectStatus_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<int64_t> knowledgeId_ {};
      shared_ptr<string> meta_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<int64_t> modifyUserId_ {};
      shared_ptr<string> modifyUserName_ {};
      shared_ptr<bool> processCanRetry_ {};
      shared_ptr<string> processMessage_ {};
      shared_ptr<int32_t> processStatus_ {};
      shared_ptr<string> startDate_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->docHits_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // docHits Field Functions 
    bool hasDocHits() const { return this->docHits_ != nullptr;};
    void deleteDocHits() { this->docHits_ = nullptr;};
    inline const vector<SearchDocResponseBody::DocHits> & getDocHits() const { DARABONBA_PTR_GET_CONST(docHits_, vector<SearchDocResponseBody::DocHits>) };
    inline vector<SearchDocResponseBody::DocHits> getDocHits() { DARABONBA_PTR_GET(docHits_, vector<SearchDocResponseBody::DocHits>) };
    inline SearchDocResponseBody& setDocHits(const vector<SearchDocResponseBody::DocHits> & docHits) { DARABONBA_PTR_SET_VALUE(docHits_, docHits) };
    inline SearchDocResponseBody& setDocHits(vector<SearchDocResponseBody::DocHits> && docHits) { DARABONBA_PTR_SET_RVALUE(docHits_, docHits) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchDocResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchDocResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchDocResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchDocResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<SearchDocResponseBody::DocHits>> docHits_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
