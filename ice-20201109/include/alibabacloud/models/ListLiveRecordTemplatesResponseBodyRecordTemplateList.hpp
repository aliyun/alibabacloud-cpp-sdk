// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDTEMPLATESRESPONSEBODYRECORDTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDTEMPLATESRESPONSEBODYRECORDTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveRecordTemplatesResponseBodyRecordTemplateListRecordFormatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordTemplatesResponseBodyRecordTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordTemplatesResponseBodyRecordTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordFormatList, recordFormatList_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordTemplatesResponseBodyRecordTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordFormatList, recordFormatList_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLiveRecordTemplatesResponseBodyRecordTemplateList() = default ;
    ListLiveRecordTemplatesResponseBodyRecordTemplateList(const ListLiveRecordTemplatesResponseBodyRecordTemplateList &) = default ;
    ListLiveRecordTemplatesResponseBodyRecordTemplateList(ListLiveRecordTemplatesResponseBodyRecordTemplateList &&) = default ;
    ListLiveRecordTemplatesResponseBodyRecordTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordTemplatesResponseBodyRecordTemplateList() = default ;
    ListLiveRecordTemplatesResponseBodyRecordTemplateList& operator=(const ListLiveRecordTemplatesResponseBodyRecordTemplateList &) = default ;
    ListLiveRecordTemplatesResponseBodyRecordTemplateList& operator=(ListLiveRecordTemplatesResponseBodyRecordTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->lastModified_ != nullptr && this->name_ != nullptr && this->recordFormatList_ != nullptr && this->templateId_ != nullptr && this->type_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLiveRecordTemplatesResponseBodyRecordTemplateList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline ListLiveRecordTemplatesResponseBodyRecordTemplateList& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLiveRecordTemplatesResponseBodyRecordTemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordFormatList Field Functions 
    bool hasRecordFormatList() const { return this->recordFormatList_ != nullptr;};
    void deleteRecordFormatList() { this->recordFormatList_ = nullptr;};
    inline const vector<Models::ListLiveRecordTemplatesResponseBodyRecordTemplateListRecordFormatList> & recordFormatList() const { DARABONBA_PTR_GET_CONST(recordFormatList_, vector<Models::ListLiveRecordTemplatesResponseBodyRecordTemplateListRecordFormatList>) };
    inline vector<Models::ListLiveRecordTemplatesResponseBodyRecordTemplateListRecordFormatList> recordFormatList() { DARABONBA_PTR_GET(recordFormatList_, vector<Models::ListLiveRecordTemplatesResponseBodyRecordTemplateListRecordFormatList>) };
    inline ListLiveRecordTemplatesResponseBodyRecordTemplateList& setRecordFormatList(const vector<Models::ListLiveRecordTemplatesResponseBodyRecordTemplateListRecordFormatList> & recordFormatList) { DARABONBA_PTR_SET_VALUE(recordFormatList_, recordFormatList) };
    inline ListLiveRecordTemplatesResponseBodyRecordTemplateList& setRecordFormatList(vector<Models::ListLiveRecordTemplatesResponseBodyRecordTemplateListRecordFormatList> && recordFormatList) { DARABONBA_PTR_SET_RVALUE(recordFormatList_, recordFormatList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListLiveRecordTemplatesResponseBodyRecordTemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLiveRecordTemplatesResponseBodyRecordTemplateList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the job was created.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the template was last modified.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> lastModified_ = nullptr;
    // The template name.
    std::shared_ptr<string> name_ = nullptr;
    // The list of recording formats.
    std::shared_ptr<vector<Models::ListLiveRecordTemplatesResponseBodyRecordTemplateListRecordFormatList>> recordFormatList_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The type of the template.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
