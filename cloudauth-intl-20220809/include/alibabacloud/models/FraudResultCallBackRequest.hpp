// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FRAUDRESULTCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FRAUDRESULTCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FraudResultCallBackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FraudResultCallBackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(ExtParams, extParams_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(VerifyDeployEnv, verifyDeployEnv_);
    };
    friend void from_json(const Darabonba::Json& j, FraudResultCallBackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(ExtParams, extParams_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(VerifyDeployEnv, verifyDeployEnv_);
    };
    FraudResultCallBackRequest() = default ;
    FraudResultCallBackRequest(const FraudResultCallBackRequest &) = default ;
    FraudResultCallBackRequest(FraudResultCallBackRequest &&) = default ;
    FraudResultCallBackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FraudResultCallBackRequest() = default ;
    FraudResultCallBackRequest& operator=(const FraudResultCallBackRequest &) = default ;
    FraudResultCallBackRequest& operator=(FraudResultCallBackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyId_ == nullptr
        && return this->extParams_ == nullptr && return this->resultCode_ == nullptr && return this->verifyDeployEnv_ == nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline FraudResultCallBackRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // extParams Field Functions 
    bool hasExtParams() const { return this->extParams_ != nullptr;};
    void deleteExtParams() { this->extParams_ = nullptr;};
    inline string extParams() const { DARABONBA_PTR_GET_DEFAULT(extParams_, "") };
    inline FraudResultCallBackRequest& setExtParams(string extParams) { DARABONBA_PTR_SET_VALUE(extParams_, extParams) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline FraudResultCallBackRequest& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // verifyDeployEnv Field Functions 
    bool hasVerifyDeployEnv() const { return this->verifyDeployEnv_ != nullptr;};
    void deleteVerifyDeployEnv() { this->verifyDeployEnv_ = nullptr;};
    inline string verifyDeployEnv() const { DARABONBA_PTR_GET_DEFAULT(verifyDeployEnv_, "") };
    inline FraudResultCallBackRequest& setVerifyDeployEnv(string verifyDeployEnv) { DARABONBA_PTR_SET_VALUE(verifyDeployEnv_, verifyDeployEnv) };


  protected:
    // Unique identifier for real-person authentication, corresponding to Ant\\"s verifyId.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Extended parameters, in JSON string format.
    std::shared_ptr<string> extParams_ = nullptr;
    // Whether the anti-fraud check passed
    // - PASS (Passed)
    // - REJECT (Rejected)
    std::shared_ptr<string> resultCode_ = nullptr;
    // Environment routing parameter
    // - staging (Staging environment)
    // - production (Production environment)
    std::shared_ptr<string> verifyDeployEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
