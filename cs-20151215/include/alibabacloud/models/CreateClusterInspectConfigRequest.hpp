// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERINSPECTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERINSPECTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterInspectConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterInspectConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(disabledCheckItems, disabledCheckItems_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(recurrence, recurrence_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterInspectConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(disabledCheckItems, disabledCheckItems_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(recurrence, recurrence_);
    };
    CreateClusterInspectConfigRequest() = default ;
    CreateClusterInspectConfigRequest(const CreateClusterInspectConfigRequest &) = default ;
    CreateClusterInspectConfigRequest(CreateClusterInspectConfigRequest &&) = default ;
    CreateClusterInspectConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterInspectConfigRequest() = default ;
    CreateClusterInspectConfigRequest& operator=(const CreateClusterInspectConfigRequest &) = default ;
    CreateClusterInspectConfigRequest& operator=(CreateClusterInspectConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disabledCheckItems_ == nullptr
        && this->enabled_ == nullptr && this->recurrence_ == nullptr; };
    // disabledCheckItems Field Functions 
    bool hasDisabledCheckItems() const { return this->disabledCheckItems_ != nullptr;};
    void deleteDisabledCheckItems() { this->disabledCheckItems_ = nullptr;};
    inline const vector<string> & getDisabledCheckItems() const { DARABONBA_PTR_GET_CONST(disabledCheckItems_, vector<string>) };
    inline vector<string> getDisabledCheckItems() { DARABONBA_PTR_GET(disabledCheckItems_, vector<string>) };
    inline CreateClusterInspectConfigRequest& setDisabledCheckItems(const vector<string> & disabledCheckItems) { DARABONBA_PTR_SET_VALUE(disabledCheckItems_, disabledCheckItems) };
    inline CreateClusterInspectConfigRequest& setDisabledCheckItems(vector<string> && disabledCheckItems) { DARABONBA_PTR_SET_RVALUE(disabledCheckItems_, disabledCheckItems) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateClusterInspectConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string getRecurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline CreateClusterInspectConfigRequest& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


  protected:
    // The list of disabled inspection items.
    shared_ptr<vector<string>> disabledCheckItems_ {};
    // Specifies whether to enable cluster inspection.
    // 
    // This parameter is required.
    shared_ptr<bool> enabled_ {};
    // The inspection period defined using RFC5545 Recurrence Rule. You must specify BYHOUR and BYMINUTE. Only FREQ=DAILY is supported. COUNT or UNTIL is not supported.
    // 
    // This parameter is required.
    shared_ptr<string> recurrence_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
