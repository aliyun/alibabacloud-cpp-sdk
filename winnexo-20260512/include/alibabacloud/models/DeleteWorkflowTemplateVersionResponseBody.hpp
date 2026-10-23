// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKFLOWTEMPLATEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKFLOWTEMPLATEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class DeleteWorkflowTemplateVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkflowTemplateVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(effectiveVersion, effectiveVersion_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkflowTemplateVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(effectiveVersion, effectiveVersion_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    DeleteWorkflowTemplateVersionResponseBody() = default ;
    DeleteWorkflowTemplateVersionResponseBody(const DeleteWorkflowTemplateVersionResponseBody &) = default ;
    DeleteWorkflowTemplateVersionResponseBody(DeleteWorkflowTemplateVersionResponseBody &&) = default ;
    DeleteWorkflowTemplateVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkflowTemplateVersionResponseBody() = default ;
    DeleteWorkflowTemplateVersionResponseBody& operator=(const DeleteWorkflowTemplateVersionResponseBody &) = default ;
    DeleteWorkflowTemplateVersionResponseBody& operator=(DeleteWorkflowTemplateVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(createdByUserId, createdByUserId_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(gmtSubmitted, gmtSubmitted_);
        DARABONBA_PTR_TO_JSON(isEffective, isEffective_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(sourceVersion, sourceVersion_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(stepCount, stepCount_);
        DARABONBA_PTR_TO_JSON(submittedByUserId, submittedByUserId_);
        DARABONBA_PTR_TO_JSON(updatedByUserId, updatedByUserId_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(createdByUserId, createdByUserId_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(gmtSubmitted, gmtSubmitted_);
        DARABONBA_PTR_FROM_JSON(isEffective, isEffective_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(sourceVersion, sourceVersion_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(stepCount, stepCount_);
        DARABONBA_PTR_FROM_JSON(submittedByUserId, submittedByUserId_);
        DARABONBA_PTR_FROM_JSON(updatedByUserId, updatedByUserId_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdByUserId_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->gmtSubmitted_ == nullptr && this->isEffective_ == nullptr
        && this->name_ == nullptr && this->sourceVersion_ == nullptr && this->status_ == nullptr && this->stepCount_ == nullptr && this->submittedByUserId_ == nullptr
        && this->updatedByUserId_ == nullptr && this->version_ == nullptr && this->versionDescription_ == nullptr; };
      // createdByUserId Field Functions 
      bool hasCreatedByUserId() const { return this->createdByUserId_ != nullptr;};
      void deleteCreatedByUserId() { this->createdByUserId_ = nullptr;};
      inline int64_t getCreatedByUserId() const { DARABONBA_PTR_GET_DEFAULT(createdByUserId_, 0L) };
      inline Items& setCreatedByUserId(int64_t createdByUserId) { DARABONBA_PTR_SET_VALUE(createdByUserId_, createdByUserId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // gmtSubmitted Field Functions 
      bool hasGmtSubmitted() const { return this->gmtSubmitted_ != nullptr;};
      void deleteGmtSubmitted() { this->gmtSubmitted_ = nullptr;};
      inline string getGmtSubmitted() const { DARABONBA_PTR_GET_DEFAULT(gmtSubmitted_, "") };
      inline Items& setGmtSubmitted(string gmtSubmitted) { DARABONBA_PTR_SET_VALUE(gmtSubmitted_, gmtSubmitted) };


      // isEffective Field Functions 
      bool hasIsEffective() const { return this->isEffective_ != nullptr;};
      void deleteIsEffective() { this->isEffective_ = nullptr;};
      inline bool getIsEffective() const { DARABONBA_PTR_GET_DEFAULT(isEffective_, false) };
      inline Items& setIsEffective(bool isEffective) { DARABONBA_PTR_SET_VALUE(isEffective_, isEffective) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sourceVersion Field Functions 
      bool hasSourceVersion() const { return this->sourceVersion_ != nullptr;};
      void deleteSourceVersion() { this->sourceVersion_ = nullptr;};
      inline string getSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceVersion_, "") };
      inline Items& setSourceVersion(string sourceVersion) { DARABONBA_PTR_SET_VALUE(sourceVersion_, sourceVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stepCount Field Functions 
      bool hasStepCount() const { return this->stepCount_ != nullptr;};
      void deleteStepCount() { this->stepCount_ = nullptr;};
      inline int64_t getStepCount() const { DARABONBA_PTR_GET_DEFAULT(stepCount_, 0L) };
      inline Items& setStepCount(int64_t stepCount) { DARABONBA_PTR_SET_VALUE(stepCount_, stepCount) };


      // submittedByUserId Field Functions 
      bool hasSubmittedByUserId() const { return this->submittedByUserId_ != nullptr;};
      void deleteSubmittedByUserId() { this->submittedByUserId_ = nullptr;};
      inline int64_t getSubmittedByUserId() const { DARABONBA_PTR_GET_DEFAULT(submittedByUserId_, 0L) };
      inline Items& setSubmittedByUserId(int64_t submittedByUserId) { DARABONBA_PTR_SET_VALUE(submittedByUserId_, submittedByUserId) };


      // updatedByUserId Field Functions 
      bool hasUpdatedByUserId() const { return this->updatedByUserId_ != nullptr;};
      void deleteUpdatedByUserId() { this->updatedByUserId_ = nullptr;};
      inline int64_t getUpdatedByUserId() const { DARABONBA_PTR_GET_DEFAULT(updatedByUserId_, 0L) };
      inline Items& setUpdatedByUserId(int64_t updatedByUserId) { DARABONBA_PTR_SET_VALUE(updatedByUserId_, updatedByUserId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Items& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionDescription Field Functions 
      bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
      void deleteVersionDescription() { this->versionDescription_ = nullptr;};
      inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
      inline Items& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    protected:
      // The ID of the user who created the version.
      shared_ptr<int64_t> createdByUserId_ {};
      // The description of the template for this version. This can be used for display when version v1 has no version description.
      shared_ptr<string> description_ {};
      // The time when the version was created. The time is in the ISO 8601 format.
      shared_ptr<string> gmtCreate_ {};
      // The time when the version was modified. The time is in the ISO 8601 format.
      shared_ptr<string> gmtModified_ {};
      // The time when the version was submitted. The time is in the ISO 8601 format. This is empty for a draft.
      shared_ptr<string> gmtSubmitted_ {};
      // Indicates whether the version is the only current active version.
      shared_ptr<bool> isEffective_ {};
      // The name of the template for this version.
      shared_ptr<string> name_ {};
      // The submitted version number on which this version is based. This is empty for a newly created v1 version. Saving or submitting a draft retains the original source version.
      shared_ptr<string> sourceVersion_ {};
      // The version status. Valid values: DRAFT (draft) and SUBMITTED (submitted).
      shared_ptr<string> status_ {};
      // The number of steps in this version.
      shared_ptr<int64_t> stepCount_ {};
      // The ID of the user who submitted the version. This is empty for a draft.
      shared_ptr<int64_t> submittedByUserId_ {};
      // The ID of the user who last modified the version.
      shared_ptr<int64_t> updatedByUserId_ {};
      // The version number.
      shared_ptr<string> version_ {};
      // The persisted version change description. An empty value indicates that no description is provided.
      shared_ptr<string> versionDescription_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->effectiveVersion_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->templateId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteWorkflowTemplateVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // effectiveVersion Field Functions 
    bool hasEffectiveVersion() const { return this->effectiveVersion_ != nullptr;};
    void deleteEffectiveVersion() { this->effectiveVersion_ = nullptr;};
    inline string getEffectiveVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveVersion_, "") };
    inline DeleteWorkflowTemplateVersionResponseBody& setEffectiveVersion(string effectiveVersion) { DARABONBA_PTR_SET_VALUE(effectiveVersion_, effectiveVersion) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DeleteWorkflowTemplateVersionResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DeleteWorkflowTemplateVersionResponseBody::Items>) };
    inline vector<DeleteWorkflowTemplateVersionResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DeleteWorkflowTemplateVersionResponseBody::Items>) };
    inline DeleteWorkflowTemplateVersionResponseBody& setItems(const vector<DeleteWorkflowTemplateVersionResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DeleteWorkflowTemplateVersionResponseBody& setItems(vector<DeleteWorkflowTemplateVersionResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteWorkflowTemplateVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteWorkflowTemplateVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DeleteWorkflowTemplateVersionResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The current active version number. An empty value indicates that only a draft exists.
    shared_ptr<string> effectiveVersion_ {};
    // All remaining versions after deletion, sorted in descending order by version number.
    shared_ptr<vector<DeleteWorkflowTemplateVersionResponseBody::Items>> items_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
    // The ID of the template.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
