// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_SIMPLETEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class SimpleTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonReasons, abandonReasons_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(SharedMode, sharedMode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonReasons, abandonReasons_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(SharedMode, sharedMode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SimpleTemplate() = default ;
    SimpleTemplate(const SimpleTemplate &) = default ;
    SimpleTemplate(SimpleTemplate &&) = default ;
    SimpleTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleTemplate() = default ;
    SimpleTemplate& operator=(const SimpleTemplate &) = default ;
    SimpleTemplate& operator=(SimpleTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abandonReasons_ == nullptr
        && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->sharedMode_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr; };
    // abandonReasons Field Functions 
    bool hasAbandonReasons() const { return this->abandonReasons_ != nullptr;};
    void deleteAbandonReasons() { this->abandonReasons_ = nullptr;};
    inline string getAbandonReasons() const { DARABONBA_PTR_GET_DEFAULT(abandonReasons_, "") };
    inline SimpleTemplate& setAbandonReasons(string abandonReasons) { DARABONBA_PTR_SET_VALUE(abandonReasons_, abandonReasons) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SimpleTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline SimpleTemplate& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline SimpleTemplate& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // sharedMode Field Functions 
    bool hasSharedMode() const { return this->sharedMode_ != nullptr;};
    void deleteSharedMode() { this->sharedMode_ = nullptr;};
    inline string getSharedMode() const { DARABONBA_PTR_GET_DEFAULT(sharedMode_, "") };
    inline SimpleTemplate& setSharedMode(string sharedMode) { DARABONBA_PTR_SET_VALUE(sharedMode_, sharedMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SimpleTemplate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline SimpleTemplate& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SimpleTemplate& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SimpleTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline SimpleTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SimpleTemplate& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SimpleTemplate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Reasons for template deprecation
    shared_ptr<string> abandonReasons_ {};
    // Template description
    shared_ptr<string> description_ {};
    // Creation Time
    shared_ptr<string> gmtCreateTime_ {};
    // Update Time
    shared_ptr<string> gmtModifiedTime_ {};
    // Is shared
    shared_ptr<string> sharedMode_ {};
    // Status
    shared_ptr<string> status_ {};
    // List of tags
    shared_ptr<vector<string>> tags_ {};
    // Template ID
    shared_ptr<string> templateId_ {};
    // Template Name
    shared_ptr<string> templateName_ {};
    // Tenant ID of the template
    shared_ptr<string> tenantId_ {};
    // Type
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
