// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATEPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATEPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTemplatePageListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatePageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(ruleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(templateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(templateType, templateType_);
      DARABONBA_PTR_TO_JSON(userCount, userCount_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatePageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(ruleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(templateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(templateType, templateType_);
      DARABONBA_PTR_FROM_JSON(userCount, userCount_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeTemplatePageListResponseBodyResultObject() = default ;
    DescribeTemplatePageListResponseBodyResultObject(const DescribeTemplatePageListResponseBodyResultObject &) = default ;
    DescribeTemplatePageListResponseBodyResultObject(DescribeTemplatePageListResponseBodyResultObject &&) = default ;
    DescribeTemplatePageListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatePageListResponseBodyResultObject() = default ;
    DescribeTemplatePageListResponseBodyResultObject& operator=(const DescribeTemplatePageListResponseBodyResultObject &) = default ;
    DescribeTemplatePageListResponseBodyResultObject& operator=(DescribeTemplatePageListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->eventCode_ == nullptr && return this->eventName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->ruleCount_ == nullptr && return this->templateCode_ == nullptr && return this->templateName_ == nullptr && return this->templateStatus_ == nullptr && return this->templateType_ == nullptr
        && return this->userCount_ == nullptr && return this->version_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTemplatePageListResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeTemplatePageListResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeTemplatePageListResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeTemplatePageListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeTemplatePageListResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeTemplatePageListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline DescribeTemplatePageListResponseBodyResultObject& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline DescribeTemplatePageListResponseBodyResultObject& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeTemplatePageListResponseBodyResultObject& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline string templateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
    inline DescribeTemplatePageListResponseBodyResultObject& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeTemplatePageListResponseBodyResultObject& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t userCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline DescribeTemplatePageListResponseBodyResultObject& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeTemplatePageListResponseBodyResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Template ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Number of policies
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // Template code.
    std::shared_ptr<string> templateCode_ = nullptr;
    // Template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // Event status
    std::shared_ptr<string> templateStatus_ = nullptr;
    // Template type
    std::shared_ptr<string> templateType_ = nullptr;
    // Number of customer authorizations
    std::shared_ptr<int32_t> userCount_ = nullptr;
    // Version number.
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
