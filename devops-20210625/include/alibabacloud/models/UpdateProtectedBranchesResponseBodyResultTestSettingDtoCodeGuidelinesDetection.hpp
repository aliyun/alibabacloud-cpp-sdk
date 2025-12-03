// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESRESPONSEBODYRESULTTESTSETTINGDTOCODEGUIDELINESDETECTION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESRESPONSEBODYRESULTTESTSETTINGDTOCODEGUIDELINESDETECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection() = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection(const UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection &) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection(UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection &&) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection() = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection& operator=(const UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection &) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection& operator=(UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->message_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
