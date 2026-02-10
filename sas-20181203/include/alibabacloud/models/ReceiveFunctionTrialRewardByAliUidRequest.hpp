// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECEIVEFUNCTIONTRIALREWARDBYALIUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECEIVEFUNCTIONTRIALREWARDBYALIUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ReceiveFunctionTrialRewardByAliUidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReceiveFunctionTrialRewardByAliUidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ReceiveFunctionTrialRewardByAliUidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ReceiveFunctionTrialRewardByAliUidRequest() = default ;
    ReceiveFunctionTrialRewardByAliUidRequest(const ReceiveFunctionTrialRewardByAliUidRequest &) = default ;
    ReceiveFunctionTrialRewardByAliUidRequest(ReceiveFunctionTrialRewardByAliUidRequest &&) = default ;
    ReceiveFunctionTrialRewardByAliUidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReceiveFunctionTrialRewardByAliUidRequest() = default ;
    ReceiveFunctionTrialRewardByAliUidRequest& operator=(const ReceiveFunctionTrialRewardByAliUidRequest &) = default ;
    ReceiveFunctionTrialRewardByAliUidRequest& operator=(ReceiveFunctionTrialRewardByAliUidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr
        && this->lang_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ReceiveFunctionTrialRewardByAliUidRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ReceiveFunctionTrialRewardByAliUidRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The name of the feature for which you want to apply for a free trial. Valid values:
    // 
    // *   **trail_honeypot_reward**: cloud honeypot
    // *   **trail_file_detect_api_reward**: SDK for malicious file detection
    shared_ptr<string> functionName_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
