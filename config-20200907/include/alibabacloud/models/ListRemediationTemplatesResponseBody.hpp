// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RemediationTemplates, remediationTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RemediationTemplates, remediationTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRemediationTemplatesResponseBody() = default ;
    ListRemediationTemplatesResponseBody(const ListRemediationTemplatesResponseBody &) = default ;
    ListRemediationTemplatesResponseBody(ListRemediationTemplatesResponseBody &&) = default ;
    ListRemediationTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationTemplatesResponseBody() = default ;
    ListRemediationTemplatesResponseBody& operator=(const ListRemediationTemplatesResponseBody &) = default ;
    ListRemediationTemplatesResponseBody& operator=(ListRemediationTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemediationTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemediationTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
        DARABONBA_PTR_TO_JSON(TemplateDefinition, templateDefinition_);
        DARABONBA_PTR_TO_JSON(TemplateDescription, templateDescription_);
        DARABONBA_PTR_TO_JSON(TemplateIdentifier, templateIdentifier_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, RemediationTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
        DARABONBA_PTR_FROM_JSON(TemplateDefinition, templateDefinition_);
        DARABONBA_PTR_FROM_JSON(TemplateDescription, templateDescription_);
        DARABONBA_PTR_FROM_JSON(TemplateIdentifier, templateIdentifier_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      RemediationTemplates() = default ;
      RemediationTemplates(const RemediationTemplates &) = default ;
      RemediationTemplates(RemediationTemplates &&) = default ;
      RemediationTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemediationTemplates() = default ;
      RemediationTemplates& operator=(const RemediationTemplates &) = default ;
      RemediationTemplates& operator=(RemediationTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->remediationType_ == nullptr
        && this->templateDefinition_ == nullptr && this->templateDescription_ == nullptr && this->templateIdentifier_ == nullptr && this->templateName_ == nullptr; };
      // remediationType Field Functions 
      bool hasRemediationType() const { return this->remediationType_ != nullptr;};
      void deleteRemediationType() { this->remediationType_ = nullptr;};
      inline string getRemediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
      inline RemediationTemplates& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


      // templateDefinition Field Functions 
      bool hasTemplateDefinition() const { return this->templateDefinition_ != nullptr;};
      void deleteTemplateDefinition() { this->templateDefinition_ = nullptr;};
      inline string getTemplateDefinition() const { DARABONBA_PTR_GET_DEFAULT(templateDefinition_, "") };
      inline RemediationTemplates& setTemplateDefinition(string templateDefinition) { DARABONBA_PTR_SET_VALUE(templateDefinition_, templateDefinition) };


      // templateDescription Field Functions 
      bool hasTemplateDescription() const { return this->templateDescription_ != nullptr;};
      void deleteTemplateDescription() { this->templateDescription_ = nullptr;};
      inline string getTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(templateDescription_, "") };
      inline RemediationTemplates& setTemplateDescription(string templateDescription) { DARABONBA_PTR_SET_VALUE(templateDescription_, templateDescription) };


      // templateIdentifier Field Functions 
      bool hasTemplateIdentifier() const { return this->templateIdentifier_ != nullptr;};
      void deleteTemplateIdentifier() { this->templateIdentifier_ = nullptr;};
      inline string getTemplateIdentifier() const { DARABONBA_PTR_GET_DEFAULT(templateIdentifier_, "") };
      inline RemediationTemplates& setTemplateIdentifier(string templateIdentifier) { DARABONBA_PTR_SET_VALUE(templateIdentifier_, templateIdentifier) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline RemediationTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The type of the remediation template. Valid value: OOS, which indicates Operation Orchestration Service.
      shared_ptr<string> remediationType_ {};
      // The definition of the remediation template.
      shared_ptr<string> templateDefinition_ {};
      // The description of the remediation template.
      shared_ptr<string> templateDescription_ {};
      // The ID of the remediation template.
      shared_ptr<string> templateIdentifier_ {};
      // The name of the remediation template.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->remediationTemplates_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRemediationTemplatesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRemediationTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remediationTemplates Field Functions 
    bool hasRemediationTemplates() const { return this->remediationTemplates_ != nullptr;};
    void deleteRemediationTemplates() { this->remediationTemplates_ = nullptr;};
    inline const vector<ListRemediationTemplatesResponseBody::RemediationTemplates> & getRemediationTemplates() const { DARABONBA_PTR_GET_CONST(remediationTemplates_, vector<ListRemediationTemplatesResponseBody::RemediationTemplates>) };
    inline vector<ListRemediationTemplatesResponseBody::RemediationTemplates> getRemediationTemplates() { DARABONBA_PTR_GET(remediationTemplates_, vector<ListRemediationTemplatesResponseBody::RemediationTemplates>) };
    inline ListRemediationTemplatesResponseBody& setRemediationTemplates(const vector<ListRemediationTemplatesResponseBody::RemediationTemplates> & remediationTemplates) { DARABONBA_PTR_SET_VALUE(remediationTemplates_, remediationTemplates) };
    inline ListRemediationTemplatesResponseBody& setRemediationTemplates(vector<ListRemediationTemplatesResponseBody::RemediationTemplates> && remediationTemplates) { DARABONBA_PTR_SET_RVALUE(remediationTemplates_, remediationTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemediationTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRemediationTemplatesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The queried remediation templates.
    shared_ptr<vector<ListRemediationTemplatesResponseBody::RemediationTemplates>> remediationTemplates_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of remediation templates.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
