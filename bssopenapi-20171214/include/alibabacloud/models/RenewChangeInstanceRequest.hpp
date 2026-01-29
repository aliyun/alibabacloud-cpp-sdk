// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWCHANGEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWCHANGEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Parameter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Parameter() = default ;
      Parameter(const Parameter &) = default ;
      Parameter(Parameter &&) = default ;
      Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameter() = default ;
      Parameter& operator=(const Parameter &) = default ;
      Parameter& operator=(Parameter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Parameter& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Parameter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // This parameter is required.
      shared_ptr<string> code_ {};
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceId_ == nullptr && this->ownerId_ == nullptr && this->parameter_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr
        && this->renewPeriod_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RenewChangeInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewChangeInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RenewChangeInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const vector<RenewChangeInstanceRequest::Parameter> & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, vector<RenewChangeInstanceRequest::Parameter>) };
    inline vector<RenewChangeInstanceRequest::Parameter> getParameter() { DARABONBA_PTR_GET(parameter_, vector<RenewChangeInstanceRequest::Parameter>) };
    inline RenewChangeInstanceRequest& setParameter(const vector<RenewChangeInstanceRequest::Parameter> & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline RenewChangeInstanceRequest& setParameter(vector<RenewChangeInstanceRequest::Parameter> && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline RenewChangeInstanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline RenewChangeInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // renewPeriod Field Functions 
    bool hasRenewPeriod() const { return this->renewPeriod_ != nullptr;};
    void deleteRenewPeriod() { this->renewPeriod_ = nullptr;};
    inline int64_t getRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(renewPeriod_, 0L) };
    inline RenewChangeInstanceRequest& setRenewPeriod(int64_t renewPeriod) { DARABONBA_PTR_SET_VALUE(renewPeriod_, renewPeriod) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<vector<RenewChangeInstanceRequest::Parameter>> parameter_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    shared_ptr<string> productType_ {};
    // This parameter is required.
    shared_ptr<int64_t> renewPeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
