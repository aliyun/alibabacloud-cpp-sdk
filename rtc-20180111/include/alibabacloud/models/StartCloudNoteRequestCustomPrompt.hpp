// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTCUSTOMPROMPT_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTCUSTOMPROMPT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartCloudNoteRequestCustomPromptCustomPromptContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestCustomPrompt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestCustomPrompt& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPromptContents, customPromptContents_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestCustomPrompt& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPromptContents, customPromptContents_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    StartCloudNoteRequestCustomPrompt() = default ;
    StartCloudNoteRequestCustomPrompt(const StartCloudNoteRequestCustomPrompt &) = default ;
    StartCloudNoteRequestCustomPrompt(StartCloudNoteRequestCustomPrompt &&) = default ;
    StartCloudNoteRequestCustomPrompt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestCustomPrompt() = default ;
    StartCloudNoteRequestCustomPrompt& operator=(const StartCloudNoteRequestCustomPrompt &) = default ;
    StartCloudNoteRequestCustomPrompt& operator=(StartCloudNoteRequestCustomPrompt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPromptContents_ == nullptr
        && return this->enabled_ == nullptr; };
    // customPromptContents Field Functions 
    bool hasCustomPromptContents() const { return this->customPromptContents_ != nullptr;};
    void deleteCustomPromptContents() { this->customPromptContents_ = nullptr;};
    inline const vector<Models::StartCloudNoteRequestCustomPromptCustomPromptContents> & customPromptContents() const { DARABONBA_PTR_GET_CONST(customPromptContents_, vector<Models::StartCloudNoteRequestCustomPromptCustomPromptContents>) };
    inline vector<Models::StartCloudNoteRequestCustomPromptCustomPromptContents> customPromptContents() { DARABONBA_PTR_GET(customPromptContents_, vector<Models::StartCloudNoteRequestCustomPromptCustomPromptContents>) };
    inline StartCloudNoteRequestCustomPrompt& setCustomPromptContents(const vector<Models::StartCloudNoteRequestCustomPromptCustomPromptContents> & customPromptContents) { DARABONBA_PTR_SET_VALUE(customPromptContents_, customPromptContents) };
    inline StartCloudNoteRequestCustomPrompt& setCustomPromptContents(vector<Models::StartCloudNoteRequestCustomPromptCustomPromptContents> && customPromptContents) { DARABONBA_PTR_SET_RVALUE(customPromptContents_, customPromptContents) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline StartCloudNoteRequestCustomPrompt& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::StartCloudNoteRequestCustomPromptCustomPromptContents>> customPromptContents_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
