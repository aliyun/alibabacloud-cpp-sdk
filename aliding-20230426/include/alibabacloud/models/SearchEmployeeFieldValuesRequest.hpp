// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEMPLOYEEFIELDVALUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEMPLOYEEFIELDVALUESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchEmployeeFieldValuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEmployeeFieldValuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ModifiedFromTimeGMT, modifiedFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(ModifiedToTimeGMT, modifiedToTimeGMT_);
      DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_TO_JSON(SearchFieldJson, searchFieldJson_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(TargetFieldJson, targetFieldJson_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEmployeeFieldValuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ModifiedFromTimeGMT, modifiedFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(ModifiedToTimeGMT, modifiedToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_FROM_JSON(SearchFieldJson, searchFieldJson_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(TargetFieldJson, targetFieldJson_);
    };
    SearchEmployeeFieldValuesRequest() = default ;
    SearchEmployeeFieldValuesRequest(const SearchEmployeeFieldValuesRequest &) = default ;
    SearchEmployeeFieldValuesRequest(SearchEmployeeFieldValuesRequest &&) = default ;
    SearchEmployeeFieldValuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEmployeeFieldValuesRequest() = default ;
    SearchEmployeeFieldValuesRequest& operator=(const SearchEmployeeFieldValuesRequest &) = default ;
    SearchEmployeeFieldValuesRequest& operator=(SearchEmployeeFieldValuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->createFromTimeGMT_ == nullptr && this->createToTimeGMT_ == nullptr && this->formUuid_ == nullptr && this->language_ == nullptr && this->modifiedFromTimeGMT_ == nullptr
        && this->modifiedToTimeGMT_ == nullptr && this->originatorId_ == nullptr && this->searchFieldJson_ == nullptr && this->systemToken_ == nullptr && this->targetFieldJson_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SearchEmployeeFieldValuesRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createFromTimeGMT Field Functions 
    bool hasCreateFromTimeGMT() const { return this->createFromTimeGMT_ != nullptr;};
    void deleteCreateFromTimeGMT() { this->createFromTimeGMT_ = nullptr;};
    inline string getCreateFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createFromTimeGMT_, "") };
    inline SearchEmployeeFieldValuesRequest& setCreateFromTimeGMT(string createFromTimeGMT) { DARABONBA_PTR_SET_VALUE(createFromTimeGMT_, createFromTimeGMT) };


    // createToTimeGMT Field Functions 
    bool hasCreateToTimeGMT() const { return this->createToTimeGMT_ != nullptr;};
    void deleteCreateToTimeGMT() { this->createToTimeGMT_ = nullptr;};
    inline string getCreateToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createToTimeGMT_, "") };
    inline SearchEmployeeFieldValuesRequest& setCreateToTimeGMT(string createToTimeGMT) { DARABONBA_PTR_SET_VALUE(createToTimeGMT_, createToTimeGMT) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline SearchEmployeeFieldValuesRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SearchEmployeeFieldValuesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modifiedFromTimeGMT Field Functions 
    bool hasModifiedFromTimeGMT() const { return this->modifiedFromTimeGMT_ != nullptr;};
    void deleteModifiedFromTimeGMT() { this->modifiedFromTimeGMT_ = nullptr;};
    inline string getModifiedFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedFromTimeGMT_, "") };
    inline SearchEmployeeFieldValuesRequest& setModifiedFromTimeGMT(string modifiedFromTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedFromTimeGMT_, modifiedFromTimeGMT) };


    // modifiedToTimeGMT Field Functions 
    bool hasModifiedToTimeGMT() const { return this->modifiedToTimeGMT_ != nullptr;};
    void deleteModifiedToTimeGMT() { this->modifiedToTimeGMT_ = nullptr;};
    inline string getModifiedToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedToTimeGMT_, "") };
    inline SearchEmployeeFieldValuesRequest& setModifiedToTimeGMT(string modifiedToTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedToTimeGMT_, modifiedToTimeGMT) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string getOriginatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline SearchEmployeeFieldValuesRequest& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // searchFieldJson Field Functions 
    bool hasSearchFieldJson() const { return this->searchFieldJson_ != nullptr;};
    void deleteSearchFieldJson() { this->searchFieldJson_ = nullptr;};
    inline string getSearchFieldJson() const { DARABONBA_PTR_GET_DEFAULT(searchFieldJson_, "") };
    inline SearchEmployeeFieldValuesRequest& setSearchFieldJson(string searchFieldJson) { DARABONBA_PTR_SET_VALUE(searchFieldJson_, searchFieldJson) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline SearchEmployeeFieldValuesRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // targetFieldJson Field Functions 
    bool hasTargetFieldJson() const { return this->targetFieldJson_ != nullptr;};
    void deleteTargetFieldJson() { this->targetFieldJson_ = nullptr;};
    inline string getTargetFieldJson() const { DARABONBA_PTR_GET_DEFAULT(targetFieldJson_, "") };
    inline SearchEmployeeFieldValuesRequest& setTargetFieldJson(string targetFieldJson) { DARABONBA_PTR_SET_VALUE(targetFieldJson_, targetFieldJson) };


  protected:
    shared_ptr<string> appType_ {};
    shared_ptr<string> createFromTimeGMT_ {};
    shared_ptr<string> createToTimeGMT_ {};
    shared_ptr<string> formUuid_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> modifiedFromTimeGMT_ {};
    shared_ptr<string> modifiedToTimeGMT_ {};
    shared_ptr<string> originatorId_ {};
    shared_ptr<string> searchFieldJson_ {};
    shared_ptr<string> systemToken_ {};
    shared_ptr<string> targetFieldJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
