// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESRESPONSEBODYRESULTTESTSETTINGDTOSENSITIVEINFODETECTION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESRESPONSEBODYRESULTTESTSETTINGDTOSENSITIVEINFODETECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection() = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection(const UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection &) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection(UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection &&) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection() = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection& operator=(const UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection &) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection& operator=(UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection &&) = default ;
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
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
