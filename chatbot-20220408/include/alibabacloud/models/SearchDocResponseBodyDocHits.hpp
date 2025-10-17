// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDOCRESPONSEBODYDOCHITS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDOCRESPONSEBODYDOCHITS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchDocResponseBodyDocHitsDocTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class SearchDocResponseBodyDocHits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDocResponseBodyDocHits& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SearchDocResponseBodyDocHits& obj) { 
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
    SearchDocResponseBodyDocHits() = default ;
    SearchDocResponseBodyDocHits(const SearchDocResponseBodyDocHits &) = default ;
    SearchDocResponseBodyDocHits(SearchDocResponseBodyDocHits &&) = default ;
    SearchDocResponseBodyDocHits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDocResponseBodyDocHits() = default ;
    SearchDocResponseBodyDocHits& operator=(const SearchDocResponseBodyDocHits &) = default ;
    SearchDocResponseBodyDocHits& operator=(SearchDocResponseBodyDocHits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->categoryId_ == nullptr && return this->config_ == nullptr && return this->createTime_ == nullptr && return this->createUserId_ == nullptr && return this->createUserName_ == nullptr
        && return this->docName_ == nullptr && return this->docTags_ == nullptr && return this->effectStatus_ == nullptr && return this->endDate_ == nullptr && return this->knowledgeId_ == nullptr
        && return this->meta_ == nullptr && return this->modifyTime_ == nullptr && return this->modifyUserId_ == nullptr && return this->modifyUserName_ == nullptr && return this->processCanRetry_ == nullptr
        && return this->processMessage_ == nullptr && return this->processStatus_ == nullptr && return this->startDate_ == nullptr && return this->status_ == nullptr && return this->url_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline SearchDocResponseBodyDocHits& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline SearchDocResponseBodyDocHits& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline SearchDocResponseBodyDocHits& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SearchDocResponseBodyDocHits& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline int64_t createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
    inline SearchDocResponseBodyDocHits& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline SearchDocResponseBodyDocHits& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline SearchDocResponseBodyDocHits& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docTags Field Functions 
    bool hasDocTags() const { return this->docTags_ != nullptr;};
    void deleteDocTags() { this->docTags_ = nullptr;};
    inline const vector<Models::SearchDocResponseBodyDocHitsDocTags> & docTags() const { DARABONBA_PTR_GET_CONST(docTags_, vector<Models::SearchDocResponseBodyDocHitsDocTags>) };
    inline vector<Models::SearchDocResponseBodyDocHitsDocTags> docTags() { DARABONBA_PTR_GET(docTags_, vector<Models::SearchDocResponseBodyDocHitsDocTags>) };
    inline SearchDocResponseBodyDocHits& setDocTags(const vector<Models::SearchDocResponseBodyDocHitsDocTags> & docTags) { DARABONBA_PTR_SET_VALUE(docTags_, docTags) };
    inline SearchDocResponseBodyDocHits& setDocTags(vector<Models::SearchDocResponseBodyDocHitsDocTags> && docTags) { DARABONBA_PTR_SET_RVALUE(docTags_, docTags) };


    // effectStatus Field Functions 
    bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
    void deleteEffectStatus() { this->effectStatus_ = nullptr;};
    inline int32_t effectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, 0) };
    inline SearchDocResponseBodyDocHits& setEffectStatus(int32_t effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline SearchDocResponseBodyDocHits& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline SearchDocResponseBodyDocHits& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline SearchDocResponseBodyDocHits& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline SearchDocResponseBodyDocHits& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline int64_t modifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, 0L) };
    inline SearchDocResponseBodyDocHits& setModifyUserId(int64_t modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline SearchDocResponseBodyDocHits& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // processCanRetry Field Functions 
    bool hasProcessCanRetry() const { return this->processCanRetry_ != nullptr;};
    void deleteProcessCanRetry() { this->processCanRetry_ = nullptr;};
    inline bool processCanRetry() const { DARABONBA_PTR_GET_DEFAULT(processCanRetry_, false) };
    inline SearchDocResponseBodyDocHits& setProcessCanRetry(bool processCanRetry) { DARABONBA_PTR_SET_VALUE(processCanRetry_, processCanRetry) };


    // processMessage Field Functions 
    bool hasProcessMessage() const { return this->processMessage_ != nullptr;};
    void deleteProcessMessage() { this->processMessage_ = nullptr;};
    inline string processMessage() const { DARABONBA_PTR_GET_DEFAULT(processMessage_, "") };
    inline SearchDocResponseBodyDocHits& setProcessMessage(string processMessage) { DARABONBA_PTR_SET_VALUE(processMessage_, processMessage) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int32_t processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
    inline SearchDocResponseBodyDocHits& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline SearchDocResponseBodyDocHits& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SearchDocResponseBodyDocHits& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SearchDocResponseBodyDocHits& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> bizCode_ = nullptr;
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createUserId_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<vector<Models::SearchDocResponseBodyDocHitsDocTags>> docTags_ = nullptr;
    std::shared_ptr<int32_t> effectStatus_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int64_t> knowledgeId_ = nullptr;
    std::shared_ptr<string> meta_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<int64_t> modifyUserId_ = nullptr;
    std::shared_ptr<string> modifyUserName_ = nullptr;
    std::shared_ptr<bool> processCanRetry_ = nullptr;
    std::shared_ptr<string> processMessage_ = nullptr;
    std::shared_ptr<int32_t> processStatus_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
