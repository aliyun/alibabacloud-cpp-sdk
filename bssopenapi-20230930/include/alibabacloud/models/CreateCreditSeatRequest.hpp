// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDITSEATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDITSEATREQUEST_HPP_
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
  class CreateCreditSeatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCreditSeatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SubscriptionConfigs, subscriptionConfigs_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCreditSeatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionConfigs, subscriptionConfigs_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    CreateCreditSeatRequest() = default ;
    CreateCreditSeatRequest(const CreateCreditSeatRequest &) = default ;
    CreateCreditSeatRequest(CreateCreditSeatRequest &&) = default ;
    CreateCreditSeatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCreditSeatRequest() = default ;
    CreateCreditSeatRequest& operator=(const CreateCreditSeatRequest &) = default ;
    CreateCreditSeatRequest& operator=(CreateCreditSeatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubscriptionConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Configs, configs_);
        DARABONBA_PTR_TO_JSON(Seats, seats_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Configs, configs_);
        DARABONBA_PTR_FROM_JSON(Seats, seats_);
      };
      SubscriptionConfigs() = default ;
      SubscriptionConfigs(const SubscriptionConfigs &) = default ;
      SubscriptionConfigs(SubscriptionConfigs &&) = default ;
      SubscriptionConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionConfigs() = default ;
      SubscriptionConfigs& operator=(const SubscriptionConfigs &) = default ;
      SubscriptionConfigs& operator=(SubscriptionConfigs &&) = default ;
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

      virtual bool empty() const override { return this->configs_ == nullptr
        && this->seats_ == nullptr; };
      // configs Field Functions 
      bool hasConfigs() const { return this->configs_ != nullptr;};
      void deleteConfigs() { this->configs_ = nullptr;};
      inline const vector<SubscriptionConfigs::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<SubscriptionConfigs::Configs>) };
      inline vector<SubscriptionConfigs::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<SubscriptionConfigs::Configs>) };
      inline SubscriptionConfigs& setConfigs(const vector<SubscriptionConfigs::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
      inline SubscriptionConfigs& setConfigs(vector<SubscriptionConfigs::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


      // seats Field Functions 
      bool hasSeats() const { return this->seats_ != nullptr;};
      void deleteSeats() { this->seats_ = nullptr;};
      inline int64_t getSeats() const { DARABONBA_PTR_GET_DEFAULT(seats_, 0L) };
      inline SubscriptionConfigs& setSeats(int64_t seats) { DARABONBA_PTR_SET_VALUE(seats_, seats) };


    protected:
      shared_ptr<vector<SubscriptionConfigs::Configs>> configs_ {};
      // This parameter is required.
      shared_ptr<int64_t> seats_ {};
    };

    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->clientToken_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr
        && this->subscriptionConfigs_ == nullptr && this->subscriptionType_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateCreditSeatRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCreditSeatRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateCreditSeatRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateCreditSeatRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateCreditSeatRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateCreditSeatRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionConfigs Field Functions 
    bool hasSubscriptionConfigs() const { return this->subscriptionConfigs_ != nullptr;};
    void deleteSubscriptionConfigs() { this->subscriptionConfigs_ = nullptr;};
    inline const vector<CreateCreditSeatRequest::SubscriptionConfigs> & getSubscriptionConfigs() const { DARABONBA_PTR_GET_CONST(subscriptionConfigs_, vector<CreateCreditSeatRequest::SubscriptionConfigs>) };
    inline vector<CreateCreditSeatRequest::SubscriptionConfigs> getSubscriptionConfigs() { DARABONBA_PTR_GET(subscriptionConfigs_, vector<CreateCreditSeatRequest::SubscriptionConfigs>) };
    inline CreateCreditSeatRequest& setSubscriptionConfigs(const vector<CreateCreditSeatRequest::SubscriptionConfigs> & subscriptionConfigs) { DARABONBA_PTR_SET_VALUE(subscriptionConfigs_, subscriptionConfigs) };
    inline CreateCreditSeatRequest& setSubscriptionConfigs(vector<CreateCreditSeatRequest::SubscriptionConfigs> && subscriptionConfigs) { DARABONBA_PTR_SET_RVALUE(subscriptionConfigs_, subscriptionConfigs) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline CreateCreditSeatRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> periodUnit_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> productType_ {};
    shared_ptr<vector<CreateCreditSeatRequest::SubscriptionConfigs>> subscriptionConfigs_ {};
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
