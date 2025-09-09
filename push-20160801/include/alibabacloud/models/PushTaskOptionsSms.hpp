// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKOPTIONSSMS_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKOPTIONSSMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskOptionsSms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskOptionsSms& obj) { 
      DARABONBA_PTR_TO_JSON(DelaySecs, delaySecs_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(SendPolicy, sendPolicy_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskOptionsSms& obj) { 
      DARABONBA_PTR_FROM_JSON(DelaySecs, delaySecs_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(SendPolicy, sendPolicy_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    PushTaskOptionsSms() = default ;
    PushTaskOptionsSms(const PushTaskOptionsSms &) = default ;
    PushTaskOptionsSms(PushTaskOptionsSms &&) = default ;
    PushTaskOptionsSms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskOptionsSms() = default ;
    PushTaskOptionsSms& operator=(const PushTaskOptionsSms &) = default ;
    PushTaskOptionsSms& operator=(PushTaskOptionsSms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delaySecs_ != nullptr
        && this->params_ != nullptr && this->sendPolicy_ != nullptr && this->signName_ != nullptr && this->templateName_ != nullptr; };
    // delaySecs Field Functions 
    bool hasDelaySecs() const { return this->delaySecs_ != nullptr;};
    void deleteDelaySecs() { this->delaySecs_ = nullptr;};
    inline int64_t delaySecs() const { DARABONBA_PTR_GET_DEFAULT(delaySecs_, 0L) };
    inline PushTaskOptionsSms& setDelaySecs(int64_t delaySecs) { DARABONBA_PTR_SET_VALUE(delaySecs_, delaySecs) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline PushTaskOptionsSms& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // sendPolicy Field Functions 
    bool hasSendPolicy() const { return this->sendPolicy_ != nullptr;};
    void deleteSendPolicy() { this->sendPolicy_ = nullptr;};
    inline string sendPolicy() const { DARABONBA_PTR_GET_DEFAULT(sendPolicy_, "") };
    inline PushTaskOptionsSms& setSendPolicy(string sendPolicy) { DARABONBA_PTR_SET_VALUE(sendPolicy_, sendPolicy) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline PushTaskOptionsSms& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline PushTaskOptionsSms& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<int64_t> delaySecs_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> sendPolicy_ = nullptr;
    std::shared_ptr<string> signName_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
