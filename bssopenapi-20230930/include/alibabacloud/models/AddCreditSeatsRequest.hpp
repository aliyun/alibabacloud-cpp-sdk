// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCREDITSEATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCREDITSEATSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class AddCreditSeatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCreditSeatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Seats, seats_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, AddCreditSeatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Seats, seats_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    AddCreditSeatsRequest() = default ;
    AddCreditSeatsRequest(const AddCreditSeatsRequest &) = default ;
    AddCreditSeatsRequest(AddCreditSeatsRequest &&) = default ;
    AddCreditSeatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCreditSeatsRequest() = default ;
    AddCreditSeatsRequest& operator=(const AddCreditSeatsRequest &) = default ;
    AddCreditSeatsRequest& operator=(AddCreditSeatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
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
      inline Configs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Configs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->configs_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr && this->seats_ == nullptr && this->subscriptionType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddCreditSeatsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<AddCreditSeatsRequest::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<AddCreditSeatsRequest::Configs>) };
    inline vector<AddCreditSeatsRequest::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<AddCreditSeatsRequest::Configs>) };
    inline AddCreditSeatsRequest& setConfigs(const vector<AddCreditSeatsRequest::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline AddCreditSeatsRequest& setConfigs(vector<AddCreditSeatsRequest::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline AddCreditSeatsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline AddCreditSeatsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // seats Field Functions 
    bool hasSeats() const { return this->seats_ != nullptr;};
    void deleteSeats() { this->seats_ = nullptr;};
    inline int64_t getSeats() const { DARABONBA_PTR_GET_DEFAULT(seats_, 0L) };
    inline AddCreditSeatsRequest& setSeats(int64_t seats) { DARABONBA_PTR_SET_VALUE(seats_, seats) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline AddCreditSeatsRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<AddCreditSeatsRequest::Configs>> configs_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> productType_ {};
    // This parameter is required.
    shared_ptr<int64_t> seats_ {};
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
