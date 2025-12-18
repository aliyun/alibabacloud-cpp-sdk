// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHCONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULTOPERATERULEITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHCONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULTOPERATERULEITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList(const AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList &) = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList(AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList &&) = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList& operator=(const AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList &) = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList& operator=(AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->errorCode_ == nullptr && return this->success_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The rule ID.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The error code returned.
    // 
    // *   This parameter is empty if the rule is added to the compliance package.
    // *   An error code is returned if the rule fails to be added to the compliance package. For more information about error codes, see [Error codes](https://error-center.alibabacloud.com/status/product/Config).
    std::shared_ptr<string> errorCode_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
