// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSystemTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemTemplateList, systemTemplateList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemTemplateList, systemTemplateList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSystemTemplatesResponseBody() = default ;
    ListSystemTemplatesResponseBody(const ListSystemTemplatesResponseBody &) = default ;
    ListSystemTemplatesResponseBody(ListSystemTemplatesResponseBody &&) = default ;
    ListSystemTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemTemplatesResponseBody() = default ;
    ListSystemTemplatesResponseBody& operator=(const ListSystemTemplatesResponseBody &) = default ;
    ListSystemTemplatesResponseBody& operator=(ListSystemTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemTemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemTemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Subtype, subtype_);
        DARABONBA_PTR_TO_JSON(SubtypeName, subtypeName_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      };
      friend void from_json(const Darabonba::Json& j, SystemTemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
        DARABONBA_PTR_FROM_JSON(SubtypeName, subtypeName_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      };
      SystemTemplateList() = default ;
      SystemTemplateList(const SystemTemplateList &) = default ;
      SystemTemplateList(SystemTemplateList &&) = default ;
      SystemTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemTemplateList() = default ;
      SystemTemplateList& operator=(const SystemTemplateList &) = default ;
      SystemTemplateList& operator=(SystemTemplateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->subtype_ == nullptr && this->subtypeName_ == nullptr && this->templateConfig_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr
        && this->type_ == nullptr && this->typeName_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SystemTemplateList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subtype Field Functions 
      bool hasSubtype() const { return this->subtype_ != nullptr;};
      void deleteSubtype() { this->subtype_ = nullptr;};
      inline int32_t getSubtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, 0) };
      inline SystemTemplateList& setSubtype(int32_t subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


      // subtypeName Field Functions 
      bool hasSubtypeName() const { return this->subtypeName_ != nullptr;};
      void deleteSubtypeName() { this->subtypeName_ = nullptr;};
      inline string getSubtypeName() const { DARABONBA_PTR_GET_DEFAULT(subtypeName_, "") };
      inline SystemTemplateList& setSubtypeName(string subtypeName) { DARABONBA_PTR_SET_VALUE(subtypeName_, subtypeName) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline SystemTemplateList& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline SystemTemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline SystemTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline SystemTemplateList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline SystemTemplateList& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    protected:
      // The template state.
      shared_ptr<string> status_ {};
      // The subtype ID of the template.
      shared_ptr<int32_t> subtype_ {};
      // The subtype name of the template.
      shared_ptr<string> subtypeName_ {};
      // The template parameters.
      shared_ptr<string> templateConfig_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The type ID of the template.
      shared_ptr<int32_t> type_ {};
      // The type name of the template.
      shared_ptr<string> typeName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->systemTemplateList_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemTemplateList Field Functions 
    bool hasSystemTemplateList() const { return this->systemTemplateList_ != nullptr;};
    void deleteSystemTemplateList() { this->systemTemplateList_ = nullptr;};
    inline const vector<ListSystemTemplatesResponseBody::SystemTemplateList> & getSystemTemplateList() const { DARABONBA_PTR_GET_CONST(systemTemplateList_, vector<ListSystemTemplatesResponseBody::SystemTemplateList>) };
    inline vector<ListSystemTemplatesResponseBody::SystemTemplateList> getSystemTemplateList() { DARABONBA_PTR_GET(systemTemplateList_, vector<ListSystemTemplatesResponseBody::SystemTemplateList>) };
    inline ListSystemTemplatesResponseBody& setSystemTemplateList(const vector<ListSystemTemplatesResponseBody::SystemTemplateList> & systemTemplateList) { DARABONBA_PTR_SET_VALUE(systemTemplateList_, systemTemplateList) };
    inline ListSystemTemplatesResponseBody& setSystemTemplateList(vector<ListSystemTemplatesResponseBody::SystemTemplateList> && systemTemplateList) { DARABONBA_PTR_SET_RVALUE(systemTemplateList_, systemTemplateList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListSystemTemplatesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried templates.
    shared_ptr<vector<ListSystemTemplatesResponseBody::SystemTemplateList>> systemTemplateList_ {};
    // The total number of templates.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
