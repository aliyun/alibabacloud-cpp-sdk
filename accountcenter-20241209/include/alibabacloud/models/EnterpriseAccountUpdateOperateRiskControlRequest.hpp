// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTUPDATEOPERATERISKCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTUPDATEOPERATERISKCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountUpdateOperateRiskControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountUpdateOperateRiskControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(ProductLevel, productLevel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ValidateType, validateType_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountUpdateOperateRiskControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(ProductLevel, productLevel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ValidateType, validateType_);
    };
    EnterpriseAccountUpdateOperateRiskControlRequest() = default ;
    EnterpriseAccountUpdateOperateRiskControlRequest(const EnterpriseAccountUpdateOperateRiskControlRequest &) = default ;
    EnterpriseAccountUpdateOperateRiskControlRequest(EnterpriseAccountUpdateOperateRiskControlRequest &&) = default ;
    EnterpriseAccountUpdateOperateRiskControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountUpdateOperateRiskControlRequest() = default ;
    EnterpriseAccountUpdateOperateRiskControlRequest& operator=(const EnterpriseAccountUpdateOperateRiskControlRequest &) = default ;
    EnterpriseAccountUpdateOperateRiskControlRequest& operator=(EnterpriseAccountUpdateOperateRiskControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->pk_ == nullptr && this->productLevel_ == nullptr
        && this->requestId_ == nullptr && this->validateType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseAccountUpdateOperateRiskControlRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseAccountUpdateOperateRiskControlRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseAccountUpdateOperateRiskControlRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseAccountUpdateOperateRiskControlRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline EnterpriseAccountUpdateOperateRiskControlRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // productLevel Field Functions 
    bool hasProductLevel() const { return this->productLevel_ != nullptr;};
    void deleteProductLevel() { this->productLevel_ = nullptr;};
    inline string getProductLevel() const { DARABONBA_PTR_GET_DEFAULT(productLevel_, "") };
    inline EnterpriseAccountUpdateOperateRiskControlRequest& setProductLevel(string productLevel) { DARABONBA_PTR_SET_VALUE(productLevel_, productLevel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseAccountUpdateOperateRiskControlRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // validateType Field Functions 
    bool hasValidateType() const { return this->validateType_ != nullptr;};
    void deleteValidateType() { this->validateType_ = nullptr;};
    inline string getValidateType() const { DARABONBA_PTR_GET_DEFAULT(validateType_, "") };
    inline EnterpriseAccountUpdateOperateRiskControlRequest& setValidateType(string validateType) { DARABONBA_PTR_SET_VALUE(validateType_, validateType) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> productLevel_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> validateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
