// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESQLINSTANCEPARAMSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATESQLINSTANCEPARAMSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class UpdateSqlInstanceParamsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSqlInstanceParamsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(combineParams, combineParams_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(dynamicParams, dynamicParams_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(kvpairs, kvpairs_);
      DARABONBA_PTR_TO_JSON(relatedTemplateId, relatedTemplateId_);
      DARABONBA_PTR_TO_JSON(staticParams, staticParams_);
      DARABONBA_PTR_TO_JSON(templateParams, templateParams_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSqlInstanceParamsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(combineParams, combineParams_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(dynamicParams, dynamicParams_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(kvpairs, kvpairs_);
      DARABONBA_PTR_FROM_JSON(relatedTemplateId, relatedTemplateId_);
      DARABONBA_PTR_FROM_JSON(staticParams, staticParams_);
      DARABONBA_PTR_FROM_JSON(templateParams, templateParams_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpdateSqlInstanceParamsResponseBodyResult() = default ;
    UpdateSqlInstanceParamsResponseBodyResult(const UpdateSqlInstanceParamsResponseBodyResult &) = default ;
    UpdateSqlInstanceParamsResponseBodyResult(UpdateSqlInstanceParamsResponseBodyResult &&) = default ;
    UpdateSqlInstanceParamsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSqlInstanceParamsResponseBodyResult() = default ;
    UpdateSqlInstanceParamsResponseBodyResult& operator=(const UpdateSqlInstanceParamsResponseBodyResult &) = default ;
    UpdateSqlInstanceParamsResponseBodyResult& operator=(UpdateSqlInstanceParamsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->combineParams_ != nullptr
        && this->comment_ != nullptr && this->content_ != nullptr && this->dynamicParams_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->instanceId_ != nullptr && this->kvpairs_ != nullptr && this->relatedTemplateId_ != nullptr && this->staticParams_ != nullptr && this->templateParams_ != nullptr
        && this->version_ != nullptr; };
    // combineParams Field Functions 
    bool hasCombineParams() const { return this->combineParams_ != nullptr;};
    void deleteCombineParams() { this->combineParams_ = nullptr;};
    inline string combineParams() const { DARABONBA_PTR_GET_DEFAULT(combineParams_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setCombineParams(string combineParams) { DARABONBA_PTR_SET_VALUE(combineParams_, combineParams) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dynamicParams Field Functions 
    bool hasDynamicParams() const { return this->dynamicParams_ != nullptr;};
    void deleteDynamicParams() { this->dynamicParams_ = nullptr;};
    inline string dynamicParams() const { DARABONBA_PTR_GET_DEFAULT(dynamicParams_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setDynamicParams(string dynamicParams) { DARABONBA_PTR_SET_VALUE(dynamicParams_, dynamicParams) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline UpdateSqlInstanceParamsResponseBodyResult& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kvpairs Field Functions 
    bool hasKvpairs() const { return this->kvpairs_ != nullptr;};
    void deleteKvpairs() { this->kvpairs_ = nullptr;};
    inline string kvpairs() const { DARABONBA_PTR_GET_DEFAULT(kvpairs_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setKvpairs(string kvpairs) { DARABONBA_PTR_SET_VALUE(kvpairs_, kvpairs) };


    // relatedTemplateId Field Functions 
    bool hasRelatedTemplateId() const { return this->relatedTemplateId_ != nullptr;};
    void deleteRelatedTemplateId() { this->relatedTemplateId_ = nullptr;};
    inline int64_t relatedTemplateId() const { DARABONBA_PTR_GET_DEFAULT(relatedTemplateId_, 0L) };
    inline UpdateSqlInstanceParamsResponseBodyResult& setRelatedTemplateId(int64_t relatedTemplateId) { DARABONBA_PTR_SET_VALUE(relatedTemplateId_, relatedTemplateId) };


    // staticParams Field Functions 
    bool hasStaticParams() const { return this->staticParams_ != nullptr;};
    void deleteStaticParams() { this->staticParams_ = nullptr;};
    inline string staticParams() const { DARABONBA_PTR_GET_DEFAULT(staticParams_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setStaticParams(string staticParams) { DARABONBA_PTR_SET_VALUE(staticParams_, staticParams) };


    // templateParams Field Functions 
    bool hasTemplateParams() const { return this->templateParams_ != nullptr;};
    void deleteTemplateParams() { this->templateParams_ = nullptr;};
    inline string templateParams() const { DARABONBA_PTR_GET_DEFAULT(templateParams_, "") };
    inline UpdateSqlInstanceParamsResponseBodyResult& setTemplateParams(string templateParams) { DARABONBA_PTR_SET_VALUE(templateParams_, templateParams) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline UpdateSqlInstanceParamsResponseBodyResult& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> combineParams_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> dynamicParams_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<string> kvpairs_ = nullptr;
    std::shared_ptr<int64_t> relatedTemplateId_ = nullptr;
    std::shared_ptr<string> staticParams_ = nullptr;
    std::shared_ptr<string> templateParams_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
