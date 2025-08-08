// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEREVISION_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEREVISION_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/TemplateRevisionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateRevision : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateRevision& obj) { 
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateRevision& obj) { 
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    TemplateRevision() = default ;
    TemplateRevision(const TemplateRevision &) = default ;
    TemplateRevision(TemplateRevision &&) = default ;
    TemplateRevision(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateRevision() = default ;
    TemplateRevision& operator=(const TemplateRevision &) = default ;
    TemplateRevision& operator=(TemplateRevision &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->description_ != nullptr && this->kind_ != nullptr && this->labels_ != nullptr && this->name_ != nullptr && this->spec_ != nullptr
        && this->status_ != nullptr && this->templateName_ != nullptr && this->uid_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline TemplateRevision& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TemplateRevision& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline TemplateRevision& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline TemplateRevision& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline TemplateRevision& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TemplateRevision& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const TemplateSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, TemplateSpec) };
    inline TemplateSpec spec() { DARABONBA_PTR_GET(spec_, TemplateSpec) };
    inline TemplateRevision& setSpec(const TemplateSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline TemplateRevision& setSpec(TemplateSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const TemplateRevisionStatus & status() const { DARABONBA_PTR_GET_CONST(status_, TemplateRevisionStatus) };
    inline TemplateRevisionStatus status() { DARABONBA_PTR_GET(status_, TemplateRevisionStatus) };
    inline TemplateRevision& setStatus(const TemplateRevisionStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline TemplateRevision& setStatus(TemplateRevisionStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline TemplateRevision& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline TemplateRevision& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> kind_ = nullptr;
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<TemplateSpec> spec_ = nullptr;
    std::shared_ptr<TemplateRevisionStatus> status_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
