// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHINGSETTING_HPP_
#define ALIBABACLOUD_MODELS_PUSHINGSETTING_HPP_
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
  class PushingSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushingSetting& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_TO_JSON(restoreActionIds, restoreActionIds_);
      DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
    };
    friend void from_json(const Darabonba::Json& j, PushingSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_FROM_JSON(restoreActionIds, restoreActionIds_);
      DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
    };
    PushingSetting() = default ;
    PushingSetting(const PushingSetting &) = default ;
    PushingSetting(PushingSetting &&) = default ;
    PushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushingSetting() = default ;
    PushingSetting& operator=(const PushingSetting &) = default ;
    PushingSetting& operator=(PushingSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertActionIds_ == nullptr
        && this->restoreActionIds_ == nullptr && this->templateUuid_ == nullptr; };
    // alertActionIds Field Functions 
    bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
    void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
    inline const vector<string> & getAlertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
    inline vector<string> getAlertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
    inline PushingSetting& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
    inline PushingSetting& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


    // restoreActionIds Field Functions 
    bool hasRestoreActionIds() const { return this->restoreActionIds_ != nullptr;};
    void deleteRestoreActionIds() { this->restoreActionIds_ = nullptr;};
    inline const vector<string> & getRestoreActionIds() const { DARABONBA_PTR_GET_CONST(restoreActionIds_, vector<string>) };
    inline vector<string> getRestoreActionIds() { DARABONBA_PTR_GET(restoreActionIds_, vector<string>) };
    inline PushingSetting& setRestoreActionIds(const vector<string> & restoreActionIds) { DARABONBA_PTR_SET_VALUE(restoreActionIds_, restoreActionIds) };
    inline PushingSetting& setRestoreActionIds(vector<string> && restoreActionIds) { DARABONBA_PTR_SET_RVALUE(restoreActionIds_, restoreActionIds) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline PushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


  protected:
    shared_ptr<vector<string>> alertActionIds_ {};
    shared_ptr<vector<string>> restoreActionIds_ {};
    shared_ptr<string> templateUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
