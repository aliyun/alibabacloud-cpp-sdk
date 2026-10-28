// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFYTEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFYTEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertNotifyTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotifyTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateIds, alertNotifyTemplateIdsShrink_);
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(programLang, programLang_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotifyTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateIds, alertNotifyTemplateIdsShrink_);
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(programLang, programLang_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAlertNotifyTemplatesShrinkRequest() = default ;
    ListAlertNotifyTemplatesShrinkRequest(const ListAlertNotifyTemplatesShrinkRequest &) = default ;
    ListAlertNotifyTemplatesShrinkRequest(ListAlertNotifyTemplatesShrinkRequest &&) = default ;
    ListAlertNotifyTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotifyTemplatesShrinkRequest() = default ;
    ListAlertNotifyTemplatesShrinkRequest& operator=(const ListAlertNotifyTemplatesShrinkRequest &) = default ;
    ListAlertNotifyTemplatesShrinkRequest& operator=(ListAlertNotifyTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertNotifyTemplateIdsShrink_ == nullptr
        && this->alertNotifyTemplateName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->programLang_ == nullptr && this->type_ == nullptr; };
    // alertNotifyTemplateIdsShrink Field Functions 
    bool hasAlertNotifyTemplateIdsShrink() const { return this->alertNotifyTemplateIdsShrink_ != nullptr;};
    void deleteAlertNotifyTemplateIdsShrink() { this->alertNotifyTemplateIdsShrink_ = nullptr;};
    inline string getAlertNotifyTemplateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateIdsShrink_, "") };
    inline ListAlertNotifyTemplatesShrinkRequest& setAlertNotifyTemplateIdsShrink(string alertNotifyTemplateIdsShrink) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateIdsShrink_, alertNotifyTemplateIdsShrink) };


    // alertNotifyTemplateName Field Functions 
    bool hasAlertNotifyTemplateName() const { return this->alertNotifyTemplateName_ != nullptr;};
    void deleteAlertNotifyTemplateName() { this->alertNotifyTemplateName_ = nullptr;};
    inline string getAlertNotifyTemplateName() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateName_, "") };
    inline ListAlertNotifyTemplatesShrinkRequest& setAlertNotifyTemplateName(string alertNotifyTemplateName) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateName_, alertNotifyTemplateName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertNotifyTemplatesShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertNotifyTemplatesShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programLang Field Functions 
    bool hasProgramLang() const { return this->programLang_ != nullptr;};
    void deleteProgramLang() { this->programLang_ = nullptr;};
    inline string getProgramLang() const { DARABONBA_PTR_GET_DEFAULT(programLang_, "") };
    inline ListAlertNotifyTemplatesShrinkRequest& setProgramLang(string programLang) { DARABONBA_PTR_SET_VALUE(programLang_, programLang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertNotifyTemplatesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> alertNotifyTemplateIdsShrink_ {};
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
