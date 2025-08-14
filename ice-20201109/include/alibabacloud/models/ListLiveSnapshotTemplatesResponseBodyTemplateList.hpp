// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTTEMPLATESRESPONSEBODYTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTTEMPLATESRESPONSEBODYTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveSnapshotTemplatesResponseBodyTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveSnapshotTemplatesResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveSnapshotTemplatesResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLiveSnapshotTemplatesResponseBodyTemplateList() = default ;
    ListLiveSnapshotTemplatesResponseBodyTemplateList(const ListLiveSnapshotTemplatesResponseBodyTemplateList &) = default ;
    ListLiveSnapshotTemplatesResponseBodyTemplateList(ListLiveSnapshotTemplatesResponseBodyTemplateList &&) = default ;
    ListLiveSnapshotTemplatesResponseBodyTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveSnapshotTemplatesResponseBodyTemplateList() = default ;
    ListLiveSnapshotTemplatesResponseBodyTemplateList& operator=(const ListLiveSnapshotTemplatesResponseBodyTemplateList &) = default ;
    ListLiveSnapshotTemplatesResponseBodyTemplateList& operator=(ListLiveSnapshotTemplatesResponseBodyTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->templateId_ != nullptr && this->templateName_ != nullptr && this->timeInterval_ != nullptr && this->type_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLiveSnapshotTemplatesResponseBodyTemplateList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListLiveSnapshotTemplatesResponseBodyTemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListLiveSnapshotTemplatesResponseBodyTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline ListLiveSnapshotTemplatesResponseBodyTemplateList& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLiveSnapshotTemplatesResponseBodyTemplateList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The interval between two adjacent snapshots. Unit: seconds.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
    // The type of the template.
    // 
    // Valid values:
    // 
    // *   system
    // *   custom
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
