// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSISITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSISITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDiagnosisItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosisItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(level, level_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosisItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(level, level_);
    };
    ListDiagnosisItemsRequest() = default ;
    ListDiagnosisItemsRequest(const ListDiagnosisItemsRequest &) = default ;
    ListDiagnosisItemsRequest(ListDiagnosisItemsRequest &&) = default ;
    ListDiagnosisItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosisItemsRequest() = default ;
    ListDiagnosisItemsRequest& operator=(const ListDiagnosisItemsRequest &) = default ;
    ListDiagnosisItemsRequest& operator=(ListDiagnosisItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->level_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDiagnosisItemsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDiagnosisItemsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListDiagnosisItemsRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The supported request language. Default value: the browser request language. Valid values:
    // 
    // - en: English
    // - zh: Simplified Chinese
    // - zt: Traditional Chinese
    // - es: Spanish
    // - fr: French
    shared_ptr<string> lang_ {};
    // The diagnostic item level. Valid values:
    // 
    // - BASIC: basic inspection item (free).
    // - ADVANCED: advanced inspection item (consumes billable tokens).
    // 
    // If this parameter is not specified, diagnostic items of all levels are returned.
    shared_ptr<string> level_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
