// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWCHANGEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWCHANGEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RenewChangeInstanceRequestParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class RenewChangeInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewChangeInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RenewPeriod, renewPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, RenewChangeInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RenewPeriod, renewPeriod_);
    };
    RenewChangeInstanceRequest() = default ;
    RenewChangeInstanceRequest(const RenewChangeInstanceRequest &) = default ;
    RenewChangeInstanceRequest(RenewChangeInstanceRequest &&) = default ;
    RenewChangeInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewChangeInstanceRequest() = default ;
    RenewChangeInstanceRequest& operator=(const RenewChangeInstanceRequest &) = default ;
    RenewChangeInstanceRequest& operator=(RenewChangeInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->instanceId_ != nullptr && this->ownerId_ != nullptr && this->parameter_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr
        && this->renewPeriod_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RenewChangeInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewChangeInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RenewChangeInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const vector<RenewChangeInstanceRequestParameter> & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, vector<RenewChangeInstanceRequestParameter>) };
    inline vector<RenewChangeInstanceRequestParameter> parameter() { DARABONBA_PTR_GET(parameter_, vector<RenewChangeInstanceRequestParameter>) };
    inline RenewChangeInstanceRequest& setParameter(const vector<RenewChangeInstanceRequestParameter> & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline RenewChangeInstanceRequest& setParameter(vector<RenewChangeInstanceRequestParameter> && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline RenewChangeInstanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline RenewChangeInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // renewPeriod Field Functions 
    bool hasRenewPeriod() const { return this->renewPeriod_ != nullptr;};
    void deleteRenewPeriod() { this->renewPeriod_ = nullptr;};
    inline int64_t renewPeriod() const { DARABONBA_PTR_GET_DEFAULT(renewPeriod_, 0L) };
    inline RenewChangeInstanceRequest& setRenewPeriod(int64_t renewPeriod) { DARABONBA_PTR_SET_VALUE(renewPeriod_, renewPeriod) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<vector<RenewChangeInstanceRequestParameter>> parameter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> renewPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
