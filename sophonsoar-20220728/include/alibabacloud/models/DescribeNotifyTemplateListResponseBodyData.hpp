// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTIFYTEMPLATELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTIFYTEMPLATELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeNotifyTemplateListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNotifyTemplateListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNotifyTemplateListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DescribeNotifyTemplateListResponseBodyData() = default ;
    DescribeNotifyTemplateListResponseBodyData(const DescribeNotifyTemplateListResponseBodyData &) = default ;
    DescribeNotifyTemplateListResponseBodyData(DescribeNotifyTemplateListResponseBodyData &&) = default ;
    DescribeNotifyTemplateListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNotifyTemplateListResponseBodyData() = default ;
    DescribeNotifyTemplateListResponseBodyData& operator=(const DescribeNotifyTemplateListResponseBodyData &) = default ;
    DescribeNotifyTemplateListResponseBodyData& operator=(DescribeNotifyTemplateListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->eventId_ == nullptr && return this->params_ == nullptr && return this->subject_ == nullptr && return this->templateName_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeNotifyTemplateListResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeNotifyTemplateListResponseBodyData& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeNotifyTemplateListResponseBodyData& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline DescribeNotifyTemplateListResponseBodyData& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeNotifyTemplateListResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The body of the template.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the message event corresponding to the template.
    std::shared_ptr<string> eventId_ = nullptr;
    // The parameters of the template.
    std::shared_ptr<string> params_ = nullptr;
    // The title of the template.
    std::shared_ptr<string> subject_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
