// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYENABLESTATUSRESPONSEBODYSTATUSMODELS_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYENABLESTATUSRESPONSEBODYSTATUSMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetPolicyEnableStatusResponseBodyStatusModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyEnableStatusResponseBodyStatusModels& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyEnableStatusResponseBodyStatusModels& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    GetPolicyEnableStatusResponseBodyStatusModels() = default ;
    GetPolicyEnableStatusResponseBodyStatusModels(const GetPolicyEnableStatusResponseBodyStatusModels &) = default ;
    GetPolicyEnableStatusResponseBodyStatusModels(GetPolicyEnableStatusResponseBodyStatusModels &&) = default ;
    GetPolicyEnableStatusResponseBodyStatusModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyEnableStatusResponseBodyStatusModels() = default ;
    GetPolicyEnableStatusResponseBodyStatusModels& operator=(const GetPolicyEnableStatusResponseBodyStatusModels &) = default ;
    GetPolicyEnableStatusResponseBodyStatusModels& operator=(GetPolicyEnableStatusResponseBodyStatusModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->userType_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPolicyEnableStatusResponseBodyStatusModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline GetPolicyEnableStatusResponseBodyStatusModels& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The status of the Tag Policy feature. Valid values:
    // 
    // *   PendingEnable: The feature is being enabled.
    // *   Enabled: The feature is enabled.
    // *   Closing: The feature is being disabled.
    // *   Disabled: The feature is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The mode of the Tag Policy feature. Valid values:
    // 
    // *   USER: single-account mode
    // *   RD: multi-account mode
    // 
    // For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
