// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFYTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFYTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertNotifyTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotifyTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateIds, alertNotifyTemplateIds_);
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(programLang, programLang_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotifyTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateIds, alertNotifyTemplateIds_);
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(programLang, programLang_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAlertNotifyTemplatesRequest() = default ;
    ListAlertNotifyTemplatesRequest(const ListAlertNotifyTemplatesRequest &) = default ;
    ListAlertNotifyTemplatesRequest(ListAlertNotifyTemplatesRequest &&) = default ;
    ListAlertNotifyTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotifyTemplatesRequest() = default ;
    ListAlertNotifyTemplatesRequest& operator=(const ListAlertNotifyTemplatesRequest &) = default ;
    ListAlertNotifyTemplatesRequest& operator=(ListAlertNotifyTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertNotifyTemplateIds_ == nullptr
        && this->alertNotifyTemplateName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->programLang_ == nullptr && this->type_ == nullptr; };
    // alertNotifyTemplateIds Field Functions 
    bool hasAlertNotifyTemplateIds() const { return this->alertNotifyTemplateIds_ != nullptr;};
    void deleteAlertNotifyTemplateIds() { this->alertNotifyTemplateIds_ = nullptr;};
    inline const vector<string> & getAlertNotifyTemplateIds() const { DARABONBA_PTR_GET_CONST(alertNotifyTemplateIds_, vector<string>) };
    inline vector<string> getAlertNotifyTemplateIds() { DARABONBA_PTR_GET(alertNotifyTemplateIds_, vector<string>) };
    inline ListAlertNotifyTemplatesRequest& setAlertNotifyTemplateIds(const vector<string> & alertNotifyTemplateIds) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateIds_, alertNotifyTemplateIds) };
    inline ListAlertNotifyTemplatesRequest& setAlertNotifyTemplateIds(vector<string> && alertNotifyTemplateIds) { DARABONBA_PTR_SET_RVALUE(alertNotifyTemplateIds_, alertNotifyTemplateIds) };


    // alertNotifyTemplateName Field Functions 
    bool hasAlertNotifyTemplateName() const { return this->alertNotifyTemplateName_ != nullptr;};
    void deleteAlertNotifyTemplateName() { this->alertNotifyTemplateName_ = nullptr;};
    inline string getAlertNotifyTemplateName() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateName_, "") };
    inline ListAlertNotifyTemplatesRequest& setAlertNotifyTemplateName(string alertNotifyTemplateName) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateName_, alertNotifyTemplateName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertNotifyTemplatesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertNotifyTemplatesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programLang Field Functions 
    bool hasProgramLang() const { return this->programLang_ != nullptr;};
    void deleteProgramLang() { this->programLang_ = nullptr;};
    inline string getProgramLang() const { DARABONBA_PTR_GET_DEFAULT(programLang_, "") };
    inline ListAlertNotifyTemplatesRequest& setProgramLang(string programLang) { DARABONBA_PTR_SET_VALUE(programLang_, programLang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertNotifyTemplatesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<vector<string>> alertNotifyTemplateIds_ {};
    shared_ptr<string> alertNotifyTemplateName_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> programLang_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
