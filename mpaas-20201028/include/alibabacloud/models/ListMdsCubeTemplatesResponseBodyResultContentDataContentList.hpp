// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMDSCUBETEMPLATESRESPONSEBODYRESULTCONTENTDATACONTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMDSCUBETEMPLATESRESPONSEBODYRESULTCONTENTDATACONTENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMdsCubeTemplatesResponseBodyResultContentDataContentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMdsCubeTemplatesResponseBodyResultContentDataContentList& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateDesc, templateDesc_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMdsCubeTemplatesResponseBodyResultContentDataContentList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateDesc, templateDesc_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ListMdsCubeTemplatesResponseBodyResultContentDataContentList() = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContentList(const ListMdsCubeTemplatesResponseBodyResultContentDataContentList &) = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContentList(ListMdsCubeTemplatesResponseBodyResultContentDataContentList &&) = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMdsCubeTemplatesResponseBodyResultContentDataContentList() = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContentList& operator=(const ListMdsCubeTemplatesResponseBodyResultContentDataContentList &) = default ;
    ListMdsCubeTemplatesResponseBodyResultContentDataContentList& operator=(ListMdsCubeTemplatesResponseBodyResultContentDataContentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->status_ == nullptr && return this->templateDesc_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContentList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContentList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContentList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContentList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContentList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateDesc Field Functions 
    bool hasTemplateDesc() const { return this->templateDesc_ != nullptr;};
    void deleteTemplateDesc() { this->templateDesc_ = nullptr;};
    inline string templateDesc() const { DARABONBA_PTR_GET_DEFAULT(templateDesc_, "") };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContentList& setTemplateDesc(string templateDesc) { DARABONBA_PTR_SET_VALUE(templateDesc_, templateDesc) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContentList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListMdsCubeTemplatesResponseBodyResultContentDataContentList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> templateDesc_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
