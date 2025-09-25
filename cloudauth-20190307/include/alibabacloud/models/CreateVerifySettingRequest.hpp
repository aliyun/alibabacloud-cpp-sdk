// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVERIFYSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVERIFYSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateVerifySettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVerifySettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(GuideStep, guideStep_);
      DARABONBA_PTR_TO_JSON(PrivacyStep, privacyStep_);
      DARABONBA_PTR_TO_JSON(ResultStep, resultStep_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVerifySettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(GuideStep, guideStep_);
      DARABONBA_PTR_FROM_JSON(PrivacyStep, privacyStep_);
      DARABONBA_PTR_FROM_JSON(ResultStep, resultStep_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
    };
    CreateVerifySettingRequest() = default ;
    CreateVerifySettingRequest(const CreateVerifySettingRequest &) = default ;
    CreateVerifySettingRequest(CreateVerifySettingRequest &&) = default ;
    CreateVerifySettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVerifySettingRequest() = default ;
    CreateVerifySettingRequest& operator=(const CreateVerifySettingRequest &) = default ;
    CreateVerifySettingRequest& operator=(CreateVerifySettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizName_ != nullptr
        && this->bizType_ != nullptr && this->guideStep_ != nullptr && this->privacyStep_ != nullptr && this->resultStep_ != nullptr && this->solution_ != nullptr; };
    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline CreateVerifySettingRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateVerifySettingRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // guideStep Field Functions 
    bool hasGuideStep() const { return this->guideStep_ != nullptr;};
    void deleteGuideStep() { this->guideStep_ = nullptr;};
    inline bool guideStep() const { DARABONBA_PTR_GET_DEFAULT(guideStep_, false) };
    inline CreateVerifySettingRequest& setGuideStep(bool guideStep) { DARABONBA_PTR_SET_VALUE(guideStep_, guideStep) };


    // privacyStep Field Functions 
    bool hasPrivacyStep() const { return this->privacyStep_ != nullptr;};
    void deletePrivacyStep() { this->privacyStep_ = nullptr;};
    inline bool privacyStep() const { DARABONBA_PTR_GET_DEFAULT(privacyStep_, false) };
    inline CreateVerifySettingRequest& setPrivacyStep(bool privacyStep) { DARABONBA_PTR_SET_VALUE(privacyStep_, privacyStep) };


    // resultStep Field Functions 
    bool hasResultStep() const { return this->resultStep_ != nullptr;};
    void deleteResultStep() { this->resultStep_ = nullptr;};
    inline bool resultStep() const { DARABONBA_PTR_GET_DEFAULT(resultStep_, false) };
    inline CreateVerifySettingRequest& setResultStep(bool resultStep) { DARABONBA_PTR_SET_VALUE(resultStep_, resultStep) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline CreateVerifySettingRequest& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


  protected:
    // Verification scenario name, supporting Chinese, English, numbers, and hyphens (-), with a maximum of 20 characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizName_ = nullptr;
    // Verification scenario identifier, supporting English letters, numbers, and hyphens (-), with a maximum of 20 characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // Whether to use the system\\"s default guide page.
    std::shared_ptr<bool> guideStep_ = nullptr;
    // Whether to use the system\\"s default authorization page.
    std::shared_ptr<bool> privacyStep_ = nullptr;
    // Whether to use the system\\"s default result page.
    std::shared_ptr<bool> resultStep_ = nullptr;
    // The name of the authentication solution to use, such as **RPBasic**, **RPBioOnly**, etc. For all supported authentication solutions, see [Authentication Solutions](https://help.aliyun.com/document_detail/127521.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> solution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
