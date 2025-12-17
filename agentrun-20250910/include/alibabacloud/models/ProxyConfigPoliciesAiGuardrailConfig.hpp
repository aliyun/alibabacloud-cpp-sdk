// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROXYCONFIGPOLICIESAIGUARDRAILCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PROXYCONFIGPOLICIESAIGUARDRAILCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ProxyConfigPoliciesAiGuardrailConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProxyConfigPoliciesAiGuardrailConfig& obj) { 
      DARABONBA_PTR_TO_JSON(blockOnContentModeration, blockOnContentModeration_);
      DARABONBA_PTR_TO_JSON(blockOnMaliciousUrl, blockOnMaliciousUrl_);
      DARABONBA_PTR_TO_JSON(blockOnModelHallucination, blockOnModelHallucination_);
      DARABONBA_PTR_TO_JSON(blockOnPromptAttack, blockOnPromptAttack_);
      DARABONBA_PTR_TO_JSON(blockOnSensitiveData, blockOnSensitiveData_);
      DARABONBA_PTR_TO_JSON(checkRequest, checkRequest_);
      DARABONBA_PTR_TO_JSON(checkResponse, checkResponse_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(maxTextLength, maxTextLength_);
    };
    friend void from_json(const Darabonba::Json& j, ProxyConfigPoliciesAiGuardrailConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(blockOnContentModeration, blockOnContentModeration_);
      DARABONBA_PTR_FROM_JSON(blockOnMaliciousUrl, blockOnMaliciousUrl_);
      DARABONBA_PTR_FROM_JSON(blockOnModelHallucination, blockOnModelHallucination_);
      DARABONBA_PTR_FROM_JSON(blockOnPromptAttack, blockOnPromptAttack_);
      DARABONBA_PTR_FROM_JSON(blockOnSensitiveData, blockOnSensitiveData_);
      DARABONBA_PTR_FROM_JSON(checkRequest, checkRequest_);
      DARABONBA_PTR_FROM_JSON(checkResponse, checkResponse_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(maxTextLength, maxTextLength_);
    };
    ProxyConfigPoliciesAiGuardrailConfig() = default ;
    ProxyConfigPoliciesAiGuardrailConfig(const ProxyConfigPoliciesAiGuardrailConfig &) = default ;
    ProxyConfigPoliciesAiGuardrailConfig(ProxyConfigPoliciesAiGuardrailConfig &&) = default ;
    ProxyConfigPoliciesAiGuardrailConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProxyConfigPoliciesAiGuardrailConfig() = default ;
    ProxyConfigPoliciesAiGuardrailConfig& operator=(const ProxyConfigPoliciesAiGuardrailConfig &) = default ;
    ProxyConfigPoliciesAiGuardrailConfig& operator=(ProxyConfigPoliciesAiGuardrailConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockOnContentModeration_ == nullptr
        && return this->blockOnMaliciousUrl_ == nullptr && return this->blockOnModelHallucination_ == nullptr && return this->blockOnPromptAttack_ == nullptr && return this->blockOnSensitiveData_ == nullptr && return this->checkRequest_ == nullptr
        && return this->checkResponse_ == nullptr && return this->level_ == nullptr && return this->maxTextLength_ == nullptr; };
    // blockOnContentModeration Field Functions 
    bool hasBlockOnContentModeration() const { return this->blockOnContentModeration_ != nullptr;};
    void deleteBlockOnContentModeration() { this->blockOnContentModeration_ = nullptr;};
    inline bool blockOnContentModeration() const { DARABONBA_PTR_GET_DEFAULT(blockOnContentModeration_, false) };
    inline ProxyConfigPoliciesAiGuardrailConfig& setBlockOnContentModeration(bool blockOnContentModeration) { DARABONBA_PTR_SET_VALUE(blockOnContentModeration_, blockOnContentModeration) };


    // blockOnMaliciousUrl Field Functions 
    bool hasBlockOnMaliciousUrl() const { return this->blockOnMaliciousUrl_ != nullptr;};
    void deleteBlockOnMaliciousUrl() { this->blockOnMaliciousUrl_ = nullptr;};
    inline bool blockOnMaliciousUrl() const { DARABONBA_PTR_GET_DEFAULT(blockOnMaliciousUrl_, false) };
    inline ProxyConfigPoliciesAiGuardrailConfig& setBlockOnMaliciousUrl(bool blockOnMaliciousUrl) { DARABONBA_PTR_SET_VALUE(blockOnMaliciousUrl_, blockOnMaliciousUrl) };


    // blockOnModelHallucination Field Functions 
    bool hasBlockOnModelHallucination() const { return this->blockOnModelHallucination_ != nullptr;};
    void deleteBlockOnModelHallucination() { this->blockOnModelHallucination_ = nullptr;};
    inline bool blockOnModelHallucination() const { DARABONBA_PTR_GET_DEFAULT(blockOnModelHallucination_, false) };
    inline ProxyConfigPoliciesAiGuardrailConfig& setBlockOnModelHallucination(bool blockOnModelHallucination) { DARABONBA_PTR_SET_VALUE(blockOnModelHallucination_, blockOnModelHallucination) };


    // blockOnPromptAttack Field Functions 
    bool hasBlockOnPromptAttack() const { return this->blockOnPromptAttack_ != nullptr;};
    void deleteBlockOnPromptAttack() { this->blockOnPromptAttack_ = nullptr;};
    inline bool blockOnPromptAttack() const { DARABONBA_PTR_GET_DEFAULT(blockOnPromptAttack_, false) };
    inline ProxyConfigPoliciesAiGuardrailConfig& setBlockOnPromptAttack(bool blockOnPromptAttack) { DARABONBA_PTR_SET_VALUE(blockOnPromptAttack_, blockOnPromptAttack) };


    // blockOnSensitiveData Field Functions 
    bool hasBlockOnSensitiveData() const { return this->blockOnSensitiveData_ != nullptr;};
    void deleteBlockOnSensitiveData() { this->blockOnSensitiveData_ = nullptr;};
    inline bool blockOnSensitiveData() const { DARABONBA_PTR_GET_DEFAULT(blockOnSensitiveData_, false) };
    inline ProxyConfigPoliciesAiGuardrailConfig& setBlockOnSensitiveData(bool blockOnSensitiveData) { DARABONBA_PTR_SET_VALUE(blockOnSensitiveData_, blockOnSensitiveData) };


    // checkRequest Field Functions 
    bool hasCheckRequest() const { return this->checkRequest_ != nullptr;};
    void deleteCheckRequest() { this->checkRequest_ = nullptr;};
    inline bool checkRequest() const { DARABONBA_PTR_GET_DEFAULT(checkRequest_, false) };
    inline ProxyConfigPoliciesAiGuardrailConfig& setCheckRequest(bool checkRequest) { DARABONBA_PTR_SET_VALUE(checkRequest_, checkRequest) };


    // checkResponse Field Functions 
    bool hasCheckResponse() const { return this->checkResponse_ != nullptr;};
    void deleteCheckResponse() { this->checkResponse_ = nullptr;};
    inline bool checkResponse() const { DARABONBA_PTR_GET_DEFAULT(checkResponse_, false) };
    inline ProxyConfigPoliciesAiGuardrailConfig& setCheckResponse(bool checkResponse) { DARABONBA_PTR_SET_VALUE(checkResponse_, checkResponse) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ProxyConfigPoliciesAiGuardrailConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maxTextLength Field Functions 
    bool hasMaxTextLength() const { return this->maxTextLength_ != nullptr;};
    void deleteMaxTextLength() { this->maxTextLength_ = nullptr;};
    inline int32_t maxTextLength() const { DARABONBA_PTR_GET_DEFAULT(maxTextLength_, 0) };
    inline ProxyConfigPoliciesAiGuardrailConfig& setMaxTextLength(int32_t maxTextLength) { DARABONBA_PTR_SET_VALUE(maxTextLength_, maxTextLength) };


  protected:
    std::shared_ptr<bool> blockOnContentModeration_ = nullptr;
    std::shared_ptr<bool> blockOnMaliciousUrl_ = nullptr;
    std::shared_ptr<bool> blockOnModelHallucination_ = nullptr;
    std::shared_ptr<bool> blockOnPromptAttack_ = nullptr;
    std::shared_ptr<bool> blockOnSensitiveData_ = nullptr;
    std::shared_ptr<bool> checkRequest_ = nullptr;
    std::shared_ptr<bool> checkResponse_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<int32_t> maxTextLength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
