// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYAPPLICATIONPROMPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYAPPLICATIONPROMPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ApplyApplicationPromptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyApplicationPromptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(DisabledPromptIds, disabledPromptIds_);
      DARABONBA_PTR_TO_JSON(EnabledPromptIds, enabledPromptIds_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyApplicationPromptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(DisabledPromptIds, disabledPromptIds_);
      DARABONBA_PTR_FROM_JSON(EnabledPromptIds, enabledPromptIds_);
    };
    ApplyApplicationPromptsRequest() = default ;
    ApplyApplicationPromptsRequest(const ApplyApplicationPromptsRequest &) = default ;
    ApplyApplicationPromptsRequest(ApplyApplicationPromptsRequest &&) = default ;
    ApplyApplicationPromptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyApplicationPromptsRequest() = default ;
    ApplyApplicationPromptsRequest& operator=(const ApplyApplicationPromptsRequest &) = default ;
    ApplyApplicationPromptsRequest& operator=(ApplyApplicationPromptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->disabledPromptIds_ == nullptr && this->enabledPromptIds_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ApplyApplicationPromptsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // disabledPromptIds Field Functions 
    bool hasDisabledPromptIds() const { return this->disabledPromptIds_ != nullptr;};
    void deleteDisabledPromptIds() { this->disabledPromptIds_ = nullptr;};
    inline const vector<string> & getDisabledPromptIds() const { DARABONBA_PTR_GET_CONST(disabledPromptIds_, vector<string>) };
    inline vector<string> getDisabledPromptIds() { DARABONBA_PTR_GET(disabledPromptIds_, vector<string>) };
    inline ApplyApplicationPromptsRequest& setDisabledPromptIds(const vector<string> & disabledPromptIds) { DARABONBA_PTR_SET_VALUE(disabledPromptIds_, disabledPromptIds) };
    inline ApplyApplicationPromptsRequest& setDisabledPromptIds(vector<string> && disabledPromptIds) { DARABONBA_PTR_SET_RVALUE(disabledPromptIds_, disabledPromptIds) };


    // enabledPromptIds Field Functions 
    bool hasEnabledPromptIds() const { return this->enabledPromptIds_ != nullptr;};
    void deleteEnabledPromptIds() { this->enabledPromptIds_ = nullptr;};
    inline const vector<string> & getEnabledPromptIds() const { DARABONBA_PTR_GET_CONST(enabledPromptIds_, vector<string>) };
    inline vector<string> getEnabledPromptIds() { DARABONBA_PTR_GET(enabledPromptIds_, vector<string>) };
    inline ApplyApplicationPromptsRequest& setEnabledPromptIds(const vector<string> & enabledPromptIds) { DARABONBA_PTR_SET_VALUE(enabledPromptIds_, enabledPromptIds) };
    inline ApplyApplicationPromptsRequest& setEnabledPromptIds(vector<string> && enabledPromptIds) { DARABONBA_PTR_SET_RVALUE(enabledPromptIds_, enabledPromptIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<vector<string>> disabledPromptIds_ {};
    shared_ptr<vector<string>> enabledPromptIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
