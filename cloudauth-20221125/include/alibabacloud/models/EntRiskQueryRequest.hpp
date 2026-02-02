// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTRISKQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTRISKQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20221125
{
namespace Models
{
  class EntRiskQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntRiskQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(UserAuthorization, userAuthorization_);
    };
    friend void from_json(const Darabonba::Json& j, EntRiskQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(UserAuthorization, userAuthorization_);
    };
    EntRiskQueryRequest() = default ;
    EntRiskQueryRequest(const EntRiskQueryRequest &) = default ;
    EntRiskQueryRequest(EntRiskQueryRequest &&) = default ;
    EntRiskQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntRiskQueryRequest() = default ;
    EntRiskQueryRequest& operator=(const EntRiskQueryRequest &) = default ;
    EntRiskQueryRequest& operator=(EntRiskQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->merchantBizId_ == nullptr
        && this->merchantUserId_ == nullptr && this->paramType_ == nullptr && this->paramValue_ == nullptr && this->sceneCode_ == nullptr && this->userAuthorization_ == nullptr; };
    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline EntRiskQueryRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline EntRiskQueryRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline EntRiskQueryRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline string getParamValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
    inline EntRiskQueryRequest& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline EntRiskQueryRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // userAuthorization Field Functions 
    bool hasUserAuthorization() const { return this->userAuthorization_ != nullptr;};
    void deleteUserAuthorization() { this->userAuthorization_ = nullptr;};
    inline string getUserAuthorization() const { DARABONBA_PTR_GET_DEFAULT(userAuthorization_, "") };
    inline EntRiskQueryRequest& setUserAuthorization(string userAuthorization) { DARABONBA_PTR_SET_VALUE(userAuthorization_, userAuthorization) };


  protected:
    // A unique business identifier defined by the merchant side, used for subsequent problem localization and troubleshooting. Supports a combination of 32 alphanumeric characters, please ensure uniqueness.
    shared_ptr<string> merchantBizId_ {};
    // A custom user ID in your business, used for subsequent problem localization and troubleshooting.
    shared_ptr<string> merchantUserId_ {};
    // Parameter type.
    // 00: Company name;
    // 01: Business registration number;
    // 02: Unified Social Credit Code;
    // 03: Organization code;
    shared_ptr<string> paramType_ {};
    // Enter one of the following based on the ParamType: company name, business registration number, unified social credit code, or organization code.
    shared_ptr<string> paramValue_ {};
    // Custom scene code, used to distinguish business scenarios, a 10-digit number.
    shared_ptr<string> sceneCode_ {};
    // Whether user authorization is obtained.
    // 1: Authorized
    // 0: Not authorized
    shared_ptr<string> userAuthorization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20221125
#endif
